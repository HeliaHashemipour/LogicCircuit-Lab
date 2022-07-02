`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:52 11/13/2020 
// Design Name: 
// Module Name:    sop 
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
module sop(
input a,
input b,
input c,
output f
    );
wire x,y,z;
wire g1,g2,g3;

not(x,a);
not(y,b);
not(z,c);

and(g1,x,y,z);
and(g2,z,b,c);
and(g3,a,y,c);
and(g4,a,b,z);

or(f,g1,g2,g3,g4);
endmodule
