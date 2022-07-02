`timescale 1ns / 1ps
module CoolHeatSystem_tb;

	// Inputs
	reg arst;
	reg clk = 0;
	reg [7:0] speed;
	reg [7:0] chs_conf;

	// Outputs
	wire [3:0] chs_power;
	wire chs_mode;
	wire pwm_data;

	// Instantiate the Unit Under Test (UUT)
	CoolHeatSystem uut (
		.arst(arst), 
		.clk(clk), 
		.speed(speed), 
		.chs_conf(chs_conf), 
		.chs_power(chs_power), 
		.chs_mode(chs_mode), 
		.pwm_data(pwm_data)
	);
	
	always
		#10 clk = ~clk;
	initial begin
		// Initialize Inputs
		arst = 1;
		#20 
		arst = 0;
		speed = 8'h80;//128
		chs_conf = 8'h1f;// even
		#4000;
      speed = 8'h40;//64
		chs_conf = 8'h0f;// odd  
		// Add stimulus here

	end
      
endmodule

