`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:03:23 11/28/2020
// Design Name:   adder_subtractor_4bit_delay
// Module Name:   F:/LOGIC AZ/az6/tb_adder_subtractor_4bit_delay.v
// Project Name:  az6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_subtractor_4bit_delay
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_adder_subtractor_4bit_delay;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg sel;

	// Outputs
	wire [3:0] S;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	adder_subtractor_4bit_delay uut (
		.A(A), 
		.B(B), 
		.sel(sel), 
		.S(S), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 4'b1111;
		B = 4'b1011;
		sel = 0;


		#100;
		A = 4'b0001;
		B = 4'b1011;
		sel = 0;


		#100;
		A = 4'b1111;
		B = 4'b1011;
		sel = 1;


		#100;
		A = 4'b0011;
		B = 4'b1011;
		sel = 0;


		#100;
		A = 4'b1001;
		B = 4'b1011;
		sel = 1;

		#100
		$finish;

        
		// Add stimulus here

	end
      
endmodule

