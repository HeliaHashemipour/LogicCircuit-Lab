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
---  Module Name: Single Bit Adder/Subtractor
---  Description: Lab 07 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module add_sub (
	input a ,
	input b ,
	input cin ,
	input sel ,
	output sum ,
	output cout
);

	  wire y, sumAB, orAB, andAB, andABC;
	  //for finding if we want to + or we want to -
     xor  x1(y, b, sel);
     full_adder f1(a,y,cin,sum,cout);

endmodule