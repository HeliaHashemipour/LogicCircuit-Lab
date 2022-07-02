`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:36:46 11/15/2020
// Design Name:   decoder2x4
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p5/project5/tb_decoder2x4.v
// Project Name:  project5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder2x4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ns


module tb_decoder2x4 ();

reg [1:0] in;
reg en;
wire [3:0] dout;

	decoder2x4 test_decoder2x4 (.in(in), .en(en), .dout(dout));


	initial 
		begin
		en <= 1'b0;
		
		in <= 2'b00;
		# 10 ;
		in <= 2'b01;
		# 10 ;
		in <= 2'b10;
		# 10 ;
		in <= 2'b11;
		# 20 ;

		en <= 1'b1;
		
		in <= 2'b00;
		# 10 ;
		in <= 2'b01;
		# 10 ;
		in <= 2'b10;
		# 10 ;
		in <= 2'b11;
		# 20 ;		
	end


      
endmodule

