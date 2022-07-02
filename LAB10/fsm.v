`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:58 01/02/2021 
// Design Name: 
// Module Name:    fsm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fsm(
   input rst,
   input request ,
   input clk ,
   input confirm ,
   input [0:3] pass_data ,
   output reg [3:0]dout,
   output reg  en_left ,
   output reg  en_right,
   output reg [3:0] state
);


  parameter
   idle_state= 4'b0000,
   s0 = 4'b0001,
   s1 = 4'b1000,
   s2 = 4'b1001,
   s3 = 4'b1010,
   save_state = 4'b0110,
   request_state = 4'b0101,
   trap_state = 4'b0111;

    always @ (posedge clk or posedge rst )
     begin
       if (rst || ~request)
         begin
           en_left = 1'b0;
           en_right = 1'b0;
           dout <= 4'b0000;
           state = idle_state;
         end
       else
         begin
           case (state)
			  
              idle_state :
              begin
              state = s0;
              en_left = 0;
              en_right = 0;
              end
				  
             s0 : 
				 begin
                if(~confirm) 
					 state = s0;
                else if(pass_data[0] == 1'b1) 
					 state = s1;
                else 
					 state =trap_state;
                en_left = 0;
                en_right = 0;
             end

            s1 : 
				begin
               if(pass_data[1] == 1'b0) 
					state = s2;
               else 
					state = trap_state;
               en_left = 0;
               en_right = 0;
            end
 
            s2: 
				begin
                 if(pass_data[2] == 1'b1) 
					  state = s3;
                 else state = trap_state;
                 en_left = 0;
                 en_right = 0;
            end  

           s3 : 
			  begin
                if(pass_data[3] == 1'b0) 
					 state = request_state;
                else 
					 state = trap_state;
                en_left = 0;
                en_right = 0;
           end
 
          request_state:
          begin
               if(confirm) 
					state = save_state;
               en_left = 0;
               en_right = 0;
          end  
					
          save_state : 
			 begin
             if (pass_data[3]==1'b0)
                begin
                en_right = 1'b1;
                en_left = 1'b0;
                end
            else
                begin
                en_left = 1'b1;
                en_right = 1'b0;
                end
         dout <= pass_data;
         end
       endcase
       end
 end
endmodule