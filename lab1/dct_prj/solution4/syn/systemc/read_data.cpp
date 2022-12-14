// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "read_data.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic read_data::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic read_data::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> read_data::ap_ST_fsm_state1 = "1";
const sc_lv<3> read_data::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<3> read_data::ap_ST_fsm_state4 = "100";
const bool read_data::ap_const_boolean_1 = true;
const sc_lv<32> read_data::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> read_data::ap_const_lv32_1 = "1";
const bool read_data::ap_const_boolean_0 = false;
const sc_lv<1> read_data::ap_const_lv1_0 = "0";
const sc_lv<1> read_data::ap_const_lv1_1 = "1";
const sc_lv<7> read_data::ap_const_lv7_0 = "0000000";
const sc_lv<4> read_data::ap_const_lv4_0 = "0000";
const sc_lv<3> read_data::ap_const_lv3_6 = "110";
const sc_lv<3> read_data::ap_const_lv3_5 = "101";
const sc_lv<3> read_data::ap_const_lv3_4 = "100";
const sc_lv<3> read_data::ap_const_lv3_3 = "11";
const sc_lv<3> read_data::ap_const_lv3_2 = "10";
const sc_lv<3> read_data::ap_const_lv3_1 = "1";
const sc_lv<3> read_data::ap_const_lv3_0 = "000";
const sc_lv<3> read_data::ap_const_lv3_7 = "111";
const sc_lv<7> read_data::ap_const_lv7_40 = "1000000";
const sc_lv<7> read_data::ap_const_lv7_1 = "1";
const sc_lv<4> read_data::ap_const_lv4_1 = "1";
const sc_lv<4> read_data::ap_const_lv4_8 = "1000";
const sc_lv<32> read_data::ap_const_lv32_2 = "10";

