`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:06 01/02/2021 
// Design Name: 
// Module Name:    register 
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
module register(

    input rst ,
    input clk ,
    input en ,
    input  [3:0] din ,
    output [3:0] qout
	 
);
    dff
      f1(.d(din[0]),.en(en),.clk(clk),.rst(rst),.q(qout[0])),
      f2(.d(din[1]),.en(en),.clk(clk),.rst(rst),.q(qout[1])),
      f3(.d(din[2]),.en(en),.clk(clk),.rst(rst),.q(qout[2])),
      f4(.d(din[3]),.en(en),.clk(clk),.rst(rst),.q(qout[3]));


endmodule
