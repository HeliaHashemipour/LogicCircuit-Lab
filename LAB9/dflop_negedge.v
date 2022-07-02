/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: D Flip Flop
---  Description: Lab 09 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module dflop_negedge (
	input rst ,
	input clk ,
	input din ,
	output reg qout, 
	output qbout
);
	always @(negedge clk or posedge rst) 
	#5
	begin
	
		if(rst == 1'b1)
			qout <= 1'b0;
		else 
			qout <= din;
	end 
	assign qbout = ~qout;

endmodule
