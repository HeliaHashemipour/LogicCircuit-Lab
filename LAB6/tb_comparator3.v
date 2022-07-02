`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:33:13 11/28/2020
// Design Name:   comparator3
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p6/project6/tb_comparator3.v
// Project Name:  project6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_comparator3;

	// Inputs
	reg [2:0] a;
	reg [2:0] b;
	reg l;
	reg g;
	reg e;

	// Outputs
	wire lt;
	wire gt;
	wire eq;

	comparator3 test_comparator3 (.a(a), .b(b), .l(l), .e(e), .g(g), .lt(lt), .eq(eq), .gt(gt));


	initial 
		begin
		
		//////////////////
		a = 3'b001;
		b = 3'b001;
		
		l = 1'b0;
		e = 1'b1;
		g = 1'b0;
		# 10 ;
		l = 1'b1;
		e = 1'b0;
		g = 1'b0;
		# 10 ;
		l = 1'b0;
		e = 1'b0;
		g = 1'b1;
		# 20 ;
		//////////////////
		a = 3'b010;
		b = 3'b001;
		
		l = 1'b0;
		e = 1'b1;
		g = 1'b0;
		# 10 ;
		l = 1'b1;
		e = 1'b0;
		g = 1'b0;
		# 10 ;
		l = 1'b0;
		e = 1'b0;
		g = 1'b1;
		# 20;
		//////////////////
		a = 3'b001;
		b = 3'b010;
		
		l = 1'b0;
		e = 1'b1;
		g = 1'b0;
		# 10 ;
		l = 1'b1;
		e = 1'b0;
		g = 1'b0;
		# 10 ;
		l = 1'b0;
		e = 1'b0;
		g = 1'b1;
		# 20;
		$finish;
		//////////////////
	end

endmodule
