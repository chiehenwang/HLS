// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module read_data (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_r_address0,
        input_r_ce0,
        input_r_q0,
        buf_0_address0,
        buf_0_ce0,
        buf_0_we0,
        buf_0_d0,
        buf_1_address0,
        buf_1_ce0,
        buf_1_we0,
        buf_1_d0,
        buf_2_address0,
        buf_2_ce0,
        buf_2_we0,
        buf_2_d0,
        buf_3_address0,
        buf_3_ce0,
        buf_3_we0,
        buf_3_d0,
        buf_4_address0,
        buf_4_ce0,
        buf_4_we0,
        buf_4_d0,
        buf_5_address0,
        buf_5_ce0,
        buf_5_we0,
        buf_5_d0,
        buf_6_address0,
        buf_6_ce0,
        buf_6_we0,
        buf_6_d0,
        buf_7_address0,
        buf_7_ce0,
        buf_7_we0,
        buf_7_d0
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] input_r_address0;
output   input_r_ce0;
input  [15:0] input_r_q0;
output  [2:0] buf_0_address0;
output   buf_0_ce0;
output   buf_0_we0;
output  [15:0] buf_0_d0;
output  [2:0] buf_1_address0;
output   buf_1_ce0;
output   buf_1_we0;
output  [15:0] buf_1_d0;
output  [2:0] buf_2_address0;
output   buf_2_ce0;
output   buf_2_we0;
output  [15:0] buf_2_d0;
output  [2:0] buf_3_address0;
output   buf_3_ce0;
output   buf_3_we0;
output  [15:0] buf_3_d0;
output  [2:0] buf_4_address0;
output   buf_4_ce0;
output   buf_4_we0;
output  [15:0] buf_4_d0;
output  [2:0] buf_5_address0;
output   buf_5_ce0;
output   buf_5_we0;
output  [15:0] buf_5_d0;
output  [2:0] buf_6_address0;
output   buf_6_ce0;
output   buf_6_we0;
output  [15:0] buf_6_d0;
output  [2:0] buf_7_address0;
output   buf_7_ce0;
output   buf_7_we0;
output  [15:0] buf_7_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg input_r_ce0;
reg buf_0_ce0;
reg buf_0_we0;
reg buf_1_ce0;
reg buf_1_we0;
reg buf_2_ce0;
reg buf_2_we0;
reg buf_3_ce0;
reg buf_3_we0;
reg buf_4_ce0;
reg buf_4_we0;
reg buf_5_ce0;
reg buf_5_we0;
reg buf_6_ce0;
reg buf_6_we0;
reg buf_7_ce0;
reg buf_7_we0;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] indvar_flatten_reg_195;
reg   [3:0] r_0_reg_206;
reg   [3:0] c_0_reg_217;
wire   [0:0] icmp_ln103_fu_228_p2;
reg   [0:0] icmp_ln103_reg_316;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [6:0] add_ln103_fu_234_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln103_1_fu_260_p3;
reg   [3:0] select_ln103_1_reg_325;
wire   [2:0] trunc_ln106_fu_295_p1;
reg   [2:0] trunc_ln106_reg_336;
wire   [3:0] c_fu_299_p2;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
reg   [3:0] ap_phi_mux_r_0_phi_fu_210_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln106_fu_290_p1;
wire   [63:0] zext_ln103_fu_305_p1;
wire   [0:0] icmp_ln105_fu_246_p2;
wire   [3:0] r_fu_240_p2;
wire   [2:0] trunc_ln103_fu_268_p1;
wire   [3:0] select_ln103_fu_252_p3;
wire   [5:0] zext_ln105_fu_280_p1;
wire   [5:0] shl_ln106_mid2_fu_272_p3;
wire   [5:0] add_ln106_fu_284_p2;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
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
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_228_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        c_0_reg_217 <= c_fu_299_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        c_0_reg_217 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_228_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_195 <= add_ln103_fu_234_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_195 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_reg_316 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        r_0_reg_206 <= select_ln103_1_reg_325;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        r_0_reg_206 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln103_reg_316 <= icmp_ln103_fu_228_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_228_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln103_1_reg_325 <= select_ln103_1_fu_260_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_228_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        trunc_ln106_reg_336 <= trunc_ln106_fu_295_p1;
    end
