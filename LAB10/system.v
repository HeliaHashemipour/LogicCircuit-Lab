`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:58 01/02/2021 
// Design Name: 
// Module Name:    system 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
 module system(
     input rst ,
     input request,
     input clk ,
     input confirm,
     input [0:3] din ,
     output [3:0] dout_left ,
     output [3:0] dout_right,
     output [3:0] state,
     output enable_right
     );
	  
    wire enable_left;
    wire[3:0]d;
	 
    fsm FSM(.rst(rst),.request(request),.clk(clk),.confirm(confirm),.pass_data(din),
	 .dout(d),.en_left(enable_left),.en_right(enable_right),.state(state));

    register reg1(.rst(rst),.clk(clk),.en(enable_right),.din(d),.qout(dout_right));
    register reg2(.rst(rst),.clk(clk),.en(enable_left),.din(d),.qout(dout_left));

  endmodule
