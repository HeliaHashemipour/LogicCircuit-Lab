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

module ActiveLamps (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
    input  [3:0] lenght     , // room length  [square room lenght ]
	output [3:0] active_lights  // number of active light
);

	/* write your code here */
	reg [3:0] active_lights_reg;
	reg [7:0] area_circumference;
	assign active_lights = active_lights_reg;
	always@(lenght)
		area_circumference <= (lenght*lenght)/((4'h4)*lenght);
	
	always@(tcode, ulight, area_circumference)
	begin
		case(tcode)
			4'b0001: 
			begin
				active_lights_reg <= 4'b0000;
			end
			4'b0010: 
			begin
				active_lights_reg <= 4'b0000;
			end
			4'b0100: 
			begin
				active_lights_reg <= area_circumference[3:0];
			end
			4'b1000: 
			begin
				active_lights_reg <= ulight;
			end
			default:
			begin
				active_lights_reg <= 4'b0000;
			end
		endcase
	end
	/* write your code here */

endmodule
