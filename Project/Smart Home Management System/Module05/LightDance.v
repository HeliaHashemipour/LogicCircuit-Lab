/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Light Dance
---  Description: Module5
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module LightDance (
	input        arst  , // async  reset
	input        clk   , // clock  posedge
	input        din   , // input  data
	input        load  , // load   enable 
	input  [7:0] pdata , // load   data
	output [7:0] qdata   // output data
);

	/* write your code here */
	wire [7:0] w_regin;
	wire [7:0] w_q;
	assign qdata = w_q;
	// 7
	mux2to1 mux7(load, din^w_q[0], pdata[7], w_regin[7]);
	DFlop dff7(arst, clk, w_regin[7], 1'b1, w_q[7]);
	// 6
	mux2to1 mux6(load, w_q[7], pdata[6], w_regin[6]);
	DFlop dff6(arst, clk, w_regin[6], 1'b1, w_q[6]);
	// 5
	mux2to1 mux5(load, w_q[6]^w_q[0], pdata[5], w_regin[5]);
	DFlop dff5(arst, clk, w_regin[5], 1'b1, w_q[5]);
	// 4
	mux2to1 mux4(load, w_q[5]^w_q[0], pdata[4], w_regin[4]);
	DFlop dff4(arst, clk, w_regin[4], 1'b1, w_q[4]);
	// 3
	mux2to1 mux3(load, w_q[4], pdata[3], w_regin[3]);
	DFlop dff3(arst, clk, w_regin[3], 1'b1, w_q[3]);
	// 2
	mux2to1 mux2(load, w_q[3], pdata[2], w_regin[2]);
	DFlop dff2(arst, clk, w_regin[2], 1'b1, w_q[2]);
	// 1
	mux2to1 mux1(load, w_q[2]^w_q[0], pdata[1], w_regin[1]);
	DFlop dff1(arst, clk, w_regin[1], 1'b1, w_q[1]);
	// 1
	mux2to1 mux0(load, w_q[1]^w_q[0], pdata[0], w_regin[0]);
	DFlop dff0(arst, clk, w_regin[0], 1'b1, w_q[0]);
	/* write your code here */

endmodule
