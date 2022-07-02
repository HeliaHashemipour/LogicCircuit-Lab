`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:11 11/15/2020 
// Design Name: 
// Module Name:    encoder4x2 
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
module encoder4x2(
  input [0:3] din,
  output [0:1]qout,
  output v
 );
 
  wire D2not, f1;
 
  not n1(D2not,din[2]);
  
  and a1(f1,D2not,din[1]);
  
  or
    g1(qout[0],din[3],f1),
    g2(qout[1],din[3],din[2]),
   
	x(v,din[3],din[2],din[1],din[0]);
  endmodule
