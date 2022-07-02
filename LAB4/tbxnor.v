`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:45:57 11/13/2020
// Design Name:   sop
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/p4/project4/tbxnor.v
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

module tbxnor;

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
		a = 0;
		b = 0;
		c = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

