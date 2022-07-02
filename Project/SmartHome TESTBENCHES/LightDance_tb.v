`timescale 1ns / 1ps
module LightDance_tb;

	// Inputs
	reg arst;
	reg clk = 0;
	reg din;
	reg load;
	reg [7:0] pdata;

	// Outputs
	wire [7:0] qdata;

	// Instantiate the Unit Under Test (UUT)
	LightDance uut (
		.arst(arst), 
		.clk(clk), 
		.din(din), 
		.load(load), 
		.pdata(pdata), 
		.qdata(qdata)
	);
	always
		#10 clk = ~clk;
	initial begin
		// Initialize Inputs
		arst = 1;
		#20
		arst = 0;
		din = 1;
		load = 1;
		pdata = 8'b1101_0101;
		#20
		load = 0;
        
		// Add stimulus here

	end
      
endmodule

