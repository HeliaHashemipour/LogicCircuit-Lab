`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:26:21 11/13/2020
// Design Name:   sop
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p4/project4/testbechsop.v
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

module testbechsop;

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

