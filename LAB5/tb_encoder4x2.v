`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:41:16 11/15/2020
// Design Name:   encoder4x2
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p5/project5/tb_encoder4x2.v
// Project Name:  project5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder4x2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`timescale 1 ns/1 ns


module tb_encoder2x4 ();



  reg [3:0] din;
   wire [1:0] qout;
 encoder4x2 test_encoder4x2 (.din(din),.qout(qout));


	initial 
		begin
		
		din <= 4'b0000;
		# 10 ;
		din <= 4'b0001;
		# 10 ;
		din <= 4'b0010;
		# 10 ;
		din <= 4'b0011;
		# 10 ;
		din <= 4'b0100;
		# 10 ;
		din <= 4'b0101;
		# 10 ;
		din <= 4'b0110;
		# 10 ;
		din <= 4'b0111;
		# 10 ;
		din <= 4'b1000;
		# 10 ;
		din <= 4'b1001;
		# 10 ;
		din <= 4'b1010;
		# 10 ;
		din <= 4'b1011;
		# 10 ;
		din <= 4'b1100;
		# 10 ;
		din <= 4'b1101;
		# 10 ;
		din <= 4'b1110;
		# 10 ;
		din <= 4'b1111;
		# 10 ;		
	end

endmodule
