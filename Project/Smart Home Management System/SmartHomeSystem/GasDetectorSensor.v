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
---  Module Name: Gas Detector Sensor
---  Description: Module2:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module GasDetectorSensor (
	input        arst     , // async reset
	input        clk      , // clock posedge
	input        din      , // input data 
	output [2:0] dout       // output data
);

	parameter s0 = 5'b00000, s1 = 5'b00001, s2 = 5'b00010,
				 s3 = 5'b00011, s4 = 5'b00100, s5 = 5'b00101,
				 s6 = 5'b00110, s7 = 5'b00111, s8 = 5'b01000,
				 s9 = 5'b01001, s10 = 5'b01010, s11 = 5'b01011,
				 s12 = 5'b01100, s13 = 5'b01101, s14 = 5'b01110,
				 s15 = 5'b01111, s16 = 5'b10000, s17 = 5'b10001,
				 s18 = 5'b10010, s19 = 5'b10011, s20 = 5'b10100,
				 s21 = 5'b10101, s22 = 5'b10110, s23 = 5'b10111,
				 s24 = 5'b11000, s25 = 5'b11001, s26 = 5'b11010,
				 s27 = 5'b11011;
	
	reg [4:0] pre_state=s0,next_state=s0;
	reg [2:0] dout_temp;
	assign dout = dout_temp;
	//sequential part of the FSM
	always @(posedge clk, posedge arst) 
	begin	
		// implement state transition diagram
		if (arst == 1'b1)
		begin
			pre_state <= s0;
		end
		else
			pre_state <= next_state;
	end
	
	

	always @(pre_state, din) 
	begin
		
		case (pre_state)
				s0: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s1;
				end
				s1: 
				begin
					if(din == 1'b0)
						next_state <= s2;
					else
						next_state <= s1;
				end
				s2: 
				begin
					if(din == 1'b0)
						next_state <= s4;
					else
						next_state <= s3;
				end
				s3: 
				begin
					if(din == 1'b0)
						next_state <= s6;
					else
						next_state <= s5;
				end
				s5: 
				begin
					if(din == 1'b0)
						next_state <= s2;
					else
						next_state <= s7;
				end
				s7: 
				begin
					if(din == 1'b0)
						next_state <= s8;
					else
						next_state <= s1;
				end
				s8: 
				begin
					if(din == 1'b0)
						next_state <= s4;
					else
						next_state <= s9;
				end
				s9: 
				begin
					if(din == 1'b0)
						next_state <= s10;
					else
						next_state <= s5;
				end
				s10: 
				begin
					if(din == 1'b0)
						next_state <= s4;
					else
						next_state <= s11;
				end
				s11: 
				begin
					if(din == 1'b0)
						next_state <= s12;
					else
						next_state <= s5;
				end
				s12: 
				begin
					if(din == 1'b0)
						next_state <= s15;
					else
						next_state <= s13;
				end
				//-----------------//
				s6: 
				begin
					if(din == 1'b0)
						next_state <= s4;
					else
						next_state <= s13;
				end
				s13: 
				begin
					if(din == 1'b0)
						next_state <= s14;
					else
						next_state <= s5;
				end
				s14: 
				begin
					if(din == 1'b0)
						next_state <= s15;
					else
						next_state <= s13;
				end
				s15: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s16;
				end
				s16: 
				begin
					if(din == 1'b0)
						next_state <= s17;
					else
						next_state <= s1;
				end
				s17: 
				begin
					if(din == 1'b0)
						next_state <= s18;
					else
						next_state <= s3;
				end
				s18: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s19;
				end
				s19: 
				begin
					if(din == 1'b0)
						next_state <= s25;
					else
						next_state <= s20;
				end
				s20: 
				begin
					if(din == 1'b0)
						next_state <= s2;
					else
						next_state <= s1;
				end
				//----------------//
				
				s4: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s21;
				end
				s21: 
				begin
					if(din == 1'b0)
						next_state <= s22;
					else
						next_state <= s1;
				end
				s22: 
				begin
					if(din == 1'b0)
						next_state <= s23;
					else
						next_state <= s3;
				end
				s23: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s24;
				end
				s24: 
				begin
					if(din == 1'b0)
						next_state <= s25;
					else
						next_state <= s1;
				end
				s25: 
				begin
					if(din == 1'b0)
						next_state <= s26;
					else
						next_state <= s3;
				end
				
				s26: 
				begin
					if(din == 1'b0)
						next_state <= s0;
					else
						next_state <= s21;
				end
				default: next_state <= s0; // handle unused states
			endcase
	end
	
	
	always @(pre_state, din) 
	begin
		case (pre_state)
				s12: 
				begin
					dout_temp <= 3'b001;
				end
				s20: 
				begin
					dout_temp <= 3'b010;
				end
				s26: 
				begin
					dout_temp <= 3'b100;
				end
				default: dout_temp <= 3'b000;
		endcase
	end
endmodule
