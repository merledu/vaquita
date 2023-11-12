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
            tracep->chgIData(oldp+0,(vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o),32);
            tracep->chgIData(oldp+1,(vlTOPp->Top__DOT__imem__DOT__sram_rdata_o),32);
            tracep->chgBit(oldp+2,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+3,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+4,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+5,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+6,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__we_o));
            tracep->chgBit(oldp+7,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__csb));
            tracep->chgSData(oldp+8,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
            tracep->chgIData(oldp+9,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
            tracep->chgCData(oldp+10,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
            tracep->chgBit(oldp+11,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__we_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+12,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
            tracep->chgBit(oldp+16,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
            tracep->chgIData(oldp+17,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                 >> 2U))),32);
            tracep->chgIData(oldp+18,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
            tracep->chgCData(oldp+19,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
            tracep->chgBit(oldp+20,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
            tracep->chgBit(oldp+21,(vlTOPp->Top__DOT__dmem__DOT__validReg));
            tracep->chgBit(oldp+22,(vlTOPp->Top__DOT__imem__DOT__validReg));
            tracep->chgIData(oldp+23,(vlTOPp->Top__DOT__core__DOT__mem_reg_pc),32);
            tracep->chgIData(oldp+24,(vlTOPp->Top__DOT__core__DOT__REG___05F3),32);
            tracep->chgIData(oldp+25,(vlTOPp->Top__DOT__core__DOT__mem_reg_ins),32);
            tracep->chgIData(oldp+26,(vlTOPp->Top__DOT__core__DOT__REG_5),32);
            tracep->chgIData(oldp+27,(vlTOPp->Top__DOT__core__DOT__REG_3_1),32);
            tracep->chgIData(oldp+28,(vlTOPp->Top__DOT__core__DOT__REG_4_1),32);
            tracep->chgIData(oldp+29,(vlTOPp->Top__DOT__core__DOT__REG_6),32);
            tracep->chgBit(oldp+30,(vlTOPp->Top__DOT__core__DOT__REG_7_3));
            tracep->chgCData(oldp+31,(vlTOPp->Top__DOT__core__DOT__mem_reg_wra),5);
            tracep->chgCData(oldp+32,(vlTOPp->Top__DOT__core__DOT__REG_1_2),5);
            tracep->chgCData(oldp+33,(vlTOPp->Top__DOT__core__DOT__REG_2_2),5);
            tracep->chgIData(oldp+34,(((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
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
            tracep->chgIData(oldp+35,(vlTOPp->Top__DOT__core__DOT__if_reg_ins),32);
            tracep->chgIData(oldp+36,(vlTOPp->Top__DOT__core__DOT__if_reg_pc),32);
            tracep->chgBit(oldp+37,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
            tracep->chgBit(oldp+38,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead));
            tracep->chgBit(oldp+39,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead));
            tracep->chgCData(oldp+40,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U))),5);
            tracep->chgCData(oldp+41,((0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))),5);
            tracep->chgBit(oldp+42,((0x63U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_ins))));
            tracep->chgIData(oldp+43,(vlTOPp->Top__DOT__core__DOT__ex_reg_ins),32);
            tracep->chgIData(oldp+44,(vlTOPp->Top__DOT__core__DOT__id_reg_ins),32);
            tracep->chgIData(oldp+45,(vlTOPp->Top__DOT__core__DOT__ex_reg_result),32);
            tracep->chgBit(oldp+46,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite));
            tracep->chgBit(oldp+47,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
            tracep->chgBit(oldp+48,(vlTOPp->Top__DOT__core__DOT__id_reg_is_csr));
            tracep->chgBit(oldp+49,(vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr));
            tracep->chgBit(oldp+50,(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr));
            tracep->chgIData(oldp+51,(vlTOPp->Top__DOT__core__DOT__id_reg_csr_data),32);
            tracep->chgIData(oldp+52,(vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data),32);
            tracep->chgIData(oldp+53,(vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data),32);
            tracep->chgIData(oldp+54,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
            tracep->chgCData(oldp+55,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 7U))),5);
            tracep->chgCData(oldp+56,(vlTOPp->Top__DOT__core__DOT__IDecode_io_func7),7);
            tracep->chgCData(oldp+57,((7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+58,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1aU))),6);
            tracep->chgBit(oldp+59,(((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28))));
            tracep->chgCData(oldp+60,(((0x33U == (0x7fU 
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
            tracep->chgBit(oldp+61,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
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
            tracep->chgBit(oldp+62,(((0x33U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x13U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           & (3U == 
                                              (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))));
            tracep->chgBit(oldp+63,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
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
            tracep->chgBit(oldp+64,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
            tracep->chgCData(oldp+65,(((0x33U == (0x7fU 
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
            tracep->chgCData(oldp+66,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
            tracep->chgBit(oldp+67,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
            tracep->chgBit(oldp+68,(((0x57U == (0x7fU 
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
            tracep->chgCData(oldp+69,(((0x57U == (0x7fU 
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
            tracep->chgCData(oldp+70,(((0x57U == (0x7fU 
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
            tracep->chgBit(oldp+71,(((0x57U == (0x7fU 
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
            tracep->chgCData(oldp+72,(((0x57U != (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & ((0x27U != 
                                           (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                          & (7U == 
                                             (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))),4);
            tracep->chgBit(oldp+73,(((0x57U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     | (0x27U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
            tracep->chgWData(oldp+74,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
            tracep->chgCData(oldp+78,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
            tracep->chgBit(oldp+79,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write));
            tracep->chgCData(oldp+80,(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v),4);
            tracep->chgCData(oldp+81,(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v),4);
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
            tracep->chgWData(oldp+82,(__Vtemp1089),128);
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
            tracep->chgWData(oldp+86,(__Vtemp1097),128);
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
            tracep->chgWData(oldp+90,(__Vtemp1105),128);
            tracep->chgCData(oldp+94,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+95,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+96,(((0xfffff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1eU)))) 
                                           << 0xbU)) 
                                       | (0x7ffU & 
                                          (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+97,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))),32);
            tracep->chgSData(oldp+98,(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype),11);
            tracep->chgSData(oldp+99,((0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
            tracep->chgIData(oldp+100,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl),32);
            tracep->chgBit(oldp+101,(vlTOPp->Top__DOT__core__DOT__mem_reg_vset));
            tracep->chgIData(oldp+102,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
            tracep->chgCData(oldp+103,(((0x33U == (0x7fU 
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
            tracep->chgBit(oldp+104,((1U & ((~ (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
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
            tracep->chgBit(oldp+105,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
            tracep->chgBit(oldp+106,(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall));
            tracep->chgIData(oldp+107,(((3U == (0xfffU 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                         : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25)),32);
            tracep->chgBit(oldp+108,((0x73U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
            tracep->chgIData(oldp+109,(vlTOPp->Top__DOT__core__DOT__id_reg_imm),32);
            tracep->chgIData(oldp+110,(vlTOPp->Top__DOT__core__DOT__id_reg_rd1),32);
            tracep->chgIData(oldp+111,(vlTOPp->Top__DOT__core__DOT__id_reg_rd2),32);
            tracep->chgIData(oldp+112,(vlTOPp->Top__DOT__core__DOT__id_reg_pc),32);
            tracep->chgCData(oldp+113,(vlTOPp->Top__DOT__core__DOT__id_reg_f7),7);
            tracep->chgCData(oldp+114,(vlTOPp->Top__DOT__core__DOT__id_reg_f3),3);
            tracep->chgBit(oldp+115,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
            tracep->chgCData(oldp+116,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
            tracep->chgCData(oldp+117,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
            tracep->chgCData(oldp+118,((0x3fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x1aU))),6);
            tracep->chgCData(oldp+119,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
            tracep->chgCData(oldp+120,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
            tracep->chgBit(oldp+121,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
            tracep->chgBit(oldp+122,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel));
            tracep->chgBit(oldp+123,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load));
            tracep->chgBit(oldp+124,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
            tracep->chgBit(oldp+125,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
            tracep->chgWData(oldp+126,(vlTOPp->Top__DOT__core__DOT__id_reg_v1_data),128);
            tracep->chgWData(oldp+130,(vlTOPp->Top__DOT__core__DOT__id_reg_v2_data),128);
            tracep->chgIData(oldp+134,(vlTOPp->Top__DOT__core__DOT__Execute_io_vl),32);
            tracep->chgIData(oldp+135,(vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out),32);
            tracep->chgWData(oldp+136,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data),128);
            tracep->chgBit(oldp+140,(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
            tracep->chgBit(oldp+141,(vlTOPp->Top__DOT__core__DOT__Execute_io_vta));
            tracep->chgBit(oldp+142,((1U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                            >> 0x19U))));
            tracep->chgWData(oldp+143,(vlTOPp->Top__DOT__core__DOT__id_reg_v0_data),128);
            tracep->chgCData(oldp+147,(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew),3);
            tracep->chgIData(oldp+148,(vlTOPp->Top__DOT__core__DOT__id_reg_vtype),32);
            tracep->chgIData(oldp+149,(vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
            tracep->chgWData(oldp+150,(vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
            tracep->chgCData(oldp+154,(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr),5);
            tracep->chgCData(oldp+155,(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr),5);
            tracep->chgCData(oldp+156,(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr),5);
            tracep->chgBit(oldp+157,(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
            tracep->chgCData(oldp+158,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
            tracep->chgIData(oldp+159,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
            tracep->chgBit(oldp+160,(vlTOPp->Top__DOT__core__DOT__Execute_io_stall));
            tracep->chgIData(oldp+161,(vlTOPp->Top__DOT__core__DOT__ex_reg_wd),32);
            tracep->chgCData(oldp+162,((7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                              >> 0xcU))),3);
            tracep->chgIData(oldp+163,(vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
            tracep->chgBit(oldp+164,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgCData(oldp+165,(vlTOPp->Top__DOT__core__DOT__id_reg_wra),5);
            tracep->chgCData(oldp+166,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
            tracep->chgBit(oldp+167,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
            tracep->chgSData(oldp+168,(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm),11);
            tracep->chgCData(oldp+169,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr),5);
            tracep->chgCData(oldp+170,(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v),4);
            tracep->chgCData(oldp+171,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
            tracep->chgCData(oldp+172,(vlTOPp->Top__DOT__core__DOT__ex_reg_wra),5);
            tracep->chgCData(oldp+173,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
            tracep->chgIData(oldp+174,(vlTOPp->Top__DOT__core__DOT__ex_reg_pc),32);
            tracep->chgIData(oldp+175,(vlTOPp->Top__DOT__core__DOT__ex_reg_vl),32);
            tracep->chgCData(oldp+176,(vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v),4);
            tracep->chgBit(oldp+177,(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
            tracep->chgSData(oldp+178,(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype),11);
            tracep->chgIData(oldp+179,(vlTOPp->Top__DOT__core__DOT__mem_reg_result),32);
            tracep->chgCData(oldp+180,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
            tracep->chgCData(oldp+181,(vlTOPp->Top__DOT__core__DOT__lmul),3);
            tracep->chgIData(oldp+182,(vlTOPp->Top__DOT__core__DOT__lmul_reg),32);
            tracep->chgIData(oldp+183,(vlTOPp->Top__DOT__core__DOT__vlmul_count),32);
            tracep->chgIData(oldp+184,(vlTOPp->Top__DOT__core__DOT__REG___05F0),32);
            tracep->chgIData(oldp+185,(vlTOPp->Top__DOT__core__DOT__REG___05F1),32);
            tracep->chgIData(oldp+186,(vlTOPp->Top__DOT__core__DOT__REG___05F2),32);
            tracep->chgCData(oldp+187,(vlTOPp->Top__DOT__core__DOT__REG_1_0),5);
            tracep->chgCData(oldp+188,(vlTOPp->Top__DOT__core__DOT__REG_1_1),5);
            tracep->chgCData(oldp+189,(vlTOPp->Top__DOT__core__DOT__REG_2_0),5);
            tracep->chgCData(oldp+190,(vlTOPp->Top__DOT__core__DOT__REG_2_1),5);
            tracep->chgIData(oldp+191,(vlTOPp->Top__DOT__core__DOT__REG_3_0),32);
            tracep->chgIData(oldp+192,(vlTOPp->Top__DOT__core__DOT__REG_4_0),32);
            tracep->chgBit(oldp+193,(vlTOPp->Top__DOT__core__DOT__REG_7_0));
            tracep->chgBit(oldp+194,(vlTOPp->Top__DOT__core__DOT__REG_7_1));
            tracep->chgBit(oldp+195,(vlTOPp->Top__DOT__core__DOT__REG_7_2));
            tracep->chgSData(oldp+196,((0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),12);
            tracep->chgBit(oldp+197,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
            tracep->chgCData(oldp+198,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
            tracep->chgBit(oldp+199,(((0x33U == (0x7fU 
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
            tracep->chgBit(oldp+200,(((0x33U != (0x7fU 
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
            tracep->chgBit(oldp+201,(((0x57U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x27U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & (7U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
            tracep->chgBit(oldp+202,(((0x57U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & (0x27U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
            tracep->chgBit(oldp+203,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
            tracep->chgBit(oldp+204,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
            tracep->chgCData(oldp+205,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
            tracep->chgIData(oldp+206,(((0U == (0x1fU 
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
            tracep->chgIData(oldp+207,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
            tracep->chgIData(oldp+208,(((((0x40000000U 
                                           & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                           ? 0x1fffffU
                                           : 0U) << 0xbU) 
                                        | (0x7ffU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+209,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
            tracep->chgCData(oldp+210,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+211,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
            tracep->chgBit(oldp+212,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
            tracep->chgBit(oldp+213,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
            tracep->chgBit(oldp+214,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
            tracep->chgBit(oldp+215,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
            tracep->chgCData(oldp+216,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
            tracep->chgCData(oldp+217,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
            tracep->chgIData(oldp+218,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
            tracep->chgIData(oldp+219,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
            tracep->chgIData(oldp+220,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
            tracep->chgIData(oldp+221,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
            tracep->chgIData(oldp+222,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
            tracep->chgIData(oldp+223,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
            tracep->chgBit(oldp+224,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
            tracep->chgBit(oldp+225,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
            tracep->chgCData(oldp+226,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
            tracep->chgBit(oldp+227,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
            tracep->chgBit(oldp+228,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
            tracep->chgSData(oldp+229,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                         << 7U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                   << 3U))),11);
            tracep->chgIData(oldp+230,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                         << 0x15U) 
                                        | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                            << 0x11U) 
                                           | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                  << 7U) 
                                                 | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                    << 3U)))))),32);
            tracep->chgIData(oldp+231,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                         << 4U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
            tracep->chgIData(oldp+232,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
            tracep->chgIData(oldp+233,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
            tracep->chgIData(oldp+234,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
            tracep->chgBit(oldp+235,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
            tracep->chgBit(oldp+236,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
            tracep->chgBit(oldp+237,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
            tracep->chgBit(oldp+238,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
            tracep->chgBit(oldp+239,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
            tracep->chgBit(oldp+240,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                        & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                       & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
            tracep->chgCData(oldp+241,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x1eU))),2);
            tracep->chgCData(oldp+242,((0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)),7);
            tracep->chgIData(oldp+243,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
            tracep->chgIData(oldp+244,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
            tracep->chgIData(oldp+245,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
            tracep->chgIData(oldp+246,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
            tracep->chgIData(oldp+247,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
            tracep->chgIData(oldp+248,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
            tracep->chgIData(oldp+249,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
            tracep->chgIData(oldp+250,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
            tracep->chgIData(oldp+251,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
            tracep->chgIData(oldp+252,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
            tracep->chgIData(oldp+253,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
            tracep->chgIData(oldp+254,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
            tracep->chgIData(oldp+255,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
            tracep->chgIData(oldp+256,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
            tracep->chgIData(oldp+257,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
            tracep->chgIData(oldp+258,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
            tracep->chgIData(oldp+259,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
            tracep->chgIData(oldp+260,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
            tracep->chgIData(oldp+261,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
            tracep->chgIData(oldp+262,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
            tracep->chgIData(oldp+263,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
            tracep->chgIData(oldp+264,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
            tracep->chgIData(oldp+265,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
            tracep->chgIData(oldp+266,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
            tracep->chgIData(oldp+267,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
            tracep->chgIData(oldp+268,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
            tracep->chgIData(oldp+269,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
            tracep->chgIData(oldp+270,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
            tracep->chgIData(oldp+271,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
            tracep->chgIData(oldp+272,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
            tracep->chgIData(oldp+273,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
            tracep->chgIData(oldp+274,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
            tracep->chgWData(oldp+275,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
            tracep->chgWData(oldp+279,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
            tracep->chgWData(oldp+283,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
            tracep->chgWData(oldp+287,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
            tracep->chgWData(oldp+291,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
            tracep->chgWData(oldp+295,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
            tracep->chgWData(oldp+299,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
            tracep->chgWData(oldp+303,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
            tracep->chgWData(oldp+307,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
            tracep->chgWData(oldp+311,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
            tracep->chgWData(oldp+315,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
            tracep->chgWData(oldp+319,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
            tracep->chgWData(oldp+323,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
            tracep->chgWData(oldp+327,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
            tracep->chgWData(oldp+331,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
            tracep->chgWData(oldp+335,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
            tracep->chgWData(oldp+339,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
            tracep->chgWData(oldp+343,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
            tracep->chgWData(oldp+347,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
            tracep->chgWData(oldp+351,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
            tracep->chgWData(oldp+355,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
            tracep->chgWData(oldp+359,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
            tracep->chgWData(oldp+363,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
            tracep->chgWData(oldp+367,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
            tracep->chgWData(oldp+371,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
            tracep->chgWData(oldp+375,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
            tracep->chgWData(oldp+379,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
            tracep->chgWData(oldp+383,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
            tracep->chgWData(oldp+387,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
            tracep->chgWData(oldp+391,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
            tracep->chgWData(oldp+395,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
            tracep->chgWData(oldp+399,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
            tracep->chgCData(oldp+403,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
            tracep->chgCData(oldp+404,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
            tracep->chgCData(oldp+405,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
            tracep->chgCData(oldp+406,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
            tracep->chgIData(oldp+407,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0xfffffU
                                         : 0U)),20);
            tracep->chgIData(oldp+408,((0xfffffU & 
                                        (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0xcU))),20);
            tracep->chgCData(oldp+409,((0x7fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),7);
            tracep->chgSData(oldp+410,(((0xfe0U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U)))),12);
            tracep->chgBit(oldp+411,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+412,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U))));
            tracep->chgCData(oldp+413,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x19U))),6);
            tracep->chgCData(oldp+414,((0xfU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U))),4);
            tracep->chgSData(oldp+415,(((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
            tracep->chgIData(oldp+416,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffffU
                                         : 0U)),19);
            tracep->chgCData(oldp+417,((0xffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))),8);
            tracep->chgBit(oldp+418,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U))));
            tracep->chgSData(oldp+419,((0x3ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U))),10);
            tracep->chgIData(oldp+420,(((0x80000U & 
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
            tracep->chgSData(oldp+421,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x7ffU : 0U)),11);
            tracep->chgIData(oldp+422,(((0x40000000U 
                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                         ? 0x1fffffU
                                         : 0U)),21);
            tracep->chgSData(oldp+423,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))),11);
            tracep->chgCData(oldp+424,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
            tracep->chgBit(oldp+425,((1U & ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                            >> 5U))));
            tracep->chgCData(oldp+426,((0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+427,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+428,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+429,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
            tracep->chgCData(oldp+430,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
            tracep->chgSData(oldp+431,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
            tracep->chgWData(oldp+432,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
            tracep->chgWData(oldp+436,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
            tracep->chgIData(oldp+440,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12),32);
            tracep->chgCData(oldp+441,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
            tracep->chgIData(oldp+442,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset)
                                         ? vlTOPp->Top__DOT__core__DOT__Execute_io_vl
                                         : 0U)),32);
            tracep->chgIData(oldp+443,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
            tracep->chgCData(oldp+444,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35),5);
            tracep->chgBit(oldp+445,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid));
            tracep->chgBit(oldp+446,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
            tracep->chgBit(oldp+447,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                      | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                           | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                          | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                         | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                             | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                                            & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))));
            tracep->chgIData(oldp+448,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG),32);
            tracep->chgIData(oldp+449,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1),32);
            tracep->chgCData(oldp+450,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2),3);
            tracep->chgBit(oldp+451,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
            tracep->chgCData(oldp+452,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4),6);
            tracep->chgCData(oldp+453,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5),6);
            tracep->chgCData(oldp+454,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
            tracep->chgCData(oldp+455,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+456,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+457,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+458,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
            tracep->chgCData(oldp+459,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+460,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+461,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+462,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
            tracep->chgCData(oldp+463,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+464,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+465,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+466,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
            tracep->chgCData(oldp+467,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+468,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+469,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+470,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
            tracep->chgCData(oldp+471,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+472,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+473,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+474,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
            tracep->chgCData(oldp+475,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+476,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+477,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+478,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
            tracep->chgCData(oldp+479,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+480,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+481,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+482,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
            tracep->chgCData(oldp+483,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+484,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+485,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+486,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
            tracep->chgSData(oldp+487,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+488,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
            tracep->chgSData(oldp+489,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+490,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
            tracep->chgSData(oldp+491,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+492,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
            tracep->chgSData(oldp+493,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+494,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
            tracep->chgSData(oldp+495,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+496,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
            tracep->chgSData(oldp+497,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+498,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
            tracep->chgSData(oldp+499,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+500,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
            tracep->chgSData(oldp+501,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+502,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
            tracep->chgIData(oldp+503,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
            tracep->chgIData(oldp+504,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
            tracep->chgIData(oldp+505,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
            tracep->chgIData(oldp+506,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
            tracep->chgIData(oldp+507,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
            tracep->chgIData(oldp+508,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
            tracep->chgIData(oldp+509,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
            tracep->chgQData(oldp+510,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
            tracep->chgQData(oldp+512,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
            tracep->chgQData(oldp+514,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
            tracep->chgQData(oldp+516,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
            tracep->chgCData(oldp+518,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
            tracep->chgCData(oldp+519,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+520,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+521,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+522,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
            tracep->chgCData(oldp+523,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+524,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+525,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+526,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
            tracep->chgCData(oldp+527,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+528,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+529,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+530,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
            tracep->chgCData(oldp+531,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+532,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+533,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+534,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
            tracep->chgSData(oldp+535,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+536,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
            tracep->chgSData(oldp+537,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+538,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
            tracep->chgSData(oldp+539,((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+540,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
            tracep->chgSData(oldp+541,((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+542,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
            tracep->chgIData(oldp+543,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
            tracep->chgIData(oldp+544,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
            tracep->chgIData(oldp+545,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
            tracep->chgQData(oldp+546,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
            tracep->chgQData(oldp+548,((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
            tracep->chgQData(oldp+550,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_230))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_238))),64);
            tracep->chgQData(oldp+552,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_288))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_296))),64);
            tracep->chgIData(oldp+554,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_351))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_359))),32);
            tracep->chgIData(oldp+555,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_409))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_417))),32);
            tracep->chgIData(oldp+556,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_467))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_475))),32);
            tracep->chgIData(oldp+557,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_525))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_533))),32);
            tracep->chgSData(oldp+558,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_588)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_596))))),16);
            tracep->chgSData(oldp+559,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_646)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_654))))),16);
            tracep->chgSData(oldp+560,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_704)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_712))))),16);
            tracep->chgSData(oldp+561,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_762)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_770))))),16);
            tracep->chgSData(oldp+562,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_780) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_820)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_828))))),16);
            tracep->chgSData(oldp+563,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_838) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_878)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_886))))),16);
            tracep->chgSData(oldp+564,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_896) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_936)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_944))))),16);
            tracep->chgSData(oldp+565,((0xffffU & (
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
                                                     (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954) 
                                                       & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                       ? 0xffffU
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_994)))
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1002))))),16);
            tracep->chgCData(oldp+566,((0xffU & ((0U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1057)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1065))))),8);
            tracep->chgCData(oldp+567,((0xffU & ((1U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1115)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1123))))),8);
            tracep->chgCData(oldp+568,((0xffU & ((2U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1173)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1181))))),8);
            tracep->chgCData(oldp+569,((0xffU & ((3U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1231)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1239))))),8);
            tracep->chgCData(oldp+570,((0xffU & ((4U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_780) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1289)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1297))))),8);
            tracep->chgCData(oldp+571,((0xffU & ((5U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_838) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1347)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1355))))),8);
            tracep->chgCData(oldp+572,((0xffU & ((6U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_896) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1405)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1413))))),8);
            tracep->chgCData(oldp+573,((0xffU & ((7U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1463)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1471))))),8);
            tracep->chgQData(oldp+574,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3),64);
            tracep->chgCData(oldp+576,((0xffU & ((8U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1521)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1529))))),8);
            tracep->chgCData(oldp+577,((0xffU & ((9U 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1579)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1587))))),8);
            tracep->chgCData(oldp+578,((0xffU & ((0xaU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1637)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1645))))),8);
            tracep->chgCData(oldp+579,((0xffU & ((0xbU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1695)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1703))))),8);
            tracep->chgCData(oldp+580,((0xffU & ((0xcU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1753)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1761))))),8);
            tracep->chgCData(oldp+581,((0xffU & ((0xdU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1811)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1819))))),8);
            tracep->chgCData(oldp+582,((0xffU & ((0xeU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1869)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1877))))),8);
            tracep->chgCData(oldp+583,((0xffU & ((0xfU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1927)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1935))))),8);
            tracep->chgQData(oldp+584,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
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
            tracep->chgQData(oldp+586,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
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
            tracep->chgQData(oldp+588,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+590,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+592,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+594,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+596,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+598,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgQData(oldp+600,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgQData(oldp+602,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgQData(oldp+604,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+606,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgQData(oldp+608,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgQData(oldp+610,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgQData(oldp+612,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+614,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgQData(oldp+616,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgQData(oldp+618,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgQData(oldp+620,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+622,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 8U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+624,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+626,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x18U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgWData(oldp+628,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28),512);
            tracep->chgQData(oldp+644,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+646,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgQData(oldp+648,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+650,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgQData(oldp+652,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+654,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgQData(oldp+656,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+658,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgCData(oldp+660,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))),3);
            tracep->chgCData(oldp+661,((7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+662,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))) 
                                            | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                               >> 2U)))));
            tracep->chgBit(oldp+663,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & (~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                   >> 1U))) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
            tracep->chgBit(oldp+664,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                >> 1U)) 
                                            & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))))));
            tracep->chgBit(oldp+665,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                 >> 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
            tracep->chgQData(oldp+666,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
            tracep->chgCData(oldp+668,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter),6);
            tracep->chgIData(oldp+669,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend),32);
            tracep->chgIData(oldp+670,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient),32);
            tracep->chgBit(oldp+671,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u));
            tracep->chgBit(oldp+672,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s));
            tracep->chgCData(oldp+673,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset),2);
            tracep->chgCData(oldp+674,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3),3);
            tracep->chgCData(oldp+675,((3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result)),2);
            tracep->chgCData(oldp+676,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+677,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+678,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgCData(oldp+679,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
            tracep->chgSData(oldp+680,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo),16);
            tracep->chgSData(oldp+681,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi),16);
            tracep->chgSData(oldp+682,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
            tracep->chgCData(oldp+683,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
            tracep->chgBit(oldp+684,((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
            tracep->chgSData(oldp+685,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgSData(oldp+686,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),12);
            tracep->chgSData(oldp+687,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                                  >> 2U))),13);
            tracep->chgBit(oldp+688,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+689,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+690,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+691,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+692,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgBit(oldp+693,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
            tracep->chgBit(oldp+694,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
            tracep->chgCData(oldp+695,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
            tracep->chgSData(oldp+696,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
            tracep->chgIData(oldp+697,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
            tracep->chgIData(oldp+698,(vlTOPp->Top__DOT__Tracer__DOT__clkCycle),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+699,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                         ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                                         : vlTOPp->Top__DOT__core__DOT___GEN_15)),32);
            tracep->chgBit(oldp+700,((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                       | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                      | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall))));
            tracep->chgIData(oldp+701,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
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
            tracep->chgBit(oldp+702,(((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
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
            tracep->chgWData(oldp+703,(__Vtemp1122),128);
            tracep->chgIData(oldp+707,((IData)((VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                                 ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
            tracep->chgIData(oldp+708,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)),32);
            tracep->chgIData(oldp+709,((((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
            tracep->chgIData(oldp+710,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
            tracep->chgIData(oldp+711,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                        & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
            tracep->chgBit(oldp+712,(((0U == (7U & 
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
            tracep->chgIData(oldp+713,((IData)((0x7fffffffffffffffULL 
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
            tracep->chgIData(oldp+714,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
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
            tracep->chgIData(oldp+715,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_16)),32);
            tracep->chgIData(oldp+716,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                         : vlTOPp->Top__DOT__core__DOT__id_reg_imm)),32);
            tracep->chgQData(oldp+717,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
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
            tracep->chgQData(oldp+719,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
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
            tracep->chgIData(oldp+721,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgIData(oldp+722,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
            tracep->chgIData(oldp+723,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
            tracep->chgIData(oldp+724,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
            tracep->chgCData(oldp+725,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgCData(oldp+726,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgCData(oldp+727,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgCData(oldp+728,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgCData(oldp+729,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
            tracep->chgCData(oldp+730,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgCData(oldp+731,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgCData(oldp+732,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgCData(oldp+733,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
            tracep->chgCData(oldp+734,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgCData(oldp+735,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgCData(oldp+736,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgCData(oldp+737,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
            tracep->chgCData(oldp+738,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
            tracep->chgCData(oldp+739,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
            tracep->chgCData(oldp+740,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
            tracep->chgSData(oldp+741,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgSData(oldp+742,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
            tracep->chgSData(oldp+743,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
            tracep->chgSData(oldp+744,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
            tracep->chgSData(oldp+745,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
            tracep->chgSData(oldp+746,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
            tracep->chgSData(oldp+747,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
            tracep->chgSData(oldp+748,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
            tracep->chgQData(oldp+749,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
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
            tracep->chgQData(oldp+751,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
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
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 0xffffffffffffffffULL)))),64);
            tracep->chgIData(oldp+753,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgIData(oldp+754,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+755,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 0xffffffffU)))),32);
            tracep->chgIData(oldp+756,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 0xffffffffU)))),32);
            tracep->chgCData(oldp+757,((0xffU & ((0U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgCData(oldp+758,((0xffU & ((1U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+759,((0xffU & ((2U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+760,((0xffU & ((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+761,((0xffU & ((4U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+762,((0xffU & ((5U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+763,((0xffU & ((6U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+764,((0xffU & ((7U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+765,((0xffU & ((8U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+766,((0xffU & ((9U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+767,((0xffU & ((0xaU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+768,((0xffU & ((0xbU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+769,((0xffU & ((0xcU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+770,((0xffU & ((0xdU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+771,((0xffU & ((0xeU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 0xffU))))),8);
            tracep->chgCData(oldp+772,((0xffU & ((0xfU 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U)
                                                    : 0xffU))))),8);
            tracep->chgSData(oldp+773,((0xffffU & (
                                                   (0U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
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
            tracep->chgSData(oldp+774,((0xffffU & (
                                                   (1U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+775,((0xffffU & (
                                                   (2U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+776,((0xffffU & (
                                                   (3U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+777,((0xffffU & (
                                                   (4U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+778,((0xffffU & (
                                                   (5U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                     ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+779,((0xffffU & (
                                                   (6U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                      ? 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                      : 0xffffU))))),16);
            tracep->chgSData(oldp+780,((0xffffU & (
                                                   (7U 
                                                    < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                    ? 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                                     ? 
                                                    ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                      ? 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)
                                                      : 0xffffU))))),16);
            tracep->chgQData(oldp+781,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+783,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
            tracep->chgQData(oldp+785,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+787,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+789,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+791,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+793,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+795,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
            tracep->chgQData(oldp+797,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+799,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
            tracep->chgQData(oldp+801,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+803,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
            tracep->chgQData(oldp+805,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+807,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgQData(oldp+809,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+811,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
            tracep->chgQData(oldp+813,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
            tracep->chgQData(oldp+815,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
            tracep->chgQData(oldp+817,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+819,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
            tracep->chgQData(oldp+821,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
            tracep->chgQData(oldp+823,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
            tracep->chgQData(oldp+825,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+827,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
            tracep->chgQData(oldp+829,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
            tracep->chgQData(oldp+831,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
            tracep->chgQData(oldp+833,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+835,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+837,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+839,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgQData(oldp+841,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+843,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (((QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
            tracep->chgQData(oldp+845,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+847,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
            tracep->chgQData(oldp+849,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
            tracep->chgQData(oldp+851,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
            tracep->chgQData(oldp+853,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+855,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
            tracep->chgQData(oldp+857,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
            tracep->chgQData(oldp+859,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
            tracep->chgQData(oldp+861,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
            tracep->chgQData(oldp+863,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
            tracep->chgQData(oldp+865,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
            tracep->chgQData(oldp+867,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
            tracep->chgQData(oldp+869,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
            tracep->chgQData(oldp+871,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 8U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 8U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
            tracep->chgQData(oldp+873,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
            tracep->chgQData(oldp+875,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x18U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 8U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x18U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
            tracep->chgQData(oldp+877,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
            tracep->chgQData(oldp+879,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 8U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 8U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
            tracep->chgQData(oldp+881,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
            tracep->chgQData(oldp+883,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x18U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x18U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
            tracep->chgQData(oldp+885,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : 0xffffffffffffffffULL))),64);
            tracep->chgQData(oldp+887,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
            tracep->chgQData(oldp+889,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
            tracep->chgQData(oldp+891,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
            tracep->chgQData(oldp+893,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
            tracep->chgQData(oldp+895,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                  >> 0x10U)))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                        << 0x10U) 
                                                                       | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                          >> 0x10U)))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
            tracep->chgQData(oldp+897,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
            tracep->chgQData(oldp+899,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                               >> 0x10U))))
                                         : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
                                             ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                       >> 0x10U))))
                                                 : 
                                                ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
            tracep->chgIData(oldp+901,(((0xffff0000U 
                                         & (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                            << 0x10U)) 
                                        | (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+902,(vlTOPp->Top__DOT__core__DOT__MEM_io_readData),32);
            tracep->chgIData(oldp+903,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
            tracep->chgIData(oldp+904,(vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData),32);
            tracep->chgIData(oldp+905,(vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult),32);
            tracep->chgIData(oldp+906,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1),32);
            tracep->chgIData(oldp+907,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2),32);
            tracep->chgBit(oldp+908,(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc));
            tracep->chgIData(oldp+909,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
            tracep->chgIData(oldp+910,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
            tracep->chgBit(oldp+911,(((0U != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
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
            tracep->chgIData(oldp+912,(vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
            tracep->chgCData(oldp+913,(((0x33U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                         ? (0x3fU & 
                                            (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                             >> 0x19U))
                                         : 0U)),6);
            tracep->chgBit(oldp+914,(vlTOPp->Top__DOT__core__DOT__IF_stall));
            tracep->chgIData(oldp+915,(vlTOPp->Top__DOT__core__DOT___T_42),32);
            tracep->chgBit(oldp+916,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
            tracep->chgIData(oldp+917,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
            tracep->chgIData(oldp+918,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
            tracep->chgIData(oldp+919,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
            tracep->chgIData(oldp+920,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
            tracep->chgIData(oldp+921,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
            tracep->chgIData(oldp+922,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
            tracep->chgIData(oldp+923,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
            tracep->chgIData(oldp+924,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
            tracep->chgIData(oldp+925,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
            tracep->chgIData(oldp+926,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
            tracep->chgIData(oldp+927,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a),32);
            tracep->chgIData(oldp+928,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b),32);
            tracep->chgIData(oldp+929,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
            tracep->chgIData(oldp+930,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
            tracep->chgQData(oldp+931,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7),64);
            tracep->chgQData(oldp+933,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12),64);
            tracep->chgWData(oldp+935,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19),512);
            tracep->chgWData(oldp+951,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24),512);
            tracep->chgQData(oldp+967,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
            tracep->chgQData(oldp+969,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result),64);
            tracep->chgIData(oldp+971,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata),32);
            tracep->chgIData(oldp+972,(((0x80U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+973,((0xffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),8);
            tracep->chgIData(oldp+974,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+975,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 8U))),8);
            tracep->chgIData(oldp+976,(((0x800000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+977,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 0x10U))),8);
            tracep->chgIData(oldp+978,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgCData(oldp+979,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+980,((0xffffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),16);
            tracep->chgSData(oldp+981,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                   >> 8U))),16);
            tracep->chgSData(oldp+982,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+983,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+984,(((0x800000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+985,(((0x80000000U 
                                         & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                         ? 0xffffU : 0U)),16);
            tracep->chgSData(oldp+986,((0xffffU & vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction)),16);
            tracep->chgCData(oldp+987,((0xfU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 7U))),4);
            tracep->chgCData(oldp+988,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+989,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 5U))));
            tracep->chgBit(oldp+990,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 6U))));
            tracep->chgCData(oldp+991,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 2U))),3);
            tracep->chgCData(oldp+992,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xaU))),3);
            tracep->chgCData(oldp+993,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 7U))),3);
            tracep->chgBit(oldp+994,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 0xcU))));
            tracep->chgCData(oldp+995,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 0xaU))),2);
            tracep->chgIData(oldp+996,((0x2023U | (
                                                   (0x38000U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       << 8U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                      | (0x200U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            << 3U)))))),18);
            tracep->chgCData(oldp+997,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                         ? 0x3fU : 0U)),6);
            tracep->chgCData(oldp+998,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+999,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+1000,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 8U))));
            tracep->chgCData(oldp+1001,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 9U))),2);
            tracep->chgBit(oldp+1002,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 7U))));
            tracep->chgBit(oldp+1003,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 2U))));
            tracep->chgBit(oldp+1004,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1005,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),3);
            tracep->chgSData(oldp+1006,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x1ffU : 0U)),9);
            tracep->chgBit(oldp+1007,((1U & (~ (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xfU)))));
            tracep->chgIData(oldp+1008,((0x6fU | ((0x1000000U 
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
            tracep->chgSData(oldp+1009,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0x7fffU
                                          : 0U)),15);
            tracep->chgCData(oldp+1010,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 7U : 0U)),3);
            tracep->chgCData(oldp+1011,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 3U))),2);
            tracep->chgBit(oldp+1012,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1013,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                          ? 0xfU : 0U)),4);
            tracep->chgBit(oldp+1014,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xdU))));
            tracep->chgSData(oldp+1015,((0x63U | ((0x1000U 
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
            tracep->chgCData(oldp+1016,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1017,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 4U))),3);
            tracep->chgCData(oldp+1018,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),2);
            tracep->chgCData(oldp+1019,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 9U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1020,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
            tracep->chgIData(oldp+1021,((0x3fffffffU 
                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),32);
            tracep->chgIData(oldp+1022,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
            tracep->chgIData(oldp+1023,(vlTOPp->Top__DOT__core__DOT__pc_io_in),32);
            tracep->chgBit(oldp+1024,(vlTOPp->Top__DOT__core__DOT__pc_io_halt));
            tracep->chgBit(oldp+1025,((1U & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                             >> 1U))));
            tracep->chgBit(oldp+1026,((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
            tracep->chgSData(oldp+1027,((0x1fffU & 
                                         (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                          >> 2U))),13);
            tracep->chgSData(oldp+1028,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),12);
            tracep->chgSData(oldp+1029,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                   >> 2U))),13);
        }
        tracep->chgBit(oldp+1030,(vlTOPp->clock));
        tracep->chgBit(oldp+1031,(vlTOPp->reset));
        tracep->chgIData(oldp+1032,(vlTOPp->io_pin),32);
        tracep->chgWData(oldp+1033,(vlTOPp->io_v_pin),128);
        tracep->chgIData(oldp+1037,(vlTOPp->io_fcsr),32);
        tracep->chgIData(oldp+1038,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(4U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1039,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                      ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                      : ((IData)(2U) 
                                         + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->chgIData(oldp+1040,(((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
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
        tracep->chgBit(oldp+1041,((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                    & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                       >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
        tracep->chgBit(oldp+1042,(vlTOPp->Top__DOT__dmem__DOT__sram_csb_i));
        tracep->chgBit(oldp+1043,(vlTOPp->Top__DOT__dmem__DOT__sram_we_i));
        tracep->chgBit(oldp+1044,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rvalid));
        tracep->chgBit(oldp+1045,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rvalid));
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
