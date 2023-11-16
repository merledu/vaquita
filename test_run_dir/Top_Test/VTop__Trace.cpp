// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VTop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp1103[4];
    WData/*127:0*/ __Vtemp1111[4];
    WData/*127:0*/ __Vtemp1119[4];
    WData/*127:0*/ __Vtemp1123[4];
    WData/*1023:0*/ __Vtemp1147[32];
    WData/*127:0*/ __Vtemp1148[4];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
            tracep->chgBit(oldp+4,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
            tracep->chgIData(oldp+5,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                >> 2U))),32);
            tracep->chgIData(oldp+6,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
            tracep->chgCData(oldp+7,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
            tracep->chgBit(oldp+8,(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable));
            tracep->chgBit(oldp+9,(vlTOPp->Top__DOT__dmem__DOT__validReg));
            tracep->chgBit(oldp+10,(vlTOPp->Top__DOT__imem__DOT__validReg));
            tracep->chgIData(oldp+11,(vlTOPp->Top__DOT__core__DOT__mem_reg_pc),32);
            tracep->chgIData(oldp+12,(vlTOPp->Top__DOT__core__DOT__REG___05F3),32);
            tracep->chgIData(oldp+13,(vlTOPp->Top__DOT__core__DOT__mem_reg_ins),32);
            tracep->chgIData(oldp+14,(vlTOPp->Top__DOT__core__DOT__REG_5),32);
            tracep->chgIData(oldp+15,(vlTOPp->Top__DOT__core__DOT__REG_3_1),32);
            tracep->chgIData(oldp+16,(vlTOPp->Top__DOT__core__DOT__REG_4_1),32);
            tracep->chgIData(oldp+17,(vlTOPp->Top__DOT__core__DOT__REG_6),32);
            tracep->chgBit(oldp+18,(vlTOPp->Top__DOT__core__DOT__REG_7_3));
            tracep->chgCData(oldp+19,(vlTOPp->Top__DOT__core__DOT__mem_reg_wra),5);
            tracep->chgCData(oldp+20,(vlTOPp->Top__DOT__core__DOT__REG_1_2),5);
            tracep->chgCData(oldp+21,(vlTOPp->Top__DOT__core__DOT__REG_2_2),5);
            tracep->chgIData(oldp+22,(((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                    << 4U) 
                                                   | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                      << 3U))) 
                                       | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                           << 2U) | 
                                          (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                            << 1U) 
                                           | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
            tracep->chgIData(oldp+23,(vlTOPp->Top__DOT__core__DOT__if_reg_ins),32);
            tracep->chgIData(oldp+24,(vlTOPp->Top__DOT__core__DOT__if_reg_pc),32);
            tracep->chgBit(oldp+25,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
            tracep->chgBit(oldp+26,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead));
            tracep->chgBit(oldp+27,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead));
            tracep->chgCData(oldp+28,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U))),5);
            tracep->chgCData(oldp+29,((0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))),5);
            tracep->chgBit(oldp+30,((0x63U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_ins))));
            tracep->chgIData(oldp+31,(vlTOPp->Top__DOT__core__DOT__ex_reg_ins),32);
            tracep->chgIData(oldp+32,(vlTOPp->Top__DOT__core__DOT__id_reg_ins),32);
            tracep->chgIData(oldp+33,(vlTOPp->Top__DOT__core__DOT__ex_reg_result),32);
            tracep->chgBit(oldp+34,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite));
            tracep->chgBit(oldp+35,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
            tracep->chgBit(oldp+36,(vlTOPp->Top__DOT__core__DOT__id_reg_is_csr));
            tracep->chgBit(oldp+37,(vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr));
            tracep->chgBit(oldp+38,(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr));
            tracep->chgIData(oldp+39,(vlTOPp->Top__DOT__core__DOT__id_reg_csr_data),32);
            tracep->chgIData(oldp+40,(vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data),32);
            tracep->chgIData(oldp+41,(vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data),32);
            tracep->chgIData(oldp+42,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
            tracep->chgCData(oldp+43,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 7U))),5);
            tracep->chgCData(oldp+44,(vlTOPp->Top__DOT__core__DOT__IDecode_io_func7),7);
            tracep->chgCData(oldp+45,((7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+46,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1aU))),6);
            tracep->chgBit(oldp+47,(((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28))));
            tracep->chgCData(oldp+48,(((0x33U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 1U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                         ? 2U
                                                         : 0U))))))))))),2);
            tracep->chgBit(oldp+49,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                      & (0x13U != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x33U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x13U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                 | ((0x23U 
                                                     != 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                    & ((0x63U 
                                                        != 
                                                        (0x7fU 
                                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                       & ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                          | ((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                             | ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))))))))))));
            tracep->chgBit(oldp+50,(((0x33U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x13U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           & (3U == 
                                              (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))));
            tracep->chgBit(oldp+51,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                      & (0x13U != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x33U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x13U != 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x73U 
                                               != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((3U 
                                                  != 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                 & (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))));
            tracep->chgBit(oldp+52,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
            tracep->chgCData(oldp+53,(((0x33U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                        ? 2U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 2U
                                                 : 
                                                ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 2U
                                                  : 0U)))),2);
            tracep->chgCData(oldp+54,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
            tracep->chgBit(oldp+55,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
            tracep->chgBit(oldp+56,(((0x57U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & (((7U == (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         & ((0U == 
                                             (3U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1eU))) 
                                            | (1U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU))))) 
                                        | (((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                            & (2U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU)))) 
                                           | ((~ ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU))) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x1eU))))) 
                                              & ((0U 
                                                  != 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU))) 
                                                 & ((4U 
                                                     != 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xcU))) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0xcU)))))))))));
            tracep->chgCData(oldp+57,(((0x57U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                        ? (((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                            & ((0U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x1eU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU)))))
                                            ? 3U : 
                                           (((7U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x1eU))))
                                             ? 3U : 
                                            (((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU))))
                                              ? 3U : 
                                             ((0U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU)))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 0U))))))
                                        : 0U)),4);
            tracep->chgCData(oldp+58,(((0x57U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & ((~ ((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU))) 
                                                 | (1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x1eU)))))) 
                                          & (((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & (2U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))) 
                                             | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14))))),5);
            tracep->chgBit(oldp+59,(((0x57U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & (((7U == (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         & ((0U == 
                                             (3U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1eU))) 
                                            | (1U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU))))) 
                                        | (((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                            & (2U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU)))) 
                                           | ((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))))))));
            tracep->chgCData(oldp+60,(((0x57U != (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & ((0x27U != 
                                           (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                          & (7U == 
                                             (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))),4);
            tracep->chgBit(oldp+61,(((0x57U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     | (0x27U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
            tracep->chgBit(oldp+62,(((0x57U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & (0x27U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
            tracep->chgBit(oldp+63,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
            tracep->chgWData(oldp+64,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
            tracep->chgCData(oldp+68,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
            tracep->chgBit(oldp+69,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write));
            tracep->chgCData(oldp+70,(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v),4);
            tracep->chgCData(oldp+71,(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v),4);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1103[0U] = 0U;
                __Vtemp1103[1U] = 0U;
                __Vtemp1103[2U] = 0U;
                __Vtemp1103[3U] = 0U;
            } else {
                __Vtemp1103[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                        : 0U));
                __Vtemp1103[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                        : 0U));
                __Vtemp1103[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                        : 0U));
                __Vtemp1103[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+72,(__Vtemp1103),128);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1111[0U] = 0U;
                __Vtemp1111[1U] = 0U;
                __Vtemp1111[2U] = 0U;
                __Vtemp1111[3U] = 0U;
            } else {
                __Vtemp1111[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                        : 0U));
                __Vtemp1111[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                        : 0U));
                __Vtemp1111[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                        : 0U));
                __Vtemp1111[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+76,(__Vtemp1111),128);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1119[0U] = 0U;
                __Vtemp1119[1U] = 0U;
                __Vtemp1119[2U] = 0U;
                __Vtemp1119[3U] = 0U;
            } else {
                __Vtemp1119[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                        : 0U));
                __Vtemp1119[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                        : 0U));
                __Vtemp1119[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                        : 0U));
                __Vtemp1119[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+80,(__Vtemp1119),128);
            tracep->chgCData(oldp+84,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+85,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+86,(((0xfffff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1eU)))) 
                                           << 0xbU)) 
                                       | (0x7ffU & 
                                          (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+87,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),32);
            tracep->chgSData(oldp+88,(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype),11);
            tracep->chgSData(oldp+89,((0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
            tracep->chgIData(oldp+90,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl),32);
            tracep->chgBit(oldp+91,(vlTOPp->Top__DOT__core__DOT__mem_reg_vset));
            tracep->chgIData(oldp+92,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
            tracep->chgCData(oldp+93,(((0x33U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 0U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 2U
                                                      : 
                                                     (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))))),2);
            tracep->chgBit(oldp+94,((1U & ((~ (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_branch)) 
                                               & (((0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU))) 
                                                  | ((0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                         >> 7U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))))) 
                                           & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu__DOT___T_14))))));
            tracep->chgBit(oldp+95,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
            tracep->chgBit(oldp+96,(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall));
            tracep->chgIData(oldp+97,(((3U == (0xfffU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                        : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25)),32);
            tracep->chgBit(oldp+98,((0x73U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
            tracep->chgIData(oldp+99,(vlTOPp->Top__DOT__core__DOT__id_reg_imm),32);
            tracep->chgIData(oldp+100,(vlTOPp->Top__DOT__core__DOT__id_reg_rd1),32);
            tracep->chgIData(oldp+101,(vlTOPp->Top__DOT__core__DOT__id_reg_rd2),32);
            tracep->chgIData(oldp+102,(vlTOPp->Top__DOT__core__DOT__id_reg_pc),32);
            tracep->chgCData(oldp+103,(vlTOPp->Top__DOT__core__DOT__id_reg_f7),7);
            tracep->chgCData(oldp+104,(vlTOPp->Top__DOT__core__DOT__id_reg_f3),3);
            tracep->chgBit(oldp+105,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
            tracep->chgCData(oldp+106,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
            tracep->chgCData(oldp+107,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
            tracep->chgCData(oldp+108,((0x3fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x1aU))),6);
            tracep->chgCData(oldp+109,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
            tracep->chgCData(oldp+110,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
            tracep->chgBit(oldp+111,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
            tracep->chgBit(oldp+112,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel));
            tracep->chgBit(oldp+113,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load));
            tracep->chgBit(oldp+114,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
            tracep->chgBit(oldp+115,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
            tracep->chgWData(oldp+116,(vlTOPp->Top__DOT__core__DOT__id_reg_v1_data),128);
            tracep->chgWData(oldp+120,(vlTOPp->Top__DOT__core__DOT__id_reg_v2_data),128);
            tracep->chgIData(oldp+124,(vlTOPp->Top__DOT__core__DOT__Execute_io_vl),32);
            tracep->chgIData(oldp+125,(vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out),32);
            tracep->chgWData(oldp+126,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data),128);
            tracep->chgBit(oldp+130,(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
            tracep->chgBit(oldp+131,(vlTOPp->Top__DOT__core__DOT__Execute_io_vta));
            tracep->chgBit(oldp+132,((1U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                            >> 0x19U))));
            tracep->chgWData(oldp+133,(vlTOPp->Top__DOT__core__DOT__id_reg_v0_data),128);
            tracep->chgCData(oldp+137,(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew),3);
            tracep->chgIData(oldp+138,(vlTOPp->Top__DOT__core__DOT__id_reg_vtype),32);
            tracep->chgIData(oldp+139,(vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
            tracep->chgWData(oldp+140,(vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
            tracep->chgCData(oldp+144,(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr),5);
            tracep->chgCData(oldp+145,(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr),5);
            tracep->chgCData(oldp+146,(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr),5);
            tracep->chgCData(oldp+147,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr),5);
            tracep->chgBit(oldp+148,(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
            tracep->chgBit(oldp+149,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite));
            tracep->chgCData(oldp+150,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
            tracep->chgIData(oldp+151,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
            if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))) {
                __Vtemp1123[0U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
                __Vtemp1123[1U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
                __Vtemp1123[2U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
                __Vtemp1123[3U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
            } else {
                __Vtemp1123[0U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                                    : vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]);
                __Vtemp1123[1U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                                    : vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]);
                __Vtemp1123[2U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                    : vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]);
                __Vtemp1123[3U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                    : vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]);
            }
            tracep->chgWData(oldp+152,(__Vtemp1123),128);
            tracep->chgBit(oldp+156,(vlTOPp->Top__DOT__core__DOT__Execute_io_stall));
            tracep->chgIData(oldp+157,((((vlTOPp->Top__DOT__core__DOT__vlcount 
                                          != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                         & (0x27U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                             ? (vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1 
                                                + vlTOPp->Top__DOT__core__DOT__addrcount)
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+158,(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins));
            tracep->chgIData(oldp+159,(vlTOPp->Top__DOT__core__DOT__ex_reg_wd),32);
            tracep->chgIData(oldp+160,((((vlTOPp->Top__DOT__core__DOT__vlcount 
                                          != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                         & (0x27U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                                  : 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+161,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                       ? (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead)
                                       : (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead))));
            tracep->chgCData(oldp+162,((7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                              >> 0xcU))),3);
            tracep->chgIData(oldp+163,(vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
            tracep->chgIData(oldp+164,(vlTOPp->Top__DOT__core__DOT__vtype),32);
            tracep->chgCData(oldp+165,(((0x30U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul) 
                                                                 >> 3U)))) 
                                                  << 4U)) 
                                        | (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul))),6);
            tracep->chgCData(oldp+166,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul),4);
            tracep->chgBit(oldp+167,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgCData(oldp+168,(vlTOPp->Top__DOT__core__DOT__if_reg_lsuType),4);
            tracep->chgCData(oldp+169,(vlTOPp->Top__DOT__core__DOT__id_reg_wra),5);
            tracep->chgCData(oldp+170,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
            tracep->chgBit(oldp+171,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
            tracep->chgSData(oldp+172,(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm),11);
            tracep->chgCData(oldp+173,(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v),4);
            tracep->chgCData(oldp+174,(vlTOPp->Top__DOT__core__DOT__id_reg_lsuType),4);
            tracep->chgCData(oldp+175,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
            tracep->chgBit(oldp+176,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_memRead));
            tracep->chgCData(oldp+177,(vlTOPp->Top__DOT__core__DOT__ex_reg_wra),5);
            tracep->chgCData(oldp+178,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
            tracep->chgBit(oldp+179,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
            tracep->chgIData(oldp+180,(vlTOPp->Top__DOT__core__DOT__ex_reg_pc),32);
            tracep->chgIData(oldp+181,(vlTOPp->Top__DOT__core__DOT__ex_reg_vl),32);
            tracep->chgCData(oldp+182,(vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v),4);
            tracep->chgBit(oldp+183,(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
            tracep->chgBit(oldp+184,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead));
            tracep->chgBit(oldp+185,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite));
            tracep->chgSData(oldp+186,(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype),11);
            tracep->chgCData(oldp+187,(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType),4);
            tracep->chgIData(oldp+188,(vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1),32);
            tracep->chgIData(oldp+189,(vlTOPp->Top__DOT__core__DOT__mem_reg_result),32);
            tracep->chgCData(oldp+190,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
            tracep->chgCData(oldp+191,(vlTOPp->Top__DOT__core__DOT__lmul),3);
            tracep->chgIData(oldp+192,(vlTOPp->Top__DOT__core__DOT__lmul_reg),32);
            tracep->chgIData(oldp+193,(vlTOPp->Top__DOT__core__DOT__vlmul_count),32);
            tracep->chgIData(oldp+194,(vlTOPp->Top__DOT__core__DOT__delays),32);
            tracep->chgIData(oldp+195,(vlTOPp->Top__DOT__core__DOT__addrcount),32);
            tracep->chgIData(oldp+196,(vlTOPp->Top__DOT__core__DOT__vlcount),32);
            tracep->chgIData(oldp+197,(vlTOPp->Top__DOT__core__DOT__REG___05F0),32);
            tracep->chgIData(oldp+198,(vlTOPp->Top__DOT__core__DOT__REG___05F1),32);
            tracep->chgIData(oldp+199,(vlTOPp->Top__DOT__core__DOT__REG___05F2),32);
            tracep->chgCData(oldp+200,(vlTOPp->Top__DOT__core__DOT__REG_1_0),5);
            tracep->chgCData(oldp+201,(vlTOPp->Top__DOT__core__DOT__REG_1_1),5);
            tracep->chgCData(oldp+202,(vlTOPp->Top__DOT__core__DOT__REG_2_0),5);
            tracep->chgCData(oldp+203,(vlTOPp->Top__DOT__core__DOT__REG_2_1),5);
            tracep->chgIData(oldp+204,(vlTOPp->Top__DOT__core__DOT__REG_3_0),32);
            tracep->chgIData(oldp+205,(vlTOPp->Top__DOT__core__DOT__REG_4_0),32);
            tracep->chgBit(oldp+206,(vlTOPp->Top__DOT__core__DOT__REG_7_0));
            tracep->chgBit(oldp+207,(vlTOPp->Top__DOT__core__DOT__REG_7_1));
            tracep->chgBit(oldp+208,(vlTOPp->Top__DOT__core__DOT__REG_7_2));
            tracep->chgSData(oldp+209,((0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),12);
            tracep->chgBit(oldp+210,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
            tracep->chgCData(oldp+211,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
            tracep->chgBit(oldp+212,(((0x33U == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x13U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x73U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x23U 
                                                   != 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x63U 
                                                      != 
                                                      (0x7fU 
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                           | ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                              | (0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))))))));
            tracep->chgBit(oldp+213,(((0x33U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x13U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x73U 
                                             != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                               & (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))))));
            tracep->chgBit(oldp+214,(((0x57U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x27U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & (7U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
            tracep->chgBit(oldp+215,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
            tracep->chgCData(oldp+216,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
            tracep->chgIData(oldp+217,(((0U == (0x1fU 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                         ? 0U : ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                                  ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31
                                                  : 
                                                 ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)))
                                                   ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27
                                                      : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_90))))))),32);
            tracep->chgIData(oldp+218,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
            tracep->chgIData(oldp+219,(((((0x40000000U 
                                           & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+220,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
            tracep->chgCData(oldp+221,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+222,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
            tracep->chgBit(oldp+223,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
            tracep->chgBit(oldp+224,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
            tracep->chgBit(oldp+225,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
            tracep->chgBit(oldp+226,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
            tracep->chgCData(oldp+227,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
            tracep->chgCData(oldp+228,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
            tracep->chgIData(oldp+229,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
            tracep->chgIData(oldp+230,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
            tracep->chgIData(oldp+231,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
            tracep->chgIData(oldp+232,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
            tracep->chgIData(oldp+233,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
            tracep->chgIData(oldp+234,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
            tracep->chgBit(oldp+235,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
            tracep->chgBit(oldp+236,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
            tracep->chgCData(oldp+237,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
            tracep->chgBit(oldp+238,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
            tracep->chgBit(oldp+239,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
            tracep->chgSData(oldp+240,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                         << 7U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                   << 3U))),11);
            tracep->chgIData(oldp+241,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                         << 0x15U) 
                                        | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                            << 0x11U) 
                                           | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                  << 7U) 
                                                 | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                    << 3U)))))),32);
            tracep->chgIData(oldp+242,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                         << 4U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
            tracep->chgIData(oldp+243,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
            tracep->chgIData(oldp+244,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
            tracep->chgIData(oldp+245,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
            tracep->chgBit(oldp+246,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
            tracep->chgBit(oldp+247,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
            tracep->chgBit(oldp+248,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
            tracep->chgBit(oldp+249,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
            tracep->chgBit(oldp+250,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
            tracep->chgBit(oldp+251,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
            tracep->chgCData(oldp+252,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x1eU))),2);
            tracep->chgCData(oldp+253,((0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)),7);
            tracep->chgIData(oldp+254,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
            tracep->chgIData(oldp+255,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
            tracep->chgIData(oldp+256,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
            tracep->chgIData(oldp+257,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
            tracep->chgIData(oldp+258,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
            tracep->chgIData(oldp+259,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
            tracep->chgIData(oldp+260,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
            tracep->chgIData(oldp+261,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
            tracep->chgIData(oldp+262,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
            tracep->chgIData(oldp+263,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
            tracep->chgIData(oldp+264,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
            tracep->chgIData(oldp+265,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
            tracep->chgIData(oldp+266,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
            tracep->chgIData(oldp+267,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
            tracep->chgIData(oldp+268,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
            tracep->chgIData(oldp+269,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
            tracep->chgIData(oldp+270,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
            tracep->chgIData(oldp+271,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
            tracep->chgIData(oldp+272,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
            tracep->chgIData(oldp+273,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
            tracep->chgIData(oldp+274,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
            tracep->chgIData(oldp+275,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
            tracep->chgIData(oldp+276,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
            tracep->chgIData(oldp+277,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
            tracep->chgIData(oldp+278,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
            tracep->chgIData(oldp+279,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
            tracep->chgIData(oldp+280,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
            tracep->chgIData(oldp+281,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
            tracep->chgIData(oldp+282,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
            tracep->chgIData(oldp+283,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
            tracep->chgIData(oldp+284,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
            tracep->chgIData(oldp+285,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
            tracep->chgWData(oldp+286,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
            tracep->chgWData(oldp+290,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
            tracep->chgWData(oldp+294,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
            tracep->chgWData(oldp+298,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
            tracep->chgWData(oldp+302,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
            tracep->chgWData(oldp+306,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
            tracep->chgWData(oldp+310,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
            tracep->chgWData(oldp+314,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
            tracep->chgWData(oldp+318,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
            tracep->chgWData(oldp+322,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
            tracep->chgWData(oldp+326,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
            tracep->chgWData(oldp+330,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
            tracep->chgWData(oldp+334,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
            tracep->chgWData(oldp+338,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
            tracep->chgWData(oldp+342,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
            tracep->chgWData(oldp+346,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
            tracep->chgWData(oldp+350,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
            tracep->chgWData(oldp+354,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
            tracep->chgWData(oldp+358,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
            tracep->chgWData(oldp+362,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
            tracep->chgWData(oldp+366,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
            tracep->chgWData(oldp+370,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
            tracep->chgWData(oldp+374,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
            tracep->chgWData(oldp+378,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
            tracep->chgWData(oldp+382,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
            tracep->chgWData(oldp+386,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
            tracep->chgWData(oldp+390,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
            tracep->chgWData(oldp+394,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
            tracep->chgWData(oldp+398,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
            tracep->chgWData(oldp+402,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
            tracep->chgWData(oldp+406,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
            tracep->chgWData(oldp+410,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
            tracep->chgCData(oldp+414,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
            tracep->chgCData(oldp+415,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
            tracep->chgCData(oldp+416,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
            tracep->chgCData(oldp+417,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
            tracep->chgIData(oldp+418,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0xfffffU
                                         : 0U)),20);
            tracep->chgIData(oldp+419,((0xfffffU & 
                                        (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0xcU))),20);
            tracep->chgCData(oldp+420,((0x7fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),7);
            tracep->chgSData(oldp+421,(((0xfe0U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U)))),12);
            tracep->chgBit(oldp+422,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+423,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U))));
            tracep->chgCData(oldp+424,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),6);
            tracep->chgCData(oldp+425,((0xfU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U))),4);
            tracep->chgSData(oldp+426,(((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 8U)))))),12);
            tracep->chgIData(oldp+427,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffffU
                                         : 0U)),19);
            tracep->chgCData(oldp+428,((0xffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+429,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U))));
            tracep->chgSData(oldp+430,((0x3ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+431,(((0x80000U & 
                                         (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xcU)) 
                                        | ((0x7f800U 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 1U)) 
                                           | ((0x400U 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xaU)) 
                                              | (0x3ffU 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x15U)))))),20);
            tracep->chgSData(oldp+432,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffU : 0U)),11);
            tracep->chgIData(oldp+433,(((0x40000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+434,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),11);
            tracep->chgCData(oldp+435,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
            tracep->chgBit(oldp+436,((1U & ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                            >> 5U))));
            tracep->chgCData(oldp+437,((0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+438,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+439,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+440,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
            tracep->chgCData(oldp+441,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
            tracep->chgCData(oldp+442,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
            tracep->chgSData(oldp+443,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
            tracep->chgWData(oldp+444,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
            tracep->chgWData(oldp+448,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
            tracep->chgIData(oldp+452,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14),32);
            tracep->chgCData(oldp+453,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
            tracep->chgIData(oldp+454,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
            tracep->chgCData(oldp+455,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37),5);
            tracep->chgBit(oldp+456,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid));
            tracep->chgBit(oldp+457,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
            tracep->chgBit(oldp+458,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                      | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                           | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                          | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                         | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                             | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                                            & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))));
            tracep->chgIData(oldp+459,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG),32);
            tracep->chgIData(oldp+460,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1),32);
            tracep->chgCData(oldp+461,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2),3);
            tracep->chgBit(oldp+462,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
            tracep->chgCData(oldp+463,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4),6);
            tracep->chgCData(oldp+464,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5),6);
            tracep->chgCData(oldp+465,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
            tracep->chgCData(oldp+466,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+467,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+468,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+469,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
            tracep->chgCData(oldp+470,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+471,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+472,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+473,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
            tracep->chgCData(oldp+474,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+475,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+476,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+477,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
            tracep->chgCData(oldp+478,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+479,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+480,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+481,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
            tracep->chgCData(oldp+482,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+483,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+484,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+485,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
            tracep->chgCData(oldp+486,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+487,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+488,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+489,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
            tracep->chgCData(oldp+490,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+491,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+492,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+493,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
            tracep->chgCData(oldp+494,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+495,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+496,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+497,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
            tracep->chgSData(oldp+498,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+499,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
            tracep->chgSData(oldp+500,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+501,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
            tracep->chgSData(oldp+502,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+503,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
            tracep->chgSData(oldp+504,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+505,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
            tracep->chgSData(oldp+506,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+507,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
            tracep->chgSData(oldp+508,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+509,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
            tracep->chgSData(oldp+510,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+511,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
            tracep->chgSData(oldp+512,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+513,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
            tracep->chgIData(oldp+514,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
            tracep->chgIData(oldp+515,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
            tracep->chgIData(oldp+516,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
            tracep->chgIData(oldp+517,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
            tracep->chgIData(oldp+518,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
            tracep->chgIData(oldp+519,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
            tracep->chgIData(oldp+520,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
            tracep->chgQData(oldp+521,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
            tracep->chgQData(oldp+523,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
            tracep->chgQData(oldp+527,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
            tracep->chgCData(oldp+529,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
            tracep->chgCData(oldp+530,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+531,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+532,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+533,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
            tracep->chgCData(oldp+534,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+535,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+536,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+537,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
            tracep->chgCData(oldp+538,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+539,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+540,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+541,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
            tracep->chgCData(oldp+542,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+543,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+544,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+545,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
            tracep->chgSData(oldp+546,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+547,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
            tracep->chgSData(oldp+548,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+549,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
            tracep->chgSData(oldp+550,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+551,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
            tracep->chgSData(oldp+552,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+553,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
            tracep->chgIData(oldp+554,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
            tracep->chgIData(oldp+555,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
            tracep->chgIData(oldp+556,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
            tracep->chgQData(oldp+557,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
            tracep->chgQData(oldp+559,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
            tracep->chgQData(oldp+561,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239))),64);
            tracep->chgQData(oldp+563,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (1U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                         >> 1U))) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297))),64);
            tracep->chgIData(oldp+565,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361))),32);
            tracep->chgIData(oldp+566,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (1U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                         >> 1U))) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419))),32);
            tracep->chgIData(oldp+567,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : (((2U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (2U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                         >> 2U))) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477))),32);
            tracep->chgIData(oldp+568,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : (((3U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (3U 
                                                < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
                                                 & (((~ 
                                                      (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                         >> 3U))) 
                                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535))),32);
            tracep->chgSData(oldp+569,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   (((0U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (0U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599))))),16);
            tracep->chgSData(oldp+570,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((1U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (1U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 1U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657))))),16);
            tracep->chgSData(oldp+571,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   (((2U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (2U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 2U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715))))),16);
            tracep->chgSData(oldp+572,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((3U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (3U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 3U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773))))),16);
            tracep->chgSData(oldp+573,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   (((4U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (4U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 4U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_823)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831))))),16);
            tracep->chgSData(oldp+574,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((5U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (5U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 5U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_881)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889))))),16);
            tracep->chgSData(oldp+575,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   (((6U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (6U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 6U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_939)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947))))),16);
            tracep->chgSData(oldp+576,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   (((7U 
                                                      >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                     & (7U 
                                                        < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                     ? 
                                                    ((1U 
                                                      & (((~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                            >> 0x19U)) 
                                                          & (~ 
                                                             (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                              >> 7U))) 
                                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_997)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005))))),16);
            tracep->chgCData(oldp+577,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                  : 
                                                 (((0U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069))))),8);
            tracep->chgCData(oldp+578,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 (((1U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (1U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 1U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127))))),8);
            tracep->chgCData(oldp+579,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 (((2U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (2U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 2U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185))))),8);
            tracep->chgCData(oldp+580,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 (((3U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (3U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 3U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1235)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243))))),8);
            tracep->chgCData(oldp+581,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                  : 
                                                 (((4U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (4U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 4U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301))))),8);
            tracep->chgCData(oldp+582,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 (((5U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (5U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 5U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359))))),8);
            tracep->chgCData(oldp+583,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 (((6U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (6U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 6U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417))))),8);
            tracep->chgCData(oldp+584,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 (((7U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (7U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 7U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1467)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475))))),8);
            tracep->chgQData(oldp+585,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3),64);
            tracep->chgCData(oldp+587,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                  : 
                                                 (((8U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (8U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 8U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533))))),8);
            tracep->chgCData(oldp+588,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 (((9U 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (9U 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 9U))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591))))),8);
            tracep->chgCData(oldp+589,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 (((0xaU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xaU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xaU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649))))),8);
            tracep->chgCData(oldp+590,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 (((0xbU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xbU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xbU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707))))),8);
            tracep->chgCData(oldp+591,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                  : 
                                                 (((0xcU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xcU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xcU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765))))),8);
            tracep->chgCData(oldp+592,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 (((0xdU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xdU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xdU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823))))),8);
            tracep->chgCData(oldp+593,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 (((0xeU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xeU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xeU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881))))),8);
            tracep->chgCData(oldp+594,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 (((0xfU 
                                                    >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                   & (0xfU 
                                                      < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((1U 
                                                    & (((~ 
                                                         (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xfU))) 
                                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939))))),8);
            tracep->chgQData(oldp+595,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+597,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
            tracep->chgQData(oldp+599,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+601,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
            tracep->chgQData(oldp+603,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
            tracep->chgQData(oldp+605,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
            tracep->chgQData(oldp+607,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+609,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
            tracep->chgQData(oldp+611,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
            tracep->chgQData(oldp+613,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
            tracep->chgQData(oldp+615,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
            tracep->chgQData(oldp+617,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
            tracep->chgQData(oldp+619,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
            tracep->chgQData(oldp+621,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
            tracep->chgQData(oldp+623,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
            tracep->chgQData(oldp+625,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
            tracep->chgQData(oldp+627,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
            tracep->chgQData(oldp+629,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
            tracep->chgQData(oldp+631,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
            tracep->chgQData(oldp+633,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 8U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
            tracep->chgQData(oldp+635,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
            tracep->chgQData(oldp+637,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x18U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
            tracep->chgWData(oldp+639,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28),512);
            tracep->chgQData(oldp+655,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+657,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
            tracep->chgQData(oldp+659,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
            tracep->chgQData(oldp+661,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
            tracep->chgQData(oldp+663,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
            tracep->chgQData(oldp+665,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
            tracep->chgQData(oldp+667,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
            tracep->chgQData(oldp+669,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
            tracep->chgCData(oldp+671,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14))),3);
            tracep->chgCData(oldp+672,((7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+673,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14))) 
                                            | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                               >> 2U)))));
            tracep->chgBit(oldp+674,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                 >> 2U)) 
                                             & (~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                   >> 1U))) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)))));
            tracep->chgBit(oldp+675,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                >> 1U)) 
                                            & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
            tracep->chgBit(oldp+676,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)))));
            tracep->chgQData(oldp+677,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
            tracep->chgCData(oldp+679,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter),6);
            tracep->chgIData(oldp+680,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend),32);
            tracep->chgIData(oldp+681,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient),32);
            tracep->chgBit(oldp+682,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u));
            tracep->chgBit(oldp+683,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s));
            tracep->chgCData(oldp+684,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset),2);
            tracep->chgCData(oldp+685,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3),3);
            tracep->chgCData(oldp+686,((3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result)),2);
            tracep->chgCData(oldp+687,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                         >> 0xcU))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                   ? vlTOPp->Top__DOT__core__DOT__ex_reg_wd
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U))))
                                                  : 
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                          >> 0xcU))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlTOPp->Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)))
                                                   : vlTOPp->Top__DOT__core__DOT__ex_reg_wd)))),8);
            tracep->chgCData(oldp+688,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                         >> 0xcU))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlTOPp->Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U))))
                                                  : 
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                          >> 0xcU))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlTOPp->Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)))
                                                   : 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))))),8);
            tracep->chgCData(oldp+689,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                         >> 0xcU))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlTOPp->Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U))))
                                                  : 
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                          >> 0xcU))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : vlTOPp->Top__DOT__core__DOT__ex_reg_wd))
                                                   : 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U))))),8);
            tracep->chgCData(oldp+690,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                         >> 0xcU))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : vlTOPp->Top__DOT__core__DOT__ex_reg_wd)))
                                                  : 
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                          >> 0xcU))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)))
                                                   : 
                                                  (vlTOPp->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U))))),8);
            tracep->chgSData(oldp+691,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo),16);
            tracep->chgSData(oldp+692,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi),16);
            tracep->chgIData(oldp+693,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                         ? (((vlTOPp->Top__DOT__core__DOT__vlcount 
                                              != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                             & (0x27U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                                 ? 
                                                (vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1 
                                                 + vlTOPp->Top__DOT__core__DOT__addrcount)
                                                 : 0U)
                                             : 0U) : vlTOPp->Top__DOT__core__DOT__ex_reg_result)),32);
            tracep->chgIData(oldp+694,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                         ? (((vlTOPp->Top__DOT__core__DOT__vlcount 
                                              != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                             & (0x27U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                                   : 
                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 0U)
                                             : 0U) : vlTOPp->Top__DOT__core__DOT__ex_reg_wd)),32);
            tracep->chgCData(oldp+695,((7U & vlTOPp->Top__DOT__core__DOT__vtype)),3);
            tracep->chgCData(oldp+696,((7U & (vlTOPp->Top__DOT__core__DOT__vtype 
                                              >> 3U))),3);
            tracep->chgCData(oldp+697,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew),7);
            tracep->chgCData(oldp+698,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul),4);
            tracep->chgSData(oldp+699,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
            tracep->chgCData(oldp+700,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
            tracep->chgBit(oldp+701,((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgSData(oldp+702,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgSData(oldp+703,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),12);
            tracep->chgSData(oldp+704,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgBit(oldp+705,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+706,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+707,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+708,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+709,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgBit(oldp+710,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+711,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+712,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+713,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+714,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgIData(oldp+715,(vlTOPp->Top__DOT__Tracer__DOT__clkCycle),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+716,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                         ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                                         : vlTOPp->Top__DOT__core__DOT___GEN_29)),32);
            tracep->chgBit(oldp+717,((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                       | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                      | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall))));
            tracep->chgIData(oldp+718,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                         ? (vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                                            + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                         : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                             ? ((((0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U)))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                                  : 
                                                 (((0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                       >> 7U)))
                                                   ? vlTOPp->Top__DOT__core__DOT__ex_reg_result
                                                   : 
                                                  (((0x1fU 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                        >> 7U)))
                                                    ? vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData
                                                    : 
                                                   (((0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 7U)))
                                                     ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                                     : vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1)))) 
                                                + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                             : (vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                                                + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)))),32);
            tracep->chgBit(oldp+719,(((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
                                      | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))));
            if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
                __Vtemp1147[4U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[5U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[6U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[7U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[8U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[9U] = (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                               >> 0x1fU))));
                __Vtemp1147[0xaU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0xbU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0xcU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0xdU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0xeU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0xfU] = (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
                __Vtemp1147[0x10U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x11U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x12U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x13U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x14U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x15U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x16U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x17U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x18U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x19U] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1aU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1bU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1cU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1dU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1eU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1147[0x1fU] = (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                    >> 0x1fU))));
                __Vtemp1148[0U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[0U];
                __Vtemp1148[1U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[1U];
                __Vtemp1148[2U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[2U];
                __Vtemp1148[3U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U];
            } else {
                __Vtemp1147[4U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U])));
                __Vtemp1147[5U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U])));
                __Vtemp1147[6U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U])));
                __Vtemp1147[7U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U])));
                __Vtemp1147[8U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U])));
                __Vtemp1147[9U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                     >> 0x1fU))))
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                         >> 0x1fU))))
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? (- (IData)(
                                                         (1U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                             >> 0x1fU))))
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U])));
                __Vtemp1147[0xaU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU])));
                __Vtemp1147[0xbU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU])));
                __Vtemp1147[0xcU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU])));
                __Vtemp1147[0xdU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU])));
                __Vtemp1147[0xeU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU])));
                __Vtemp1147[0xfU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (0U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                       >> 0x1fU))))
                                      : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                          & (0U == 
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                           >> 0x1fU))))
                                          : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                              & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                               >> 0x1fU))))
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU])));
                __Vtemp1147[0x10U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U])));
                __Vtemp1147[0x11U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U])));
                __Vtemp1147[0x12U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U])));
                __Vtemp1147[0x13U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U])));
                __Vtemp1147[0x14U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U])));
                __Vtemp1147[0x15U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U])));
                __Vtemp1147[0x16U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U])));
                __Vtemp1147[0x17U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U])));
                __Vtemp1147[0x18U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U])));
                __Vtemp1147[0x19U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U])));
                __Vtemp1147[0x1aU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU])));
                __Vtemp1147[0x1bU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU])));
                __Vtemp1147[0x1cU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU])));
                __Vtemp1147[0x1dU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU])));
                __Vtemp1147[0x1eU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU])));
                __Vtemp1147[0x1fU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                       & (0U == (7U 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                        >> 0x1fU))))
                                       : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                           & (0U == 
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                            >> 0x1fU))))
                                           : (((0U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                                >> 0x1fU))))
                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU])));
                __Vtemp1148[0U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[0U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[0U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[0U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U])));
                __Vtemp1148[1U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[1U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[1U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[1U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U])));
                __Vtemp1148[2U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[2U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[2U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[2U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U])));
                __Vtemp1148[3U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U])));
            }
            tracep->chgWData(oldp+720,(__Vtemp1148),128);
            tracep->chgIData(oldp+724,((IData)((VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                                 ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
            tracep->chgIData(oldp+725,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)),32);
            tracep->chgIData(oldp+726,((((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                         == (0x1fU 
                                             & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U)))
                                         ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                         : (((0x1fU 
                                              & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)) 
                                             == (0x1fU 
                                                 & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                    >> 7U)))
                                             ? vlTOPp->Top__DOT__core__DOT__ex_reg_result
                                             : (((0x1fU 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                     >> 7U)))
                                                 ? vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData
                                                 : 
                                                (((0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U)))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                                  : vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1))))),32);
            tracep->chgIData(oldp+727,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
            tracep->chgIData(oldp+728,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
            tracep->chgBit(oldp+729,(((0U == (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                       ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                          == vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                       : ((1U == (7U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                           ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                              != vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                           : ((4U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                               ? VL_LTS_III(1,32,32, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                    < vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                                    : 
                                                   (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                    >= vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2))))))));
            tracep->chgIData(oldp+730,((IData)((0x7fffffffffffffffULL 
                                                & ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                    ? (QData)((IData)(
                                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                     ? (QData)((IData)(
                                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                        | vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                      ? (QData)((IData)(
                                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                         + vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                       ? (QData)((IData)(
                                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                          - vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                        ? (QData)((IData)(
                                                                          VL_LTS_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                         ? (QData)((IData)(
                                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                            < vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                          ? 
                                                         ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1)) 
                                                          << 
                                                          (0x1fU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                          : (QData)((IData)(
                                                                            ((7U 
                                                                              == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                              ? 
                                                                             (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                              >> 
                                                                              (0x1fU 
                                                                               & vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                              : 
                                                                             ((8U 
                                                                               == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                               ? 
                                                                              VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                               : 
                                                                              ((9U 
                                                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                                ? 
                                                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                                ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)
                                                                                : 0U))))))))))))))),32);
            tracep->chgIData(oldp+731,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                         ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                                         : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                              | (3U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                             | (2U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)))
                                             ? (IData)(
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                                                        >> 0x20U))
                                             : ((4U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                 ? 
                                                ((((1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a 
                                                       >> 0x1fU)) 
                                                   != 
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b 
                                                       >> 0x1fU))) 
                                                  & (0U 
                                                     != vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b))
                                                  ? 
                                                 (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                   ? 
                                                  ((0x80000000U 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a)
                                                    ? 
                                                   (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend
                                                    : 0U))))))),32);
            tracep->chgIData(oldp+732,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_16)),32);
            tracep->chgIData(oldp+733,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                         : vlTOPp->Top__DOT__core__DOT__id_reg_imm)),32);
            tracep->chgQData(oldp+734,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                   ^ (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                    | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    ((((QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                     & (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)) 
                                                      - 
                                                      (((QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                       + (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                       : 0ULL)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239))),64);
            tracep->chgQData(oldp+736,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                   ^ (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                    | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    ((((QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                     & (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)) 
                                                      - 
                                                      (((QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                       + (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                       : 0ULL)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297))),64);
            tracep->chgIData(oldp+738,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361))),32);
            tracep->chgIData(oldp+739,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419))),32);
            tracep->chgIData(oldp+740,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477))),32);
            tracep->chgIData(oldp+741,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x5bU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535))),32);
            tracep->chgCData(oldp+742,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069))))),8);
            tracep->chgCData(oldp+743,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 8U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 8U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 8U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 8U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127))))),8);
            tracep->chgCData(oldp+744,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x10U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185))))),8);
            tracep->chgCData(oldp+745,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x18U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x18U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x18U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 8U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 8U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x18U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243))))),8);
            tracep->chgCData(oldp+746,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301))))),8);
            tracep->chgCData(oldp+747,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 8U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 8U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 8U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 8U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359))))),8);
            tracep->chgCData(oldp+748,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x10U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417))))),8);
            tracep->chgCData(oldp+749,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x18U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x18U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x18U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 8U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 8U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x18U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475))))),8);
            tracep->chgCData(oldp+750,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533))))),8);
            tracep->chgCData(oldp+751,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 8U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 8U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 8U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 8U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591))))),8);
            tracep->chgCData(oldp+752,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x10U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649))))),8);
            tracep->chgCData(oldp+753,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x18U)) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x18U)) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x18U)) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 8U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 8U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x18U)) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707))))),8);
            tracep->chgCData(oldp+754,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765))))),8);
            tracep->chgCData(oldp+755,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 8U) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 8U) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 8U) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 8U))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 8U) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823))))),8);
            tracep->chgCData(oldp+756,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 0x10U) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 0x10U) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881))))),8);
            tracep->chgCData(oldp+757,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 0x18U) 
                                                      ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 0x18U) 
                                                       | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x18U) 
                                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x18U))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x18U) 
                                                          + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939))))),8);
            tracep->chgSData(oldp+758,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599))))),16);
            tracep->chgSData(oldp+759,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)) 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x10U)) 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x10U)) 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                               >> 0x10U)))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                >> 0x10U)) 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657))))),16);
            tracep->chgSData(oldp+760,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715))))),16);
            tracep->chgSData(oldp+761,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)) 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x10U)) 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x10U)) 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                               >> 0x10U)))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                >> 0x10U)) 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773))))),16);
            tracep->chgSData(oldp+762,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831))))),16);
            tracep->chgSData(oldp+763,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)) 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x10U)) 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x10U)) 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                               >> 0x10U)))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                >> 0x10U)) 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889))))),16);
            tracep->chgSData(oldp+764,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947))))),16);
            tracep->chgSData(oldp+765,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U) 
                                                        ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x2bU 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U) 
                                                         | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 
                                                        ((0x4bU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U) 
                                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 
                                                         ((0x1bU 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                           ? 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                           - 
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                            ? 
                                                           ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             >> 0x10U) 
                                                            + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                            : 0U)))))))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005))))),16);
            tracep->chgQData(oldp+766,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_IQQ(1,64,64, (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
                                                               (((QData)((IData)(
                                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)) 
                                                     >= 
                                                     (((QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3480))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+768,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_IQQ(1,64,64, (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
                                                               (((QData)((IData)(
                                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)) 
                                                     >= 
                                                     (((QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3553))))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (1U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 0xffffffffffffffffULL)))),64);
            tracep->chgIData(oldp+770,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3636)))
                                             : 0xffffffffU))),32);
            tracep->chgIData(oldp+771,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3709)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (1U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+772,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3782)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (2U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+773,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffU
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3855)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (3U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 0xffffffffU)))),32);
            tracep->chgCData(oldp+774,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3932))))))
                                                   : 0xffU)))),8);
            tracep->chgCData(oldp+775,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                       << 0x18U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                         >> 8U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                               >> 8U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                           >> 8U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 8U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4005))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (1U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+776,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                         >> 0x10U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                               >> 0x10U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4078))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (2U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+777,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                       << 8U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                         >> 0x18U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             << 8U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                               >> 0x18U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                           >> 0x18U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4151))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (3U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+778,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4224))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (4U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+779,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                       << 0x18U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         >> 8U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                               >> 8U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                           >> 8U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 8U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4297))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (5U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+780,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         >> 0x10U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                               >> 0x10U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4370))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (6U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+781,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                       << 8U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         >> 0x18U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             << 8U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                               >> 0x18U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                           >> 0x18U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4443))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (7U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+782,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4516))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (8U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+783,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                       << 0x18U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         >> 8U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                               >> 8U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                           >> 8U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 8U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4589))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (9U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+784,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                       << 0x10U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         >> 0x10U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                               >> 0x10U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4662))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xaU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+785,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                       << 8U) 
                                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         >> 0x18U))))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             << 8U) 
                                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                               >> 0x18U))))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 8U) 
                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                           >> 0x18U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 8U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4735))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xbU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+786,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4808))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xcU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+787,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                      >> 8U)))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 8U))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 8U)))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 8U))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 8U)))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 8U))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4881))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xdU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+788,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                      >> 0x10U)))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 0x10U))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U)))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 0x10U))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 0x10U)))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4954))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xeU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+789,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(1,8,8, 
                                                                  (0xffU 
                                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                      >> 0x18U)))
                                                       ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 0x18U))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x18U)))
                                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 0x18U))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(1,8,8, 
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 0x18U)))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x18U))
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5027))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xfU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U)
                                                    : 0xffU))))),8);
            tracep->chgSData(oldp+790,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5108))))))
                                                     : 0xffffU)))),16);
            tracep->chgSData(oldp+791,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                 >> 0x10U))))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                           << 0x10U) 
                                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                             >> 0x10U))))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x10U)))
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5181))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (1U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+792,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5254))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (2U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+793,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                 >> 0x10U))))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                           << 0x10U) 
                                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                             >> 0x10U))))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x10U)))
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5327))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (3U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+794,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5400))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (4U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+795,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                           >> 0x10U))))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                 >> 0x10U))))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                           << 0x10U) 
                                                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                             >> 0x10U))))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x10U)))
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5473))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (5U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+796,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5546))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (6U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+797,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                       ? 0xffffU
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_GTES_III(1,16,16, 
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 0x10U)))
                                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((0xffffU 
                                                           & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                          >= 
                                                          (0xffffU 
                                                           & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                              >> 0x10U)))
                                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                          : 
                                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U))
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (VL_LTES_III(1,16,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                      (0xffffU 
                                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                          >> 0x10U)))
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                           : 
                                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U))
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5619))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (7U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)
                                                      : 0xffffU))))),16);
            tracep->chgQData(oldp+798,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+800,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
            tracep->chgQData(oldp+802,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+804,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
            tracep->chgQData(oldp+806,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
            tracep->chgQData(oldp+808,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
            tracep->chgQData(oldp+810,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+812,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
            tracep->chgQData(oldp+814,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
            tracep->chgQData(oldp+816,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
            tracep->chgQData(oldp+818,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
            tracep->chgQData(oldp+820,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
            tracep->chgQData(oldp+822,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
            tracep->chgQData(oldp+824,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
            tracep->chgQData(oldp+826,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+828,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
            tracep->chgQData(oldp+830,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
            tracep->chgQData(oldp+832,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
            tracep->chgQData(oldp+834,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
            tracep->chgQData(oldp+836,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
            tracep->chgQData(oldp+838,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
            tracep->chgQData(oldp+840,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
            tracep->chgQData(oldp+842,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
            tracep->chgQData(oldp+844,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
            tracep->chgQData(oldp+846,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
            tracep->chgQData(oldp+848,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
            tracep->chgQData(oldp+850,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
            tracep->chgQData(oldp+852,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
            tracep->chgQData(oldp+854,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
            tracep->chgQData(oldp+856,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
            tracep->chgQData(oldp+858,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+860,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
            tracep->chgQData(oldp+862,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+864,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
            tracep->chgQData(oldp+866,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
            tracep->chgQData(oldp+868,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
            tracep->chgQData(oldp+870,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+872,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
            tracep->chgQData(oldp+874,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
            tracep->chgQData(oldp+876,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
            tracep->chgQData(oldp+878,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
            tracep->chgQData(oldp+880,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
            tracep->chgQData(oldp+882,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
            tracep->chgQData(oldp+884,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
            tracep->chgQData(oldp+886,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
            tracep->chgQData(oldp+888,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
            tracep->chgQData(oldp+890,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
            tracep->chgQData(oldp+892,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
            tracep->chgQData(oldp+894,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
            tracep->chgQData(oldp+896,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
            tracep->chgQData(oldp+898,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
            tracep->chgQData(oldp+900,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
            tracep->chgQData(oldp+902,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+904,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
            tracep->chgQData(oldp+906,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
            tracep->chgQData(oldp+908,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
            tracep->chgQData(oldp+910,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
            tracep->chgQData(oldp+912,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
            tracep->chgQData(oldp+914,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
            tracep->chgQData(oldp+916,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
            tracep->chgIData(oldp+918,(((0xffff0000U 
                                         & (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                            << 0x10U)) 
                                        | (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+919,(vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o),32);
            tracep->chgIData(oldp+920,(vlTOPp->Top__DOT__imem__DOT__sram_rdata_o),32);
            tracep->chgBit(oldp+921,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+922,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+923,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+924,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+925,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__we_o));
            tracep->chgBit(oldp+926,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+927,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+928,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+929,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+930,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__we_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+931,(vlTOPp->Top__DOT__core__DOT__MEM_io_readData),32);
            tracep->chgIData(oldp+932,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
            tracep->chgIData(oldp+933,(vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData),32);
            tracep->chgIData(oldp+934,(vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult),32);
            tracep->chgIData(oldp+935,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1),32);
            tracep->chgIData(oldp+936,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2),32);
            tracep->chgBit(oldp+937,(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc));
            tracep->chgIData(oldp+938,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
            tracep->chgIData(oldp+939,(vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
            tracep->chgCData(oldp+940,(((0xbU == (0x1fU 
                                                  & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                     >> 0x14U)))
                                         ? 3U : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x14U)))
                                                  ? 2U
                                                  : 
                                                 (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x14U)))))),2);
            tracep->chgCData(oldp+941,(((3U == (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x1aU)))
                                         ? 4U : ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x1aU)))
                                                  ? 3U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                       >> 0x1aU)))
                                                   ? 2U
                                                   : 1U)))),4);
            tracep->chgSData(oldp+942,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew),10);
            tracep->chgIData(oldp+943,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
            tracep->chgBit(oldp+944,(((0U != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                      & ((0U == (3U 
                                                 & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                          ? ((0U == 
                                              (3U & 
                                               (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                             | ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xeU))) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       >> 0xeU)))))
                                          : ((1U == 
                                              (3U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xdU))) 
                                                 | (IData)(vlTOPp->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                                 & ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         >> 0xeU))) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            >> 0xeU))) 
                                                       | ((2U 
                                                           == 
                                                           (3U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                               >> 0xeU))) 
                                                          | (3U 
                                                             == 
                                                             (3U 
                                                              & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                 >> 0xeU))))))))))));
            tracep->chgIData(oldp+945,(vlTOPp->Top__DOT__core__DOT__vlcount1),32);
            tracep->chgCData(oldp+946,(((0x33U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                         ? (0x3fU & 
                                            (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                             >> 0x19U))
                                         : 0U)),6);
            tracep->chgBit(oldp+947,(vlTOPp->Top__DOT__core__DOT__IF_stall));
            tracep->chgIData(oldp+948,(vlTOPp->Top__DOT__core__DOT___GEN_13),32);
            tracep->chgBit(oldp+949,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
            tracep->chgIData(oldp+950,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
            tracep->chgIData(oldp+951,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
            tracep->chgIData(oldp+952,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
            tracep->chgIData(oldp+953,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
            tracep->chgIData(oldp+954,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
            tracep->chgIData(oldp+955,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
            tracep->chgIData(oldp+956,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
            tracep->chgIData(oldp+957,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
            tracep->chgIData(oldp+958,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
            tracep->chgIData(oldp+959,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
            tracep->chgIData(oldp+960,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a),32);
            tracep->chgIData(oldp+961,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b),32);
            tracep->chgIData(oldp+962,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
            tracep->chgIData(oldp+963,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
            tracep->chgQData(oldp+964,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7),64);
            tracep->chgQData(oldp+966,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12),64);
            tracep->chgWData(oldp+968,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19),512);
            tracep->chgWData(oldp+984,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24),512);
            tracep->chgQData(oldp+1000,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
            tracep->chgQData(oldp+1002,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result),64);
            tracep->chgIData(oldp+1004,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata),32);
            tracep->chgIData(oldp+1005,(((0x80U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffffU
                                          : 0U)),24);
            tracep->chgCData(oldp+1006,((0xffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),8);
            tracep->chgIData(oldp+1007,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffffU
                                          : 0U)),24);
            tracep->chgCData(oldp+1008,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                  >> 8U))),8);
            tracep->chgIData(oldp+1009,(((0x800000U 
                                          & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffffU
                                          : 0U)),24);
            tracep->chgCData(oldp+1010,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                  >> 0x10U))),8);
            tracep->chgIData(oldp+1011,(((0x80000000U 
                                          & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffffU
                                          : 0U)),24);
            tracep->chgCData(oldp+1012,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                  >> 0x18U))),8);
            tracep->chgSData(oldp+1013,((0xffffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),16);
            tracep->chgSData(oldp+1014,((0xffffU & 
                                         (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                          >> 8U))),16);
            tracep->chgSData(oldp+1015,((0xffffU & 
                                         (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                          >> 0x10U))),16);
            tracep->chgSData(oldp+1016,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffU
                                          : 0U)),16);
            tracep->chgSData(oldp+1017,(((0x800000U 
                                          & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffU
                                          : 0U)),16);
            tracep->chgSData(oldp+1018,(((0x80000000U 
                                          & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                          ? 0xffffU
                                          : 0U)),16);
            tracep->chgCData(oldp+1019,((3U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x1aU))),2);
            tracep->chgCData(oldp+1020,((0x1fU & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+1021,((7U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1022,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew),7);
            tracep->chgCData(oldp+1023,(((3U == (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x1aU)))
                                          ? 4U : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                       >> 0x1aU)))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                        >> 0x1aU)))
                                                    ? 2U
                                                    : 1U)))),3);
            tracep->chgSData(oldp+1024,((0xffffU & vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction)),16);
            tracep->chgCData(oldp+1025,((0xfU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 >> 7U))),4);
            tracep->chgCData(oldp+1026,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1027,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 5U))));
            tracep->chgBit(oldp+1028,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 6U))));
            tracep->chgCData(oldp+1029,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 2U))),3);
            tracep->chgCData(oldp+1030,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xaU))),3);
            tracep->chgCData(oldp+1031,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1032,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1033,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xaU))),2);
            tracep->chgIData(oldp+1034,((0x2023U | 
                                         ((0x38000U 
                                           & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              << 8U)) 
                                          | ((0xc00U 
                                              & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                             | (0x200U 
                                                & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 3U)))))),18);
            tracep->chgCData(oldp+1035,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x3fU : 0U)),6);
            tracep->chgCData(oldp+1036,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 2U))),5);
            tracep->chgCData(oldp+1037,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 7U))),5);
            tracep->chgBit(oldp+1038,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 8U))));
            tracep->chgCData(oldp+1039,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 9U))),2);
            tracep->chgBit(oldp+1040,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 7U))));
            tracep->chgBit(oldp+1041,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 2U))));
            tracep->chgBit(oldp+1042,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1043,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),3);
            tracep->chgSData(oldp+1044,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x1ffU : 0U)),9);
            tracep->chgBit(oldp+1045,((1U & (~ (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xfU)))));
            tracep->chgIData(oldp+1046,((0x6fU | ((0x1000000U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 0x12U)) 
                                                     | ((((0x1000U 
                                                           & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                           ? 0x1ffU
                                                           : 0U) 
                                                         << 0xcU) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                >> 0xfU)) 
                                                              << 7U))))))),25);
            tracep->chgSData(oldp+1047,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x7fffU
                                          : 0U)),15);
            tracep->chgCData(oldp+1048,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 7U : 0U)),3);
            tracep->chgCData(oldp+1049,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),2);
            tracep->chgBit(oldp+1050,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1051,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0xfU : 0U)),4);
            tracep->chgBit(oldp+1052,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xdU))));
            tracep->chgSData(oldp+1053,((0x63U | ((0x1000U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 1U)) 
                                                  | ((0xc00U 
                                                      & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                     | ((0x300U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            << 5U)) 
                                                        | (0x80U 
                                                           & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                              >> 5U))))))),15);
            tracep->chgCData(oldp+1054,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1055,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 4U))),3);
            tracep->chgCData(oldp+1056,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),2);
            tracep->chgCData(oldp+1057,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 9U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1058,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
            tracep->chgIData(oldp+1059,((0x3fffffffU 
                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),32);
            tracep->chgIData(oldp+1060,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
            tracep->chgIData(oldp+1061,(vlTOPp->Top__DOT__core__DOT__pc_io_in),32);
            tracep->chgBit(oldp+1062,(vlTOPp->Top__DOT__core__DOT__pc_io_halt));
            tracep->chgBit(oldp+1063,((1U & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                             >> 1U))));
            tracep->chgBit(oldp+1064,((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
            tracep->chgSData(oldp+1065,((0x1fffU & 
                                         (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                          >> 2U))),13);
            tracep->chgSData(oldp+1066,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),12);
            tracep->chgSData(oldp+1067,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),13);
        }
        tracep->chgBit(oldp+1068,(vlTOPp->clock));
        tracep->chgBit(oldp+1069,(vlTOPp->reset));
        tracep->chgIData(oldp+1070,(vlTOPp->io_pin),32);
        tracep->chgWData(oldp+1071,(vlTOPp->io_v_pin),128);
        tracep->chgIData(oldp+1075,(vlTOPp->io_fcsr),32);
        tracep->chgIData(oldp+1076,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(4U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1077,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(2U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1078,(((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                      ? vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data
                                      : ((5U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                          ? vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data
                                          : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_csr_data
                                              : ((3U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                  ? vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o
                                                    : vlTOPp->Top__DOT__core__DOT__ex_reg_result)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                                    : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1))))))),32);
        tracep->chgBit(oldp+1079,((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                    & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                       >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
        tracep->chgBit(oldp+1080,(vlTOPp->Top__DOT__dmem__DOT__sram_csb_i));
        tracep->chgBit(oldp+1081,(vlTOPp->Top__DOT__dmem__DOT__sram_we_i));
        tracep->chgBit(oldp+1082,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rvalid));
        tracep->chgBit(oldp+1083,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rvalid));
    }
}
