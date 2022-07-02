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
---  Module Name: Temperature Calculator
---  Description: Module1: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns 


module TemperatureCalculator (
	input  [31:0] tc_base  , // base [environment degree ]
	input  [ 7:0] tc_ref   , // ref  [system work voltage]
	input  [15:0] adc_data , // adc  [sensor digital data]
	output [31:0] tempc      // temp [temperature celsius]
);

	wire [15:0]w_ref2;
	wire [31:0]w_numberator;
	wire [15:0] adc ; 
	wire [7:0] ref;
	wire [31:0]w_numberator1;
	assign ref = tc_ref[7] ? ~(tc_ref-1'b1) : tc_ref;//for multiplier8x8
	assign adc = {1'b0,adc_data[14:0]};
	
	Multiplier8x8 mul8x8(ref,ref,w_ref2);
	Multiplier16x16 mul16x16(w_ref2,adc,w_numberator);
	
	assign w_numberator1 = w_numberator>>6;
	AdderSubtractor32x32 add1(tc_base,w_numberator1,adc_data[15],tempc);
endmodule
