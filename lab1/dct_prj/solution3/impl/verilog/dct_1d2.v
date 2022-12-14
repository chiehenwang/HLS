// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dct_1d2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        src_address0,
        src_ce0,
        src_q0,
        src_address1,
        src_ce1,
        src_q1,
        src_offset,
        dst_address0,
        dst_ce0,
        dst_we0,
        dst_d0,
        dst_offset
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_pp0_stage0 = 6'd2;
parameter    ap_ST_fsm_pp0_stage1 = 6'd4;
parameter    ap_ST_fsm_pp0_stage2 = 6'd8;
parameter    ap_ST_fsm_pp0_stage3 = 6'd16;
parameter    ap_ST_fsm_state7 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] src_address0;
output   src_ce0;
input  [15:0] src_q0;
output  [5:0] src_address1;
output   src_ce1;
input  [15:0] src_q1;
input  [3:0] src_offset;
output  [5:0] dst_address0;
output   dst_ce0;
output   dst_we0;
output  [15:0] dst_d0;
input  [3:0] dst_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[5:0] src_address0;
reg src_ce0;
reg[5:0] src_address1;
reg src_ce1;
reg dst_ce0;
reg dst_we0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] dct_coeff_table_0_address0;
reg    dct_coeff_table_0_ce0;
wire   [13:0] dct_coeff_table_0_q0;
wire   [2:0] dct_coeff_table_1_address0;
reg    dct_coeff_table_1_ce0;
wire  signed [14:0] dct_coeff_table_1_q0;
wire   [2:0] dct_coeff_table_2_address0;
reg    dct_coeff_table_2_ce0;
wire   [14:0] dct_coeff_table_2_q0;
wire   [2:0] dct_coeff_table_3_address0;
reg    dct_coeff_table_3_ce0;
wire   [14:0] dct_coeff_table_3_q0;
wire   [2:0] dct_coeff_table_4_address0;
reg    dct_coeff_table_4_ce0;
wire   [14:0] dct_coeff_table_4_q0;
wire   [2:0] dct_coeff_table_5_address0;
reg    dct_coeff_table_5_ce0;
wire   [14:0] dct_coeff_table_5_q0;
wire   [2:0] dct_coeff_table_6_address0;
reg    dct_coeff_table_6_ce0;
wire   [14:0] dct_coeff_table_6_q0;
wire   [2:0] dct_coeff_table_7_address0;
reg    dct_coeff_table_7_ce0;
wire   [14:0] dct_coeff_table_7_q0;
reg   [3:0] k_0_reg_278;
wire   [7:0] zext_ln61_2_fu_297_p1;
reg   [7:0] zext_ln61_2_reg_596;
reg   [5:0] src_addr_reg_601;
reg   [5:0] src_addr_1_reg_606;
reg   [5:0] src_addr_2_reg_611;
reg   [5:0] src_addr_3_reg_616;
reg   [5:0] src_addr_4_reg_621;
reg   [5:0] src_addr_5_reg_626;
reg   [5:0] src_addr_6_reg_631;
reg   [5:0] src_addr_7_reg_636;
wire   [0:0] icmp_ln55_fu_419_p2;
reg   [0:0] icmp_ln55_reg_641;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state6_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [3:0] k_fu_425_p2;
reg   [3:0] k_reg_645;
reg    ap_enable_reg_pp0_iter0;
wire   [7:0] add_ln63_8_fu_447_p2;
reg   [7:0] add_ln63_8_reg_650;
reg  signed [14:0] dct_coeff_table_2_lo_reg_695;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_pp0_stage1_11001;
reg  signed [14:0] dct_coeff_table_3_lo_reg_700;
reg  signed [14:0] dct_coeff_table_4_lo_reg_705;
reg  signed [14:0] dct_coeff_table_5_lo_reg_710;
reg  signed [14:0] dct_coeff_table_6_lo_reg_715;
reg  signed [14:0] dct_coeff_table_7_lo_reg_720;
wire  signed [28:0] grp_fu_538_p3;
reg  signed [28:0] add_ln63_1_reg_725;
wire  signed [28:0] grp_fu_552_p3;
reg  signed [28:0] add_ln63_2_reg_730;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_state4_pp0_stage2_iter0;
wire    ap_block_pp0_stage2_11001;
wire  signed [28:0] mul_ln61_5_fu_566_p2;
reg  signed [28:0] mul_ln61_5_reg_735;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_state5_pp0_stage3_iter0;
wire    ap_block_pp0_stage3_11001;
(* use_dsp48 = "no" *) wire   [28:0] add_ln63_3_fu_496_p2;
reg   [28:0] add_ln63_3_reg_740;
wire  signed [28:0] grp_fu_572_p3;
reg  signed [28:0] add_ln63_5_reg_745;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage3_subdone;
reg   [3:0] ap_phi_mux_k_0_phi_fu_282_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln61_1_fu_309_p1;
wire   [63:0] tmp_6_fu_320_p3;
wire   [63:0] tmp_7_fu_335_p3;
wire   [63:0] tmp_8_fu_350_p3;
wire   [63:0] tmp_9_fu_365_p3;
wire   [63:0] tmp_s_fu_380_p3;
wire   [63:0] tmp_1_fu_395_p3;
wire   [63:0] tmp_2_fu_410_p3;
wire   [63:0] zext_ln60_fu_431_p1;
wire   [63:0] zext_ln63_1_fu_500_p1;
wire    ap_block_pp0_stage1;
wire    ap_block_pp0_stage2;
wire    ap_block_pp0_stage3;
wire   [6:0] tmp_4_fu_289_p3;
wire   [6:0] tmp_5_fu_301_p3;
wire   [6:0] or_ln61_fu_314_p2;
wire   [6:0] or_ln61_1_fu_329_p2;
wire   [6:0] or_ln61_2_fu_344_p2;
wire   [6:0] or_ln61_3_fu_359_p2;
wire   [6:0] or_ln61_4_fu_374_p2;
wire   [6:0] or_ln61_5_fu_389_p2;
wire   [6:0] or_ln61_6_fu_404_p2;
wire   [7:0] zext_ln63_fu_443_p1;
wire  signed [28:0] grp_fu_580_p3;
wire  signed [28:0] grp_fu_588_p3;
(* use_dsp48 = "no" *) wire   [28:0] add_ln63_7_fu_518_p2;
wire   [28:0] add_ln63_fu_522_p2;
wire   [13:0] grp_fu_538_p1;
wire  signed [28:0] mul_ln61_1_fu_545_p2;
wire  signed [28:0] mul_ln61_3_fu_559_p2;
wire   [13:0] grp_fu_572_p2;
wire    ap_CS_fsm_state7;
reg   [5:0] ap_NS_fsm;
wire    ap_block_pp0_stage1_subdone;
wire    ap_block_pp0_stage2_subdone;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [28:0] grp_fu_538_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

