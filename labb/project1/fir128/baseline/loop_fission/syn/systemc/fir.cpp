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
const sc_lv<7> fir::ap_ST_fsm_state1 = "1";
const sc_lv<7> fir::ap_ST_fsm_state2 = "10";
const sc_lv<7> fir::ap_ST_fsm_state3 = "100";
const sc_lv<7> fir::ap_ST_fsm_state4 = "1000";
const sc_lv<7> fir::ap_ST_fsm_state5 = "10000";
const sc_lv<7> fir::ap_ST_fsm_state6 = "100000";
const sc_lv<7> fir::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> fir::ap_const_lv32_1 = "1";
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<32> fir::ap_const_lv32_3 = "11";
const sc_lv<32> fir::ap_const_lv32_4 = "100";
const sc_lv<32> fir::ap_const_lv32_5 = "101";
const sc_lv<32> fir::ap_const_lv32_6 = "110";
const sc_lv<32> fir::ap_const_lv32_2 = "10";
const sc_lv<7> fir::ap_const_lv7_7F = "1111111";
const sc_lv<1> fir::ap_const_lv1_1 = "1";
const sc_lv<8> fir::ap_const_lv8_7F = "1111111";
const sc_lv<7> fir::ap_const_lv7_0 = "0000000";
const sc_lv<32> fir::ap_const_lv32_7 = "111";
const sc_lv<8> fir::ap_const_lv8_FF = "11111111";
const bool fir::ap_const_boolean_1 = true;

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

    SC_METHOD(thread_acc_fu_195_p2);
    sensitive << ( mul_ln38_reg_246 );
    sensitive << ( acc_0_reg_117 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_fu_167_p3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_fu_167_p3 );

    SC_METHOD(thread_c_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln38_fu_175_p1 );

    SC_METHOD(thread_c_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_2_fu_181_p2);
    sensitive << ( i_1_reg_130 );

    SC_METHOD(thread_i_fu_147_p2);
    sensitive << ( i_0_reg_105 );

    SC_METHOD(thread_icmp_ln30_fu_141_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_105 );

    SC_METHOD(thread_mul_ln38_fu_190_p1);
    sensitive << ( c_load_reg_241 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_mul_ln38_fu_190_p2);
    sensitive << ( shift_reg_load_1_reg_236 );
    sensitive << ( mul_ln38_fu_190_p1 );

    SC_METHOD(thread_sext_ln37_fu_163_p1);
    sensitive << ( i_1_reg_130 );

    SC_METHOD(thread_shift_reg_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln30_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln31_fu_153_p1 );
    sensitive << ( zext_ln31_1_fu_158_p1 );
    sensitive << ( zext_ln38_fu_175_p1 );

    SC_METHOD(thread_shift_reg_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln30_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_shift_reg_d0);
    sensitive << ( x );
    sensitive << ( shift_reg_q0 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln30_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_shift_reg_we0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln30_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_fu_167_p3);
    sensitive << ( i_1_reg_130 );

    SC_METHOD(thread_y);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_fu_167_p3 );
    sensitive << ( acc_0_reg_117 );

    SC_METHOD(thread_y_ap_vld);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_fu_167_p3 );

    SC_METHOD(thread_zext_ln31_1_fu_158_p1);
    sensitive << ( i_0_reg_105 );

    SC_METHOD(thread_zext_ln31_fu_153_p1);
    sensitive << ( i_fu_147_p2 );

    SC_METHOD(thread_zext_ln38_fu_175_p1);
    sensitive << ( sext_ln37_fu_163_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln30_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_fu_167_p3 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000001";
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
    sc_trace(mVcdFile, i_fu_147_p2, "i_fu_147_p2");
    sc_trace(mVcdFile, i_reg_208, "i_reg_208");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln30_fu_141_p2, "icmp_ln30_fu_141_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_fu_167_p3, "tmp_fu_167_p3");
    sc_trace(mVcdFile, i_2_fu_181_p2, "i_2_fu_181_p2");
    sc_trace(mVcdFile, i_2_reg_231, "i_2_reg_231");
    sc_trace(mVcdFile, shift_reg_load_1_reg_236, "shift_reg_load_1_reg_236");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, c_load_reg_241, "c_load_reg_241");
    sc_trace(mVcdFile, mul_ln38_fu_190_p2, "mul_ln38_fu_190_p2");
    sc_trace(mVcdFile, mul_ln38_reg_246, "mul_ln38_reg_246");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, acc_fu_195_p2, "acc_fu_195_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, i_0_reg_105, "i_0_reg_105");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, acc_0_reg_117, "acc_0_reg_117");
    sc_trace(mVcdFile, i_1_reg_130, "i_1_reg_130");
    sc_trace(mVcdFile, zext_ln31_fu_153_p1, "zext_ln31_fu_153_p1");
    sc_trace(mVcdFile, zext_ln31_1_fu_158_p1, "zext_ln31_1_fu_158_p1");
    sc_trace(mVcdFile, zext_ln38_fu_175_p1, "zext_ln38_fu_175_p1");
    sc_trace(mVcdFile, sext_ln37_fu_163_p1, "sext_ln37_fu_163_p1");
    sc_trace(mVcdFile, mul_ln38_fu_190_p1, "mul_ln38_fu_190_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        acc_0_reg_117 = acc_fu_195_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1))) {
        acc_0_reg_117 = ap_const_lv32_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_105 = ap_const_lv7_7F;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_0_reg_105 = i_reg_208.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_1_reg_130 = i_2_reg_231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1))) {
        i_1_reg_130 = ap_const_lv8_7F;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        c_load_reg_241 = c_q0.read();
        shift_reg_load_1_reg_236 = shift_reg_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_167_p3.read()))) {
        i_2_reg_231 = i_2_fu_181_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_0))) {
        i_reg_208 = i_fu_147_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mul_ln38_reg_246 = mul_ln38_fu_190_p2.read();
    }
}

