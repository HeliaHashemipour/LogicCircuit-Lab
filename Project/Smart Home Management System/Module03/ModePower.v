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
---  Module Name: Power Mode (Conting Ones)
---  Description: Module3: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module ModePower (
	input  [7:0] chs_conf  , // degree [temprature] 
	output [3:0] chs_power , // power  [cooler/heater] 
	output chs_mode    // model  [heat=1/cool=0]
);
	reg [3:0] count;
	reg chs_mode_reg;
	reg [3:0] chs_power_reg;
	assign chs_power = chs_power_reg;
	assign  chs_mode = chs_mode_reg;
	integer i;
	/* write your code here */
	always@(chs_conf)
	begin
		count = 0;
		for(i = 0; i< 8; i = i + 1)
		begin
			if(chs_conf[i]== 1'b1)
			begin
				count = count + 4'b0001;
			end
		end
		if(count %2 == 0)
			chs_mode_reg = 1'b0;
		else
			chs_mode_reg = 1'b1;
		chs_power_reg <= count;
	end
	/* write your code here */

endmodule
