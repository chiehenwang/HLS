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
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > shift_reg_address0;
    sc_signal< sc_logic > shift_reg_ce0;
    sc_signal< sc_logic > shift_reg_we0;
    sc_signal< sc_lv<32> > shift_reg_d0;
    sc_signal< sc_lv<32> > shift_reg_q0;
    sc_signal< sc_lv<7> > c_address0;
    sc_signal< sc_logic > c_ce0;
    sc_signal< sc_lv<5> > c_q0;
    sc_signal< sc_lv<32> > add_ln33_fu_148_p2;
    sc_signal< sc_lv<32> > add_ln33_reg_201;
    sc_signal< sc_lv<1> > icmp_ln32_fu_166_p2;
    sc_signal< sc_lv<1> > icmp_ln32_reg_209;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_158_p3;
    sc_signal< sc_lv<64> > zext_ln37_1_fu_177_p1;
    sc_signal< sc_lv<64> > zext_ln37_1_reg_218;
    sc_signal< sc_lv<32> > shift_reg_load_reg_228;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > c_load_reg_233;
    sc_signal< sc_lv<32> > mul_ln38_fu_185_p2;
    sc_signal< sc_lv<32> > mul_ln38_reg_238;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > acc_fu_190_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > grp_fu_129_p2;
    sc_signal< sc_lv<32> > acc_0_reg_95;
    sc_signal< sc_lv<8> > ap_phi_mux_i_0_phi_fu_112_p4;
    sc_signal< sc_lv<8> > i_0_reg_108;
    sc_signal< sc_lv<32> > ap_phi_mux_p_pn_phi_fu_123_p4;
    sc_signal< sc_lv<32> > p_pn_reg_120;
    sc_signal< sc_lv<64> > zext_ln37_fu_172_p1;
    sc_signal< sc_lv<8> > grp_fu_129_p0;
    sc_signal< sc_lv<32> > shl_ln33_fu_136_p2;
    sc_signal< sc_lv<32> > shl_ln33_1_fu_142_p2;
    sc_signal< sc_lv<32> > sext_ln31_fu_154_p1;
    sc_signal< sc_lv<5> > mul_ln38_fu_185_p1;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_fu_190_p2();
    void thread_add_ln33_fu_148_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_i_0_phi_fu_112_p4();
    void thread_ap_phi_mux_p_pn_phi_fu_123_p4();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_grp_fu_129_p0();
    void thread_grp_fu_129_p2();
    void thread_icmp_ln32_fu_166_p2();
    void thread_mul_ln38_fu_185_p1();
    void thread_mul_ln38_fu_185_p2();
    void thread_sext_ln31_fu_154_p1();
    void thread_shift_reg_address0();
    void thread_shift_reg_ce0();
    void thread_shift_reg_d0();
    void thread_shift_reg_we0();
    void thread_shl_ln33_1_fu_142_p2();
    void thread_shl_ln33_fu_136_p2();
    void thread_tmp_fu_158_p3();
    void thread_y();
    void thread_y_ap_vld();
    void thread_zext_ln37_1_fu_177_p1();
    void thread_zext_ln37_fu_172_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
