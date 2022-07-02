`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:34 11/15/2020 
// Design Name: 
// Module Name:    function4x1 
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

module function4x1 (
	input a ,
	input b ,
	input c ,
	input d ,
	output f
);
	wire [15:0] w;
	//wire [3:0] in;
	//assign in = {a, b, c, d};
	
	decoder4x16 dec(.in({a, b, c, d}), .en(1'b1), .dout(w));
	
	or g1(f, w[2], w[3], w[5], w[7], w[11], w[13]);

endmodule