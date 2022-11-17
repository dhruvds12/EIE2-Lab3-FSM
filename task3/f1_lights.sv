module f1_lights #(
    parameter WIDTH = 8,
    parameter C_WIDTH =16
)(
    input  logic             clk,      // clock 
    input  logic             rst,      // reset
    input  logic             en,       // enable signal
    input  logic [C_WIDTH-1:0] N,     	 // clock divided by N+1
    output logic [WIDTH-1:0] out,
    output logic  		     tick    
);

clktick delay (
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (tick)
);

f1_fsm statemachine (
    .en (tick),
    .rst (rst),
    .clk (clk),
    .out (out)
    
);

endmodule
