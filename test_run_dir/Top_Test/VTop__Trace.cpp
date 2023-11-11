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
    WData/*127:0*/ __Vtemp1089[4];
    WData/*127:0*/ __Vtemp1097[4];
    WData/*127:0*/ __Vtemp1105[4];
    WData/*127:0*/ __Vtemp1122[4];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vddata_o),128);
            tracep->chgBit(oldp+4,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
            tracep->chgIData(oldp+5,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                >> 2U))),32);
            tracep->chgIData(oldp+6,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
            tracep->chgCData(oldp+7,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
            tracep->chgBit(oldp+8,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
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
                                            ? 0U : 
                                           (((7U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x1eU))))
                                             ? 1U : 
                                            (((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU))))
                                              ? 0U : 
                                             ((0U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                               ? 2U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 
                                                  (3U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU))))))))
                                        : 0U)),5);
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
            tracep->chgBit(oldp+60,((0x57U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
            tracep->chgWData(oldp+61,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
            tracep->chgCData(oldp+65,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
            tracep->chgBit(oldp+66,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write));
            tracep->chgCData(oldp+67,(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v),4);
            tracep->chgCData(oldp+68,(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v),4);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1089[0U] = 0U;
                __Vtemp1089[1U] = 0U;
                __Vtemp1089[2U] = 0U;
                __Vtemp1089[3U] = 0U;
            } else {
                __Vtemp1089[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                        : 0U));
                __Vtemp1089[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                        : 0U));
                __Vtemp1089[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                        : 0U));
                __Vtemp1089[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+69,(__Vtemp1089),128);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1097[0U] = 0U;
                __Vtemp1097[1U] = 0U;
                __Vtemp1097[2U] = 0U;
                __Vtemp1097[3U] = 0U;
            } else {
                __Vtemp1097[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                        : 0U));
                __Vtemp1097[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                        : 0U));
                __Vtemp1097[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                        : 0U));
                __Vtemp1097[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+73,(__Vtemp1097),128);
            if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
                __Vtemp1105[0U] = 0U;
                __Vtemp1105[1U] = 0U;
                __Vtemp1105[2U] = 0U;
                __Vtemp1105[3U] = 0U;
            } else {
                __Vtemp1105[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                        : 0U));
                __Vtemp1105[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                        : 0U));
                __Vtemp1105[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                        : 0U));
                __Vtemp1105[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                    : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+77,(__Vtemp1105),128);
            tracep->chgCData(oldp+81,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+82,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+83,(((0xfffff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1eU)))) 
                                           << 0xbU)) 
                                       | (0x7ffU & 
                                          (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+84,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),32);
            tracep->chgSData(oldp+85,(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype),11);
            tracep->chgSData(oldp+86,((0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
            tracep->chgIData(oldp+87,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl),32);
            tracep->chgBit(oldp+88,(vlTOPp->Top__DOT__core__DOT__mem_reg_vset));
            tracep->chgIData(oldp+89,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
            tracep->chgCData(oldp+90,(((0x33U == (0x7fU 
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
            tracep->chgBit(oldp+91,((1U & ((~ (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
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
            tracep->chgBit(oldp+92,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
            tracep->chgBit(oldp+93,(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall));
            tracep->chgIData(oldp+94,(((3U == (0xfffU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                        : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25)),32);
            tracep->chgBit(oldp+95,((0x73U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
            tracep->chgIData(oldp+96,(vlTOPp->Top__DOT__core__DOT__id_reg_imm),32);
            tracep->chgIData(oldp+97,(vlTOPp->Top__DOT__core__DOT__id_reg_rd1),32);
            tracep->chgIData(oldp+98,(vlTOPp->Top__DOT__core__DOT__id_reg_rd2),32);
            tracep->chgIData(oldp+99,(vlTOPp->Top__DOT__core__DOT__id_reg_pc),32);
            tracep->chgCData(oldp+100,(vlTOPp->Top__DOT__core__DOT__id_reg_f7),7);
            tracep->chgCData(oldp+101,(vlTOPp->Top__DOT__core__DOT__id_reg_f3),3);
            tracep->chgBit(oldp+102,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
            tracep->chgCData(oldp+103,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
            tracep->chgCData(oldp+104,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
            tracep->chgCData(oldp+105,((0x3fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x1aU))),6);
            tracep->chgCData(oldp+106,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
            tracep->chgCData(oldp+107,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
            tracep->chgBit(oldp+108,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
            tracep->chgBit(oldp+109,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel));
            tracep->chgBit(oldp+110,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load));
            tracep->chgBit(oldp+111,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
            tracep->chgBit(oldp+112,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
            tracep->chgWData(oldp+113,(vlTOPp->Top__DOT__core__DOT__id_reg_v1_data),128);
            tracep->chgWData(oldp+117,(vlTOPp->Top__DOT__core__DOT__id_reg_v2_data),128);
            tracep->chgIData(oldp+121,(vlTOPp->Top__DOT__core__DOT__Execute_io_vl),32);
            tracep->chgIData(oldp+122,(vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out),32);
            tracep->chgWData(oldp+123,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_data),128);
            tracep->chgBit(oldp+127,(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
            tracep->chgBit(oldp+128,(vlTOPp->Top__DOT__core__DOT__Execute_io_vta));
            tracep->chgBit(oldp+129,((1U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                            >> 0x19U))));
            tracep->chgWData(oldp+130,(vlTOPp->Top__DOT__core__DOT__id_reg_v0_data),128);
            tracep->chgCData(oldp+134,(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew),3);
            tracep->chgIData(oldp+135,(vlTOPp->Top__DOT__core__DOT__id_reg_vtype),32);
            tracep->chgIData(oldp+136,(vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
            tracep->chgWData(oldp+137,(vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
            tracep->chgCData(oldp+141,(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr),5);
            tracep->chgCData(oldp+142,(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr),5);
            tracep->chgCData(oldp+143,(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr),5);
            tracep->chgBit(oldp+144,(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
            tracep->chgCData(oldp+145,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
            tracep->chgIData(oldp+146,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
            tracep->chgBit(oldp+147,(vlTOPp->Top__DOT__core__DOT__Execute_io_stall));
            tracep->chgIData(oldp+148,(vlTOPp->Top__DOT__core__DOT__ex_reg_wd),32);
            tracep->chgCData(oldp+149,((7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                              >> 0xcU))),3);
            tracep->chgIData(oldp+150,(vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
            tracep->chgBit(oldp+151,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgCData(oldp+152,(vlTOPp->Top__DOT__core__DOT__id_reg_wra),5);
            tracep->chgCData(oldp+153,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
            tracep->chgBit(oldp+154,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
            tracep->chgSData(oldp+155,(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm),11);
            tracep->chgCData(oldp+156,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr),5);
            tracep->chgCData(oldp+157,(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v),4);
            tracep->chgCData(oldp+158,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
            tracep->chgCData(oldp+159,(vlTOPp->Top__DOT__core__DOT__ex_reg_wra),5);
            tracep->chgCData(oldp+160,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
            tracep->chgIData(oldp+161,(vlTOPp->Top__DOT__core__DOT__ex_reg_pc),32);
            tracep->chgIData(oldp+162,(vlTOPp->Top__DOT__core__DOT__ex_reg_vl),32);
            tracep->chgCData(oldp+163,(vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v),4);
            tracep->chgBit(oldp+164,(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
            tracep->chgSData(oldp+165,(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype),11);
            tracep->chgIData(oldp+166,(vlTOPp->Top__DOT__core__DOT__mem_reg_result),32);
            tracep->chgCData(oldp+167,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
            tracep->chgCData(oldp+168,(vlTOPp->Top__DOT__core__DOT__lmul),3);
            tracep->chgIData(oldp+169,(vlTOPp->Top__DOT__core__DOT__lmul_reg),32);
            tracep->chgIData(oldp+170,(vlTOPp->Top__DOT__core__DOT__vlmul_count),32);
            tracep->chgIData(oldp+171,(vlTOPp->Top__DOT__core__DOT__REG___05F0),32);
            tracep->chgIData(oldp+172,(vlTOPp->Top__DOT__core__DOT__REG___05F1),32);
            tracep->chgIData(oldp+173,(vlTOPp->Top__DOT__core__DOT__REG___05F2),32);
            tracep->chgCData(oldp+174,(vlTOPp->Top__DOT__core__DOT__REG_1_0),5);
            tracep->chgCData(oldp+175,(vlTOPp->Top__DOT__core__DOT__REG_1_1),5);
            tracep->chgCData(oldp+176,(vlTOPp->Top__DOT__core__DOT__REG_2_0),5);
            tracep->chgCData(oldp+177,(vlTOPp->Top__DOT__core__DOT__REG_2_1),5);
            tracep->chgIData(oldp+178,(vlTOPp->Top__DOT__core__DOT__REG_3_0),32);
            tracep->chgIData(oldp+179,(vlTOPp->Top__DOT__core__DOT__REG_4_0),32);
            tracep->chgBit(oldp+180,(vlTOPp->Top__DOT__core__DOT__REG_7_0));
            tracep->chgBit(oldp+181,(vlTOPp->Top__DOT__core__DOT__REG_7_1));
            tracep->chgBit(oldp+182,(vlTOPp->Top__DOT__core__DOT__REG_7_2));
            tracep->chgSData(oldp+183,((0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),12);
            tracep->chgBit(oldp+184,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
            tracep->chgCData(oldp+185,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
            tracep->chgBit(oldp+186,(((0x33U == (0x7fU 
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
            tracep->chgBit(oldp+187,(((0x33U != (0x7fU 
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
            tracep->chgBit(oldp+188,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
            tracep->chgBit(oldp+189,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
            tracep->chgCData(oldp+190,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
            tracep->chgIData(oldp+191,(((0U == (0x1fU 
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
            tracep->chgIData(oldp+192,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
            tracep->chgIData(oldp+193,(((((0x40000000U 
                                           & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+194,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
            tracep->chgCData(oldp+195,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+196,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
            tracep->chgBit(oldp+197,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
            tracep->chgBit(oldp+198,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
            tracep->chgBit(oldp+199,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
            tracep->chgBit(oldp+200,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
            tracep->chgCData(oldp+201,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
            tracep->chgCData(oldp+202,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
            tracep->chgIData(oldp+203,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
            tracep->chgIData(oldp+204,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
            tracep->chgIData(oldp+205,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
            tracep->chgIData(oldp+206,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
            tracep->chgIData(oldp+207,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
            tracep->chgIData(oldp+208,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
            tracep->chgBit(oldp+209,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
            tracep->chgBit(oldp+210,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
            tracep->chgCData(oldp+211,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
            tracep->chgBit(oldp+212,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
            tracep->chgBit(oldp+213,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
            tracep->chgSData(oldp+214,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                         << 7U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                   << 3U))),11);
            tracep->chgIData(oldp+215,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                         << 0x15U) 
                                        | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                            << 0x11U) 
                                           | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                  << 7U) 
                                                 | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                    << 3U)))))),32);
            tracep->chgIData(oldp+216,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                         << 4U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
            tracep->chgIData(oldp+217,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
            tracep->chgIData(oldp+218,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
            tracep->chgIData(oldp+219,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
            tracep->chgBit(oldp+220,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
            tracep->chgBit(oldp+221,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
            tracep->chgBit(oldp+222,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
            tracep->chgBit(oldp+223,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
            tracep->chgBit(oldp+224,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
            tracep->chgBit(oldp+225,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
            tracep->chgCData(oldp+226,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x1eU))),2);
            tracep->chgCData(oldp+227,((0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)),7);
            tracep->chgIData(oldp+228,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
            tracep->chgIData(oldp+229,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
            tracep->chgIData(oldp+230,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
            tracep->chgIData(oldp+231,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
            tracep->chgIData(oldp+232,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
            tracep->chgIData(oldp+233,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
            tracep->chgIData(oldp+234,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
            tracep->chgIData(oldp+235,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
            tracep->chgIData(oldp+236,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
            tracep->chgIData(oldp+237,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
            tracep->chgIData(oldp+238,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
            tracep->chgIData(oldp+239,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
            tracep->chgIData(oldp+240,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
            tracep->chgIData(oldp+241,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
            tracep->chgIData(oldp+242,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
            tracep->chgIData(oldp+243,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
            tracep->chgIData(oldp+244,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
            tracep->chgIData(oldp+245,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
            tracep->chgIData(oldp+246,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
            tracep->chgIData(oldp+247,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
            tracep->chgIData(oldp+248,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
            tracep->chgIData(oldp+249,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
            tracep->chgIData(oldp+250,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
            tracep->chgIData(oldp+251,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
            tracep->chgIData(oldp+252,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
            tracep->chgIData(oldp+253,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
            tracep->chgIData(oldp+254,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
            tracep->chgIData(oldp+255,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
            tracep->chgIData(oldp+256,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
            tracep->chgIData(oldp+257,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
            tracep->chgIData(oldp+258,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
            tracep->chgIData(oldp+259,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
            tracep->chgWData(oldp+260,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
            tracep->chgWData(oldp+264,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
            tracep->chgWData(oldp+268,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
            tracep->chgWData(oldp+272,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
            tracep->chgWData(oldp+276,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
            tracep->chgWData(oldp+280,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
            tracep->chgWData(oldp+284,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
            tracep->chgWData(oldp+288,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
            tracep->chgWData(oldp+292,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
            tracep->chgWData(oldp+296,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
            tracep->chgWData(oldp+300,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
            tracep->chgWData(oldp+304,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
            tracep->chgWData(oldp+308,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
            tracep->chgWData(oldp+312,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
            tracep->chgWData(oldp+316,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
            tracep->chgWData(oldp+320,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
            tracep->chgWData(oldp+324,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
            tracep->chgWData(oldp+328,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
            tracep->chgWData(oldp+332,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
            tracep->chgWData(oldp+336,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
            tracep->chgWData(oldp+340,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
            tracep->chgWData(oldp+344,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
            tracep->chgWData(oldp+348,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
            tracep->chgWData(oldp+352,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
            tracep->chgWData(oldp+356,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
            tracep->chgWData(oldp+360,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
            tracep->chgWData(oldp+364,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
            tracep->chgWData(oldp+368,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
            tracep->chgWData(oldp+372,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
            tracep->chgWData(oldp+376,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
            tracep->chgWData(oldp+380,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
            tracep->chgWData(oldp+384,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
            tracep->chgCData(oldp+388,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
            tracep->chgCData(oldp+389,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
            tracep->chgCData(oldp+390,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
            tracep->chgIData(oldp+391,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0xfffffU
                                         : 0U)),20);
            tracep->chgIData(oldp+392,((0xfffffU & 
                                        (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0xcU))),20);
            tracep->chgCData(oldp+393,((0x7fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),7);
            tracep->chgSData(oldp+394,(((0xfe0U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U)))),12);
            tracep->chgBit(oldp+395,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+396,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U))));
            tracep->chgCData(oldp+397,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),6);
            tracep->chgCData(oldp+398,((0xfU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U))),4);
            tracep->chgSData(oldp+399,(((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
            tracep->chgIData(oldp+400,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffffU
                                         : 0U)),19);
            tracep->chgCData(oldp+401,((0xffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+402,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U))));
            tracep->chgSData(oldp+403,((0x3ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+404,(((0x80000U & 
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
            tracep->chgSData(oldp+405,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffU : 0U)),11);
            tracep->chgIData(oldp+406,(((0x40000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+407,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),11);
            tracep->chgCData(oldp+408,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
            tracep->chgBit(oldp+409,((1U & ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                            >> 5U))));
            tracep->chgCData(oldp+410,((0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+411,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+412,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+413,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
            tracep->chgCData(oldp+414,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
            tracep->chgSData(oldp+415,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
            tracep->chgWData(oldp+416,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
            tracep->chgWData(oldp+420,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
            tracep->chgIData(oldp+424,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12),32);
            tracep->chgCData(oldp+425,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
            tracep->chgIData(oldp+426,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset)
                                         ? vlTOPp->Top__DOT__core__DOT__Execute_io_vl
                                         : 0U)),32);
            tracep->chgIData(oldp+427,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
            tracep->chgCData(oldp+428,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35),5);
            tracep->chgBit(oldp+429,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid));
            tracep->chgBit(oldp+430,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
            tracep->chgBit(oldp+431,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                      | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                           | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                          | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                         | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                             | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                                            & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))));
            tracep->chgIData(oldp+432,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG),32);
            tracep->chgIData(oldp+433,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1),32);
            tracep->chgCData(oldp+434,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2),3);
            tracep->chgBit(oldp+435,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
            tracep->chgCData(oldp+436,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4),6);
            tracep->chgCData(oldp+437,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5),6);
            tracep->chgCData(oldp+438,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
            tracep->chgCData(oldp+439,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+440,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+441,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+442,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
            tracep->chgCData(oldp+443,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+444,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+445,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+446,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
            tracep->chgCData(oldp+447,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+448,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+449,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+450,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
            tracep->chgCData(oldp+451,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+452,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+453,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+454,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
            tracep->chgCData(oldp+455,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+456,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+457,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+458,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
            tracep->chgCData(oldp+459,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+460,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+461,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+462,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
            tracep->chgCData(oldp+463,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+464,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+465,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+466,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
            tracep->chgCData(oldp+467,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+468,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+469,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+470,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
            tracep->chgSData(oldp+471,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+472,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
            tracep->chgSData(oldp+473,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+474,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
            tracep->chgSData(oldp+475,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+476,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
            tracep->chgSData(oldp+477,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+478,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
            tracep->chgSData(oldp+479,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+480,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
            tracep->chgSData(oldp+481,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+482,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
            tracep->chgSData(oldp+483,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+484,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
            tracep->chgSData(oldp+485,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+486,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
            tracep->chgIData(oldp+487,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
            tracep->chgIData(oldp+488,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
            tracep->chgIData(oldp+489,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
            tracep->chgIData(oldp+490,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
            tracep->chgIData(oldp+491,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
            tracep->chgIData(oldp+492,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
            tracep->chgIData(oldp+493,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
            tracep->chgQData(oldp+494,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
            tracep->chgQData(oldp+496,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
            tracep->chgQData(oldp+498,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
            tracep->chgQData(oldp+500,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
            tracep->chgCData(oldp+502,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])),8);
            tracep->chgCData(oldp+503,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+504,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+505,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+506,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])),8);
            tracep->chgCData(oldp+507,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+508,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+509,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+510,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])),8);
            tracep->chgCData(oldp+511,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+512,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+513,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+514,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])),8);
            tracep->chgCData(oldp+515,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+516,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+517,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+518,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])),16);
            tracep->chgSData(oldp+519,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+520,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])),16);
            tracep->chgSData(oldp+521,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+522,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])),16);
            tracep->chgSData(oldp+523,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+524,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])),16);
            tracep->chgSData(oldp+525,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+526,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]),32);
            tracep->chgIData(oldp+527,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]),32);
            tracep->chgIData(oldp+528,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]),32);
            tracep->chgIData(oldp+529,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]),32);
            tracep->chgQData(oldp+530,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))),64);
            tracep->chgQData(oldp+532,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))),64);
            tracep->chgQData(oldp+534,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
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
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_230))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_238))),64);
            tracep->chgQData(oldp+536,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
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
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_288))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_296))),64);
            tracep->chgIData(oldp+538,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_351))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_359))),32);
            tracep->chgIData(oldp+539,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_409))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_417))),32);
            tracep->chgIData(oldp+540,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_467))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_475))),32);
            tracep->chgIData(oldp+541,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                 : 
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_525))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_533))),32);
            tracep->chgSData(oldp+542,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_588)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_596))))),16);
            tracep->chgSData(oldp+543,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_646)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_654))))),16);
            tracep->chgSData(oldp+544,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_704)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_712))))),16);
            tracep->chgSData(oldp+545,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_762)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_770))))),16);
            tracep->chgSData(oldp+546,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_780) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_820)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_828))))),16);
            tracep->chgSData(oldp+547,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_838) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_878)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_886))))),16);
            tracep->chgSData(oldp+548,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_896) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_936)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_944))))),16);
            tracep->chgSData(oldp+549,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
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
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_994)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1002))))),16);
            tracep->chgCData(oldp+550,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1057)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1065))))),8);
            tracep->chgCData(oldp+551,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1115)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1123))))),8);
            tracep->chgCData(oldp+552,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1173)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1181))))),8);
            tracep->chgCData(oldp+553,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1231)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1239))))),8);
            tracep->chgCData(oldp+554,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_780) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1289)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1297))))),8);
            tracep->chgCData(oldp+555,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_838) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1347)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1355))))),8);
            tracep->chgCData(oldp+556,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_896) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1405)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1413))))),8);
            tracep->chgCData(oldp+557,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1463)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1471))))),8);
            tracep->chgQData(oldp+558,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3),64);
            tracep->chgCData(oldp+560,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1521)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1529))))),8);
            tracep->chgCData(oldp+561,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1579)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1587))))),8);
            tracep->chgCData(oldp+562,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1637)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1645))))),8);
            tracep->chgCData(oldp+563,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1695)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1703))))),8);
            tracep->chgCData(oldp+564,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1753)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1761))))),8);
            tracep->chgCData(oldp+565,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1811)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1819))))),8);
            tracep->chgCData(oldp+566,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1869)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1877))))),8);
            tracep->chgCData(oldp+567,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1927)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1935))))),8);
            tracep->chgQData(oldp+568,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+570,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
            tracep->chgQData(oldp+572,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+574,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+576,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+578,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+580,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+582,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
            tracep->chgQData(oldp+584,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
            tracep->chgQData(oldp+586,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
            tracep->chgQData(oldp+588,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+590,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
            tracep->chgQData(oldp+592,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
            tracep->chgQData(oldp+594,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
            tracep->chgQData(oldp+596,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+598,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 8U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
            tracep->chgQData(oldp+600,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
            tracep->chgQData(oldp+602,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x18U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
            tracep->chgQData(oldp+604,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+606,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 8U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+608,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+610,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x18U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgWData(oldp+612,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28),512);
            tracep->chgQData(oldp+628,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+630,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
            tracep->chgQData(oldp+632,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+634,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
            tracep->chgQData(oldp+636,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+638,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
            tracep->chgQData(oldp+640,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+642,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgCData(oldp+644,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))),3);
            tracep->chgCData(oldp+645,((7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+646,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))) 
                                            | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                               >> 2U)))));
            tracep->chgBit(oldp+647,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & (~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                   >> 1U))) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
            tracep->chgBit(oldp+648,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                >> 1U)) 
                                            & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))))));
            tracep->chgBit(oldp+649,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
            tracep->chgQData(oldp+650,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
            tracep->chgCData(oldp+652,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter),6);
            tracep->chgIData(oldp+653,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend),32);
            tracep->chgIData(oldp+654,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient),32);
            tracep->chgBit(oldp+655,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u));
            tracep->chgBit(oldp+656,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s));
            tracep->chgCData(oldp+657,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset),2);
            tracep->chgCData(oldp+658,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3),3);
            tracep->chgCData(oldp+659,((3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result)),2);
            tracep->chgCData(oldp+660,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+661,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+662,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+663,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
                                                 (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgSData(oldp+664,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo),16);
            tracep->chgSData(oldp+665,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi),16);
            tracep->chgSData(oldp+666,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
            tracep->chgCData(oldp+667,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
            tracep->chgBit(oldp+668,((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgSData(oldp+669,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgSData(oldp+670,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),12);
            tracep->chgSData(oldp+671,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgBit(oldp+672,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+673,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+674,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+675,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+676,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgBit(oldp+677,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+678,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+679,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+680,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+681,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgIData(oldp+682,(vlTOPp->Top__DOT__Tracer__DOT__clkCycle),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+683,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                         ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                                         : vlTOPp->Top__DOT__core__DOT___GEN_14)),32);
            tracep->chgBit(oldp+684,((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                       | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                      | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall))));
            tracep->chgIData(oldp+685,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
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
            tracep->chgBit(oldp+686,(((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
                                      | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))));
            if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                 & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))) {
                __Vtemp1122[0U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[0U];
                __Vtemp1122[1U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[1U];
                __Vtemp1122[2U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[2U];
                __Vtemp1122[3U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[3U];
            } else {
                __Vtemp1122[0U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[0U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[0U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[0U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U])));
                __Vtemp1122[1U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[1U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[1U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[1U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U])));
                __Vtemp1122[2U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[2U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[2U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[2U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U])));
                __Vtemp1122[3U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[3U]
                                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[3U]
                                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[3U]
                                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U])));
            }
            tracep->chgWData(oldp+687,(__Vtemp1122),128);
            tracep->chgIData(oldp+691,((IData)((VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                                 ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
            tracep->chgIData(oldp+692,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)),32);
            tracep->chgIData(oldp+693,((((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
            tracep->chgIData(oldp+694,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
            tracep->chgIData(oldp+695,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
            tracep->chgBit(oldp+696,(((0U == (7U & 
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
            tracep->chgIData(oldp+697,((IData)((0x7fffffffffffffffULL 
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
            tracep->chgIData(oldp+698,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                         ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                                         : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                              | (3U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                             | (2U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)))
                                             ? (IData)(
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                                                        >> 0x20U))
                                             : ((4U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
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
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                                   ? 
                                                  ((0x80000000U 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a)
                                                    ? 
                                                   (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend
                                                    : 0U))))))),32);
            tracep->chgIData(oldp+699,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_16)),32);
            tracep->chgIData(oldp+700,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                         : vlTOPp->Top__DOT__core__DOT__id_reg_imm)),32);
            tracep->chgQData(oldp+701,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_238))),64);
            tracep->chgQData(oldp+703,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_296))),64);
            tracep->chgIData(oldp+705,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_359))),32);
            tracep->chgIData(oldp+706,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_417))),32);
            tracep->chgIData(oldp+707,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_475))),32);
            tracep->chgIData(oldp+708,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_533))),32);
            tracep->chgCData(oldp+709,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1065))))),8);
            tracep->chgCData(oldp+710,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1123))))),8);
            tracep->chgCData(oldp+711,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1181))))),8);
            tracep->chgCData(oldp+712,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1239))))),8);
            tracep->chgCData(oldp+713,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1297))))),8);
            tracep->chgCData(oldp+714,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1355))))),8);
            tracep->chgCData(oldp+715,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1413))))),8);
            tracep->chgCData(oldp+716,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1471))))),8);
            tracep->chgCData(oldp+717,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1529))))),8);
            tracep->chgCData(oldp+718,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1587))))),8);
            tracep->chgCData(oldp+719,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1645))))),8);
            tracep->chgCData(oldp+720,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1703))))),8);
            tracep->chgCData(oldp+721,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1761))))),8);
            tracep->chgCData(oldp+722,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1819))))),8);
            tracep->chgCData(oldp+723,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1877))))),8);
            tracep->chgCData(oldp+724,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1935))))),8);
            tracep->chgSData(oldp+725,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_596))))),16);
            tracep->chgSData(oldp+726,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_654))))),16);
            tracep->chgSData(oldp+727,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_712))))),16);
            tracep->chgSData(oldp+728,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_770))))),16);
            tracep->chgSData(oldp+729,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_828))))),16);
            tracep->chgSData(oldp+730,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_886))))),16);
            tracep->chgSData(oldp+731,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_944))))),16);
            tracep->chgSData(oldp+732,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
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
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1002))))),16);
            tracep->chgQData(oldp+733,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3476))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+735,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3549))))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (1U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 0xffffffffffffffffULL)))),64);
            tracep->chgIData(oldp+737,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3632)))
                                             : 0xffffffffU))),32);
            tracep->chgIData(oldp+738,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3705)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (1U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+739,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3778)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (2U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+740,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3851)))
                                             : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (3U 
                                                    > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                 : 0xffffffffU)))),32);
            tracep->chgCData(oldp+741,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3928))))))
                                                   : 0xffU)))),8);
            tracep->chgCData(oldp+742,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4001))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (1U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+743,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4074))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (2U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+744,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4147))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (3U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+745,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4220))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (4U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+746,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4293))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (5U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+747,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4366))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (6U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+748,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4439))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (7U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+749,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4512))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (8U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+750,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4585))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (9U 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+751,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4658))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xaU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+752,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4731))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xbU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+753,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4804))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xcU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+754,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4877))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xdU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 8U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+755,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4950))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xeU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+756,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5023))))))
                                                   : 
                                                  (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xfU 
                                                       > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x18U)
                                                    : 0xffU))))),8);
            tracep->chgSData(oldp+757,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5104))))))
                                                     : 0xffffU)))),16);
            tracep->chgSData(oldp+758,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5177))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (1U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+759,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5250))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (2U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+760,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5323))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (3U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+761,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5396))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (4U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+762,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5469))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (5U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+763,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5542))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (6U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+764,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                      >> 0x10U)
                                                      : 
                                                     ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5615))))))
                                                     : 
                                                    (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                      & (7U 
                                                         > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                      >> 0x10U)
                                                      : 0xffffU))))),16);
            tracep->chgQData(oldp+765,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+767,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
            tracep->chgQData(oldp+769,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+771,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+773,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+775,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+777,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+779,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
            tracep->chgQData(oldp+781,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+783,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
            tracep->chgQData(oldp+785,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+787,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
            tracep->chgQData(oldp+789,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+791,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgQData(oldp+793,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+795,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
            tracep->chgQData(oldp+797,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
            tracep->chgQData(oldp+799,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
            tracep->chgQData(oldp+801,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+803,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
            tracep->chgQData(oldp+805,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
            tracep->chgQData(oldp+807,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
            tracep->chgQData(oldp+809,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+811,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
            tracep->chgQData(oldp+813,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
            tracep->chgQData(oldp+815,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
            tracep->chgQData(oldp+817,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+819,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+821,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+823,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgQData(oldp+825,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+827,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
            tracep->chgQData(oldp+829,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+831,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+833,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+835,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+837,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+839,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
            tracep->chgQData(oldp+841,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
            tracep->chgQData(oldp+843,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
            tracep->chgQData(oldp+845,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+847,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
            tracep->chgQData(oldp+849,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
            tracep->chgQData(oldp+851,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
            tracep->chgQData(oldp+853,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+855,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
            tracep->chgQData(oldp+857,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
            tracep->chgQData(oldp+859,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
            tracep->chgQData(oldp+861,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+863,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+865,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+867,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgQData(oldp+869,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+871,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
            tracep->chgQData(oldp+873,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+875,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
            tracep->chgQData(oldp+877,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+879,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
            tracep->chgQData(oldp+881,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+883,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vd_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgIData(oldp+885,(((0xffff0000U 
                                         & (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                            << 0x10U)) 
                                        | (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+886,(vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o),32);
            tracep->chgIData(oldp+887,(vlTOPp->Top__DOT__imem__DOT__sram_rdata_o),32);
            tracep->chgBit(oldp+888,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+889,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+890,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+891,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+892,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__we_o));
            tracep->chgBit(oldp+893,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+894,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+895,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+896,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+897,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__we_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+898,(vlTOPp->Top__DOT__core__DOT__MEM_io_readData),32);
            tracep->chgIData(oldp+899,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
            tracep->chgIData(oldp+900,(vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData),32);
            tracep->chgIData(oldp+901,(vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult),32);
            tracep->chgIData(oldp+902,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1),32);
            tracep->chgIData(oldp+903,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2),32);
            tracep->chgBit(oldp+904,(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc));
            tracep->chgIData(oldp+905,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
            tracep->chgIData(oldp+906,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
            tracep->chgBit(oldp+907,(((0U != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
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
            tracep->chgIData(oldp+908,(vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
            tracep->chgCData(oldp+909,(((0x33U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                         ? (0x3fU & 
                                            (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                             >> 0x19U))
                                         : 0U)),6);
            tracep->chgBit(oldp+910,(vlTOPp->Top__DOT__core__DOT__IF_stall));
            tracep->chgIData(oldp+911,(vlTOPp->Top__DOT__core__DOT___T_22),32);
            tracep->chgBit(oldp+912,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
            tracep->chgIData(oldp+913,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
            tracep->chgIData(oldp+914,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
            tracep->chgIData(oldp+915,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
            tracep->chgIData(oldp+916,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
            tracep->chgIData(oldp+917,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
            tracep->chgIData(oldp+918,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
            tracep->chgIData(oldp+919,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
            tracep->chgIData(oldp+920,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
            tracep->chgIData(oldp+921,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
            tracep->chgIData(oldp+922,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
            tracep->chgIData(oldp+923,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a),32);
            tracep->chgIData(oldp+924,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b),32);
            tracep->chgIData(oldp+925,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
            tracep->chgIData(oldp+926,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
            tracep->chgQData(oldp+927,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7),64);
            tracep->chgQData(oldp+929,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12),64);
            tracep->chgWData(oldp+931,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19),512);
            tracep->chgWData(oldp+947,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24),512);
            tracep->chgQData(oldp+963,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
            tracep->chgQData(oldp+965,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result),64);
            tracep->chgIData(oldp+967,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata),32);
            tracep->chgIData(oldp+968,(((0x80U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+969,((0xffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),8);
            tracep->chgIData(oldp+970,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+971,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 8U))),8);
            tracep->chgIData(oldp+972,(((0x800000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+973,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 0x10U))),8);
            tracep->chgIData(oldp+974,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+975,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+976,((0xffffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),16);
            tracep->chgSData(oldp+977,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                   >> 8U))),16);
            tracep->chgSData(oldp+978,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+979,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+980,(((0x800000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+981,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+982,((0xffffU & vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction)),16);
            tracep->chgCData(oldp+983,((0xfU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 7U))),4);
            tracep->chgCData(oldp+984,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+985,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 5U))));
            tracep->chgBit(oldp+986,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 6U))));
            tracep->chgCData(oldp+987,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 2U))),3);
            tracep->chgCData(oldp+988,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xaU))),3);
            tracep->chgCData(oldp+989,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 7U))),3);
            tracep->chgBit(oldp+990,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 0xcU))));
            tracep->chgCData(oldp+991,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xaU))),2);
            tracep->chgIData(oldp+992,((0x2023U | (
                                                   (0x38000U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       << 8U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                      | (0x200U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            << 3U)))))),18);
            tracep->chgCData(oldp+993,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                         ? 0x3fU : 0U)),6);
            tracep->chgCData(oldp+994,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+995,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+996,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 8U))));
            tracep->chgCData(oldp+997,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 9U))),2);
            tracep->chgBit(oldp+998,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 7U))));
            tracep->chgBit(oldp+999,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 2U))));
            tracep->chgBit(oldp+1000,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1001,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),3);
            tracep->chgSData(oldp+1002,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x1ffU : 0U)),9);
            tracep->chgBit(oldp+1003,((1U & (~ (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xfU)))));
            tracep->chgIData(oldp+1004,((0x6fU | ((0x1000000U 
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
            tracep->chgSData(oldp+1005,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x7fffU
                                          : 0U)),15);
            tracep->chgCData(oldp+1006,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 7U : 0U)),3);
            tracep->chgCData(oldp+1007,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),2);
            tracep->chgBit(oldp+1008,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1009,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0xfU : 0U)),4);
            tracep->chgBit(oldp+1010,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xdU))));
            tracep->chgSData(oldp+1011,((0x63U | ((0x1000U 
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
            tracep->chgCData(oldp+1012,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1013,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 4U))),3);
            tracep->chgCData(oldp+1014,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),2);
            tracep->chgCData(oldp+1015,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 9U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1016,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
            tracep->chgIData(oldp+1017,((0x3fffffffU 
                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),32);
            tracep->chgIData(oldp+1018,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
            tracep->chgIData(oldp+1019,(vlTOPp->Top__DOT__core__DOT__pc_io_in),32);
            tracep->chgBit(oldp+1020,(vlTOPp->Top__DOT__core__DOT__pc_io_halt));
            tracep->chgBit(oldp+1021,((1U & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                             >> 1U))));
            tracep->chgBit(oldp+1022,((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
            tracep->chgSData(oldp+1023,((0x1fffU & 
                                         (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                          >> 2U))),13);
            tracep->chgSData(oldp+1024,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),12);
            tracep->chgSData(oldp+1025,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),13);
        }
        tracep->chgBit(oldp+1026,(vlTOPp->clock));
        tracep->chgBit(oldp+1027,(vlTOPp->reset));
        tracep->chgIData(oldp+1028,(vlTOPp->io_pin),32);
        tracep->chgWData(oldp+1029,(vlTOPp->io_v_pin),128);
        tracep->chgIData(oldp+1033,(vlTOPp->io_fcsr),32);
        tracep->chgIData(oldp+1034,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(4U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1035,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(2U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1036,(((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
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
        tracep->chgBit(oldp+1037,((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                    & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                       >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
        tracep->chgBit(oldp+1038,(vlTOPp->Top__DOT__dmem__DOT__sram_csb_i));
        tracep->chgBit(oldp+1039,(vlTOPp->Top__DOT__dmem__DOT__sram_we_i));
        tracep->chgBit(oldp+1040,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rvalid));
        tracep->chgBit(oldp+1041,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rvalid));
    }
}

void VTop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
