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
---  Module Name: Fan Speed (PWM)
---  Description: Module3: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module FanSpeed (
	input        arst     , // reset [asynch]  
	input        clk      , // clock [posedge] 
	input  [7:0] speed    , // speed [duty-cycle]  
	output pwm_data  // data  [output]
);
	
	
	/* write your code here */
	//localparam [11:0] T = 128; 
	
	reg [7:0] cycles ;
	reg pwm_data_reg;
	assign pwm_data = pwm_data_reg;
	
	reg [7:0] counter;
	
	always@(speed)
	begin
		cycles = speed;//(speed*T)/256;// speed must be >=2
	end
	
	always@(posedge clk, posedge arst)
	begin
		if(arst == 1'b1)
		begin
			counter = 8'h00;
			pwm_data_reg <= 1'b0;
		end
		else
		begin
			counter = counter + 8'h01;
			if (counter < cycles)
			begin
				pwm_data_reg <= 1'b1;
			end
			else
			begin
				pwm_data_reg <= 1'b0;
			end
		end
	end
	/* write your code here */

endmodule
