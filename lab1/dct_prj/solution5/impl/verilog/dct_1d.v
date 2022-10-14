// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dct_1d (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        src_address0,
        src_ce0,
        src_q0,
        src1_address0,
        src1_ce0,
        src1_q0,
        src2_address0,
        src2_ce0,
        src2_q0,
        src3_address0,
        src3_ce0,
        src3_q0,
        src4_address0,
        src4_ce0,
        src4_q0,
        src5_address0,
        src5_ce0,
        src5_q0,
        src6_address0,
        src6_ce0,
        src6_q0,
        src7_address0,
        src7_ce0,
        src7_q0,
        src_offset,
        dst_address0,
        dst_ce0,
        dst_we0,
        dst_d0,
        dst_offset
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state5 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [2:0] src_address0;
output   src_ce0;
input  [15:0] src_q0;
output  [2:0] src1_address0;
output   src1_ce0;
input  [15:0] src1_q0;
output  [2:0] src2_address0;
output   src2_ce0;
input  [15:0] src2_q0;
output  [2:0] src3_address0;
output   src3_ce0;
input  [15:0] src3_q0;
output  [2:0] src4_address0;
output   src4_ce0;
input  [15:0] src4_q0;
output  [2:0] src5_address0;
output   src5_ce0;
input  [15:0] src5_q0;
output  [2:0] src6_address0;
output   src6_ce0;
input  [15:0] src6_q0;
output  [2:0] src7_address0;
output   src7_ce0;
input  [15:0] src7_q0;
input  [3:0] src_offset;
output  [5:0] dst_address0;
output   dst_ce0;
output   dst_we0;
output  [15:0] dst_d0;
input  [3:0] dst_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg src_ce0;
reg src1_ce0;
reg src2_ce0;
reg src3_ce0;
reg src4_ce0;
reg src5_ce0;
reg src6_ce0;
reg src7_ce0;
reg dst_ce0;
reg dst_we0;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
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
wire  signed [14:0] dct_coeff_table_3_q0;
wire   [2:0] dct_coeff_table_4_address0;
reg    dct_coeff_table_4_ce0;
wire   [14:0] dct_coeff_table_4_q0;
wire   [2:0] dct_coeff_table_5_address0;
reg    dct_coeff_table_5_ce0;
wire  signed [14:0] dct_coeff_table_5_q0;
wire   [2:0] dct_coeff_table_6_address0;
reg    dct_coeff_table_6_ce0;
wire   [14:0] dct_coeff_table_6_q0;
wire   [2:0] dct_coeff_table_7_address0;
reg    dct_coeff_table_7_ce0;
wire  signed [14:0] dct_coeff_table_7_q0;
reg   [3:0] k_0_reg_305;
wire   [7:0] zext_ln48_1_fu_324_p1;
reg   [7:0] zext_ln48_1_reg_520;
reg   [2:0] src_addr_reg_525;
reg   [2:0] src1_addr_reg_530;
reg   [2:0] src2_addr_reg_535;
reg   [2:0] src3_addr_reg_540;
reg   [2:0] src4_addr_reg_545;
reg   [2:0] src5_addr_reg_550;
reg   [2:0] src6_addr_reg_555;
reg   [2:0] src7_addr_reg_560;
wire   [0:0] icmp_ln55_fu_340_p2;
reg   [0:0] icmp_ln55_reg_565;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln55_reg_565_pp0_iter1_reg;
wire   [3:0] k_fu_346_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [7:0] add_ln63_8_fu_368_p2;
reg   [7:0] add_ln63_8_reg_574;
reg   [7:0] add_ln63_8_reg_574_pp0_iter1_reg;
reg   [13:0] dct_coeff_table_0_lo_reg_619;
wire  signed [28:0] mul_ln61_1_fu_462_p2;
reg  signed [28:0] mul_ln61_1_reg_624;
reg  signed [14:0] dct_coeff_table_2_lo_reg_629;
wire  signed [28:0] mul_ln61_3_fu_468_p2;
reg  signed [28:0] mul_ln61_3_reg_634;
reg  signed [14:0] dct_coeff_table_4_lo_reg_639;
wire  signed [28:0] mul_ln61_5_fu_474_p2;
reg  signed [28:0] mul_ln61_5_reg_644;
reg  signed [14:0] dct_coeff_table_6_lo_reg_649;
wire  signed [28:0] grp_fu_480_p3;
reg  signed [28:0] add_ln63_5_reg_654;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter2;
wire   [63:0] zext_ln48_fu_328_p1;
wire   [63:0] zext_ln60_fu_352_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln63_1_fu_405_p1;
wire   [6:0] tmp_7_fu_316_p3;
wire   [7:0] zext_ln63_fu_364_p1;
wire  signed [28:0] grp_fu_488_p3;
wire  signed [28:0] grp_fu_496_p3;
wire  signed [28:0] grp_fu_504_p3;
wire  signed [28:0] grp_fu_512_p3;
(* use_dsp48 = "no" *) wire   [28:0] add_ln63_3_fu_437_p2;
(* use_dsp48 = "no" *) wire   [28:0] add_ln63_7_fu_441_p2;
wire   [28:0] add_ln63_fu_445_p2;
wire   [13:0] grp_fu_480_p2;
wire   [13:0] grp_fu_488_p0;
wire    ap_CS_fsm_state5;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [28:0] grp_fu_488_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
end