dct_1d2_dct_coeffbkb #(
    .DataWidth( 14 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_0_address0),
    .ce0(dct_coeff_table_0_ce0),
    .q0(dct_coeff_table_0_q0)
);

dct_1d2_dct_coeffcud #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_1_address0),
    .ce0(dct_coeff_table_1_ce0),
    .q0(dct_coeff_table_1_q0)
);

dct_1d2_dct_coeffdEe #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_2_address0),
    .ce0(dct_coeff_table_2_ce0),
    .q0(dct_coeff_table_2_q0)
);

dct_1d2_dct_coeffeOg #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_3_address0),
    .ce0(dct_coeff_table_3_ce0),
    .q0(dct_coeff_table_3_q0)
);

dct_1d2_dct_coefffYi #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_4_address0),
    .ce0(dct_coeff_table_4_ce0),
    .q0(dct_coeff_table_4_q0)
);

dct_1d2_dct_coeffg8j #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_5_address0),
    .ce0(dct_coeff_table_5_ce0),
    .q0(dct_coeff_table_5_q0)
);

dct_1d2_dct_coeffhbi #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_6_address0),
    .ce0(dct_coeff_table_6_ce0),
    .q0(dct_coeff_table_6_q0)
);

dct_1d2_dct_coeffibs #(
    .DataWidth( 15 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
dct_coeff_table_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_7_address0),
    .ce0(dct_coeff_table_7_ce0),
    .q0(dct_coeff_table_7_q0)
);

