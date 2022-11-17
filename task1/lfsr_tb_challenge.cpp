#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr4_challenge.h"

#include "vbuddy.cpp" // include vbuddy code
#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env)
{
  int simcyc; // simulation clock count
  int tick;   // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vlfsr4_challenge *top = new Vlfsr4_challenge;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("lfsr4_challenge.vcd"); // needs to be updated to current .vcd file

  // init Vbuddy
  if (vbdOpen() != 1)
    return (-1);
  vbdHeader("");

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  top->en = 0;
  vbdSetMode(1);

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {

    // dump variables into VCD file and toggle clock
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk = !top->clk;
      top->eval();
    }
    top->rst = 0;  // needs to wait 2 cycles before resetting
    top->en = vbdFlag(); // enables control from flag
    vbdCycle(simcyc);

    vbdHex(2, (top->data_out >> 4) & 0xF); 
    vbdHex(1, top->data_out & 0xF);
    vbdBar(top->data_out & 0xFF); // output in hex


    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
      exit(0); // ... exit if finish OR 'q' pressed
  }

  vbdClose(); // ++++
  tfp->close();
  exit(0);
}