end

always @ (*) begin
    if ((icmp_ln103_fu_228_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
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
    if (((icmp_ln103_reg_316 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_r_0_phi_fu_210_p4 = select_ln103_1_reg_325;
    end else begin
        ap_phi_mux_r_0_phi_fu_210_p4 = r_0_reg_206;
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
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_0_ce0 = 1'b1;
    end else begin
        buf_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_0_we0 = 1'b1;
    end else begin
        buf_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_1_ce0 = 1'b1;
    end else begin
        buf_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_1_we0 = 1'b1;
    end else begin
        buf_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_2_ce0 = 1'b1;
    end else begin
        buf_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd2) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_2_we0 = 1'b1;
    end else begin
        buf_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_3_ce0 = 1'b1;
    end else begin
        buf_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd3) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_3_we0 = 1'b1;
    end else begin
        buf_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_4_ce0 = 1'b1;
    end else begin
        buf_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd4) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_4_we0 = 1'b1;
    end else begin
        buf_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_5_ce0 = 1'b1;
    end else begin
        buf_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd5) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_5_we0 = 1'b1;
    end else begin
        buf_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_6_ce0 = 1'b1;
    end else begin
        buf_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd6) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_6_we0 = 1'b1;
    end else begin
        buf_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_7_ce0 = 1'b1;
    end else begin
        buf_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (trunc_ln106_reg_336 == 3'd7) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        buf_7_we0 = 1'b1;
    end else begin
        buf_7_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        input_r_ce0 = 1'b1;
    end else begin
        input_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((icmp_ln103_fu_228_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((icmp_ln103_fu_228_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
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

assign add_ln103_fu_234_p2 = (indvar_flatten_reg_195 + 7'd1);

assign add_ln106_fu_284_p2 = (zext_ln105_fu_280_p1 + shl_ln106_mid2_fu_272_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign buf_0_address0 = zext_ln103_fu_305_p1;

assign buf_0_d0 = input_r_q0;

assign buf_1_address0 = zext_ln103_fu_305_p1;

assign buf_1_d0 = input_r_q0;

assign buf_2_address0 = zext_ln103_fu_305_p1;

assign buf_2_d0 = input_r_q0;

assign buf_3_address0 = zext_ln103_fu_305_p1;

assign buf_3_d0 = input_r_q0;

assign buf_4_address0 = zext_ln103_fu_305_p1;

assign buf_4_d0 = input_r_q0;

assign buf_5_address0 = zext_ln103_fu_305_p1;

assign buf_5_d0 = input_r_q0;

assign buf_6_address0 = zext_ln103_fu_305_p1;

assign buf_6_d0 = input_r_q0;

assign buf_7_address0 = zext_ln103_fu_305_p1;

assign buf_7_d0 = input_r_q0;

assign c_fu_299_p2 = (select_ln103_fu_252_p3 + 4'd1);

assign icmp_ln103_fu_228_p2 = ((indvar_flatten_reg_195 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln105_fu_246_p2 = ((c_0_reg_217 == 4'd8) ? 1'b1 : 1'b0);

assign input_r_address0 = zext_ln106_fu_290_p1;

assign r_fu_240_p2 = (4'd1 + ap_phi_mux_r_0_phi_fu_210_p4);

assign select_ln103_1_fu_260_p3 = ((icmp_ln105_fu_246_p2[0:0] === 1'b1) ? r_fu_240_p2 : ap_phi_mux_r_0_phi_fu_210_p4);

assign select_ln103_fu_252_p3 = ((icmp_ln105_fu_246_p2[0:0] === 1'b1) ? 4'd0 : c_0_reg_217);

assign shl_ln106_mid2_fu_272_p3 = {{trunc_ln103_fu_268_p1}, {3'd0}};

assign trunc_ln103_fu_268_p1 = select_ln103_1_fu_260_p3[2:0];

assign trunc_ln106_fu_295_p1 = select_ln103_fu_252_p3[2:0];

assign zext_ln103_fu_305_p1 = select_ln103_1_reg_325;

assign zext_ln105_fu_280_p1 = select_ln103_fu_252_p3;

assign zext_ln106_fu_290_p1 = add_ln106_fu_284_p2;

endmodule //read_data