dct_mac_muladd_16jbC #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 14 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_16jbC_U1(
    .din0(src_q0),
    .din1(grp_fu_538_p1),
    .din2(mul_ln61_1_fu_545_p2),
    .dout(grp_fu_538_p3)
);

dct_mul_mul_16s_1kbM #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_16s_1kbM_U2(
    .din0(src_q1),
    .din1(dct_coeff_table_1_q0),
    .dout(mul_ln61_1_fu_545_p2)
);

dct_mac_muladd_16lbW #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_16lbW_U3(
    .din0(src_q0),
    .din1(dct_coeff_table_2_lo_reg_695),
    .din2(mul_ln61_3_fu_559_p2),
    .dout(grp_fu_552_p3)
);

dct_mul_mul_16s_1kbM #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_16s_1kbM_U4(
    .din0(src_q1),
    .din1(dct_coeff_table_3_lo_reg_700),
    .dout(mul_ln61_3_fu_559_p2)
);

dct_mul_mul_16s_1kbM #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_16s_1kbM_U5(
    .din0(src_q0),
    .din1(dct_coeff_table_5_lo_reg_710),
    .dout(mul_ln61_5_fu_566_p2)
);

dct_mac_muladd_16mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .din2_WIDTH( 14 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_16mb6_U6(
    .din0(src_q1),
    .din1(dct_coeff_table_7_lo_reg_720),
    .din2(grp_fu_572_p2),
    .dout(grp_fu_572_p3)
);

dct_mac_muladd_16lbW #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_16lbW_U7(
    .din0(src_q0),
    .din1(dct_coeff_table_4_lo_reg_705),
    .din2(mul_ln61_5_reg_735),
    .dout(grp_fu_580_p3)
);

