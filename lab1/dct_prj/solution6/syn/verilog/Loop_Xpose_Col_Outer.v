// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Loop_Xpose_Col_Outer (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        col_outbuf_i_address0,
        col_outbuf_i_ce0,
        col_outbuf_i_q0,
        buf_2d_out_address0,
        buf_2d_out_ce0,
        buf_2d_out_we0,
        buf_2d_out_d0
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [5:0] col_outbuf_i_address0;
output   col_outbuf_i_ce0;
input  [15:0] col_outbuf_i_q0;
output  [5:0] buf_2d_out_address0;
output   buf_2d_out_ce0;
output   buf_2d_out_we0;
output  [15:0] buf_2d_out_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg col_outbuf_i_ce0;
reg buf_2d_out_ce0;
reg buf_2d_out_we0;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] indvar_flatten_reg_73;
reg   [3:0] j_1_i_reg_84;
reg   [3:0] i_3_i_reg_95;
wire   [0:0] icmp_ln92_fu_106_p2;
reg   [0:0] icmp_ln92_reg_204;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [6:0] add_ln92_fu_112_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln95_fu_130_p3;
reg   [3:0] select_ln95_reg_213;
wire   [3:0] select_ln95_1_fu_138_p3;
reg   [3:0] select_ln95_1_reg_218;
wire   [3:0] i_fu_173_p2;
reg    ap_block_state1;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
reg   [3:0] ap_phi_mux_j_1_i_phi_fu_88_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln95_4_fu_168_p1;
wire   [63:0] zext_ln95_5_fu_199_p1;
wire   [0:0] icmp_ln94_fu_124_p2;
wire   [3:0] j_fu_118_p2;
wire   [6:0] tmp_3_fu_150_p3;
wire   [7:0] zext_ln95_fu_146_p1;
wire   [7:0] zext_ln95_3_fu_158_p1;
wire   [7:0] add_ln95_fu_162_p2;
wire   [6:0] tmp_fu_179_p3;
wire   [7:0] zext_ln95_2_fu_190_p1;
wire   [7:0] zext_ln95_1_fu_186_p1;
wire   [7:0] add_ln95_1_fu_193_p2;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_3_i_reg_95 <= i_fu_173_p2;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_3_i_reg_95 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_73 <= add_ln92_fu_112_p2;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_73 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_reg_204 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        j_1_i_reg_84 <= select_ln95_1_reg_218;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_1_i_reg_84 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln92_reg_204 <= icmp_ln92_fu_106_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_fu_106_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln95_1_reg_218 <= select_ln95_1_fu_138_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_fu_106_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln95_reg_213 <= select_ln95_fu_130_p3;
    end
end

always @ (*) begin
    if ((icmp_ln92_fu_106_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln92_reg_204 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_j_1_i_phi_fu_88_p4 = select_ln95_1_reg_218;
    end else begin
        ap_phi_mux_j_1_i_phi_fu_88_p4 = j_1_i_reg_84;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        buf_2d_out_ce0 = 1'b1;
    end else begin
        buf_2d_out_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln92_reg_204 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        buf_2d_out_we0 = 1'b1;
    end else begin
        buf_2d_out_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        col_outbuf_i_ce0 = 1'b1;
    end else begin
        col_outbuf_i_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln92_fu_106_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln92_fu_106_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln92_fu_112_p2 = (indvar_flatten_reg_73 + 7'd1);

assign add_ln95_1_fu_193_p2 = (zext_ln95_2_fu_190_p1 + zext_ln95_1_fu_186_p1);

assign add_ln95_fu_162_p2 = (zext_ln95_fu_146_p1 + zext_ln95_3_fu_158_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign buf_2d_out_address0 = zext_ln95_5_fu_199_p1;

assign buf_2d_out_d0 = col_outbuf_i_q0;

assign col_outbuf_i_address0 = zext_ln95_4_fu_168_p1;

assign i_fu_173_p2 = (select_ln95_fu_130_p3 + 4'd1);

assign icmp_ln92_fu_106_p2 = ((indvar_flatten_reg_73 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln94_fu_124_p2 = ((i_3_i_reg_95 == 4'd8) ? 1'b1 : 1'b0);

assign j_fu_118_p2 = (ap_phi_mux_j_1_i_phi_fu_88_p4 + 4'd1);

assign select_ln95_1_fu_138_p3 = ((icmp_ln94_fu_124_p2[0:0] === 1'b1) ? j_fu_118_p2 : ap_phi_mux_j_1_i_phi_fu_88_p4);

assign select_ln95_fu_130_p3 = ((icmp_ln94_fu_124_p2[0:0] === 1'b1) ? 4'd0 : i_3_i_reg_95);

assign tmp_3_fu_150_p3 = {{select_ln95_fu_130_p3}, {3'd0}};

assign tmp_fu_179_p3 = {{select_ln95_1_reg_218}, {3'd0}};

assign zext_ln95_1_fu_186_p1 = tmp_fu_179_p3;

assign zext_ln95_2_fu_190_p1 = select_ln95_reg_213;

assign zext_ln95_3_fu_158_p1 = tmp_3_fu_150_p3;

assign zext_ln95_4_fu_168_p1 = add_ln95_fu_162_p2;

assign zext_ln95_5_fu_199_p1 = add_ln95_1_fu_193_p2;

assign zext_ln95_fu_146_p1 = select_ln95_1_fu_138_p3;

endmodule //Loop_Xpose_Col_Outer
