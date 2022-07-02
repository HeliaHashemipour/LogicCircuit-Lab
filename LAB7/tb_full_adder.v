`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:36:00 11/28/2020
// Design Name:   full_adder
// Module Name:   F:/LOGIC AZ/az6/tb_full_adder.v
// Project Name:  az6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_full_adder;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 0;
		b = 0;
		cin = 1;
		
		#100;
		a = 1;
		b = 0;
		cin = 0;
		
		#100;
		a = 1;
		b = 0;
		cin = 1;
	
		#100;
		a = 1;
		b = 1;
		cin = 0;
		
		#100;
		a = 1;
		b = 1;
		cin = 1;
		#100;
		
		$finish;
		
        
		// Add stimulus here

	end
      
endmodule
