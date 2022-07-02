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
---  Module Name:  Light Dance Utils
---  Description: Module5:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

/***********************************************************/
/************** Design Your Own Modules Below **************/
module mux2to1 (
	input        sel  ,  
	input        a   ,  
	input        b   ,  
	output        o 
);

	/* write your code here */
	assign o = sel? b:a;
	/* write your code here */

endmodule

	
/************** Design Your Own Modules Above **************/
/***********************************************************/