void fir::thread_acc_fu_195_p2() {
    acc_fu_195_p2 = (!mul_ln38_reg_246.read().is_01() || !acc_0_reg_117.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln38_reg_246.read()) + sc_biguint<32>(acc_0_reg_117.read()));
}

void fir::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void fir::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void fir::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void fir::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void fir::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void fir::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void fir::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void fir::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_fu_167_p3.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_fu_167_p3.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_c_address0() {
    c_address0 =  (sc_lv<7>) (zext_ln38_fu_175_p1.read());
}

void fir::thread_c_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void fir::thread_i_2_fu_181_p2() {
    i_2_fu_181_p2 = (!i_1_reg_130.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<8>(): (sc_bigint<8>(i_1_reg_130.read()) + sc_bigint<8>(ap_const_lv8_FF));
}

void fir::thread_i_fu_147_p2() {
    i_fu_147_p2 = (!i_0_reg_105.read().is_01() || !ap_const_lv7_7F.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_105.read()) + sc_bigint<7>(ap_const_lv7_7F));
}

void fir::thread_icmp_ln30_fu_141_p2() {
    icmp_ln30_fu_141_p2 = (!i_0_reg_105.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_105.read() == ap_const_lv7_0);
}

void fir::thread_mul_ln38_fu_190_p1() {
    mul_ln38_fu_190_p1 = c_load_reg_241.read();
}

void fir::thread_mul_ln38_fu_190_p2() {
    mul_ln38_fu_190_p2 = (!shift_reg_load_1_reg_236.read().is_01() || !mul_ln38_fu_190_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(shift_reg_load_1_reg_236.read()) * sc_bigint<5>(mul_ln38_fu_190_p1.read());
}

void fir::thread_sext_ln37_fu_163_p1() {
    sext_ln37_fu_163_p1 = esl_sext<32,8>(i_1_reg_130.read());
}

void fir::thread_shift_reg_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        shift_reg_address0 =  (sc_lv<7>) (zext_ln38_fu_175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        shift_reg_address0 =  (sc_lv<7>) (zext_ln31_1_fu_158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1))) {
        shift_reg_address0 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_0))) {
        shift_reg_address0 =  (sc_lv<7>) (zext_ln31_fu_153_p1.read());
    } else {
        shift_reg_address0 = "XXXXXXX";
    }
}

void fir::thread_shift_reg_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1)))) {
        shift_reg_ce0 = ap_const_logic_1;
    } else {
        shift_reg_ce0 = ap_const_logic_0;
    }
}

void fir::thread_shift_reg_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        shift_reg_d0 = shift_reg_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1))) {
        shift_reg_d0 = x.read();
    } else {
        shift_reg_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_shift_reg_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1)))) {
        shift_reg_we0 = ap_const_logic_1;
    } else {
        shift_reg_we0 = ap_const_logic_0;
    }
}

void fir::thread_tmp_fu_167_p3() {
    tmp_fu_167_p3 = i_1_reg_130.read().range(7, 7);
}

void fir::thread_y() {
    y = acc_0_reg_117.read();
}

void fir::thread_y_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_fu_167_p3.read(), ap_const_lv1_1))) {
        y_ap_vld = ap_const_logic_1;
    } else {
        y_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_zext_ln31_1_fu_158_p1() {
    zext_ln31_1_fu_158_p1 = esl_zext<64,7>(i_0_reg_105.read());
}

void fir::thread_zext_ln31_fu_153_p1() {
    zext_ln31_fu_153_p1 = esl_zext<64,7>(i_fu_147_p2.read());
}

void fir::thread_zext_ln38_fu_175_p1() {
    zext_ln38_fu_175_p1 = esl_zext<64,32>(sext_ln37_fu_163_p1.read());
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln30_fu_141_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(tmp_fu_167_p3.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
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

