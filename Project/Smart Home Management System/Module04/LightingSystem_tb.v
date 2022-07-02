`timescale 1ns / 1ps
module LightingSystem_tb;

	// Inputs
	reg [3:0] tcode;
	reg [3:0] ulight;
	reg [3:0] lenght;

	// Outputs
	wire [3:0] wshade;
	wire [3:0] lightnum;
	wire [15:0] lightstate;

	// Instantiate the Unit Under Test (UUT)
	LightingSystem uut (
		.tcode(tcode), 
		.ulight(ulight), 
		.lenght(lenght), 
		.wshade(wshade), 
		.lightnum(lightnum), 
		.lightstate(lightstate)
	);

	initial begin
		// Initialize Inputs
		tcode = 4'b0001;
		ulight = 4'b1001;
		lenght = 4'b0101;
		#200;
      tcode = 4'b0001;
		#200;
      tcode = 4'b0010;
		#200;
      tcode = 4'b0100;
		#200;
      tcode = 4'b1000;
		#200;
      tcode = 4'b0000;
	end
      
endmodule