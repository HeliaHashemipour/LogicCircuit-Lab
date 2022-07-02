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
---  Module Name: Sequential Circuit
---  Description: Lab 09 Part 2
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module seq_circuit (
	input rst ,
	input clk ,
	input a ,
	input b ,
	output y ,
	output z
);
	/* write your code here */
    wire qp1, qp2;
    wire [3:0] w;
    and #10 g1(w[0], b, qp2);
    or  #10 g2(w[1], a, w[0]);
    nor #10 g3(w[2], w[1], qp1);
    and #10 g4(w[3], b, qp2);
	
    dflop_negedge g5(.din(w[1]), .clk(clk), .rst(rst), .qout(y), .qbout(qp1)),
                  g6(.din(w[2]), .clk(clk), .rst(rst), .qout(), .qbout(qp2));

    or #10 g7(z, qp1, w[3]);


endmodule