`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:18 12/12/2020 
// Design Name: 
// Module Name:    alu 
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
module alu(
  input [1:0] A,
  input [1:0] B,
  input [1:0] sel,
  output[3:0] Y
   );

//multiplication


  wire [2:0] w;
  wire [3:0] Multiple;
  wire c;
  and
   g1(Multiple[0],A[0],B[0]),
   g2(w[0],A[1],B[0]),
   g3(w[1],A[0],B[1]),
   g4(w[2],A[1],B[1]);

   halfAdder
   HA1(w[0],w[1],Multiple[1],c),
   HA2(w[2],c,Multiple[2],Multiple[3]);

//add
 wire [3:0] Add;
 wire [2:0] w2;
 assign w2 = (A+B);
 assign Add = {1'b0,w2};

//nand
 wire [3:0] Nand;
 wire [1:0] w3;
 assign w3 = ~(A&B);
 assign Nand = {1'b0,1'b0,w3};


//not
  wire [3:0] Not;
  wire [1:0] anot;
  assign anot = ~A;
  assign Not = {A,anot};

  multiplexer mux(Multiple,Add,Nand,Not,sel,Y);

endmodule
