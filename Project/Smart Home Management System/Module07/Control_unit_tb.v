`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:37:56 01/28/2021
// Design Name:   ControlUnit
// Module Name:   G:/prgs/prjs/tamrin/nikta/Module07/Control_unit_tb.v
// Project Name:  Module07
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Control_unit_tb;

	// Inputs
	reg arst;
	reg clk = 0;
	reg request;
	reg confirm;
	reg [1:0] password;
	reg [1:0] syskey;
	reg [34:0] configin;

	// Outputs
	wire [34:0] configout;
	wire write_en;
	wire [2:0] dbg_state;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.arst(arst), 
		.clk(clk), 
		.request(request), 
		.confirm(confirm), 
		.password(password), 
		.syskey(syskey), 
		.configin(configin), 
		.configout(configout), 
		.write_en(write_en), 
		.dbg_state(dbg_state)
	);
	
	always
		#10 clk = ~clk;
	initial begin
		// Initialize Inputs
		arst = 1;
		#20
		arst = 0;
		request = 0;
		confirm = 0;
		password = 0;
		syskey = 0;
		configin = 0;
		#20
		request = 1'b1;
		#20
		password = 2'b11;
		syskey = 2'b11;
		#20
		confirm = 1'b1;
		#20
		confirm = 1'b0;
		configin = 35'b010_1111_1111_1111_1111_1111_1111_1111_1111;
		
		// Wait 100 ns for global reset to finish
		#20;
	
		confirm = 1'b1;
		#40
		
		request = 0;
		#100
		
		
		confirm = 0;
		configin = 0;
		#20
		request = 1'b1;
		#20
		syskey = 2'b11;
		#20
		confirm = 1'b1;
		#20
		confirm = 1'b0;
		configin = 35'b010_0000_1111_1111_1111_1111_1111_1111_1111;
		
		// Wait 100 ns for global reset to finish

      #20;
		confirm = 1'b1;
		#40
		request=0;
	end
      
endmodule

