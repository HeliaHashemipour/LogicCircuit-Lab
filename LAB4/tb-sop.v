`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:18:00 11/13/2020
// Design Name:   sop
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p4/project4/tb-sop.v
// Project Name:  project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb-sop;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire f;

	// Instantiate the Unit Under Test (UUT)
	sop uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.f(f)
	);

	initial begin
		// Initialize Inputs
		a = 1'b0;b=1'b0;c=1'b0;
		#100;
      a = 1'b0;b=1'b0;c=1'b1;
		#100;	
		a = 1'b0;b=1'b1;c=1'b0;
		#100;
		a = 1'b0;b=1'b1;c=1'b1;
		#100;
		a = 1'b1;b=1'b0;c=1'b0;
		#100;
		a = 1'b1;b=1'b0;c=1'b1;
		#100;
		a = 1'b1;b=1'b1;c=1'b0;
		#100;
		a = 1'b0;b=1'b1;c=1'b1;
		#100;
		$finish;
	end
      
endmodule

