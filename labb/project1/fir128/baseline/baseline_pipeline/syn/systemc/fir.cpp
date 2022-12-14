// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> fir::ap_ST_fsm_state1 = "1";
const sc_lv<4> fir::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<4> fir::ap_ST_fsm_pp0_stage1 = "100";
const sc_lv<4> fir::ap_ST_fsm_state6 = "1000";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool fir::ap_const_boolean_1 = true;
const sc_lv<32> fir::ap_const_lv32_1 = "1";
const bool fir::ap_const_boolean_0 = false;
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<32> fir::ap_const_lv32_2 = "10";
const sc_lv<1> fir::ap_const_lv1_1 = "1";
const sc_lv<8> fir::ap_const_lv8_7F = "1111111";
const sc_lv<32> fir::ap_const_lv32_3 = "11";
const sc_lv<7> fir::ap_const_lv7_0 = "0000000";
const sc_lv<8> fir::ap_const_lv8_FF = "11111111";
const sc_lv<32> fir::ap_const_lv32_7 = "111";
const sc_lv<8> fir::ap_const_lv8_0 = "00000000";

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {
    shift_reg_U = new fir_shift_reg("shift_reg_U");
    shift_reg_U->clk(ap_clk);
    shift_reg_U->reset(ap_rst);
    shift_reg_U->address0(shift_reg_address0);
    shift_reg_U->ce0(shift_reg_ce0);
    shift_reg_U->we0(shift_reg_we0);
    shift_reg_U->d0(shift_reg_d0);
    shift_reg_U->q0(shift_reg_q0);
    c_U = new fir_c("c_U");
    c_U->clk(ap_clk);
    c_U->reset(ap_rst);
    c_U->address0(c_address0);
    c_U->ce0(c_ce0);
    c_U->q0(c_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_acc_fu_194_p2);
    sensitive << ( acc_0_reg_103 );
    sensitive << ( ap_phi_mux_p_pn_phi_fu_131_p4 );

    SC_METHOD(thread_add_ln32_fu_156_p2);
    sensitive << ( shl_ln32_fu_144_p2 );
    sensitive << ( shl_ln32_1_fu_150_p2 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_pp0_stage1);

    SC_METHOD(thread_ap_block_pp0_stage1_11001);

    SC_METHOD(thread_ap_block_pp0_stage1_subdone);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage1_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state5_pp0_stage1_iter1);

    SC_METHOD(thread_ap_condition_256);
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( icmp_ln31_fu_170_p2 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_condition_260);
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( icmp_ln31_fu_170_p2 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( tmp_1_fu_162_p3 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_120_p4);
    sensitive << ( i_0_reg_116 );
    sensitive << ( tmp_1_reg_210 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( i_reg_243 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_p_pn_phi_fu_131_p4);
    sensitive << ( tmp_1_reg_210_pp0_iter1_reg );
    sensitive << ( icmp_ln31_reg_214_pp0_iter1_reg );
    sensitive << ( mul_ln37_reg_248 );
    sensitive << ( ap_phi_reg_pp0_iter1_p_pn_reg_128 );

    SC_METHOD(thread_ap_phi_reg_pp0_iter0_p_pn_reg_128);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_c_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( zext_ln36_1_fu_181_p1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_c_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_grp_fu_137_p0);
    sensitive << ( i_0_reg_116 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_i_0_phi_fu_120_p4 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_grp_fu_137_p2);
    sensitive << ( grp_fu_137_p0 );

    SC_METHOD(thread_icmp_ln31_fu_170_p2);
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_i_0_phi_fu_120_p4 );

    SC_METHOD(thread_mul_ln37_fu_189_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( c_load_reg_238 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_mul_ln37_fu_189_p2);
    sensitive << ( shift_reg_load_reg_233 );
    sensitive << ( mul_ln37_fu_189_p0 );

    SC_METHOD(thread_shift_reg_address0);
    sensitive << ( zext_ln36_1_reg_223 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( zext_ln36_fu_176_p1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( ap_condition_256 );
    sensitive << ( ap_condition_260 );

    SC_METHOD(thread_shift_reg_ce0);
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( icmp_ln31_fu_170_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_shift_reg_d0);
    sensitive << ( x );
    sensitive << ( shift_reg_q0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( ap_condition_260 );

    SC_METHOD(thread_shift_reg_we0);
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( tmp_1_reg_210 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( icmp_ln31_fu_170_p2 );
    sensitive << ( icmp_ln31_reg_214 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_shl_ln32_1_fu_150_p2);
    sensitive << ( x );

    SC_METHOD(thread_shl_ln32_fu_144_p2);
    sensitive << ( x );

    SC_METHOD(thread_tmp_1_fu_162_p3);
    sensitive << ( ap_phi_mux_i_0_phi_fu_120_p4 );

    SC_METHOD(thread_y);
    sensitive << ( acc_0_reg_103 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_y_ap_vld);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_zext_ln36_1_fu_181_p1);
    sensitive << ( ap_phi_mux_i_0_phi_fu_120_p4 );

    SC_METHOD(thread_zext_ln36_fu_176_p1);
    sensitive << ( grp_fu_137_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_1_fu_162_p3 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_block_pp0_stage1_subdone );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, y, "(port)y");
    sc_trace(mVcdFile, y_ap_vld, "(port)y_ap_vld");
    sc_trace(mVcdFile, x, "(port)x");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, shift_reg_address0, "shift_reg_address0");
    sc_trace(mVcdFile, shift_reg_ce0, "shift_reg_ce0");
    sc_trace(mVcdFile, shift_reg_we0, "shift_reg_we0");
    sc_trace(mVcdFile, shift_reg_d0, "shift_reg_d0");
    sc_trace(mVcdFile, shift_reg_q0, "shift_reg_q0");
    sc_trace(mVcdFile, c_address0, "c_address0");
    sc_trace(mVcdFile, c_ce0, "c_ce0");
    sc_trace(mVcdFile, c_q0, "c_q0");
    sc_trace(mVcdFile, acc_0_reg_103, "acc_0_reg_103");
    sc_trace(mVcdFile, i_0_reg_116, "i_0_reg_116");
    sc_trace(mVcdFile, add_ln32_fu_156_p2, "add_ln32_fu_156_p2");
    sc_trace(mVcdFile, add_ln32_reg_205, "add_ln32_reg_205");
    sc_trace(mVcdFile, tmp_1_fu_162_p3, "tmp_1_fu_162_p3");
    sc_trace(mVcdFile, tmp_1_reg_210, "tmp_1_reg_210");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, tmp_1_reg_210_pp0_iter1_reg, "tmp_1_reg_210_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln31_fu_170_p2, "icmp_ln31_fu_170_p2");
    sc_trace(mVcdFile, icmp_ln31_reg_214, "icmp_ln31_reg_214");
    sc_trace(mVcdFile, icmp_ln31_reg_214_pp0_iter1_reg, "icmp_ln31_reg_214_pp0_iter1_reg");
    sc_trace(mVcdFile, zext_ln36_1_fu_181_p1, "zext_ln36_1_fu_181_p1");
    sc_trace(mVcdFile, zext_ln36_1_reg_223, "zext_ln36_1_reg_223");
    sc_trace(mVcdFile, shift_reg_load_reg_233, "shift_reg_load_reg_233");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage1, "ap_CS_fsm_pp0_stage1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage1_iter0, "ap_block_state3_pp0_stage1_iter0");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage1_iter1, "ap_block_state5_pp0_stage1_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage1_11001, "ap_block_pp0_stage1_11001");
    sc_trace(mVcdFile, c_load_reg_238, "c_load_reg_238");
    sc_trace(mVcdFile, grp_fu_137_p2, "grp_fu_137_p2");
    sc_trace(mVcdFile, i_reg_243, "i_reg_243");
    sc_trace(mVcdFile, mul_ln37_fu_189_p2, "mul_ln37_fu_189_p2");
    sc_trace(mVcdFile, mul_ln37_reg_248, "mul_ln37_reg_248");
    sc_trace(mVcdFile, acc_fu_194_p2, "acc_fu_194_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_block_pp0_stage1_subdone, "ap_block_pp0_stage1_subdone");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_120_p4, "ap_phi_mux_i_0_phi_fu_120_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_phi_mux_p_pn_phi_fu_131_p4, "ap_phi_mux_p_pn_phi_fu_131_p4");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter0_p_pn_reg_128, "ap_phi_reg_pp0_iter0_p_pn_reg_128");
    sc_trace(mVcdFile, ap_phi_reg_pp0_iter1_p_pn_reg_128, "ap_phi_reg_pp0_iter1_p_pn_reg_128");
    sc_trace(mVcdFile, zext_ln36_fu_176_p1, "zext_ln36_fu_176_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage1, "ap_block_pp0_stage1");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_fu_137_p0, "grp_fu_137_p0");
    sc_trace(mVcdFile, shl_ln32_fu_144_p2, "shl_ln32_fu_144_p2");
    sc_trace(mVcdFile, shl_ln32_1_fu_150_p2, "shl_ln32_1_fu_150_p2");
    sc_trace(mVcdFile, mul_ln37_fu_189_p0, "mul_ln37_fu_189_p0");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, ap_condition_256, "ap_condition_256");
    sc_trace(mVcdFile, ap_condition_260, "ap_condition_260");
#endif

    }
    mHdltvinHandle.open("fir.hdltvin.dat");
    mHdltvoutHandle.open("fir.hdltvout.dat");
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete shift_reg_U;
    delete c_U;
}

