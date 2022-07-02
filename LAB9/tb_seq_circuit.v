`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:13:28 12/14/2020
// Design Name:   seq_circuit
// Module Name:   C:/Users/ASUS/Documents/lab-manteghi/lab9/tb_seq_circuit.v
// Project Name:  lab9
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seq_circuit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_seq_circuit;

	// Inputs
	reg rst;
	reg clk;
	reg a;
	reg b;

	// Outputs
	wire y;
	wire z;


	// Instantiate the Unit Under Test (UUT)
	seq_circuit uut (
		.rst(rst), 
		.clk(clk), 
		.a(a), 
		.b(b), 
		.y(y), 
		.z(z)
	);
	initial begin
		clk=0;
     forever #40 clk = ~clk;  
	end
	
	initial begin
		// Initialize Inputs
		rst = 0;
		a = 0;
		b = 0;
		#80;
		
		rst = 0;
		a = 0;
		b = 1;
		#40;
		
		rst = 0;
		a = 1;
		b = 1;
		#80;
		
		rst = 0;
		a = 0;
		b = 1;
		#80;
		
		rst = 0;
		a = 0;
		b = 0;
		#40;
		
		rst = 0;
		a = 1;
		b = 0;
		#120;
		
		rst = 0;
		a = 1;
		b = 1;
		#40;
		
		rst = 0;
		a = 0;
		b = 0;
		#120;
		
		rst = 0;
		a = 0;
		b = 1;
		#40;
		
		rst = 0;
		a = 1;
		b = 1;
		#80;

	end
      
endmodule

