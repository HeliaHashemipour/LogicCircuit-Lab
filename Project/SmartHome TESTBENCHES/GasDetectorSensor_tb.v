`timescale 1ns / 1ps
module GasDetectorSensor_tb;

	// Inputs
	reg arst;
	reg clk = 0;
	reg din;
	// Outputs
	wire [2:0] dout;
	
	reg [29:0]temp = 28'b001011101010010011100100100000;
	integer counter = 0;
	// Instantiate the Unit Under Test (UUT)
	GasDetectorSensor uut (
		.arst(arst), 
		.clk(clk), 
		.din(din), 
		.dout(dout)
	);
	
	always
		#20 clk <= ~clk;
		
	always@(negedge clk)
	begin
		counter = counter + 1;
		if (counter >= 4)
		begin
			din = temp[29-(counter-4)];
		end
	end
	initial begin
		arst = 0;
		#20;
		arst = 1;
		#40;
		arst = 0;		

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

