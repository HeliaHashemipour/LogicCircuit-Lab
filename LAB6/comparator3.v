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
---  Module Name: 3 Bits Comparator Gate Level
---  Description: Lab 06 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module comparator3 (
	 input [2:0] a,
    input [2:0] b,
    input l,g,e,
    output lt,gt,eq
    );

  wire c2,c1,c0,b2n,b1n,b0n,xn2,xn1,xn0,lb,gb,eb,w2,w1;

  // a > b

 not (b2n,b[2]);
 not (b1n,b[1]);
 not (b0n,b[0]);

 and (c2,b2n,a[2]);
 xnor (xn2,b[2],a[2]);
 and (c1,b1n,a[1],xn2);
 xnor (xn1,b[1],a[1]);
 and (c0,b0n,a[0],xn2,xn1);
 or (gb,c0,c1,c2);
 xnor (xn0,b[0],a[0]);

 //a = b

 assign eb = xn0 & xn1 & xn2;

 //a < b

 nor (lb,eb,gb);

 assign eq = eb & e;
 assign w1 = eb & g;
 assign gt = w1 | gb;
 assign w2 = eb & l;
 assign lt = w2 | lb;
 endmodule

