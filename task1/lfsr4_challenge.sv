module lfsr4_challenge (
    input logic clk,
    input logic rst,
    input logic en,
    output logic[8:1] data_out //pseudo-random output

);

    logic [8:1] lfsr;

always_ff @ (posedge clk, posedge rst) // for the posetive edge of clk and rst
// we look at the posedge rst as need to make sure that the lfsr is not 4b0 at posedge of clock cylce giving it asychronous behaviour
    if(rst)
        lfsr <= 8'b1;
    else if (en)
        lfsr <= {lfsr[7:1], lfsr[8] ^ lfsr[3]};

assign data_out = lfsr;

endmodule
