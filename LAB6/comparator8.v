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
---  Module Name: 8 Bits Comparator
---  Description: Lab 06 Part 3
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module comparator8 (
 input [7:0] a,
 input [7:0] b,
 input l,g,e,
 output lt,gt,eq

    );

  wire [1:0] e1;
  wire [1:0] g1;
  wire [1:0] l1;
  wire [2:0] afirst;
  wire [2:0] bfirst;

  assign afirst[2] = 1'b1;
  assign bfirst[2] = 1'b1;
  assign afirst[1:0] = a[7:6];
  assign bfirst[1:0] = b[7:6];

  comparator3 comp1(a[2:0], b[2:0], l, g, e, l1[0], g1[0], e1[0]);
  comparator3 comp2(a[5:3] , b[5:3] , l1[0] , g1[0] , e1[0] ,l1[1] , g1[1] , e1[1]);
  comparator3 comp3(afirst[2:0],bfirst[2:0],l1[1] , g1[1] , e1[1] , lt,gt,eq);


endmodule