dct_1d_dct_coeff_bkb #(
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

dct_1d_dct_coeff_cud #(
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

dct_1d_dct_coeff_dEe #(
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

dct_1d_dct_coeff_eOg #(
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

dct_1d_dct_coeff_fYi #(
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

dct_1d_dct_coeff_g8j #(
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

dct_1d_dct_coeff_hbi #(
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

dct_1d_dct_coeff_ibs #(
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

dct_mul_mul_15s_1jbC #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_15s_1jbC_U10(
    .din0(dct_coeff_table_1_q0),
    .din1(src1_q0),
    .dout(mul_ln61_1_fu_462_p2)
);

dct_mul_mul_15s_1jbC #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_15s_1jbC_U11(
    .din0(dct_coeff_table_3_q0),
    .din1(src3_q0),
    .dout(mul_ln61_3_fu_468_p2)
);

dct_mul_mul_15s_1jbC #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 29 ))
dct_mul_mul_15s_1jbC_U12(
    .din0(dct_coeff_table_5_q0),
    .din1(src5_q0),
    .dout(mul_ln61_5_fu_474_p2)
);

dct_mac_muladd_15kbM #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 14 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_15kbM_U13(
    .din0(dct_coeff_table_7_q0),
    .din1(src7_q0),
    .din2(grp_fu_480_p2),
    .dout(grp_fu_480_p3)
);

dct_mac_muladd_14lbW #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_14lbW_U14(
    .din0(grp_fu_488_p0),
    .din1(src_q0),
    .din2(mul_ln61_1_reg_624),
    .dout(grp_fu_488_p3)
);

dct_mac_muladd_15mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_15mb6_U15(
    .din0(dct_coeff_table_2_lo_reg_629),
    .din1(src2_q0),
    .din2(mul_ln61_3_reg_634),
    .dout(grp_fu_496_p3)
);

dct_mac_muladd_15mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_15mb6_U16(
    .din0(dct_coeff_table_4_lo_reg_639),
    .din1(src4_q0),
    .din2(mul_ln61_5_reg_644),
    .dout(grp_fu_504_p3)
);

dct_mac_muladd_15mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 29 ),
    .dout_WIDTH( 29 ))