read_data::read_data(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln103_fu_234_p2);
    sensitive << ( indvar_flatten_reg_195 );

    SC_METHOD(thread_add_ln106_fu_284_p2);
    sensitive << ( zext_ln105_fu_280_p1 );
    sensitive << ( shl_ln106_mid2_fu_272_p3 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln103_fu_228_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_r_0_phi_fu_210_p4);
    sensitive << ( r_0_reg_206 );
    sensitive << ( icmp_ln103_reg_316 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( select_ln103_1_reg_325 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buf_0_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_0_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_0_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_0_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_1_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_1_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_1_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_1_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_2_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_2_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_2_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_2_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_3_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_3_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_3_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_3_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_4_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_4_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_4_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_4_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_5_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_5_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_5_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_5_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_6_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_6_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_6_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_6_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_7_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln103_fu_305_p1 );

    SC_METHOD(thread_buf_7_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_buf_7_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_buf_7_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( trunc_ln106_reg_336 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_c_fu_299_p2);
    sensitive << ( select_ln103_fu_252_p3 );

    SC_METHOD(thread_icmp_ln103_fu_228_p2);
    sensitive << ( indvar_flatten_reg_195 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_ln105_fu_246_p2);
    sensitive << ( c_0_reg_217 );
    sensitive << ( icmp_ln103_fu_228_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_input_r_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln106_fu_290_p1 );

    SC_METHOD(thread_input_r_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_r_fu_240_p2);
    sensitive << ( ap_phi_mux_r_0_phi_fu_210_p4 );

    SC_METHOD(thread_select_ln103_1_fu_260_p3);
    sensitive << ( ap_phi_mux_r_0_phi_fu_210_p4 );
    sensitive << ( icmp_ln105_fu_246_p2 );
    sensitive << ( r_fu_240_p2 );

    SC_METHOD(thread_select_ln103_fu_252_p3);
    sensitive << ( c_0_reg_217 );
    sensitive << ( icmp_ln105_fu_246_p2 );

    SC_METHOD(thread_shl_ln106_mid2_fu_272_p3);
    sensitive << ( trunc_ln103_fu_268_p1 );

    SC_METHOD(thread_trunc_ln103_fu_268_p1);
    sensitive << ( select_ln103_1_fu_260_p3 );

    SC_METHOD(thread_trunc_ln106_fu_295_p1);
    sensitive << ( select_ln103_fu_252_p3 );

    SC_METHOD(thread_zext_ln103_fu_305_p1);
    sensitive << ( select_ln103_1_reg_325 );

    SC_METHOD(thread_zext_ln105_fu_280_p1);
    sensitive << ( select_ln103_fu_252_p3 );

    SC_METHOD(thread_zext_ln106_fu_290_p1);
    sensitive << ( add_ln106_fu_284_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln103_fu_228_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "read_data_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, input_r_address0, "(port)input_r_address0");
    sc_trace(mVcdFile, input_r_ce0, "(port)input_r_ce0");
    sc_trace(mVcdFile, input_r_q0, "(port)input_r_q0");
    sc_trace(mVcdFile, buf_0_address0, "(port)buf_0_address0");
    sc_trace(mVcdFile, buf_0_ce0, "(port)buf_0_ce0");
    sc_trace(mVcdFile, buf_0_we0, "(port)buf_0_we0");
    sc_trace(mVcdFile, buf_0_d0, "(port)buf_0_d0");
    sc_trace(mVcdFile, buf_1_address0, "(port)buf_1_address0");
    sc_trace(mVcdFile, buf_1_ce0, "(port)buf_1_ce0");
    sc_trace(mVcdFile, buf_1_we0, "(port)buf_1_we0");
    sc_trace(mVcdFile, buf_1_d0, "(port)buf_1_d0");
    sc_trace(mVcdFile, buf_2_address0, "(port)buf_2_address0");
    sc_trace(mVcdFile, buf_2_ce0, "(port)buf_2_ce0");
    sc_trace(mVcdFile, buf_2_we0, "(port)buf_2_we0");
    sc_trace(mVcdFile, buf_2_d0, "(port)buf_2_d0");
    sc_trace(mVcdFile, buf_3_address0, "(port)buf_3_address0");
    sc_trace(mVcdFile, buf_3_ce0, "(port)buf_3_ce0");
    sc_trace(mVcdFile, buf_3_we0, "(port)buf_3_we0");
    sc_trace(mVcdFile, buf_3_d0, "(port)buf_3_d0");
    sc_trace(mVcdFile, buf_4_address0, "(port)buf_4_address0");
    sc_trace(mVcdFile, buf_4_ce0, "(port)buf_4_ce0");
    sc_trace(mVcdFile, buf_4_we0, "(port)buf_4_we0");
    sc_trace(mVcdFile, buf_4_d0, "(port)buf_4_d0");
    sc_trace(mVcdFile, buf_5_address0, "(port)buf_5_address0");
    sc_trace(mVcdFile, buf_5_ce0, "(port)buf_5_ce0");
    sc_trace(mVcdFile, buf_5_we0, "(port)buf_5_we0");
    sc_trace(mVcdFile, buf_5_d0, "(port)buf_5_d0");
    sc_trace(mVcdFile, buf_6_address0, "(port)buf_6_address0");
    sc_trace(mVcdFile, buf_6_ce0, "(port)buf_6_ce0");
    sc_trace(mVcdFile, buf_6_we0, "(port)buf_6_we0");
    sc_trace(mVcdFile, buf_6_d0, "(port)buf_6_d0");
    sc_trace(mVcdFile, buf_7_address0, "(port)buf_7_address0");
    sc_trace(mVcdFile, buf_7_ce0, "(port)buf_7_ce0");
    sc_trace(mVcdFile, buf_7_we0, "(port)buf_7_we0");
    sc_trace(mVcdFile, buf_7_d0, "(port)buf_7_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, indvar_flatten_reg_195, "indvar_flatten_reg_195");
    sc_trace(mVcdFile, r_0_reg_206, "r_0_reg_206");
    sc_trace(mVcdFile, c_0_reg_217, "c_0_reg_217");
    sc_trace(mVcdFile, icmp_ln103_fu_228_p2, "icmp_ln103_fu_228_p2");
    sc_trace(mVcdFile, icmp_ln103_reg_316, "icmp_ln103_reg_316");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, add_ln103_fu_234_p2, "add_ln103_fu_234_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, select_ln103_1_fu_260_p3, "select_ln103_1_fu_260_p3");
    sc_trace(mVcdFile, select_ln103_1_reg_325, "select_ln103_1_reg_325");
    sc_trace(mVcdFile, trunc_ln106_fu_295_p1, "trunc_ln106_fu_295_p1");
    sc_trace(mVcdFile, trunc_ln106_reg_336, "trunc_ln106_reg_336");
    sc_trace(mVcdFile, c_fu_299_p2, "c_fu_299_p2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_phi_mux_r_0_phi_fu_210_p4, "ap_phi_mux_r_0_phi_fu_210_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, zext_ln106_fu_290_p1, "zext_ln106_fu_290_p1");
    sc_trace(mVcdFile, zext_ln103_fu_305_p1, "zext_ln103_fu_305_p1");
    sc_trace(mVcdFile, icmp_ln105_fu_246_p2, "icmp_ln105_fu_246_p2");
    sc_trace(mVcdFile, r_fu_240_p2, "r_fu_240_p2");
    sc_trace(mVcdFile, trunc_ln103_fu_268_p1, "trunc_ln103_fu_268_p1");
    sc_trace(mVcdFile, select_ln103_fu_252_p3, "select_ln103_fu_252_p3");
    sc_trace(mVcdFile, zext_ln105_fu_280_p1, "zext_ln105_fu_280_p1");
    sc_trace(mVcdFile, shl_ln106_mid2_fu_272_p3, "shl_ln106_mid2_fu_272_p3");
    sc_trace(mVcdFile, add_ln106_fu_284_p2, "add_ln106_fu_284_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

read_data::~read_data() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void read_data::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_0))) {
        c_0_reg_217 = c_fu_299_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        c_0_reg_217 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_195 = add_ln103_fu_234_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_195 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln103_reg_316.read(), ap_const_lv1_0))) {
        r_0_reg_206 = select_ln103_1_reg_325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        r_0_reg_206 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln103_reg_316 = icmp_ln103_fu_228_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_0))) {
        select_ln103_1_reg_325 = select_ln103_1_fu_260_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_0))) {
        trunc_ln106_reg_336 = trunc_ln106_fu_295_p1.read();
    }
}

