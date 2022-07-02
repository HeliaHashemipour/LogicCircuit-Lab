`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:06:25 01/02/2021
// Design Name:   system
// Module Name:   C:/Users/f/Desktop/rojina/madar Manteghi/project10/p10/tb_system.v
// Project Name:  p10
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: system
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
  module tb_system;
// Inputs
   reg rst;
   reg request;
   reg clk;
   reg confirm;
   reg [0:3] din;

// Outputs
   wire [3:0] dout_left;
   wire [3:0] dout_right;
   wire [3:0] state;
   wire enable_right;

// Instantiate the Unit Under Test (UUT)
   system uut (.rst(rst), .request(request), .clk(clk),.confirm(confirm),.din(din),.dout_left(dout_left),.dout_right(dout_right),.state(state),
   .enable_right(enable_right)
   );

    initial
          begin
          forever
             begin
             #10
             clk = ~clk;
             end
           end

    initial 
	      begin
         rst = 1;
         request = 0;
         clk = 0;
         confirm = 0;
         din = 0;
         #10;
         rst = 0;
         request = 1;
         confirm = 0;
         din= 4'b0000;
         #20;
         din = 4'b1110;//wrong pass
         confirm = 1;
         #40;
         request =0;//check the idle state
         #40;
         request = 1;
         confirm = 0;
         #20;
         din = 4'b1010; //right pass
         confirm = 1;
         #80;
         din= 4'b1110;//even data
         confirm = 1;
         #60;
         request =0;//idle state
         #40
         request = 1;
         confirm = 0;
         #20;
         din = 4'b1000;//check wrong data
         confirm = 1;
         #60;
         request =0;
         #40
         request = 1;
         confirm = 0;
         #20;
         din = 4'b1010;//right pass
         confirm = 1;
         #80;
         din= 4'b1011;//odd data
         confirm = 1;
         #60;
			din=4'b1000;//even data added after entering the correct pass
			//not using request=0
			//it will all save us in enable right as even pass
			#60;
  $finish;

end
     
endmodule