dct_mac_muladd_15mb6_U17(
    .din0(dct_coeff_table_6_lo_reg_649),
    .din1(src6_q0),
    .din2(add_ln63_5_reg_654),
    .dout(grp_fu_512_p3)
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
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_fu_340_p2 == 1'd0))) begin
        k_0_reg_305 <= k_fu_346_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        k_0_reg_305 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_reg_565 == 1'd0))) begin
        add_ln63_5_reg_654 <= grp_fu_480_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_fu_340_p2 == 1'd0))) begin
        add_ln63_8_reg_574 <= add_ln63_8_fu_368_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln63_8_reg_574_pp0_iter1_reg <= add_ln63_8_reg_574;
        icmp_ln55_reg_565 <= icmp_ln55_fu_340_p2;
        icmp_ln55_reg_565_pp0_iter1_reg <= icmp_ln55_reg_565;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln55_reg_565 == 1'd0))) begin
        dct_coeff_table_0_lo_reg_619 <= dct_coeff_table_0_q0;
        dct_coeff_table_2_lo_reg_629 <= dct_coeff_table_2_q0;
        dct_coeff_table_4_lo_reg_639 <= dct_coeff_table_4_q0;
        dct_coeff_table_6_lo_reg_649 <= dct_coeff_table_6_q0;
        mul_ln61_1_reg_624 <= mul_ln61_1_fu_462_p2;
        mul_ln61_3_reg_634 <= mul_ln61_3_fu_468_p2;
        mul_ln61_5_reg_644 <= mul_ln61_5_fu_474_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        src1_addr_reg_530 <= zext_ln48_fu_328_p1;
        src2_addr_reg_535 <= zext_ln48_fu_328_p1;
        src3_addr_reg_540 <= zext_ln48_fu_328_p1;
        src4_addr_reg_545 <= zext_ln48_fu_328_p1;
        src5_addr_reg_550 <= zext_ln48_fu_328_p1;
        src6_addr_reg_555 <= zext_ln48_fu_328_p1;
        src7_addr_reg_560 <= zext_ln48_fu_328_p1;
        src_addr_reg_525 <= zext_ln48_fu_328_p1;
        zext_ln48_1_reg_520[6 : 3] <= zext_ln48_1_fu_324_p1[6 : 3];
    end
end

always @ (*) begin
    if ((icmp_ln55_fu_340_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
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
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dst_ce0 = 1'b1;
    end else begin
        dst_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln55_reg_565_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dst_we0 = 1'b1;
    end else begin
        dst_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src1_ce0 = 1'b1;
    end else begin
        src1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src2_ce0 = 1'b1;
    end else begin
        src2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src3_ce0 = 1'b1;
    end else begin
        src3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src4_ce0 = 1'b1;
    end else begin
        src4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src5_ce0 = 1'b1;
    end else begin
        src5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src6_ce0 = 1'b1;
    end else begin
        src6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src7_ce0 = 1'b1;
    end else begin
        src7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src_ce0 = 1'b1;
    end else begin
        src_ce0 = 1'b0;
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
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln55_fu_340_p2 == 1'd1)) & ~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln55_fu_340_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln63_3_fu_437_p2 = ($signed(grp_fu_488_p3) + $signed(grp_fu_496_p3));

assign add_ln63_7_fu_441_p2 = ($signed(grp_fu_504_p3) + $signed(grp_fu_512_p3));

assign add_ln63_8_fu_368_p2 = (zext_ln48_1_reg_520 + zext_ln63_fu_364_p1);

assign add_ln63_fu_445_p2 = (add_ln63_3_fu_437_p2 + add_ln63_7_fu_441_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign dct_coeff_table_0_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_1_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_2_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_3_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_4_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_5_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_6_address0 = zext_ln60_fu_352_p1;

assign dct_coeff_table_7_address0 = zext_ln60_fu_352_p1;

assign dst_address0 = zext_ln63_1_fu_405_p1;

assign dst_d0 = {{add_ln63_fu_445_p2[28:13]}};

assign grp_fu_480_p2 = 29'd4096;

assign grp_fu_488_p0 = grp_fu_488_p00;

assign grp_fu_488_p00 = dct_coeff_table_0_lo_reg_619;

assign icmp_ln55_fu_340_p2 = ((k_0_reg_305 == 4'd8) ? 1'b1 : 1'b0);

assign k_fu_346_p2 = (k_0_reg_305 + 4'd1);

assign src1_address0 = src1_addr_reg_530;

assign src2_address0 = src2_addr_reg_535;

assign src3_address0 = src3_addr_reg_540;

assign src4_address0 = src4_addr_reg_545;

assign src5_address0 = src5_addr_reg_550;

assign src6_address0 = src6_addr_reg_555;

assign src7_address0 = src7_addr_reg_560;

assign src_address0 = src_addr_reg_525;

assign tmp_7_fu_316_p3 = {{dst_offset}, {3'd0}};

assign zext_ln48_1_fu_324_p1 = tmp_7_fu_316_p3;

assign zext_ln48_fu_328_p1 = src_offset;

assign zext_ln60_fu_352_p1 = k_0_reg_305;

assign zext_ln63_1_fu_405_p1 = add_ln63_8_reg_574_pp0_iter1_reg;

assign zext_ln63_fu_364_p1 = k_0_reg_305;

always @ (posedge ap_clk) begin
    zext_ln48_1_reg_520[2:0] <= 3'b000;
    zext_ln48_1_reg_520[7] <= 1'b0;
end

endmodule //dct_1d
