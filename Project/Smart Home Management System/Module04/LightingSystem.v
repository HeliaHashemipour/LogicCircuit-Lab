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
---  Module Name: Lighting System
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns 

module LightingSystem (
	input  [ 3:0] tcode      , // time code    [table2 time code   ]
	input  [ 3:0] ulight     , // user light   [light degree mode  ]
	input  [ 3:0] lenght     , // room length  [square room lenght ]
	output [ 3:0] wshade     , // shade level  [window shade level ]
	output [ 3:0] lightnum   , // number on    [number of active   ]
	output [15:0] lightstate   // lights state [lights state decode]
);

	/* write your code here */
	reg [ 3:0] w_lightnum;
	wire [3:0] active_lights ;
	assign lightnum = active_lights;
	
	ActiveLamps ActiveLamps(tcode  , ulight , lenght,active_lights);
	LampState LampState(active_lights, lightstate);
	Windowshade_regDegree shade_degree(tcode  , ulight , wshade);
	/* write your code here */

endmodule
