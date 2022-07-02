`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:53:59 11/28/2020
// Design Name:   add_sub
// Module Name:   F:/LOGIC AZ/az6/tb_add_sub.v
// Project Name:  az6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: add_sub
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_add_sub;

	// Inputs
	reg a;
	reg b;
	reg cin;
	reg sel;

	// Outputs
	wire sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	add_sub uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sel(sel), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        a = 0 ;
		  b = 0 ;
		  cin = 1 ;
		  sel = 0;
		  #100;
		  
        a = 0 ;
		  b = 0 ;
		  cin = 1 ;
		  sel = 1; 
		  #100;
		  
        a = 1 ;
		  b = 0 ;
		  cin = 0 ;
		  sel = 0;
		  #100;
		  
        a = 1 ;
		  b = 0 ;
		  cin = 1 ;
		  sel = 0; 
		  #100;
		  
		  a = 1 ;
		  b = 1 ;
		  cin = 0 ;
		  sel = 1; 
		  
		  #100;
        a = 1 ;
		  b = 0 ;
		  cin = 1 ;
		  sel = 1; 
		  
		  #100;
        a = 1 ;
		  b = 1 ;
		  cin = 1 ;
		  sel = 0;
		  
		  #100;
        a = 1 ;
		  b = 1 ;
		  cin = 1 ;
		  sel = 1;
		  $finish;
        
		// Add stimulus here

	end
      
endmodule