void fir::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        acc_0_reg_103 = ap_const_lv32_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(tmp_1_reg_210_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        acc_0_reg_103 = acc_fu_194_p2.read();
    }
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
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln31_reg_214.read(), ap_const_lv1_1))) {
        ap_phi_reg_pp0_iter1_p_pn_reg_128 = add_ln32_reg_205.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        ap_phi_reg_pp0_iter1_p_pn_reg_128 = ap_phi_reg_pp0_iter0_p_pn_reg_128.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_116 = ap_const_lv8_7F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        i_0_reg_116 = i_reg_243.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln32_reg_205 = add_ln32_fu_156_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln31_reg_214.read(), ap_const_lv1_0))) {
        c_load_reg_238 = c_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0))) {
        i_reg_243 = grp_fu_137_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0))) {
        icmp_ln31_reg_214 = icmp_ln31_fu_170_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln31_reg_214_pp0_iter1_reg = icmp_ln31_reg_214.read();
        tmp_1_reg_210 = ap_phi_mux_i_0_phi_fu_120_p4.read().range(7, 7);
        tmp_1_reg_210_pp0_iter1_reg = tmp_1_reg_210.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln31_reg_214.read(), ap_const_lv1_0))) {
        mul_ln37_reg_248 = mul_ln37_fu_189_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln31_reg_214.read(), ap_const_lv1_0))) {
        shift_reg_load_reg_233 = shift_reg_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_0))) {
        zext_ln36_1_reg_223 = zext_ln36_1_fu_181_p1.read();
    }
}

