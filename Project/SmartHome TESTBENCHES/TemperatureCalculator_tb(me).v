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
		
		//base -,ref -,adc -
		tc_base = 32'b11111111111111111111111111111000;//-8
		tc_ref = 8'b1111000;//-8;
		adc_data = 16'b1000000000001000;//-8
		// -16
		#100;
      tc_base = 32'b11111111111111111111111111111000;//-8
		tc_ref = 8'b11111000;//-8;
		adc_data = 16'b1000000000001000;//-8
		// -16
		#100;  
		//==============================
		//base -,ref -,adc +
		tc_base = 32'b11111111111111111111111111111000;//-8;
		tc_ref = 8'b1111000;//-8;
		adc_data = 16'b0000000000001000;//8
		// -16
		#100;
      tc_base = 32'b11111111111111111111111111111000;//-8
		tc_ref = 8'b11111000;//-8;
		adc_data = 16'b0000000000001000;//8
		// -16
		#100;  
		
		//==============================
		//base -,ref +,adc +
		tc_base = 32'b11111111111111111111111111111000;//-8;
		tc_ref = 8'1000;//8;
		adc_data = 16'b0000000000001000;//8
      //	-16
		#100;
      tc_base = 32'b11111111111111111111111111111000;//-8
		tc_ref = 8'b1000;//8;
		adc_data = 16'b0000000000001000;//8
		// -16
		#100;  
		
		// Add stimulus here

	end
      
endmodule

