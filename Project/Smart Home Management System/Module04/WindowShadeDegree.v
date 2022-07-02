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
---  Module Name: Window Shade Degree
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module Windowshade_regDegree (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
	output [3:0] wshade  // shade level  [window shade level ]
);

	/* write your code here */
	reg [3:0] wshade_reg;
	assign wshade = wshade_reg;
	always@(tcode, ulight)
	begin
		case(tcode)
			4'b0001: 
			begin
				wshade_reg <= 4'b1111;
			end
			4'b0010: 
			begin
				wshade_reg <= 4'b1100;
			end
			4'b0100: 
			begin
				wshade_reg <= ulight;
			end
			4'b1000: 
			begin
				wshade_reg <= 4'b0000;
			end
			default:
			begin
				wshade_reg <= 4'b0000;
			end
		endcase
	end
	/* write your code here */

endmodule
