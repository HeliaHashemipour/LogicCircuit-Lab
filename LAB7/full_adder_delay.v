`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:32 11/28/2020 
// Design Name: 
// Module Name:    full_adder_delay 
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
module full_adder_delay(
	input a ,
	input b ,
	input cin ,
	output sum ,
	output cout
);
   wire x1,x2,x3;
	//xor 10s and/or 5s
	xor #10 (sum,a,b,cin);
	and #5
	 and1(x1,a,b),
    and2(x2,a,cin),
	 and3(x3,cin,b);
	or#5 or1(cout,x1,x2,x3);
endmodule