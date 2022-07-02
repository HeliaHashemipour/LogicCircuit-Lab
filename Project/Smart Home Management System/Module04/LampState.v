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
---  Module Name: Active Lights
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module LampState (
	input  [3:0] active_lights , // number of active light
	output reg [15:0] lights_state    // state of lights is on
);

	/* write your code here */
	integer i ;
	always@(active_lights)
	begin
		lights_state = 16'b0000_0000_0000_0000;
		for( i = 0; i <active_lights; i = i + 1)
			lights_state[i] = 1'b1;
	end
	/* write your code here */

endmodule
