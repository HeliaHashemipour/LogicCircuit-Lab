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
---  Module Name: Full Adder Gate Level
---  Description: Lab 07 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module full_adder (
    input a,
    input b,
    input cin,
    output sum,
    output cout
    );
	 wire x1,x2,x3;
	 xor (sum,a,b,cin);
	 and (x1,a,b);
	 and (x2,a,cin);
	 and (x3,cin,b);
	 or (cout,x1,x2,x3);

endmodule