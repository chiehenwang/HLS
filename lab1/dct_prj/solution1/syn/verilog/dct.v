// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="dct,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.143000,HLS_SYN_LAT=2935,HLS_SYN_TPT=none,HLS_SYN_MEM=5,HLS_SYN_DSP=1,HLS_SYN_FF=246,HLS_SYN_LUT=964,HLS_VERSION=2020_1}" *)

module dct (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_r_address0,
        input_r_ce0,
        input_r_q0,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] input_r_address0;
output   input_r_ce0;
input  [15:0] input_r_q0;
output  [5:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [15:0] output_r_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg input_r_ce0;
reg output_r_ce0;
reg output_r_we0;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] r_fu_166_p2;
reg   [3:0] r_reg_313;
wire    ap_CS_fsm_state2;
wire   [5:0] shl_ln_fu_176_p3;
reg   [5:0] shl_ln_reg_318;
wire   [0:0] icmp_ln101_fu_160_p2;
wire   [7:0] zext_ln103_1_fu_192_p1;
reg   [7:0] zext_ln103_1_reg_323;
wire   [3:0] c_fu_206_p2;
reg   [3:0] c_reg_331;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln103_fu_200_p2;
wire   [7:0] add_ln104_1_fu_226_p2;
reg   [7:0] add_ln104_1_reg_341;
wire   [3:0] r_1_fu_241_p2;
reg   [3:0] r_1_reg_349;
wire    ap_CS_fsm_state6;
wire   [7:0] zext_ln116_fu_255_p1;
reg   [7:0] zext_ln116_reg_354;
wire   [0:0] icmp_ln113_fu_235_p2;
wire   [5:0] shl_ln1_fu_263_p3;
reg   [5:0] shl_ln1_reg_359;
wire   [3:0] c_1_fu_281_p2;
reg   [3:0] c_1_reg_367;
wire    ap_CS_fsm_state7;
wire   [0:0] icmp_ln115_fu_275_p2;
wire   [5:0] add_ln116_fu_301_p2;
reg   [5:0] add_ln116_reg_377;
reg   [5:0] buf_2d_in_address0;
reg    buf_2d_in_ce0;
reg    buf_2d_in_we0;
wire   [15:0] buf_2d_in_q0;
reg   [5:0] buf_2d_out_address0;
reg    buf_2d_out_ce0;
reg    buf_2d_out_we0;
wire   [15:0] buf_2d_out_q0;
wire    grp_dct_2d_fu_152_ap_start;
wire    grp_dct_2d_fu_152_ap_done;
wire    grp_dct_2d_fu_152_ap_idle;
wire    grp_dct_2d_fu_152_ap_ready;
wire   [5:0] grp_dct_2d_fu_152_in_block_address0;
wire    grp_dct_2d_fu_152_in_block_ce0;
wire   [5:0] grp_dct_2d_fu_152_out_block_address0;
wire    grp_dct_2d_fu_152_out_block_ce0;
wire    grp_dct_2d_fu_152_out_block_we0;
wire   [15:0] grp_dct_2d_fu_152_out_block_d0;
reg   [3:0] r_0_i_reg_108;
reg   [3:0] c_0_i_reg_119;
wire    ap_CS_fsm_state4;
reg   [3:0] r_0_i2_reg_130;
wire    ap_CS_fsm_state5;
reg   [3:0] c_0_i4_reg_141;
wire    ap_CS_fsm_state8;
reg    grp_dct_2d_fu_152_ap_start_reg;
wire   [63:0] zext_ln104_fu_217_p1;
wire   [63:0] zext_ln104_2_fu_231_p1;
wire   [63:0] zext_ln116_3_fu_296_p1;
wire   [63:0] zext_ln116_2_fu_306_p1;
wire   [2:0] trunc_ln104_fu_172_p1;
wire   [6:0] tmp_9_fu_184_p3;
wire   [5:0] zext_ln103_fu_196_p1;
wire   [5:0] add_ln104_fu_212_p2;
wire   [7:0] zext_ln104_1_fu_222_p1;
wire   [6:0] tmp_s_fu_247_p3;
wire   [2:0] trunc_ln116_fu_259_p1;
wire   [7:0] zext_ln116_1_fu_287_p1;
wire   [7:0] add_ln116_1_fu_291_p2;
wire   [5:0] zext_ln115_fu_271_p1;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
#0 grp_dct_2d_fu_152_ap_start_reg = 1'b0;
end

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
buf_2d_in_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_address0),
    .ce0(buf_2d_in_ce0),
    .we0(buf_2d_in_we0),
    .d0(input_r_q0),
    .q0(buf_2d_in_q0)
);

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
buf_2d_out_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_out_address0),
    .ce0(buf_2d_out_ce0),
    .we0(buf_2d_out_we0),
    .d0(grp_dct_2d_fu_152_out_block_d0),
    .q0(buf_2d_out_q0)
);

