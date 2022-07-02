////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: function4x1_translate.v
// /___/   /\     Timestamp: Sun Nov 15 14:59:29 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/translate -ofmt verilog -sim function4x1.ngd function4x1_translate.v 
// Device	: 7z010clg400-1
// Input file	: function4x1.ngd
// Output file	: C:\Users\f\Desktop\rojina\madar Manteghi\p5\project5\netgen\translate\function4x1_translate.v
// # of Modules	: 1
// Design Name	: function4x1
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module function4x1 (
  a, b, c, d, f
);
  input a;
  input b;
  input c;
  input d;
  output f;
  wire a_IBUF_0;
  wire b_IBUF_1;
  wire c_IBUF_2;
  wire d_IBUF_3;
  wire f_OBUF_4;
  X_LUT4 #(
    .INIT ( 16'h2B88 ))
  out1 (
    .ADR0(d_IBUF_3),
    .ADR1(b_IBUF_1),
    .ADR2(a_IBUF_0),
    .ADR3(c_IBUF_2),
    .O(f_OBUF_4)
  );
  X_BUF   a_IBUF (
    .I(a),
    .O(a_IBUF_0)
  );
  X_BUF   b_IBUF (
    .I(b),
    .O(b_IBUF_1)
  );
  X_BUF   c_IBUF (
    .I(c),
    .O(c_IBUF_2)
  );
  X_BUF   d_IBUF (
    .I(d),
    .O(d_IBUF_3)
  );
  X_IPAD   a_7 (
    .PAD(a)
  );
  X_IPAD   b_8 (
    .PAD(b)
  );
  X_IPAD   c_9 (
    .PAD(c)
  );
  X_IPAD   d_10 (
    .PAD(d)
  );
  X_OPAD   f_11 (
    .PAD(f)
  );
  X_OBUF   f_OBUF (
    .I(f_OBUF_4),
    .O(f)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

