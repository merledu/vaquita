// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(io_pin,31,0);
    VL_OUTW(io_v_pin,127,0,4);
    VL_OUT(io_fcsr,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid;
        CData/*6:0*/ Top__DOT__core__DOT__IDecode_io_func7;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode_io_pcSrc;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode_io_stall;
        CData/*0:0*/ Top__DOT__core__DOT__Execute_io_vma;
        CData/*0:0*/ Top__DOT__core__DOT__Execute_io_vta;
        CData/*2:0*/ Top__DOT__core__DOT__Execute_io_v_sew;
        CData/*0:0*/ Top__DOT__core__DOT__Execute_io_stall;
        CData/*0:0*/ Top__DOT__core__DOT__MEM_io_writeEnable;
        CData/*0:0*/ Top__DOT__core__DOT__MEM_io_dccmReq_valid;
        CData/*3:0*/ Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane;
        CData/*0:0*/ Top__DOT__core__DOT__pc_io_halt;
        CData/*3:0*/ Top__DOT__core__DOT__if_reg_lmul_v;
        CData/*3:0*/ Top__DOT__core__DOT__if_reg_lsuType;
        CData/*4:0*/ Top__DOT__core__DOT__id_reg_wra;
        CData/*6:0*/ Top__DOT__core__DOT__id_reg_f7;
        CData/*2:0*/ Top__DOT__core__DOT__id_reg_f3;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_aluSrc;
        CData/*1:0*/ Top__DOT__core__DOT__id_reg_ctl_aluSrc1;
        CData/*1:0*/ Top__DOT__core__DOT__id_reg_ctl_memToReg;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_regWrite;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_memRead;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_memWrite;
        CData/*1:0*/ Top__DOT__core__DOT__id_reg_ctl_aluOp;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_is_csr;
        CData/*4:0*/ Top__DOT__core__DOT__id_reg_vs1_addr;
        CData/*4:0*/ Top__DOT__core__DOT__id_reg_vs2_addr;
        CData/*4:0*/ Top__DOT__core__DOT__id_reg_vd_addr;
        CData/*3:0*/ Top__DOT__core__DOT__id_reg_lmul_v;
        CData/*3:0*/ Top__DOT__core__DOT__id_reg_lsuType;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_RegWrite;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_opBsel;
        CData/*3:0*/ Top__DOT__core__DOT__id_reg_ctl_Ex_sel;
        CData/*4:0*/ Top__DOT__core__DOT__id_reg_ctl_aluop;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_vset;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_v_load;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_v_ins;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_v_memRead;
        CData/*0:0*/ Top__DOT__core__DOT__id_reg_ctl_v_MemWrite;
        CData/*4:0*/ Top__DOT__core__DOT__ex_reg_wra;
        CData/*1:0*/ Top__DOT__core__DOT__ex_reg_ctl_memToReg;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_ctl_regWrite;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_ctl_memRead;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_ctl_memWrite;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_is_csr;
        CData/*4:0*/ Top__DOT__core__DOT__ex_reg_vd_addr;
        CData/*3:0*/ Top__DOT__core__DOT__ex_reg_lmul_v;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_vset;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_ctl_v_memRead;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_reg_write;
        CData/*3:0*/ Top__DOT__core__DOT__ex_reg_lsuType;
        CData/*0:0*/ Top__DOT__core__DOT__ex_reg_v_ins;
        CData/*4:0*/ Top__DOT__core__DOT__mem_reg_wra;
        CData/*1:0*/ Top__DOT__core__DOT__mem_reg_ctl_memToReg;
        CData/*0:0*/ Top__DOT__core__DOT__mem_reg_ctl_regWrite;
        CData/*0:0*/ Top__DOT__core__DOT__mem_reg_is_csr;
        CData/*4:0*/ Top__DOT__core__DOT__mem_reg_vec_vd_addr;
        CData/*3:0*/ Top__DOT__core__DOT__mem_reg_lmul_v;
        CData/*0:0*/ Top__DOT__core__DOT__mem_reg_vset;
        CData/*0:0*/ Top__DOT__core__DOT__mem_reg_vec_reg_write;
        CData/*2:0*/ Top__DOT__core__DOT__lmul;
        CData/*0:0*/ Top__DOT__core__DOT___T_64;
        CData/*0:0*/ Top__DOT__core__DOT__IF_stall;
    };
    struct {
        CData/*4:0*/ Top__DOT__core__DOT__REG_1_0;
        CData/*4:0*/ Top__DOT__core__DOT__REG_1_1;
        CData/*4:0*/ Top__DOT__core__DOT__REG_1_2;
        CData/*4:0*/ Top__DOT__core__DOT__REG_2_0;
        CData/*4:0*/ Top__DOT__core__DOT__REG_2_1;
        CData/*4:0*/ Top__DOT__core__DOT__REG_2_2;
        CData/*0:0*/ Top__DOT__core__DOT__REG_7_0;
        CData/*0:0*/ Top__DOT__core__DOT__REG_7_1;
        CData/*0:0*/ Top__DOT__core__DOT__REG_7_2;
        CData/*0:0*/ Top__DOT__core__DOT__REG_7_3;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en;
        CData/*2:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__control_io_branch;
        CData/*1:0*/ Top__DOT__core__DOT__IDecode__DOT__control_io_jump;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable;
        CData/*4:0*/ Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__bu_io_taken;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG;
        CData/*1:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG;
        CData/*2:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35;
        CData/*2:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_4;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_7;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_13;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_16;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__hdu__DOT___T_14;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14;
        CData/*4:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in;
        CData/*4:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in;
        CData/*4:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in;
        CData/*4:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in;
        CData/*3:0*/ Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out;
        CData/*1:0*/ Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA;
        CData/*1:0*/ Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB;
        CData/*1:0*/ Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC;
        CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1;
        CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__MDU_io_valid;
        CData/*2:0*/ Top__DOT__core__DOT__Execute__DOT__REG_2;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__REG_3;
    };
    struct {
        CData/*5:0*/ Top__DOT__core__DOT__Execute__DOT__REG_4;
        CData/*5:0*/ Top__DOT__core__DOT__Execute__DOT__REG_5;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT___T_70;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_22;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_23;
        CData/*6:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_27;
        CData/*5:0*/ Top__DOT__core__DOT__Execute__DOT___T_73;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_35;
        CData/*2:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_39;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1235;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1467;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539;
    };
    struct {
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3562;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3789;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3862;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3932;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4005;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4078;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4151;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4224;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4235;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4297;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4308;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4370;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4381;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4443;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4454;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4516;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4589;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4662;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4735;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4808;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4881;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4954;
        CData/*7:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5027;
    };
    struct {
        CData/*2:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_2;
        CData/*2:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_4;
        CData/*3:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_5;
        CData/*2:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_7;
        CData/*3:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_8;
        CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_9;
        CData/*3:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready;
        CData/*5:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s;
        CData/*5:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_39;
        CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_13;
        CData/*1:0*/ Top__DOT__core__DOT__MEM__DOT__offset;
        CData/*2:0*/ Top__DOT__core__DOT__MEM__DOT__funct3;
        CData/*6:0*/ Top__DOT__core__DOT__vlsu__DOT__sew;
        CData/*3:0*/ Top__DOT__core__DOT__vlsu__DOT__lmul;
        CData/*6:0*/ Top__DOT__core__DOT__vlsu__DOT__eew;
        CData/*3:0*/ Top__DOT__core__DOT__vlsu__DOT__emul;
        CData/*0:0*/ Top__DOT__core__DOT__vlsu__DOT___T_21;
        CData/*0:0*/ Top__DOT__core__DOT__vlsu__DOT___T_34;
        CData/*3:0*/ Top__DOT__core__DOT__vlsu__DOT___GEN_0;
        CData/*1:0*/ Top__DOT__core__DOT__Realigner__DOT__stateReg;
        CData/*0:0*/ Top__DOT__core__DOT__Realigner__DOT___T_7;
        CData/*0:0*/ Top__DOT__core__DOT__Realigner__DOT___T_8;
        CData/*0:0*/ Top__DOT__core__DOT__Realigner__DOT___T_9;
        CData/*0:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram_csb_i;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram_we_i;
        CData/*0:0*/ Top__DOT__dmem__DOT__validReg;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__csb;
        CData/*3:0*/ Top__DOT__dmem__DOT__sram__DOT__wmask_o;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__we_o;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__rvalid;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg;
        CData/*3:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg;
        CData/*0:0*/ Top__DOT__imem__DOT__validReg;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__csb;
        CData/*3:0*/ Top__DOT__imem__DOT__sram__DOT__wmask_o;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__we_o;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__rvalid;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg;
        CData/*3:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg;
        CData/*0:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg;
        SData/*9:0*/ Top__DOT__core__DOT__if_reg_eew;
        SData/*10:0*/ Top__DOT__core__DOT__id_reg_z_imm;
        SData/*9:0*/ Top__DOT__core__DOT__id_reg_eew;
        SData/*10:0*/ Top__DOT__core__DOT__ex_reg_vtype;
        SData/*9:0*/ Top__DOT__core__DOT__ex_reg_eew;
        SData/*10:0*/ Top__DOT__core__DOT__mem_reg_vtype;
        SData/*8:0*/ Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc;
        SData/*10:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_16;
        SData/*8:0*/ Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773;
    };
    struct {
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_823;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_881;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_939;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_997;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5108;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5181;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5254;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5327;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5400;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5473;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5546;
        SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5619;
        SData/*15:0*/ Top__DOT__core__DOT__MEM__DOT__lo;
        SData/*15:0*/ Top__DOT__core__DOT__MEM__DOT__hi;
        SData/*15:0*/ Top__DOT__core__DOT__Realigner__DOT__lhw_reg;
        SData/*11:0*/ Top__DOT__dmem__DOT__sram__DOT__addr_o;
        SData/*12:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg;
        SData/*12:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg;
        SData/*11:0*/ Top__DOT__imem__DOT__sram__DOT__addr_o;
        SData/*12:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg;
        SData/*12:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg;
        IData/*31:0*/ Top__DOT__core__DOT__InstructionFetch_io_instruction;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode_io_writeData;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode_io_readData1;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode_io_readData2;
        IData/*31:0*/ Top__DOT__core__DOT__Execute_io_vl;
        IData/*31:0*/ Top__DOT__core__DOT__Execute_io_ALUresult;
        IData/*31:0*/ Top__DOT__core__DOT__MEM_io_readData;
        IData/*31:0*/ Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest;
        IData/*31:0*/ Top__DOT__core__DOT__pc_io_in;
        IData/*31:0*/ Top__DOT__core__DOT__Realigner_io_ral_address_o;
        IData/*31:0*/ Top__DOT__core__DOT__Realigner_io_ral_instruction_o;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder_io_instruction_o;
        IData/*31:0*/ Top__DOT__core__DOT__if_reg_pc;
        IData/*31:0*/ Top__DOT__core__DOT__if_reg_ins;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_pc;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_rd1;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_rd2;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_imm;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_ins;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_csr_data;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_vstart_out;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_vtype;
        IData/*31:0*/ Top__DOT__core__DOT__id_reg_v_addi_imm;
        WData/*127:0*/ Top__DOT__core__DOT__id_reg_v0_data[4];
        WData/*127:0*/ Top__DOT__core__DOT__id_reg_v1_data[4];
        WData/*127:0*/ Top__DOT__core__DOT__id_reg_v2_data[4];
        WData/*127:0*/ Top__DOT__core__DOT__id_reg_vs3_data[4];
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_result;
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_wd;
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_ins;
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_pc;
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_csr_data;
        WData/*127:0*/ Top__DOT__core__DOT__ex_reg_vec_alu_res[4];
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_vl;
        IData/*31:0*/ Top__DOT__core__DOT__ex_reg_read_data1;
        IData/*31:0*/ Top__DOT__core__DOT__mem_reg_ins;
        IData/*31:0*/ Top__DOT__core__DOT__mem_reg_result;
        IData/*31:0*/ Top__DOT__core__DOT__mem_reg_pc;
        IData/*31:0*/ Top__DOT__core__DOT__mem_reg_csr_data;
    };
    struct {
        WData/*127:0*/ Top__DOT__core__DOT__mem_reg_vec_alu_out[4];
        IData/*31:0*/ Top__DOT__core__DOT__mem_reg_vec_vl;
        IData/*31:0*/ Top__DOT__core__DOT__vtype;
        IData/*31:0*/ Top__DOT__core__DOT__vlcount1;
        IData/*31:0*/ Top__DOT__core__DOT__lmul_reg;
        IData/*31:0*/ Top__DOT__core__DOT___T_60;
        IData/*31:0*/ Top__DOT__core__DOT__delays;
        IData/*31:0*/ Top__DOT__core__DOT___T_66;
        IData/*31:0*/ Top__DOT__core__DOT__addrcount;
        IData/*31:0*/ Top__DOT__core__DOT__vlcount;
        IData/*31:0*/ Top__DOT__core__DOT___T_105;
        IData/*31:0*/ Top__DOT__core__DOT___T_123;
        IData/*31:0*/ Top__DOT__core__DOT___T_126;
        IData/*31:0*/ Top__DOT__core__DOT___T_134;
        IData/*31:0*/ Top__DOT__core__DOT___T_164;
        IData/*31:0*/ Top__DOT__core__DOT___GEN_29;
        IData/*31:0*/ Top__DOT__core__DOT__REG___05F0;
        IData/*31:0*/ Top__DOT__core__DOT__REG___05F1;
        IData/*31:0*/ Top__DOT__core__DOT__REG___05F2;
        IData/*31:0*/ Top__DOT__core__DOT__REG___05F3;
        IData/*31:0*/ Top__DOT__core__DOT__REG_3_0;
        IData/*31:0*/ Top__DOT__core__DOT__REG_3_1;
        IData/*31:0*/ Top__DOT__core__DOT__REG_4_0;
        IData/*31:0*/ Top__DOT__core__DOT__REG_4_1;
        IData/*31:0*/ Top__DOT__core__DOT__REG_5;
        IData/*31:0*/ Top__DOT__core__DOT__REG_6;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1;
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[4];
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__immediate_io_out;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18;
    };
    struct {
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_77;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_90;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_110;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_123;
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_21[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_53[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_85[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_95[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[4];
    };
    struct {
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[4];
        WData/*127:0*/ Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[4];
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__immediate__DOT___GEN_2;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg;
        IData/*31:0*/ Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__alu_io_input1;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__alu_io_input2;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B;
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[4];
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__inputMux1;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___T_13;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__inputMux2;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___T_16;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_0;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__REG;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__REG_1;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___T_77;
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[4];
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535;
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[4];
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3636;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3709;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3782;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3855;
    };
    struct {
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[4];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[4];
        WData/*255:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[8];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[16];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[16];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[32];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6598[4];
        WData/*255:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6719[8];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24[16];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7188[32];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7425[16];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_5[16];
        WData/*127:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488[4];
        WData/*255:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[8];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[16];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[32];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[16];
        WData/*511:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[16];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[32];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[32];
        WData/*1023:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[32];
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___T_57;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend;
        IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient;
        WData/*94:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40[3];
        WData/*94:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[3];
        IData/*31:0*/ Top__DOT__core__DOT__MEM__DOT__rdata;
        IData/*31:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_55;
        IData/*31:0*/ Top__DOT__core__DOT__pc__DOT__pc_reg;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___T_20;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___T_42;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_16;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___T_62;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_32;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_52;
        IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram_rdata_o;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__wdata_o;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__rdata_i;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i;
        IData/*31:0*/ Top__DOT__imem__DOT__sram_rdata_o;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__wdata_o;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__rdata_i;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__i;
        IData/*31:0*/ Top__DOT__Tracer__DOT__clkCycle;
        IData/*31:0*/ Top__DOT__Tracer__DOT___T_1;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3480;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3553;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764;
    };
    struct {
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528;
        QData/*32:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_10;
        QData/*33:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_11;
        QData/*34:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_12;
        QData/*35:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax;
        QData/*35:0*/ Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result;
        QData/*63:0*/ Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_16;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[8192];
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem[8192];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[5];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VTop__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VTop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__5(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__8(VTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