void read_data::thread_add_ln103_fu_234_p2() {
    add_ln103_fu_234_p2 = (!indvar_flatten_reg_195.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(indvar_flatten_reg_195.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void read_data::thread_add_ln106_fu_284_p2() {
    add_ln106_fu_284_p2 = (!zext_ln105_fu_280_p1.read().is_01() || !shl_ln106_mid2_fu_272_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln105_fu_280_p1.read()) + sc_biguint<6>(shl_ln106_mid2_fu_272_p3.read()));
}

void read_data::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void read_data::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void read_data::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void read_data::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void read_data::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void read_data::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void read_data::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void read_data::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void read_data::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void read_data::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void read_data::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void read_data::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void read_data::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void read_data::thread_ap_phi_mux_r_0_phi_fu_210_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln103_reg_316.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_r_0_phi_fu_210_p4 = select_ln103_1_reg_325.read();
    } else {
        ap_phi_mux_r_0_phi_fu_210_p4 = r_0_reg_206.read();
    }
}

void read_data::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void read_data::thread_buf_0_address0() {
    buf_0_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_0_ce0 = ap_const_logic_1;
    } else {
        buf_0_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_0_d0() {
    buf_0_d0 = input_r_q0.read();
}

void read_data::thread_buf_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_0))) {
        buf_0_we0 = ap_const_logic_1;
    } else {
        buf_0_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_1_address0() {
    buf_1_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_1_ce0 = ap_const_logic_1;
    } else {
        buf_1_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_1_d0() {
    buf_1_d0 = input_r_q0.read();
}

void read_data::thread_buf_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_1))) {
        buf_1_we0 = ap_const_logic_1;
    } else {
        buf_1_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_2_address0() {
    buf_2_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_2_ce0 = ap_const_logic_1;
    } else {
        buf_2_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_2_d0() {
    buf_2_d0 = input_r_q0.read();
}

void read_data::thread_buf_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_2))) {
        buf_2_we0 = ap_const_logic_1;
    } else {
        buf_2_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_3_address0() {
    buf_3_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_3_ce0 = ap_const_logic_1;
    } else {
        buf_3_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_3_d0() {
    buf_3_d0 = input_r_q0.read();
}

void read_data::thread_buf_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_3))) {
        buf_3_we0 = ap_const_logic_1;
    } else {
        buf_3_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_4_address0() {
    buf_4_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_4_ce0 = ap_const_logic_1;
    } else {
        buf_4_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_4_d0() {
    buf_4_d0 = input_r_q0.read();
}

void read_data::thread_buf_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_4))) {
        buf_4_we0 = ap_const_logic_1;
    } else {
        buf_4_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_5_address0() {
    buf_5_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_5_ce0 = ap_const_logic_1;
    } else {
        buf_5_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_5_d0() {
    buf_5_d0 = input_r_q0.read();
}

void read_data::thread_buf_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_5))) {
        buf_5_we0 = ap_const_logic_1;
    } else {
        buf_5_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_6_address0() {
    buf_6_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_6_ce0 = ap_const_logic_1;
    } else {
        buf_6_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_6_d0() {
    buf_6_d0 = input_r_q0.read();
}

void read_data::thread_buf_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_6))) {
        buf_6_we0 = ap_const_logic_1;
    } else {
        buf_6_we0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_7_address0() {
    buf_7_address0 =  (sc_lv<3>) (zext_ln103_fu_305_p1.read());
}

void read_data::thread_buf_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        buf_7_ce0 = ap_const_logic_1;
    } else {
        buf_7_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_buf_7_d0() {
    buf_7_d0 = input_r_q0.read();
}

void read_data::thread_buf_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,3,3>(trunc_ln106_reg_336.read(), ap_const_lv3_7))) {
        buf_7_we0 = ap_const_logic_1;
    } else {
        buf_7_we0 = ap_const_logic_0;
    }
}