dct_mac_muladd_16lbW #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 15 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_16lbW_U8(
    .din0(src_q1),
    .din1(dct_coeff_table_6_lo_reg_715),
    .din2(add_ln63_5_reg_745),
    .dout(grp_fu_588_p3)
);

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
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_reg_641 == 1'd0))) begin
        k_0_reg_278 <= k_reg_645;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_0_reg_278 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001) & (icmp_ln55_reg_641 == 1'd0))) begin
        add_ln63_1_reg_725 <= grp_fu_538_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage2_11001) & (icmp_ln55_reg_641 == 1'd0))) begin
        add_ln63_2_reg_730 <= grp_fu_552_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (icmp_ln55_reg_641 == 1'd0))) begin
        add_ln63_3_reg_740 <= add_ln63_3_fu_496_p2;
        mul_ln61_5_reg_735 <= mul_ln61_5_fu_566_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln55_reg_641 == 1'd0))) begin
        add_ln63_5_reg_745 <= grp_fu_572_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_fu_419_p2 == 1'd0))) begin
        add_ln63_8_reg_650 <= add_ln63_8_fu_447_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001) & (icmp_ln55_reg_641 == 1'd0))) begin
        dct_coeff_table_2_lo_reg_695 <= dct_coeff_table_2_q0;
        dct_coeff_table_3_lo_reg_700 <= dct_coeff_table_3_q0;
        dct_coeff_table_4_lo_reg_705 <= dct_coeff_table_4_q0;
        dct_coeff_table_5_lo_reg_710 <= dct_coeff_table_5_q0;
        dct_coeff_table_6_lo_reg_715 <= dct_coeff_table_6_q0;
        dct_coeff_table_7_lo_reg_720 <= dct_coeff_table_7_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln55_reg_641 <= icmp_ln55_fu_419_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_reg_645 <= k_fu_425_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        src_addr_1_reg_606[5 : 3] <= tmp_6_fu_320_p3[5 : 3];
        src_addr_2_reg_611[5 : 3] <= tmp_7_fu_335_p3[5 : 3];
        src_addr_3_reg_616[5 : 3] <= tmp_8_fu_350_p3[5 : 3];
        src_addr_4_reg_621[5 : 3] <= tmp_9_fu_365_p3[5 : 3];
        src_addr_5_reg_626[5 : 3] <= tmp_s_fu_380_p3[5 : 3];
        src_addr_6_reg_631[5 : 3] <= tmp_1_fu_395_p3[5 : 3];
        src_addr_7_reg_636[5 : 3] <= tmp_2_fu_410_p3[5 : 3];
        src_addr_reg_601[5 : 3] <= zext_ln61_1_fu_309_p1[5 : 3];
        zext_ln61_2_reg_596[6 : 3] <= zext_ln61_2_fu_297_p1[6 : 3];
    end
end

always @ (*) begin
    if ((icmp_ln55_fu_419_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln55_reg_641 == 1'd0))) begin
        ap_phi_mux_k_0_phi_fu_282_p4 = k_reg_645;
    end else begin
        ap_phi_mux_k_0_phi_fu_282_p4 = k_0_reg_278;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_0_ce0 = 1'b1;
    end else begin
        dct_coeff_table_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_1_ce0 = 1'b1;
    end else begin
        dct_coeff_table_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_2_ce0 = 1'b1;
    end else begin
        dct_coeff_table_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_3_ce0 = 1'b1;
    end else begin
        dct_coeff_table_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_4_ce0 = 1'b1;
    end else begin
        dct_coeff_table_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_5_ce0 = 1'b1;
    end else begin
        dct_coeff_table_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_6_ce0 = 1'b1;
    end else begin
        dct_coeff_table_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dct_coeff_table_7_ce0 = 1'b1;
    end else begin
        dct_coeff_table_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dst_ce0 = 1'b1;
    end else begin
        dst_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_reg_641 == 1'd0))) begin
        dst_we0 = 1'b1;
    end else begin
        dst_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            src_address0 = src_addr_4_reg_621;
        end else if (((1'b0 == ap_block_pp0_stage2) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
            src_address0 = src_addr_5_reg_626;
        end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            src_address0 = src_addr_2_reg_611;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            src_address0 = src_addr_reg_601;
        end else begin
            src_address0 = 'bx;
        end
    end else begin
        src_address0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            src_address1 = src_addr_6_reg_631;
        end else if (((1'b0 == ap_block_pp0_stage2) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
            src_address1 = src_addr_7_reg_636;
        end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            src_address1 = src_addr_3_reg_616;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            src_address1 = src_addr_1_reg_606;
        end else begin
            src_address1 = 'bx;
        end
    end else begin
        src_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage2_11001)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        src_ce0 = 1'b1;
    end else begin
        src_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage2_11001)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        src_ce1 = 1'b1;
    end else begin
        src_ce1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln55_fu_419_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln55_fu_419_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((1'b0 == ap_block_pp0_stage2_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if ((1'b0 == ap_block_pp0_stage3_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln63_3_fu_496_p2 = ($signed(add_ln63_1_reg_725) + $signed(add_ln63_2_reg_730));

assign add_ln63_7_fu_518_p2 = ($signed(grp_fu_580_p3) + $signed(grp_fu_588_p3));

assign add_ln63_8_fu_447_p2 = (zext_ln61_2_reg_596 + zext_ln63_fu_443_p1);

assign add_ln63_fu_522_p2 = (add_ln63_3_reg_740 + add_ln63_7_fu_518_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_subdone = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign dct_coeff_table_0_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_1_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_2_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_3_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_4_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_5_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_6_address0 = zext_ln60_fu_431_p1;

assign dct_coeff_table_7_address0 = zext_ln60_fu_431_p1;

assign dst_address0 = zext_ln63_1_fu_500_p1;

assign dst_d0 = {{add_ln63_fu_522_p2[28:13]}};

assign grp_fu_538_p1 = grp_fu_538_p10;

assign grp_fu_538_p10 = dct_coeff_table_0_q0;

assign grp_fu_572_p2 = 29'd4096;

assign icmp_ln55_fu_419_p2 = ((ap_phi_mux_k_0_phi_fu_282_p4 == 4'd8) ? 1'b1 : 1'b0);

assign k_fu_425_p2 = (ap_phi_mux_k_0_phi_fu_282_p4 + 4'd1);

assign or_ln61_1_fu_329_p2 = (tmp_5_fu_301_p3 | 7'd2);

assign or_ln61_2_fu_344_p2 = (tmp_5_fu_301_p3 | 7'd3);

assign or_ln61_3_fu_359_p2 = (tmp_5_fu_301_p3 | 7'd4);

assign or_ln61_4_fu_374_p2 = (tmp_5_fu_301_p3 | 7'd5);

assign or_ln61_5_fu_389_p2 = (tmp_5_fu_301_p3 | 7'd6);

assign or_ln61_6_fu_404_p2 = (tmp_5_fu_301_p3 | 7'd7);

assign or_ln61_fu_314_p2 = (tmp_5_fu_301_p3 | 7'd1);

assign tmp_1_fu_395_p3 = {{57'd0}, {or_ln61_5_fu_389_p2}};

assign tmp_2_fu_410_p3 = {{57'd0}, {or_ln61_6_fu_404_p2}};

assign tmp_4_fu_289_p3 = {{dst_offset}, {3'd0}};

assign tmp_5_fu_301_p3 = {{src_offset}, {3'd0}};

assign tmp_6_fu_320_p3 = {{57'd0}, {or_ln61_fu_314_p2}};

assign tmp_7_fu_335_p3 = {{57'd0}, {or_ln61_1_fu_329_p2}};

assign tmp_8_fu_350_p3 = {{57'd0}, {or_ln61_2_fu_344_p2}};

assign tmp_9_fu_365_p3 = {{57'd0}, {or_ln61_3_fu_359_p2}};

assign tmp_s_fu_380_p3 = {{57'd0}, {or_ln61_4_fu_374_p2}};

assign zext_ln60_fu_431_p1 = ap_phi_mux_k_0_phi_fu_282_p4;

assign zext_ln61_1_fu_309_p1 = tmp_5_fu_301_p3;

assign zext_ln61_2_fu_297_p1 = tmp_4_fu_289_p3;

assign zext_ln63_1_fu_500_p1 = add_ln63_8_reg_650;

assign zext_ln63_fu_443_p1 = ap_phi_mux_k_0_phi_fu_282_p4;

always @ (posedge ap_clk) begin
    zext_ln61_2_reg_596[2:0] <= 3'b000;
    zext_ln61_2_reg_596[7] <= 1'b0;
    src_addr_reg_601[2:0] <= 3'b000;
    src_addr_1_reg_606[2:0] <= 3'b001;
    src_addr_2_reg_611[2:0] <= 3'b010;
    src_addr_3_reg_616[2:0] <= 3'b011;
    src_addr_4_reg_621[2:0] <= 3'b100;
    src_addr_5_reg_626[2:0] <= 3'b101;
    src_addr_6_reg_631[2:0] <= 3'b110;
    src_addr_7_reg_636[2:0] <= 3'b111;
end

endmodule //dct_1d2
