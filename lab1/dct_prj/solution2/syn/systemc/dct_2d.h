// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_2d_HH_
#define _dct_2d_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dct_1d2.h"
#include "dct_2d_row_outbuf.h"

namespace ap_rtl {

struct dct_2d : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > in_block_address0;
    sc_out< sc_logic > in_block_ce0;
    sc_in< sc_lv<16> > in_block_q0;
    sc_out< sc_lv<6> > out_block_address0;
    sc_out< sc_logic > out_block_ce0;
    sc_out< sc_logic > out_block_we0;
    sc_out< sc_lv<16> > out_block_d0;


    // Module declarations
    dct_2d(sc_module_name name);
    SC_HAS_PROCESS(dct_2d);

    ~dct_2d();

    sc_trace_file* mVcdFile;

    dct_2d_row_outbuf* row_outbuf_U;
    dct_2d_row_outbuf* col_outbuf_U;
    dct_2d_row_outbuf* col_inbuf_U;
    dct_1d2* grp_dct_1d2_fu_213;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > indvar_flatten_reg_135;
    sc_signal< sc_lv<4> > j_0_reg_146;
    sc_signal< sc_lv<4> > i_1_reg_157;
    sc_signal< sc_lv<7> > indvar_flatten11_reg_180;
    sc_signal< sc_lv<4> > j_1_reg_191;
    sc_signal< sc_lv<4> > i_3_reg_202;
    sc_signal< sc_lv<1> > icmp_ln76_fu_228_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > i_fu_234_p2;
    sc_signal< sc_lv<4> > i_reg_452;
    sc_signal< sc_lv<1> > icmp_ln81_fu_240_p2;
    sc_signal< sc_lv<1> > icmp_ln81_reg_457;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > add_ln81_fu_246_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln84_fu_264_p3;
    sc_signal< sc_lv<4> > select_ln84_reg_466;
    sc_signal< sc_lv<4> > select_ln84_1_fu_272_p3;
    sc_signal< sc_lv<4> > select_ln84_1_reg_471;
    sc_signal< sc_lv<4> > i_4_fu_307_p2;
    sc_signal< sc_lv<1> > icmp_ln87_fu_338_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > i_5_fu_344_p2;
    sc_signal< sc_lv<4> > i_5_reg_491;
    sc_signal< sc_lv<1> > icmp_ln92_fu_350_p2;
    sc_signal< sc_lv<1> > icmp_ln92_reg_496;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<7> > add_ln92_fu_356_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<4> > select_ln95_fu_374_p3;
    sc_signal< sc_lv<4> > select_ln95_reg_505;
    sc_signal< sc_lv<4> > select_ln95_1_fu_382_p3;
    sc_signal< sc_lv<4> > select_ln95_1_reg_510;
    sc_signal< sc_lv<4> > i_6_fu_417_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state9;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<6> > row_outbuf_address0;
    sc_signal< sc_logic > row_outbuf_ce0;
    sc_signal< sc_logic > row_outbuf_we0;
    sc_signal< sc_lv<16> > row_outbuf_q0;
    sc_signal< sc_lv<6> > col_outbuf_address0;
    sc_signal< sc_logic > col_outbuf_ce0;
    sc_signal< sc_logic > col_outbuf_we0;
    sc_signal< sc_lv<16> > col_outbuf_q0;
    sc_signal< sc_lv<6> > col_inbuf_address0;
    sc_signal< sc_logic > col_inbuf_ce0;
    sc_signal< sc_logic > col_inbuf_we0;
    sc_signal< sc_lv<16> > col_inbuf_q0;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_ap_start;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_ap_done;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_ap_idle;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_ap_ready;
    sc_signal< sc_lv<6> > grp_dct_1d2_fu_213_src_address0;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_src_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d2_fu_213_src_q0;
    sc_signal< sc_lv<4> > grp_dct_1d2_fu_213_src_offset;
    sc_signal< sc_lv<6> > grp_dct_1d2_fu_213_dst_address0;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_dst_ce0;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_dst_we0;
    sc_signal< sc_lv<16> > grp_dct_1d2_fu_213_dst_d0;
    sc_signal< sc_lv<4> > grp_dct_1d2_fu_213_dst_offset;
    sc_signal< sc_lv<4> > i_0_reg_123;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > ap_phi_mux_j_0_phi_fu_150_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<4> > i_2_reg_168;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > ap_phi_mux_j_1_phi_fu_195_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_logic > grp_dct_1d2_fu_213_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln84_4_fu_302_p1;
    sc_signal< sc_lv<64> > zext_ln84_5_fu_333_p1;
    sc_signal< sc_lv<64> > zext_ln95_5_fu_412_p1;
    sc_signal< sc_lv<64> > zext_ln95_3_fu_443_p1;
    sc_signal< sc_lv<1> > icmp_ln83_fu_258_p2;
    sc_signal< sc_lv<4> > j_fu_252_p2;
    sc_signal< sc_lv<7> > tmp_1_fu_284_p3;
    sc_signal< sc_lv<8> > zext_ln84_fu_280_p1;
    sc_signal< sc_lv<8> > zext_ln84_3_fu_292_p1;
    sc_signal< sc_lv<8> > add_ln84_fu_296_p2;
    sc_signal< sc_lv<7> > tmp_fu_313_p3;
    sc_signal< sc_lv<8> > zext_ln84_2_fu_324_p1;
    sc_signal< sc_lv<8> > zext_ln84_1_fu_320_p1;
    sc_signal< sc_lv<8> > add_ln84_1_fu_327_p2;
    sc_signal< sc_lv<1> > icmp_ln94_fu_368_p2;
    sc_signal< sc_lv<4> > j_2_fu_362_p2;
    sc_signal< sc_lv<7> > tmp_3_fu_394_p3;
    sc_signal< sc_lv<8> > zext_ln95_fu_390_p1;
    sc_signal< sc_lv<8> > zext_ln95_4_fu_402_p1;
    sc_signal< sc_lv<8> > add_ln95_1_fu_406_p2;
    sc_signal< sc_lv<7> > tmp_2_fu_423_p3;
    sc_signal< sc_lv<8> > zext_ln95_2_fu_434_p1;
    sc_signal< sc_lv<8> > zext_ln95_1_fu_430_p1;
    sc_signal< sc_lv<8> > add_ln95_fu_437_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_pp0_stage0;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_pp1_stage0;
    static const sc_lv<9> ap_ST_fsm_state11;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_8;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln81_fu_246_p2();
    void thread_add_ln84_1_fu_327_p2();
    void thread_add_ln84_fu_296_p2();
    void thread_add_ln92_fu_356_p2();
    void thread_add_ln95_1_fu_406_p2();
    void thread_add_ln95_fu_437_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state10_pp1_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter0();
    void thread_ap_block_state5_pp0_stage0_iter1();
    void thread_ap_block_state9_pp1_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state4();
    void thread_ap_condition_pp1_exit_iter0_state9();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_j_0_phi_fu_150_p4();
    void thread_ap_phi_mux_j_1_phi_fu_195_p4();
    void thread_ap_ready();
    void thread_col_inbuf_address0();
    void thread_col_inbuf_ce0();
    void thread_col_inbuf_we0();
    void thread_col_outbuf_address0();
    void thread_col_outbuf_ce0();
    void thread_col_outbuf_we0();
    void thread_grp_dct_1d2_fu_213_ap_start();
    void thread_grp_dct_1d2_fu_213_dst_offset();
    void thread_grp_dct_1d2_fu_213_src_offset();
    void thread_grp_dct_1d2_fu_213_src_q0();
    void thread_i_4_fu_307_p2();
    void thread_i_5_fu_344_p2();
    void thread_i_6_fu_417_p2();
    void thread_i_fu_234_p2();
    void thread_icmp_ln76_fu_228_p2();
    void thread_icmp_ln81_fu_240_p2();
    void thread_icmp_ln83_fu_258_p2();
    void thread_icmp_ln87_fu_338_p2();
    void thread_icmp_ln92_fu_350_p2();
    void thread_icmp_ln94_fu_368_p2();
    void thread_in_block_address0();
    void thread_in_block_ce0();
    void thread_j_2_fu_362_p2();
    void thread_j_fu_252_p2();
    void thread_out_block_address0();
    void thread_out_block_ce0();
    void thread_out_block_d0();
    void thread_out_block_we0();
    void thread_row_outbuf_address0();
    void thread_row_outbuf_ce0();
    void thread_row_outbuf_we0();
    void thread_select_ln84_1_fu_272_p3();
    void thread_select_ln84_fu_264_p3();
    void thread_select_ln95_1_fu_382_p3();
    void thread_select_ln95_fu_374_p3();
    void thread_tmp_1_fu_284_p3();
    void thread_tmp_2_fu_423_p3();
    void thread_tmp_3_fu_394_p3();
    void thread_tmp_fu_313_p3();
    void thread_zext_ln84_1_fu_320_p1();
    void thread_zext_ln84_2_fu_324_p1();
    void thread_zext_ln84_3_fu_292_p1();
    void thread_zext_ln84_4_fu_302_p1();
    void thread_zext_ln84_5_fu_333_p1();
    void thread_zext_ln84_fu_280_p1();
    void thread_zext_ln95_1_fu_430_p1();
    void thread_zext_ln95_2_fu_434_p1();
    void thread_zext_ln95_3_fu_443_p1();
    void thread_zext_ln95_4_fu_402_p1();
    void thread_zext_ln95_5_fu_412_p1();
    void thread_zext_ln95_fu_390_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