dct_2d grp_dct_2d_fu_152(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_dct_2d_fu_152_ap_start),
    .ap_done(grp_dct_2d_fu_152_ap_done),
    .ap_idle(grp_dct_2d_fu_152_ap_idle),
    .ap_ready(grp_dct_2d_fu_152_ap_ready),
    .in_block_address0(grp_dct_2d_fu_152_in_block_address0),
    .in_block_ce0(grp_dct_2d_fu_152_in_block_ce0),
    .in_block_q0(buf_2d_in_q0),
    .out_block_address0(grp_dct_2d_fu_152_out_block_address0),
    .out_block_ce0(grp_dct_2d_fu_152_out_block_ce0),
    .out_block_we0(grp_dct_2d_fu_152_out_block_we0),
    .out_block_d0(grp_dct_2d_fu_152_out_block_d0)
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
        grp_dct_2d_fu_152_ap_start_reg <= 1'b0;
    end else begin
        if (((icmp_ln101_fu_160_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            grp_dct_2d_fu_152_ap_start_reg <= 1'b1;
        end else if ((grp_dct_2d_fu_152_ap_ready == 1'b1)) begin
            grp_dct_2d_fu_152_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        c_0_i4_reg_141 <= c_1_reg_367;
    end else if (((icmp_ln113_fu_235_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        c_0_i4_reg_141 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        c_0_i_reg_119 <= c_reg_331;
    end else if (((icmp_ln101_fu_160_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        c_0_i_reg_119 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln115_fu_275_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        r_0_i2_reg_130 <= r_1_reg_349;
    end else if (((1'b1 == ap_CS_fsm_state5) & (grp_dct_2d_fu_152_ap_done == 1'b1))) begin
        r_0_i2_reg_130 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_200_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        r_0_i_reg_108 <= r_reg_313;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        r_0_i_reg_108 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln103_fu_200_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        add_ln104_1_reg_341 <= add_ln104_1_fu_226_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln115_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        add_ln116_reg_377 <= add_ln116_fu_301_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        c_1_reg_367 <= c_1_fu_281_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        c_reg_331 <= c_fu_206_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_1_reg_349 <= r_1_fu_241_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        r_reg_313 <= r_fu_166_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln113_fu_235_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        shl_ln1_reg_359[5 : 3] <= shl_ln1_fu_263_p3[5 : 3];
        zext_ln116_reg_354[6 : 3] <= zext_ln116_fu_255_p1[6 : 3];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln101_fu_160_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        shl_ln_reg_318[5 : 3] <= shl_ln_fu_176_p3[5 : 3];
        zext_ln103_1_reg_323[6 : 3] <= zext_ln103_1_fu_192_p1[6 : 3];
    end
end

always @ (*) begin
    if (((icmp_ln113_fu_235_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
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
    if (((icmp_ln113_fu_235_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_address0 = zext_ln104_2_fu_231_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buf_2d_in_address0 = grp_dct_2d_fu_152_in_block_address0;
    end else begin
        buf_2d_in_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buf_2d_in_ce0 = grp_dct_2d_fu_152_in_block_ce0;
    end else begin
        buf_2d_in_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_we0 = 1'b1;
    end else begin
        buf_2d_in_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        buf_2d_out_address0 = zext_ln116_3_fu_296_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buf_2d_out_address0 = grp_dct_2d_fu_152_out_block_address0;
    end else begin
        buf_2d_out_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        buf_2d_out_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        buf_2d_out_ce0 = grp_dct_2d_fu_152_out_block_ce0;
    end else begin
        buf_2d_out_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        buf_2d_out_we0 = grp_dct_2d_fu_152_out_block_we0;
    end else begin
        buf_2d_out_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        input_r_ce0 = 1'b1;
    end else begin
        input_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln101_fu_160_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln103_fu_200_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (grp_dct_2d_fu_152_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((icmp_ln113_fu_235_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((icmp_ln115_fu_275_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln104_1_fu_226_p2 = (zext_ln103_1_reg_323 + zext_ln104_1_fu_222_p1);

assign add_ln104_fu_212_p2 = (zext_ln103_fu_196_p1 + shl_ln_reg_318);

assign add_ln116_1_fu_291_p2 = (zext_ln116_reg_354 + zext_ln116_1_fu_287_p1);

assign add_ln116_fu_301_p2 = (zext_ln115_fu_271_p1 + shl_ln1_reg_359);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign c_1_fu_281_p2 = (c_0_i4_reg_141 + 4'd1);

assign c_fu_206_p2 = (c_0_i_reg_119 + 4'd1);

assign grp_dct_2d_fu_152_ap_start = grp_dct_2d_fu_152_ap_start_reg;

assign icmp_ln101_fu_160_p2 = ((r_0_i_reg_108 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln103_fu_200_p2 = ((c_0_i_reg_119 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln113_fu_235_p2 = ((r_0_i2_reg_130 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln115_fu_275_p2 = ((c_0_i4_reg_141 == 4'd8) ? 1'b1 : 1'b0);

assign input_r_address0 = zext_ln104_fu_217_p1;

assign output_r_address0 = zext_ln116_2_fu_306_p1;

assign output_r_d0 = buf_2d_out_q0;

assign r_1_fu_241_p2 = (r_0_i2_reg_130 + 4'd1);

assign r_fu_166_p2 = (r_0_i_reg_108 + 4'd1);

assign shl_ln1_fu_263_p3 = {{trunc_ln116_fu_259_p1}, {3'd0}};

assign shl_ln_fu_176_p3 = {{trunc_ln104_fu_172_p1}, {3'd0}};

assign tmp_9_fu_184_p3 = {{r_0_i_reg_108}, {3'd0}};

assign tmp_s_fu_247_p3 = {{r_0_i2_reg_130}, {3'd0}};

assign trunc_ln104_fu_172_p1 = r_0_i_reg_108[2:0];

assign trunc_ln116_fu_259_p1 = r_0_i2_reg_130[2:0];

assign zext_ln103_1_fu_192_p1 = tmp_9_fu_184_p3;

assign zext_ln103_fu_196_p1 = c_0_i_reg_119;

assign zext_ln104_1_fu_222_p1 = c_0_i_reg_119;

assign zext_ln104_2_fu_231_p1 = add_ln104_1_reg_341;

assign zext_ln104_fu_217_p1 = add_ln104_fu_212_p2;

assign zext_ln115_fu_271_p1 = c_0_i4_reg_141;

assign zext_ln116_1_fu_287_p1 = c_0_i4_reg_141;

assign zext_ln116_2_fu_306_p1 = add_ln116_reg_377;

assign zext_ln116_3_fu_296_p1 = add_ln116_1_fu_291_p2;

assign zext_ln116_fu_255_p1 = tmp_s_fu_247_p3;

always @ (posedge ap_clk) begin
    shl_ln_reg_318[2:0] <= 3'b000;
    zext_ln103_1_reg_323[2:0] <= 3'b000;
    zext_ln103_1_reg_323[7] <= 1'b0;
    zext_ln116_reg_354[2:0] <= 3'b000;
    zext_ln116_reg_354[7] <= 1'b0;
    shl_ln1_reg_359[2:0] <= 3'b000;
end

endmodule //dct