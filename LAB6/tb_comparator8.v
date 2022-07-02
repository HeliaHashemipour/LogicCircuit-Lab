`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:47:21 11/28/2020
// Design Name:   comparator8
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p6/project6/tb_comparator8.v
// Project Name:  project6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_comparator8;

// Inputs

 reg [7:0] a;
 reg [7:0] b;
 reg l;
 reg g;
 reg e;
 
 // Outputs

 wire lt;
 wire gt;
 wire eq;


 // Instantiate the Unit Under Test (UUT)

 comparator8 uut(.a(a),.b(b),.l(l),.g(g),.e(e),.lt(lt),.gt(gt),.eq(eq));
 initial 
     begin
  //////////////////

  a = 8'b11110000;
  b = 8'b00001111;
  l = 1'b0;
  e = 1'b1;
  g = 1'b0;
  # 50 ;
  l = 1'b1;
  e = 1'b0;
  g = 1'b0;
  # 50 ;
  l = 1'b0;
  e = 1'b0;
  g = 1'b1;
  # 150 ;

  //////////////////

  a = 8'b00111111;
  b = 8'b10000000;
  l = 1'b0;
  e = 1'b1;
  g = 1'b0;
  # 50 ;
  l = 1'b1;
  e = 1'b0;
  g = 1'b0;
  # 50 ;
  l = 1'b0;
  e = 1'b0;
  g = 1'b1;
  # 150 ;

  
//////////
  a=8'b1111011;
  b=8'b1111011;
  l=1'b0;
  e=1'b1;
  g=1'b0;
  #50;
  l=1'b1;
  e=1'b0;
  g=1'b0;
  #50;
  l=1'b0;
  e=1'b0;
  g=1'b1;
  #150;
$finish;

 end
endmodule

