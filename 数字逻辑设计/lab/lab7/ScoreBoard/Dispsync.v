`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:18 10/31/2022 
// Design Name: 
// Module Name:    Dispsync 
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
module dispsync(
		 input   [15:0] Hexs,		//�˿ڱ���˵���붨��ϲ�
		 input   [1:0] Scan,
		 input   [3:0] Point,
		 input   [3:0] Les,
		 output reg[3:0] Hex,
		 output reg p,LE,
		 output reg[3:0] AN);
   always @* begin		      //�źű仯���� (��ϵ�·����ʱ�Ӵ���)
	case (Scan)
	        2'b00 : begin Hex <= Hexs[3:0];     AN <= 4'b 1110; ��	//ͬ�����
	        2'b01 : begin Hex <= Hexs[7:4];     AN <= 4'b 1101; ��	//ͬ�����
	        2'b10 : begin Hex <= Hexs[11:8];   AN <= 4'b 1011; ��	//ͬ�����
	        2'b11 : begin Hex <= Hexs[15:12]; AN <= 4'b 0111; ��	//ͬ�����
	endcase
   end

endmodule


