`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:50:56 11/15/2020 
// Design Name: 
// Module Name:    decoder4x16 
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
module decoder4x16 (
	input [3:0] in ,
	input en ,
	output [15:0] dout
);
	wire [3:0] w;
	
	decoder2x4 dec1(.in(in[3:2]), .en(en), .dout(w));
	decoder2x4 dec2(.in(in[1:0]), .en(w[0]), .dout(dout[3:0]));
	decoder2x4 dec3(.in(in[1:0]), .en(w[1]), .dout(dout[7:4]));
	decoder2x4 dec4(.in(in[1:0]), .en(w[2]), .dout(dout[11:8]));
	decoder2x4 dec5(.in(in[1:0]), .en(w[3]), .dout(dout[15:12]));

endmodule