void fir::thread_acc_fu_194_p2() {
    acc_fu_194_p2 = (!ap_phi_mux_p_pn_phi_fu_131_p4.read().is_01() || !acc_0_reg_103.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_p_pn_phi_fu_131_p4.read()) + sc_biguint<32>(acc_0_reg_103.read()));
}

void fir::thread_add_ln32_fu_156_p2() {
    add_ln32_fu_156_p2 = (!shl_ln32_fu_144_p2.read().is_01() || !shl_ln32_1_fu_150_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shl_ln32_fu_144_p2.read()) + sc_biguint<32>(shl_ln32_1_fu_150_p2.read()));
}

void fir::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void fir::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void fir::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void fir::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
}

void fir::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_block_state5_pp0_stage1_iter1() {
    ap_block_state5_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void fir::thread_ap_condition_256() {
    ap_condition_256 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0));
}

void fir::thread_ap_condition_260() {
    ap_condition_260 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_1));
}

void fir::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void fir::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void fir::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void fir::thread_ap_phi_mux_i_0_phi_fu_120_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_120_p4 = i_reg_243.read();
    } else {
        ap_phi_mux_i_0_phi_fu_120_p4 = i_0_reg_116.read();
    }
}

void fir::thread_ap_phi_mux_p_pn_phi_fu_131_p4() {
    if ((esl_seteq<1,1,1>(tmp_1_reg_210_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_214_pp0_iter1_reg.read()))) {
        ap_phi_mux_p_pn_phi_fu_131_p4 = mul_ln37_reg_248.read();
    } else {
        ap_phi_mux_p_pn_phi_fu_131_p4 = ap_phi_reg_pp0_iter1_p_pn_reg_128.read();
    }
}