void read_data::thread_c_fu_299_p2() {
    c_fu_299_p2 = (!select_ln103_fu_252_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln103_fu_252_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void read_data::thread_icmp_ln103_fu_228_p2() {
    icmp_ln103_fu_228_p2 = (!indvar_flatten_reg_195.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_195.read() == ap_const_lv7_40);
}

void read_data::thread_icmp_ln105_fu_246_p2() {
    icmp_ln105_fu_246_p2 = (!c_0_reg_217.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(c_0_reg_217.read() == ap_const_lv4_8);
}

void read_data::thread_input_r_address0() {
    input_r_address0 =  (sc_lv<6>) (zext_ln106_fu_290_p1.read());
}

void read_data::thread_input_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_r_ce0 = ap_const_logic_1;
    } else {
        input_r_ce0 = ap_const_logic_0;
    }
}

void read_data::thread_r_fu_240_p2() {
    r_fu_240_p2 = (!ap_const_lv4_1.is_01() || !ap_phi_mux_r_0_phi_fu_210_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(ap_phi_mux_r_0_phi_fu_210_p4.read()));
}

void read_data::thread_select_ln103_1_fu_260_p3() {
    select_ln103_1_fu_260_p3 = (!icmp_ln105_fu_246_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln105_fu_246_p2.read()[0].to_bool())? r_fu_240_p2.read(): ap_phi_mux_r_0_phi_fu_210_p4.read());
}

void read_data::thread_select_ln103_fu_252_p3() {
    select_ln103_fu_252_p3 = (!icmp_ln105_fu_246_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln105_fu_246_p2.read()[0].to_bool())? ap_const_lv4_0: c_0_reg_217.read());
}

void read_data::thread_shl_ln106_mid2_fu_272_p3() {
    shl_ln106_mid2_fu_272_p3 = esl_concat<3,3>(trunc_ln103_fu_268_p1.read(), ap_const_lv3_0);
}

void read_data::thread_trunc_ln103_fu_268_p1() {
    trunc_ln103_fu_268_p1 = select_ln103_1_fu_260_p3.read().range(3-1, 0);
}

void read_data::thread_trunc_ln106_fu_295_p1() {
    trunc_ln106_fu_295_p1 = select_ln103_fu_252_p3.read().range(3-1, 0);
}

void read_data::thread_zext_ln103_fu_305_p1() {
    zext_ln103_fu_305_p1 = esl_zext<64,4>(select_ln103_1_reg_325.read());
}

void read_data::thread_zext_ln105_fu_280_p1() {
    zext_ln105_fu_280_p1 = esl_zext<6,4>(select_ln103_fu_252_p3.read());
}

void read_data::thread_zext_ln106_fu_290_p1() {
    zext_ln106_fu_290_p1 = esl_zext<64,6>(add_ln106_fu_284_p2.read());
}

void read_data::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln103_fu_228_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

