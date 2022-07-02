`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   10:46:27 12/12/2020
// Design Name:   alu
// Module Name:   C:/Users/User/Desktop/ISE/ALU/tb_alu.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description:
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module tb_alu ();


reg [1:0] A;
reg [1:0] B;
reg [1:0] sel;
wire [3:0] Y;

    alu test_alu (.A(A), .B(B), .sel(sel), .Y(Y));

    initial
        begin

 A = 2'b10;
        B = 2'b01;
        sel = 2'b00;
        #50;

        A = 2'b01;
        B = 2'b10;
        sel = 2'b01;
        #50;

        A = 2'b11;
        B = 2'b11;
        sel = 2'b10;
        #50;

        A = 2'b10;
        B = 2'b11;
        sel = 2'b11;
        #50;

        A = 2'b11;
        B = 2'b01;
        sel = 2'b00;
        #50;

        A = 2'b00;
        B = 2'b00;
        sel = 2'b01;
        #50;

        A = 2'b01;
        B = 2'b10;
        sel = 2'b10;
        #50;

        A = 2'b11;
        B = 2'b11;
        sel = 2'b11;
        #50;

     
 
 $finish;
end

endmodule
