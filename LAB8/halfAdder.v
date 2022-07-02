`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:06:03 12/12/2020 
// Design Name: 
// Module Name:    halfAdder 
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
module halfAdder(

  input A,
  input B,
  output sum,
  output c
);
  xor g1(sum,A,B);
  and g2(c,A,B);
  
endmodule