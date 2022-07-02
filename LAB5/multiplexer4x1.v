`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:45 11/15/2020 
// Design Name: 
// Module Name:    multiplexer4x1 
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
module multiplexer4x1(
  input[3:0]w,
  input [1:0]sel,
  output y
);
  wire s1not,s0not;
  wire[3:0]d;
  not
  n1(s1not,sel[1]),
  n2(s0not,sel[0]);
  and
   g1(d[0],s1not,s0not,w[0]),
   g2(d[1],s1not,sel[0],w[1]),
   g3(d[2],sel[1],s0not,w[2]),
   g4(d[3],sel[1],sel[0],w[3]);
	
  or g5(y,d[0],d[1],d[2],d[3]);
  
endmodule
