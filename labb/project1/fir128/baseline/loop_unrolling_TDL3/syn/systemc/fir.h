// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fir_HH_
#define _fir_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "fir_shift_reg.h"
#include "fir_c.h"

namespace ap_rtl {

struct fir : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > y;
    sc_out< sc_logic > y_ap_vld;
    sc_in< sc_lv<32> > x;


    // Module declarations
    fir(sc_module_name name);
    SC_HAS_PROCESS(fir);

    ~fir();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    fir_shift_reg* shift_reg_U;
    fir_c* c_U;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > shift_reg_address0;
    sc_signal< sc_logic > shift_reg_ce0;
    sc_signal< sc_logic > shift_reg_we0;
    sc_signal< sc_lv<32> > shift_reg_d0;
    sc_signal< sc_lv<32> > shift_reg_q0;
    sc_signal< sc_lv<7> > shift_reg_address1;
    sc_signal< sc_logic > shift_reg_ce1;
    sc_signal< sc_logic > shift_reg_we1;
    sc_signal< sc_lv<32> > shift_reg_d1;
    sc_signal< sc_lv<32> > shift_reg_q1;
    sc_signal< sc_lv<7> > c_address0;
    sc_signal< sc_logic > c_ce0;
    sc_signal< sc_lv<5> > c_q0;
    sc_signal< sc_lv<32> > i_0_0_cast_fu_165_p1;
    sc_signal< sc_lv<32> > i_0_0_cast_reg_274;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln30_fu_169_p2;
    sc_signal< sc_lv<1> > icmp_ln30_reg_279;
    sc_signal< sc_lv<7> > shift_reg_addr_reg_283;
    sc_signal< sc_lv<1> > icmp_ln30_1_fu_186_p2;
    sc_signal< sc_lv<1> > icmp_ln30_1_reg_289;
    sc_signal< sc_lv<7> > shift_reg_addr_3_reg_293;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln30_2_fu_211_p2;
    sc_signal< sc_lv<1> > icmp_ln30_2_reg_298;
    sc_signal< sc_lv<8> > add_ln31_2_fu_217_p2;
    sc_signal< sc_lv<8> > add_ln31_2_reg_302;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > tmp_fu_236_p3;
    sc_signal< sc_lv<8> > i_fu_250_p2;
    sc_signal< sc_lv<8> > i_reg_325;
    sc_signal< sc_lv<32> > shift_reg_load_1_reg_330;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<5> > c_load_reg_335;
    sc_signal< sc_lv<32> > mul_ln38_fu_259_p2;
    sc_signal< sc_lv<32> > mul_ln38_reg_340;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > acc_fu_264_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<8> > i_0_0_reg_129;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > acc_0_reg_141;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > i_1_reg_154;
    sc_signal< sc_lv<64> > zext_ln31_fu_181_p1;
    sc_signal< sc_lv<64> > zext_ln31_1_fu_192_p1;
    sc_signal< sc_lv<64> > zext_ln31_2_fu_206_p1;
    sc_signal< sc_lv<64> > zext_ln31_3_fu_227_p1;
    sc_signal< sc_lv<64> > zext_ln38_fu_244_p1;
    sc_signal< sc_lv<8> > add_ln31_fu_175_p2;
    sc_signal< sc_lv<8> > add_ln31_1_fu_196_p2;
    sc_signal< sc_lv<32> > sext_ln31_fu_202_p1;
    sc_signal< sc_lv<32> > sext_ln31_1_fu_223_p1;
    sc_signal< sc_lv<32> > sext_ln37_fu_232_p1;
    sc_signal< sc_lv<5> > mul_ln38_fu_259_p1;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_FE;
    static const sc_lv<8> ap_const_lv8_FD;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_fu_264_p2();
    void thread_add_ln31_1_fu_196_p2();
    void thread_add_ln31_2_fu_217_p2();
    void thread_add_ln31_fu_175_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_i_0_0_cast_fu_165_p1();
    void thread_i_fu_250_p2();
    void thread_icmp_ln30_1_fu_186_p2();
    void thread_icmp_ln30_2_fu_211_p2();
    void thread_icmp_ln30_fu_169_p2();
    void thread_mul_ln38_fu_259_p1();
    void thread_mul_ln38_fu_259_p2();
    void thread_sext_ln31_1_fu_223_p1();
    void thread_sext_ln31_fu_202_p1();
    void thread_sext_ln37_fu_232_p1();
    void thread_shift_reg_address0();
    void thread_shift_reg_address1();
    void thread_shift_reg_ce0();
    void thread_shift_reg_ce1();
    void thread_shift_reg_d0();
    void thread_shift_reg_d1();
    void thread_shift_reg_we0();
    void thread_shift_reg_we1();
    void thread_tmp_fu_236_p3();
    void thread_y();
    void thread_y_ap_vld();
    void thread_zext_ln31_1_fu_192_p1();
    void thread_zext_ln31_2_fu_206_p1();
    void thread_zext_ln31_3_fu_227_p1();
    void thread_zext_ln31_fu_181_p1();
    void thread_zext_ln38_fu_244_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif