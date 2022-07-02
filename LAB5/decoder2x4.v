`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:58 11/15/2020 
// Design Name: 
// Module Name:    decoder2x4 
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
`timescale 1 ns/1 ns

module decoder2x4(
		input [1:0] in ,
		input en ,
		output [3:0]dout
    );
	wire v0, v1;
	
	not g1(v0, in[0]), g2(v1, in[1]);
	
	and g3(dout[0], en, v0, v1),
		 g4(dout[1], en, in[0], v1),
		 g5(dout[2], en, v0, in[1]),
		 g6(dout[3], en, in[0], in[1]);

endmodule

