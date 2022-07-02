`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:49:34 11/28/2020 
// Design Name: 
// Module Name:    add_sub_delay 
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
module add_sub_delay(
   input a ,
	input b ,
	input cin ,
	input sel ,
	output sum ,
	output cout
);
	 wire y;
    xor #(10) x1(y, b, sel);
	 full_adder_delay f1(a,y,cin,sum,cout);
   
endmodule
	