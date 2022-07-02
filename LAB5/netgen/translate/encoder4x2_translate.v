////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: encoder4x2_translate.v
// /___/   /\     Timestamp: Sun Nov 15 13:29:39 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/translate -ofmt verilog -sim encoder4x2.ngd encoder4x2_translate.v 
// Device	: 7z010clg400-1
// Input file	: encoder4x2.ngd
// Output file	: C:\Users\f\Desktop\rojina\madar Manteghi\p5\project5\netgen\translate\encoder4x2_translate.v
// # of Modules	: 1
// Design Name	: encoder4x2
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

module encoder4x2 (
  v, din, qout
);
  output v;
  input [0 : 3] din;
  output [0 : 1] qout;
  wire din_2_IBUF_0;
  wire din_1_IBUF_1;
  wire din_3_IBUF_2;
  wire din_0_IBUF_3;
  wire qout_1_OBUF_4;
  wire qout_0_OBUF_5;
  wire v_OBUF_6;
  X_LUT2 #(
    .INIT ( 4'hE ))
  \qout<1>1  (
    .ADR0(din_3_IBUF_2),
    .ADR1(din_2_IBUF_0),
    .O(qout_1_OBUF_4)
  );
  X_LUT3 #(
    .INIT ( 8'hF4 ))
  \qout<0>1  (
    .ADR0(din_2_IBUF_0),
    .ADR1(din_1_IBUF_1),
    .ADR2(din_3_IBUF_2),
    .O(qout_0_OBUF_5)
  );
  X_LUT4 #(
    .INIT ( 16'hFFFE ))
  out1 (
    .ADR0(din_3_IBUF_2),
    .ADR1(din_2_IBUF_0),
    .ADR2(din_1_IBUF_1),
    .ADR3(din_0_IBUF_3),
    .O(v_OBUF_6)
  );
  X_BUF   din_0_IBUF (
    .I(din[0]),
    .O(din_0_IBUF_3)
  );
  X_BUF   din_1_IBUF (
    .I(din[1]),
    .O(din_1_IBUF_1)
  );
  X_BUF   din_2_IBUF (
    .I(din[2]),
    .O(din_2_IBUF_0)
  );
  X_BUF   din_3_IBUF (
    .I(din[3]),
    .O(din_3_IBUF_2)
  );
  X_IPAD   \din<0>  (
    .PAD(din[0])
  );
  X_IPAD   \din<1>  (
    .PAD(din[1])
  );
  X_IPAD   \din<2>  (
    .PAD(din[2])
  );
  X_IPAD   \din<3>  (
    .PAD(din[3])
  );
  X_OPAD   \qout<0>  (
    .PAD(qout[0])
  );
  X_OPAD   \qout<1>  (
    .PAD(qout[1])
  );
  X_OPAD   v_17 (
    .PAD(v)
  );
  X_OBUF   qout_0_OBUF (
    .I(qout_0_OBUF_5),
    .O(qout[0])
  );
  X_OBUF   qout_1_OBUF (
    .I(qout_1_OBUF_4),
    .O(qout[1])
  );
  X_OBUF   v_OBUF (
    .I(v_OBUF_6),
    .O(v)
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

