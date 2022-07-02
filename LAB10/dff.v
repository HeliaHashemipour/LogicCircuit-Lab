`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:26 01/02/2021 
// Design Name: 
// Module Name:    dff 
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
module dff(
   input d,
   input en,
   input clk,
   input rst,
   output reg q
 );

always @ (posedge clk or posedge rst)
   begin
     if (rst == 1'b1)
      q<=0;
     else
      begin
        if (en == 1'b1)
         q<=d;
        else
         q<=q;
       end
    end
endmodule