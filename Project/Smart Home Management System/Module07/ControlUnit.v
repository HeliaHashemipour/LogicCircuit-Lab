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
---  Module Name: Control Unit
---  Description: Module7:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

`define AAA 3'b001 // IDLE
`define BBB 3'b010 // ACTIVE
`define CCC 3'b011 // REQUEST
`define DDD 3'b100 // STORE
`define EEE 3'b101 // TRAP
`define FFF 3'b111 // FFF

`define STATE_IDLE    3'b001
`define STATE_ACTIVE  3'b010
`define STATE_REQUEST 3'b011
`define STATE_STORE   3'b100
`define STATE_TRAP    3'b101
`define STATE_OTHERS  3'b111


module ControlUnit (
	input         arst      , // async  reset
	input         clk       , // clock  posedge
	input         request   , // request input (asynch) 
	input         confirm   , // confirm input 
	input  [ 1:0] password  , // password from user
	input  [ 1:0] syskey    , // key  from memoty unit
	input  [34:0] configin  , // conf from user
	output [34:0] configout , // conf to memory unit
	output        write_en  , // conf mem write enable
	output [ 2:0] dbg_state   // current state (debug)
	);

	reg [2:0] pre_state;
	reg [2:0] next_state;
	wire equal;
	
	PassCheckUnit pass(.pass(password), .key(syskey), .equal(equal));
	
	assign configout = configin;
	assign dbg_state = pre_state;
	assign write_en = (pre_state == `STATE_STORE ? 1'b1 : 1'b0);

	initial begin 
		pre_state = `STATE_IDLE;
		end
		
	always @ ( posedge clk, posedge arst, negedge request)
		if (arst == 1'b1 || request == 1'b0)
			pre_state = `STATE_IDLE;
		else
			pre_state = next_state;
		
	always @ ( arst , request , confirm , equal, pre_state)
		if (arst == 1'b1 || request == 1'b0)
			next_state = `STATE_IDLE;
		else begin
			if ((request == 1'b1) && (pre_state == `STATE_IDLE))
				next_state = `STATE_ACTIVE;
			else if ((confirm == 1'b1) && (equal == 1'b1) && (pre_state == `STATE_ACTIVE))
				next_state = `STATE_REQUEST;
			else if ((confirm == 1'b1) && (equal == 1'b0) && (pre_state == `STATE_ACTIVE))
				next_state = `STATE_TRAP;
			else if ((confirm == 1'b1) && (pre_state == `STATE_REQUEST))
				next_state = `STATE_STORE;
			else if ((confirm == 1'b1) && (pre_state == `STATE_STORE))
				next_state = `STATE_IDLE;
			else
				next_state = pre_state;
			end
		

endmodule