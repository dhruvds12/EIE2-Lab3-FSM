module f1_fsm #(
    parameter WIDTH = 8
)(
    input logic clk,
    input logic rst,
    input logic en,
    output logic [WIDTH-1:0] out
);

typedef enum {IDLE, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
my_state current_state, next_state;

always_ff @(posedge clk, posedge rst)
    if(rst) current_state <= IDLE;
    else if(en) current_state <= next_state;

//next state logic
always_comb
    case(current_state)
        IDLE: next_state = S1;
        S1: next_state = S2;
        S2: next_state = S3;
        S3: next_state = S4;
        S4: next_state = S5;
        S5: next_state = S6;
        S6: next_state = S7;
        S7: next_state = S8;
        S8: next_state = IDLE;
    endcase

//output logic
always_comb
    case(current_state)
        IDLE:      out = 8'b00000000;
        S1:        out = 8'b00000001;
        S2:        out = 8'b00000011;
        S3:        out = 8'b00000111;
        S4:        out = 8'b00001111;
        S5:        out = 8'b00011111;
        S6:        out = 8'b00111111;
        S7:        out = 8'b01111111;
        S8:        out = 8'b11111111;
        default:   out = 8'b00000000;
        endcase

endmodule

