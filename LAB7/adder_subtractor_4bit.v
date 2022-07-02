`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:04 11/28/2020 
// Design Name: 
// Module Name:    adder_subtractor_4bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module adder_subtractor_4bit(
	input [3:0] A ,
	input [3:0] B ,
	input sel , // 0: add, 1: subtract
	output [3:0] S ,
	output co
);
    wire [2:0] cout;
    add_sub a0(A[0], B[0], sel, sel, S[0], cout[0]);
    add_sub a1(A[1], B[1], cout[0], sel, S[1], cout[1]);
    add_sub a2(A[2], B[2], cout[1], sel, S[2], cout[2]);
    add_sub a3(A[3], B[3], cout[2], sel, S[3], co);
endmodule