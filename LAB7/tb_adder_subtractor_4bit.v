`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:58:09 11/28/2020
// Design Name:   adder_subtractor_4bit
// Module Name:   F:/LOGIC AZ/az6/tb_adder_subtractor_4bit.v
// Project Name:  az6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_subtractor_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_adder_subtractor_4bit;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg sel;

	// Outputs
	wire [3:0] S;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	adder_subtractor_4bit uut (
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
		//a>b sel=0
		A = 4'b1111;
		B = 4'b1011;
		sel = 0;
   	#100; 
		
		//a<b sel=0
		A = 4'b0001;
		B = 4'b1011;
		sel = 0;
		#100;
		
		//a==b sel=0
		A=4'b1111;
		B=4'b1111;
		sel=0;
		#100


		//a>b sel=1
		A = 4'b1111;
		B = 4'b1011;
		sel = 1;
		#100;
		
		//a<b sel=1
		A = 4'b0011;
		B = 4'b1011;
		sel = 1;
		#100;
		
		//a=b sel=1
		A = 4'b1111;
		B = 4'b1111;
		sel = 1;
		#100
		$finish;



        
		// Add stimulus here

	end
      
endmodule

