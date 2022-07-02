`timescale 1ns / 1ps
module TemperatureCalculator_tb;

	// Inputs
	reg [31:0] tc_base;
	reg [7:0] tc_ref;
	reg [15:0] adc_data;

	// Outputs
	wire [31:0] tempc;

	// Instantiate the Unit Under Test (UUT)
	TemperatureCalculator uut (
		.tc_base(tc_base), 
		.tc_ref(tc_ref), 
		.adc_data(adc_data), 
		.tempc(tempc)
	);

	initial begin
		// Initialize Inputs
		tc_base = 32'h0006;//6
		tc_ref = 8'h06;
		adc_data = 16'h800f;//-15
		// -2
		#100;
      tc_base = 32'h0006;//6
		tc_ref = 8'h06;
		adc_data = 16'h800f;//-15
		// -2
		// Add stimulus here

	end
      
endmodule

