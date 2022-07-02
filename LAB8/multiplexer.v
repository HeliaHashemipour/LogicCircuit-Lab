`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:01:06 12/12/2020 
// Design Name: 
// Module Name:    multiplexer 
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
module multiplexer(
   input [3:0] w3 ,
   input [3:0] w2 ,
   input [3:0] w1 ,
   input [3:0] w0 ,
   input [1:0] sel ,
   output [3:0] y
);

  assign y=sel[1]?(sel[0]?w3:w2):(sel[0]?w1:w0);
  endmodule