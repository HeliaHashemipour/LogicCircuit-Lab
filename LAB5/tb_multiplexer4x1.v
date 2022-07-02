`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:46:14 11/15/2020
// Design Name:   multiplexer4x1
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p5/project5/tb_multiplexer4x1.v
// Project Name:  project5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer4x1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ns


module tb_multiplexer ();

reg [3:0] w;
reg [1:0] sel;
reg [3:0] y;
	
	multiplexer4x1 test_multiplexer4x1 (.w(w), .sel(sel), .y(y));


	initial 
		begin
		sel <= 2'b00;
		w <= 4'b0000;
		# 10 ;
		w <= 4'b0001;
		# 10 ;
		w <= 4'b0010;
		sel <= 2'b01;
		# 10 ;
		w <= 4'b0011;
		# 10 ;
		w <= 4'b0100;
		# 10 ;
		w <= 4'b0101;
		sel <= 2'b11;
		# 10 ;
		w <= 4'b0110;
		# 10 ;
		w <= 4'b0111;
		# 10 ;
		w <= 4'b1000;
		# 10 ;
		w <= 4'b1001;
		sel <= 2'b01;
		# 10 ;
		w <= 4'b1010;
		# 10 ;
		w <= 4'b1011;
		# 10 ;
		w <= 4'b1100;
		sel <= 2'b11;
		# 10 ;
		w <= 4'b1101;
		# 10 ;
		sel <= 2'b00;
		w <= 4'b1110;
		# 10 ;
		w <= 4'b1111;
		# 10 ;
	end

endmodule