void fir::thread_ap_phi_reg_pp0_iter0_p_pn_reg_128() {
    ap_phi_reg_pp0_iter0_p_pn_reg_128 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void fir::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_c_address0() {
    c_address0 =  (sc_lv<7>) (zext_ln36_1_fu_181_p1.read());
}

void fir::thread_c_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void fir::thread_grp_fu_137_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_fu_137_p0 = i_0_reg_116.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_fu_137_p0 = ap_phi_mux_i_0_phi_fu_120_p4.read();
        } else {
            grp_fu_137_p0 = "XXXXXXXX";
        }
    } else {
        grp_fu_137_p0 = "XXXXXXXX";
    }
}

void fir::thread_grp_fu_137_p2() {
    grp_fu_137_p2 = (!grp_fu_137_p0.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<8>(): (sc_biguint<8>(grp_fu_137_p0.read()) + sc_bigint<8>(ap_const_lv8_FF));
}

void fir::thread_icmp_ln31_fu_170_p2() {
    icmp_ln31_fu_170_p2 = (!ap_phi_mux_i_0_phi_fu_120_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_120_p4.read() == ap_const_lv8_0);
}

void fir::thread_mul_ln37_fu_189_p0() {
    mul_ln37_fu_189_p0 = c_load_reg_238.read();
}

void fir::thread_mul_ln37_fu_189_p2() {
    mul_ln37_fu_189_p2 = (!mul_ln37_fu_189_p0.read().is_01() || !shift_reg_load_reg_233.read().is_01())? sc_lv<32>(): sc_bigint<5>(mul_ln37_fu_189_p0.read()) * sc_bigint<32>(shift_reg_load_reg_233.read());
}

void fir::thread_shift_reg_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            shift_reg_address0 =  (sc_lv<7>) (zext_ln36_1_reg_223.read());
        } else if (esl_seteq<1,1,1>(ap_condition_260.read(), ap_const_boolean_1)) {
            shift_reg_address0 = ap_const_lv7_0;
        } else if (esl_seteq<1,1,1>(ap_condition_256.read(), ap_const_boolean_1)) {
            shift_reg_address0 =  (sc_lv<7>) (zext_ln36_fu_176_p1.read());
        } else {
            shift_reg_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        shift_reg_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void fir::thread_shift_reg_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_1)))) {
        shift_reg_ce0 = ap_const_logic_1;
    } else {
        shift_reg_ce0 = ap_const_logic_0;
    }
}

void fir::thread_shift_reg_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            shift_reg_d0 = shift_reg_q0.read();
        } else if (esl_seteq<1,1,1>(ap_condition_260.read(), ap_const_boolean_1)) {
            shift_reg_d0 = x.read();
        } else {
            shift_reg_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        shift_reg_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_shift_reg_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(tmp_1_reg_210.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(icmp_ln31_reg_214.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln31_fu_170_p2.read(), ap_const_lv1_1)))) {
        shift_reg_we0 = ap_const_logic_1;
    } else {
        shift_reg_we0 = ap_const_logic_0;
    }
}

void fir::thread_shl_ln32_1_fu_150_p2() {
    shl_ln32_1_fu_150_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): x.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void fir::thread_shl_ln32_fu_144_p2() {
    shl_ln32_fu_144_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): x.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void fir::thread_tmp_1_fu_162_p3() {
    tmp_1_fu_162_p3 = ap_phi_mux_i_0_phi_fu_120_p4.read().range(7, 7);
}

void fir::thread_y() {
    y = acc_0_reg_103.read();
}

void fir::thread_y_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        y_ap_vld = ap_const_logic_1;
    } else {
        y_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_zext_ln36_1_fu_181_p1() {
    zext_ln36_1_fu_181_p1 = esl_zext<64,8>(ap_phi_mux_i_0_phi_fu_120_p4.read());
}

void fir::thread_zext_ln36_fu_176_p1() {
    zext_ln36_fu_176_p1 = esl_zext<64,8>(grp_fu_137_p2.read());
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_1_fu_162_p3.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<4>) ("XXXX");
            break;
    }
}

void fir::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y\" :  \"" << y.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_ap_vld\" :  \"" << y_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x\" :  \"" << x.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

