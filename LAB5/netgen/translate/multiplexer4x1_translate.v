////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: multiplexer4x1_translate.v
// /___/   /\     Timestamp: Sun Nov 15 13:59:51 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/translate -ofmt verilog -sim multiplexer4x1.ngd multiplexer4x1_translate.v 
// Device	: 7z010clg400-1
// Input file	: multiplexer4x1.ngd
// Output file	: C:\Users\f\Desktop\rojina\madar Manteghi\p5\project5\netgen\translate\multiplexer4x1_translate.v
// # of Modules	: 1
// Design Name	: multiplexer4x1
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

module multiplexer4x1 (
  y, w, sel
);
  output y;
  input [3 : 0] w;
  input [1 : 0] sel;
  wire w_0_IBUF_0;
  wire w_1_IBUF_1;
  wire w_2_IBUF_2;
  wire w_3_IBUF_3;
  wire sel_1_IBUF_4;
  wire sel_0_IBUF_5;
  wire y_OBUF_6;
  X_LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  out41 (
    .ADR0(sel_0_IBUF_5),
    .ADR1(sel_1_IBUF_4),
    .ADR2(w_1_IBUF_1),
    .ADR3(w_3_IBUF_3),
    .ADR4(w_2_IBUF_2),
    .ADR5(w_0_IBUF_0),
    .O(y_OBUF_6)
  );
  X_BUF   w_3_IBUF (
    .I(w[3]),
    .O(w_3_IBUF_3)
  );
  X_BUF   w_2_IBUF (
    .I(w[2]),
    .O(w_2_IBUF_2)
  );
  X_BUF   w_1_IBUF (
    .I(w[1]),
    .O(w_1_IBUF_1)
  );
  X_BUF   w_0_IBUF (
    .I(w[0]),
    .O(w_0_IBUF_0)
  );
  X_BUF   sel_1_IBUF (
    .I(sel[1]),
    .O(sel_1_IBUF_4)
  );
  X_BUF   sel_0_IBUF (
    .I(sel[0]),
    .O(sel_0_IBUF_5)
  );
  X_IPAD   \w<3>  (
    .PAD(w[3])
  );
  X_IPAD   \w<2>  (
    .PAD(w[2])
  );
  X_IPAD   \w<1>  (
    .PAD(w[1])
  );
  X_IPAD   \w<0>  (
    .PAD(w[0])
  );
  X_IPAD   \sel<1>  (
    .PAD(sel[1])
  );
  X_IPAD   \sel<0>  (
    .PAD(sel[0])
  );
  X_OPAD   y_15 (
    .PAD(y)
  );
  X_OBUF   y_OBUF (
    .I(y_OBUF_6),
    .O(y)
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

