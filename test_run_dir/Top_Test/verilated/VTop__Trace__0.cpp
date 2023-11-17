// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_hcfb5676e__0;
    VlWide<4>/*127:0*/ __Vtemp_h183fa316__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7afd02b__0;
    VlWide<4>/*127:0*/ __Vtemp_he40aaf0c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha96fd0ad__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
        bufp->chgBit(oldp+4,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgIData(oldp+5,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                          >> 2U))),32);
        bufp->chgIData(oldp+6,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        bufp->chgCData(oldp+7,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        bufp->chgBit(oldp+8,(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable));
        bufp->chgBit(oldp+9,(vlSelf->Top__DOT__dmem__DOT__validReg));
        bufp->chgBit(oldp+10,(vlSelf->Top__DOT__imem__DOT__validReg));
        bufp->chgIData(oldp+11,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+12,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
        bufp->chgIData(oldp+13,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgIData(oldp+14,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
        bufp->chgIData(oldp+15,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
        bufp->chgIData(oldp+16,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
        bufp->chgIData(oldp+17,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
        bufp->chgBit(oldp+18,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
        bufp->chgCData(oldp+19,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgCData(oldp+20,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
        bufp->chgCData(oldp+21,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
        bufp->chgIData(oldp+22,(((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                << 3U))) 
                                 | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                     << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                << 1U) 
                                               | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
        bufp->chgIData(oldp+23,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+24,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+25,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
        bufp->chgBit(oldp+26,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+27,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                          >> 7U))),5);
        bufp->chgBit(oldp+30,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
        bufp->chgIData(oldp+31,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+32,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
        bufp->chgIData(oldp+33,(vlSelf->Top__DOT__core__DOT__ex_reg_result),32);
        bufp->chgBit(oldp+34,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
        bufp->chgBit(oldp+35,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
        bufp->chgBit(oldp+36,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+37,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+38,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+39,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+40,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+41,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgIData(oldp+42,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+44,(vlSelf->Top__DOT__core__DOT__IDecode_io_func7),7);
        bufp->chgCData(oldp+45,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+46,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+47,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control__DOT___signals_T_28))));
        bufp->chgCData(oldp+48,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                         ? 0U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                          ? 2U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                           ? 2U
                                                           : 0U))))))))))),2);
        bufp->chgBit(oldp+49,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((3U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x23U 
                                               != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((0x63U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                 & ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                       | ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                          | (0x67U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))))));
        bufp->chgBit(oldp+50,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & (3U == (0x7fU 
                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))));
        bufp->chgBit(oldp+51,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((3U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))));
        bufp->chgBit(oldp+52,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
        bufp->chgCData(oldp+53,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 2U : ((0x13U == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 2U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 2U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+54,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
        bufp->chgBit(oldp+55,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
        bufp->chgBit(oldp+56,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((IData)(((0x7000U 
                                            == (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0U == 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1eU)) 
                                              | (1U 
                                                 == 
                                                 (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x1eU))))) 
                                  | ((IData)((0x80007000U 
                                              == (0xc0007000U 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                     | ((~ (IData)(
                                                   (0xc0007000U 
                                                    == 
                                                    (0xc0007000U 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins)))) 
                                        & ((0U != (7U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU))) 
                                           & (IData)(
                                                     ((0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                      & (4U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0xcU))))))))))));
        bufp->chgCData(oldp+57,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? ((IData)(((0x7000U 
                                               == (0x7000U 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((0U 
                                                  == 
                                                  (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU)) 
                                                 | (1U 
                                                    == 
                                                    (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))))
                                      ? 3U : ((IData)(
                                                      (0x80007000U 
                                                       == 
                                                       (0xc0007000U 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins)))
                                               ? 3U
                                               : ((IData)(
                                                          (0xc0007000U 
                                                           == 
                                                           (0xc0007000U 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins)))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xcU)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xcU)))
                                                      ? 4U
                                                      : 0U))))))
                                  : 0U)),4);
        bufp->chgCData(oldp+58,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                 & ((~ (IData)(((0x7000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                & ((0U 
                                                    == 
                                                    (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)) 
                                                   | (1U 
                                                      == 
                                                      (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x1eU)))))) 
                                    & ((IData)((0x80007000U 
                                                == 
                                                (0xc0007000U 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14))))),5);
        bufp->chgBit(oldp+59,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((IData)(((0x7000U 
                                            == (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0U == 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1eU)) 
                                              | (1U 
                                                 == 
                                                 (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x1eU))))) 
                                  | ((IData)((0x80007000U 
                                              == (0xc0007000U 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                     | (IData)((0xc0007000U 
                                                == 
                                                (0xc0007000U 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))));
        bufp->chgCData(oldp+60,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                 & ((0x27U != (0x7fU 
                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                    & (7U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins))))),4);
        bufp->chgBit(oldp+61,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (0x27U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))));
        bufp->chgBit(oldp+62,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & (0x27U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))));
        bufp->chgBit(oldp+63,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
        bufp->chgWData(oldp+64,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
        bufp->chgCData(oldp+68,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
        bufp->chgBit(oldp+69,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write));
        bufp->chgCData(oldp+70,(vlSelf->Top__DOT__core__DOT__mem_reg_lmul_v),4);
        bufp->chgCData(oldp+71,(vlSelf->Top__DOT__core__DOT__if_reg_lmul_v),4);
        bufp->chgCData(oldp+72,(vlSelf->Top__DOT__core__DOT__if_vc3),5);
        if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp_hcfb5676e__0[0U] = 0U;
            __Vtemp_hcfb5676e__0[1U] = 0U;
            __Vtemp_hcfb5676e__0[2U] = 0U;
            __Vtemp_hcfb5676e__0[3U] = 0U;
        } else if (((~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_hcfb5676e__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U];
            __Vtemp_hcfb5676e__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U];
            __Vtemp_hcfb5676e__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U];
            __Vtemp_hcfb5676e__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U];
        } else if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_hcfb5676e__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U];
            __Vtemp_hcfb5676e__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U];
            __Vtemp_hcfb5676e__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U];
            __Vtemp_hcfb5676e__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U];
        } else {
            __Vtemp_hcfb5676e__0[0U] = 0U;
            __Vtemp_hcfb5676e__0[1U] = 0U;
            __Vtemp_hcfb5676e__0[2U] = 0U;
            __Vtemp_hcfb5676e__0[3U] = 0U;
        }
        bufp->chgWData(oldp+73,(__Vtemp_hcfb5676e__0),128);
        if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp_h183fa316__0[0U] = 0U;
            __Vtemp_h183fa316__0[1U] = 0U;
            __Vtemp_h183fa316__0[2U] = 0U;
            __Vtemp_h183fa316__0[3U] = 0U;
        } else if (((~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_h183fa316__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U];
            __Vtemp_h183fa316__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U];
            __Vtemp_h183fa316__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U];
            __Vtemp_h183fa316__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U];
        } else if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_h183fa316__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U];
            __Vtemp_h183fa316__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U];
            __Vtemp_h183fa316__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U];
            __Vtemp_h183fa316__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U];
        } else {
            __Vtemp_h183fa316__0[0U] = 0U;
            __Vtemp_h183fa316__0[1U] = 0U;
            __Vtemp_h183fa316__0[2U] = 0U;
            __Vtemp_h183fa316__0[3U] = 0U;
        }
        bufp->chgWData(oldp+77,(__Vtemp_h183fa316__0),128);
        if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp_hb7afd02b__0[0U] = 0U;
            __Vtemp_hb7afd02b__0[1U] = 0U;
            __Vtemp_hb7afd02b__0[2U] = 0U;
            __Vtemp_hb7afd02b__0[3U] = 0U;
        } else if (((~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_hb7afd02b__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U];
            __Vtemp_hb7afd02b__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U];
            __Vtemp_hb7afd02b__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U];
            __Vtemp_hb7afd02b__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U];
        } else if (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                    & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
            __Vtemp_hb7afd02b__0[0U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U];
            __Vtemp_hb7afd02b__0[1U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U];
            __Vtemp_hb7afd02b__0[2U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U];
            __Vtemp_hb7afd02b__0[3U] = vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U];
        } else {
            __Vtemp_hb7afd02b__0[0U] = 0U;
            __Vtemp_hb7afd02b__0[1U] = 0U;
            __Vtemp_hb7afd02b__0[2U] = 0U;
            __Vtemp_hb7afd02b__0[3U] = 0U;
        }
        bufp->chgWData(oldp+81,(__Vtemp_hb7afd02b__0),128);
        bufp->chgCData(oldp+85,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+86,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+87,((((- (IData)((1U & 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1eU)))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+88,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU))),32);
        bufp->chgSData(oldp+89,(vlSelf->Top__DOT__core__DOT__mem_reg_vtype),11);
        bufp->chgSData(oldp+90,((0x7ffU & vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
        bufp->chgIData(oldp+91,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_vl),32);
        bufp->chgBit(oldp+92,(vlSelf->Top__DOT__core__DOT__mem_reg_vset));
        bufp->chgIData(oldp+93,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
        bufp->chgCData(oldp+94,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))),2);
        bufp->chgBit(oldp+95,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                          & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_branch)) 
                                         & (((0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU))) 
                                            | ((0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                   >> 7U)) 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))))) 
                                     & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu__DOT___T_14))))));
        bufp->chgBit(oldp+96,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
        bufp->chgBit(oldp+97,(vlSelf->Top__DOT__core__DOT__IDecode_io_stall));
        bufp->chgIData(oldp+98,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                  : vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
        bufp->chgBit(oldp+99,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
        bufp->chgIData(oldp+100,(vlSelf->Top__DOT__core__DOT__id_reg_imm),32);
        bufp->chgIData(oldp+101,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),32);
        bufp->chgIData(oldp+102,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),32);
        bufp->chgIData(oldp+103,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+104,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+105,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+106,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+107,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+108,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgCData(oldp+109,((vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+110,((7U & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
        bufp->chgCData(oldp+111,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
        bufp->chgBit(oldp+112,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
        bufp->chgBit(oldp+113,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_opBsel));
        bufp->chgBit(oldp+114,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_load));
        bufp->chgBit(oldp+115,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_ins));
        bufp->chgBit(oldp+116,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_vset));
        bufp->chgWData(oldp+117,(vlSelf->Top__DOT__core__DOT__id_reg_v1_data),128);
        bufp->chgWData(oldp+121,(vlSelf->Top__DOT__core__DOT__id_reg_v2_data),128);
        bufp->chgIData(oldp+125,(vlSelf->Top__DOT__core__DOT__Execute_io_vl),32);
        bufp->chgIData(oldp+126,(vlSelf->Top__DOT__core__DOT__id_reg_vstart_out),32);
        bufp->chgWData(oldp+127,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data),128);
        bufp->chgBit(oldp+131,(vlSelf->Top__DOT__core__DOT__Execute_io_vma));
        bufp->chgBit(oldp+132,(vlSelf->Top__DOT__core__DOT__Execute_io_vta));
        bufp->chgBit(oldp+133,((1U & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                      >> 0x19U))));
        bufp->chgWData(oldp+134,(vlSelf->Top__DOT__core__DOT__id_reg_v0_data),128);
        bufp->chgCData(oldp+138,(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew),3);
        bufp->chgIData(oldp+139,(vlSelf->Top__DOT__core__DOT__id_reg_vtype),32);
        bufp->chgIData(oldp+140,(vlSelf->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
        bufp->chgWData(oldp+141,(vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
        bufp->chgCData(oldp+145,(vlSelf->Top__DOT__core__DOT__ex_reg_vd_addr),5);
        bufp->chgCData(oldp+146,(vlSelf->Top__DOT__core__DOT__id_reg_vs1_addr),5);
        bufp->chgCData(oldp+147,(vlSelf->Top__DOT__core__DOT__id_reg_vs2_addr),5);
        bufp->chgCData(oldp+148,(vlSelf->Top__DOT__core__DOT__id_reg_vd_addr),5);
        bufp->chgBit(oldp+149,(vlSelf->Top__DOT__core__DOT__ex_reg_reg_write));
        bufp->chgBit(oldp+150,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite));
        bufp->chgCData(oldp+151,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
        bufp->chgIData(oldp+152,((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
        if ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))) {
            __Vtemp_he40aaf0c__0[0U] = vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
            __Vtemp_he40aaf0c__0[1U] = vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
            __Vtemp_he40aaf0c__0[2U] = vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
            __Vtemp_he40aaf0c__0[3U] = vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
        } else if ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))) {
            __Vtemp_he40aaf0c__0[0U] = vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
            __Vtemp_he40aaf0c__0[1U] = vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
            __Vtemp_he40aaf0c__0[2U] = vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
            __Vtemp_he40aaf0c__0[3U] = vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
        } else {
            __Vtemp_he40aaf0c__0[0U] = vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U];
            __Vtemp_he40aaf0c__0[1U] = vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U];
            __Vtemp_he40aaf0c__0[2U] = vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U];
            __Vtemp_he40aaf0c__0[3U] = vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U];
        }
        bufp->chgWData(oldp+153,(__Vtemp_he40aaf0c__0),128);
        bufp->chgBit(oldp+157,(vlSelf->Top__DOT__core__DOT__Execute_io_stall));
        bufp->chgIData(oldp+158,((((vlSelf->Top__DOT__core__DOT__vlcount 
                                    != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                   & (0x27U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                   ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                       ? (vlSelf->Top__DOT__core__DOT__ex_reg_read_data1 
                                          + vlSelf->Top__DOT__core__DOT__addrcount)
                                       : 0U) : 0U)),32);
        bufp->chgBit(oldp+159,(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins));
        bufp->chgIData(oldp+160,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),32);
        bufp->chgIData(oldp+161,((((vlSelf->Top__DOT__core__DOT__vlcount 
                                    != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                   & (0x27U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                   ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                       ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                           ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                           : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                               ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                               : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                       : 0U) : 0U)),32);
        bufp->chgBit(oldp+162,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                                 ? (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_memRead)
                                 : (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead))));
        bufp->chgCData(oldp+163,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+164,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+165,(vlSelf->Top__DOT__core__DOT__vtype),32);
        bufp->chgCData(oldp+166,(((0x30U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul) 
                                                           >> 3U)))) 
                                            << 4U)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul))),6);
        bufp->chgCData(oldp+167,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul),4);
        bufp->chgBit(oldp+168,((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        bufp->chgCData(oldp+169,(vlSelf->Top__DOT__core__DOT__if_vc3),4);
        bufp->chgSData(oldp+170,(vlSelf->Top__DOT__core__DOT__if_reg_eew),10);
        bufp->chgCData(oldp+171,(vlSelf->Top__DOT__core__DOT__if_reg_lsuType),4);
        bufp->chgCData(oldp+172,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+173,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+174,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgSData(oldp+175,(vlSelf->Top__DOT__core__DOT__id_reg_z_imm),11);
        bufp->chgCData(oldp+176,(vlSelf->Top__DOT__core__DOT__id_reg_lmul_v),4);
        bufp->chgSData(oldp+177,(vlSelf->Top__DOT__core__DOT__id_reg_eew),10);
        bufp->chgCData(oldp+178,(vlSelf->Top__DOT__core__DOT__id_reg_lsuType),4);
        bufp->chgCData(oldp+179,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
        bufp->chgBit(oldp+180,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_memRead));
        bufp->chgCData(oldp+181,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+182,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+183,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgIData(oldp+184,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgIData(oldp+185,(vlSelf->Top__DOT__core__DOT__ex_reg_vl),32);
        bufp->chgCData(oldp+186,(vlSelf->Top__DOT__core__DOT__ex_reg_lmul_v),4);
        bufp->chgBit(oldp+187,(vlSelf->Top__DOT__core__DOT__ex_reg_vset));
        bufp->chgBit(oldp+188,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_memRead));
        bufp->chgBit(oldp+189,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite));
        bufp->chgSData(oldp+190,(vlSelf->Top__DOT__core__DOT__ex_reg_vtype),11);
        bufp->chgSData(oldp+191,(vlSelf->Top__DOT__core__DOT__ex_reg_eew),10);
        bufp->chgCData(oldp+192,(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType),4);
        bufp->chgIData(oldp+193,(vlSelf->Top__DOT__core__DOT__ex_reg_read_data1),32);
        bufp->chgIData(oldp+194,(vlSelf->Top__DOT__core__DOT__mem_reg_result),32);
        bufp->chgCData(oldp+195,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgCData(oldp+196,(vlSelf->Top__DOT__core__DOT__lmul),3);
        bufp->chgIData(oldp+197,(vlSelf->Top__DOT__core__DOT__lmul_reg),32);
        bufp->chgCData(oldp+198,(vlSelf->Top__DOT__core__DOT__vc3),5);
        bufp->chgIData(oldp+199,(vlSelf->Top__DOT__core__DOT__vlmul_count),32);
        bufp->chgIData(oldp+200,(vlSelf->Top__DOT__core__DOT__emul_reg),32);
        bufp->chgIData(oldp+201,(vlSelf->Top__DOT__core__DOT__delays),32);
        bufp->chgIData(oldp+202,(vlSelf->Top__DOT__core__DOT__addrcount),32);
        bufp->chgIData(oldp+203,(vlSelf->Top__DOT__core__DOT__vlcount),32);
        bufp->chgIData(oldp+204,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U]
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                                       : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))),32);
        bufp->chgIData(oldp+205,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U]
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                                       : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))),32);
        bufp->chgIData(oldp+206,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                       : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))),32);
        bufp->chgIData(oldp+207,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
        bufp->chgIData(oldp+208,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
        bufp->chgIData(oldp+209,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
        bufp->chgCData(oldp+210,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
        bufp->chgCData(oldp+211,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
        bufp->chgCData(oldp+212,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
        bufp->chgCData(oldp+213,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
        bufp->chgIData(oldp+214,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
        bufp->chgIData(oldp+215,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
        bufp->chgBit(oldp+216,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
        bufp->chgBit(oldp+217,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
        bufp->chgBit(oldp+218,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
        bufp->chgIData(oldp+219,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U]
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                       : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))),32);
        bufp->chgCData(oldp+220,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
        bufp->chgBit(oldp+221,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                      >> 5U))));
        bufp->chgCData(oldp+222,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+223,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+224,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+225,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+226,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgCData(oldp+227,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
        bufp->chgSData(oldp+228,(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
        bufp->chgWData(oldp+229,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
        bufp->chgWData(oldp+233,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
        bufp->chgIData(oldp+237,(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14),32);
        bufp->chgCData(oldp+238,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
        bufp->chgIData(oldp+239,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
        bufp->chgCData(oldp+240,(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37),5);
        bufp->chgBit(oldp+241,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_valid));
        bufp->chgBit(oldp+242,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
        bufp->chgBit(oldp+243,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                | ((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                     | (3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                    | (2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                   | (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u)) 
                                      & ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                         & (0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
        bufp->chgIData(oldp+244,(vlSelf->Top__DOT__core__DOT__Execute__DOT__src_a_reg),32);
        bufp->chgIData(oldp+245,(vlSelf->Top__DOT__core__DOT__Execute__DOT__src_b_reg),32);
        bufp->chgCData(oldp+246,(vlSelf->Top__DOT__core__DOT__Execute__DOT__op_reg),3);
        bufp->chgBit(oldp+247,(vlSelf->Top__DOT__core__DOT__Execute__DOT__div_en));
        bufp->chgCData(oldp+248,(vlSelf->Top__DOT__core__DOT__Execute__DOT__f7_reg),6);
        bufp->chgCData(oldp+249,(vlSelf->Top__DOT__core__DOT__Execute__DOT__counter),6);
        bufp->chgCData(oldp+250,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
        bufp->chgIData(oldp+251,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
        bufp->chgIData(oldp+252,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
        bufp->chgBit(oldp+253,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
        bufp->chgBit(oldp+254,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
        bufp->chgCData(oldp+255,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
        bufp->chgCData(oldp+256,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+257,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+258,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+259,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
        bufp->chgCData(oldp+260,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+261,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+262,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+263,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
        bufp->chgCData(oldp+264,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+265,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+266,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+267,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
        bufp->chgCData(oldp+268,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+269,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+270,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+271,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
        bufp->chgCData(oldp+272,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+273,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+274,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+275,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
        bufp->chgCData(oldp+276,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+277,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+278,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+279,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
        bufp->chgCData(oldp+280,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+281,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+282,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+283,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
        bufp->chgCData(oldp+284,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+285,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+286,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                  >> 0x18U)),8);
        bufp->chgSData(oldp+287,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
        bufp->chgSData(oldp+288,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+289,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
        bufp->chgSData(oldp+290,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+291,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
        bufp->chgSData(oldp+292,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+293,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
        bufp->chgSData(oldp+294,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+295,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
        bufp->chgSData(oldp+296,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+297,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
        bufp->chgSData(oldp+298,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+299,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
        bufp->chgSData(oldp+300,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+301,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
        bufp->chgSData(oldp+302,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                  >> 0x10U)),16);
        bufp->chgIData(oldp+303,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
        bufp->chgIData(oldp+304,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
        bufp->chgIData(oldp+305,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
        bufp->chgIData(oldp+306,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
        bufp->chgIData(oldp+307,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
        bufp->chgIData(oldp+308,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
        bufp->chgIData(oldp+309,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
        bufp->chgIData(oldp+310,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
        bufp->chgQData(oldp+311,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
        bufp->chgQData(oldp+313,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
        bufp->chgQData(oldp+315,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
        bufp->chgQData(oldp+317,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
        bufp->chgCData(oldp+319,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
        bufp->chgCData(oldp+320,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+321,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+322,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+323,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
        bufp->chgCData(oldp+324,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+325,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+326,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+327,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
        bufp->chgCData(oldp+328,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+329,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+330,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+331,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
        bufp->chgCData(oldp+332,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+333,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+334,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                  >> 0x18U)),8);
        bufp->chgSData(oldp+335,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
        bufp->chgSData(oldp+336,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+337,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
        bufp->chgSData(oldp+338,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+339,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
        bufp->chgSData(oldp+340,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+341,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
        bufp->chgSData(oldp+342,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                  >> 0x10U)),16);
        bufp->chgIData(oldp+343,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
        bufp->chgIData(oldp+344,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
        bufp->chgIData(oldp+345,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
        bufp->chgIData(oldp+346,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
        bufp->chgQData(oldp+347,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
        bufp->chgQData(oldp+349,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
        bufp->chgQData(oldp+351,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : (((0U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (0U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_7) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffffffffffULL
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_47))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_55))),64);
        bufp->chgQData(oldp+353,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : (((1U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (1U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                      >> 1U))) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_64) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffffffffffULL
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_104))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_112))),64);
        bufp->chgIData(oldp+355,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                   : (((0U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (0U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_7) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffU
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_161))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_169))),32);
        bufp->chgIData(oldp+356,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                   : (((1U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (1U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                      >> 1U))) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_64) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffU
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_218))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_226))),32);
        bufp->chgIData(oldp+357,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                   : (((2U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (2U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                      >> 2U))) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_235) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffU
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_275))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_283))),32);
        bufp->chgIData(oldp+358,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                   : (((3U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (3U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                      >> 3U))) 
                                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_292) 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffffffU
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_332))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_340))),32);
        bufp->chgSData(oldp+359,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : (((0U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (0U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_7) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_389)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_397))))),16);
        bufp->chgSData(oldp+360,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U))
                                              : (((1U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (1U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 1U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_64) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_446)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_454))))),16);
        bufp->chgSData(oldp+361,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : (((2U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (2U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 2U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_235) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_503)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_511))))),16);
        bufp->chgSData(oldp+362,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U))
                                              : (((3U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (3U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 3U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_292) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_560)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_568))))),16);
        bufp->chgSData(oldp+363,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : (((4U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (4U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 4U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_577) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_617)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_625))))),16);
        bufp->chgSData(oldp+364,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U))
                                              : (((5U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (5U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 5U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U))
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_634) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_674)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_682))))),16);
        bufp->chgSData(oldp+365,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : (((6U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (6U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 6U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_691) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_731)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_739))))),16);
        bufp->chgSData(oldp+366,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U))
                                              : (((7U 
                                                   >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                  & (7U 
                                                     < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                  ? 
                                                 ((1U 
                                                   & (((~ 
                                                        (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 0x19U)) 
                                                       & (~ 
                                                          (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                           >> 7U))) 
                                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U))
                                                   : 
                                                  (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_748) 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_788)))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_796))))),16);
        bufp->chgCData(oldp+367,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                            : (((0U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_7) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_845)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_853))))),8);
        bufp->chgCData(oldp+368,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 8U))
                                            : (((1U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (1U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 1U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_64) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_902)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_910))))),8);
        bufp->chgCData(oldp+369,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x10U))
                                            : (((2U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (2U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 2U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_235) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_959)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_967))))),8);
        bufp->chgCData(oldp+370,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x18U))
                                            : (((3U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (3U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 3U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_292) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1016)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1024))))),8);
        bufp->chgCData(oldp+371,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                            : (((4U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (4U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 4U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_577) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1073)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1081))))),8);
        bufp->chgCData(oldp+372,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 8U))
                                            : (((5U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (5U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 5U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_634) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1130)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1138))))),8);
        bufp->chgCData(oldp+373,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x10U))
                                            : (((6U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (6U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 6U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_691) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1187)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1195))))),8);
        bufp->chgCData(oldp+374,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x18U))
                                            : (((7U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (7U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 7U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_748) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1244)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1252))))),8);
        bufp->chgQData(oldp+375,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_3),64);
        bufp->chgCData(oldp+377,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                            : (((8U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (8U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 8U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1261) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1301)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1309))))),8);
        bufp->chgCData(oldp+378,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 8U))
                                            : (((9U 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (9U 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 9U))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1318) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1358)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1366))))),8);
        bufp->chgCData(oldp+379,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x10U))
                                            : (((0xaU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xaU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xaU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1375) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1415)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1423))))),8);
        bufp->chgCData(oldp+380,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x18U))
                                            : (((0xbU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xbU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xbU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1432) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1472)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1480))))),8);
        bufp->chgCData(oldp+381,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                            : (((0xcU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xcU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xcU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1489) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1529)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1537))))),8);
        bufp->chgCData(oldp+382,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U))
                                            : (((0xdU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xdU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xdU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 8U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1546) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1586)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1594))))),8);
        bufp->chgCData(oldp+383,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))
                                            : (((0xeU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xeU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xeU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x10U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1603) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1643)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1651))))),8);
        bufp->chgCData(oldp+384,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U))
                                            : (((0xfU 
                                                 >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                                & (0xfU 
                                                   < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (1U 
                                                    & (((~ 
                                                         (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                          >> 0x19U)) 
                                                        & (~ 
                                                           (vlSelf->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                            >> 0xfU))) 
                                                       & (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x18U))
                                                    : 
                                                   (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1660) 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1700)))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1708))))),8);
        bufp->chgQData(oldp+385,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (((QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+387,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (((QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5336))),64);
        bufp->chgQData(oldp+389,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+391,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
        bufp->chgQData(oldp+393,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
        bufp->chgQData(oldp+395,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
        bufp->chgQData(oldp+397,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+399,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                     >> 8U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5742))),64);
        bufp->chgQData(oldp+401,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                     >> 0x10U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5771))),64);
        bufp->chgQData(oldp+403,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                  >> 0x18U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5800))),64);
        bufp->chgQData(oldp+405,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5829))),64);
        bufp->chgQData(oldp+407,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                     >> 8U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5858))),64);
        bufp->chgQData(oldp+409,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                     >> 0x10U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5887))),64);
        bufp->chgQData(oldp+411,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                  >> 0x18U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5916))),64);
        bufp->chgQData(oldp+413,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1257)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1263)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1269)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5945))),64);
        bufp->chgQData(oldp+415,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1314)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1320)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1326)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                     >> 8U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5974))),64);
        bufp->chgQData(oldp+417,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1371)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1377)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1383)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                     >> 0x10U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6003))),64);
        bufp->chgQData(oldp+419,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1428)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1434)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1440)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                  >> 0x18U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6032))),64);
        bufp->chgQData(oldp+421,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1485)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1491)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1497)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6061))),64);
        bufp->chgQData(oldp+423,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1542)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1548)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1554)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                     >> 8U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6090))),64);
        bufp->chgQData(oldp+425,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1599)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1605)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1611)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                     >> 0x10U))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6119))),64);
        bufp->chgQData(oldp+427,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1656)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1662)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1668)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                  >> 0x18U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6148))),64);
        bufp->chgWData(oldp+429,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_21),512);
        bufp->chgQData(oldp+445,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+447,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                  >> 0x10U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5510))),64);
        bufp->chgQData(oldp+449,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5539))),64);
        bufp->chgQData(oldp+451,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                  >> 0x10U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5568))),64);
        bufp->chgQData(oldp+453,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5597))),64);
        bufp->chgQData(oldp+455,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                  >> 0x10U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5626))),64);
        bufp->chgQData(oldp+457,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5655))),64);
        bufp->chgQData(oldp+459,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                  >> 0x10U)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5684))),64);
        bufp->chgCData(oldp+461,((7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))),3);
        bufp->chgCData(oldp+462,((7U & ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+463,((1U & ((IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14)))) 
                                      | ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                         >> 2U)))));
        bufp->chgBit(oldp+464,((IData)((1U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
        bufp->chgBit(oldp+465,((IData)((2U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
        bufp->chgBit(oldp+466,((IData)((3U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
        bufp->chgQData(oldp+467,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
        bufp->chgSData(oldp+469,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+470,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
        bufp->chgCData(oldp+471,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+472,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x13U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x73U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x23U 
                                             != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x63U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                        | (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))))));
        bufp->chgBit(oldp+473,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & (0x23U == 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))));
        bufp->chgBit(oldp+474,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x27U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & (7U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins))))));
        bufp->chgBit(oldp+475,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
        bufp->chgCData(oldp+476,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
        bufp->chgIData(oldp+477,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                   ? 0U : ((0x1fU == 
                                            (0x1fU 
                                             & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                            ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31
                                            : ((0x1eU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27
                                                      : vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_90))))))),32);
        bufp->chgIData(oldp+478,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
        bufp->chgIData(oldp+479,(((((0x40000000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)
                                     ? 0x1fffffU : 0U) 
                                   << 0xbU) | (0x7ffU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+480,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
        bufp->chgCData(oldp+481,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+482,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgCData(oldp+483,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+484,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+485,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+486,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+487,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+488,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+489,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+490,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
        bufp->chgIData(oldp+491,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+492,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+493,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+494,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+495,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+496,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+497,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+498,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+499,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+500,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+501,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+502,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+503,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+504,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                   << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                              << 3U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
        bufp->chgIData(oldp+505,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+506,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
        bufp->chgIData(oldp+507,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgBit(oldp+508,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+509,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+510,((((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+511,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+512,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+513,((((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgIData(oldp+514,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+515,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+516,((0xfffff000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)),32);
        bufp->chgSData(oldp+517,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+518,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))),32);
        bufp->chgSData(oldp+519,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+520,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffffU
                                     : 0U) << 0xdU) 
                                  | ((0x1000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x13U)) 
                                     | ((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))))),32);
        bufp->chgIData(oldp+521,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+522,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffU
                                     : 0U) << 0x15U) 
                                  | ((0x100000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlSelf->Top__DOT__core__DOT__if_reg_ins) 
                                        | ((0x800U 
                                            & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U))))))),32);
        bufp->chgIData(oldp+523,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
        bufp->chgIData(oldp+524,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
        bufp->chgIData(oldp+525,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
        bufp->chgIData(oldp+526,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
        bufp->chgIData(oldp+527,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
        bufp->chgIData(oldp+528,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
        bufp->chgIData(oldp+529,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
        bufp->chgIData(oldp+530,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
        bufp->chgIData(oldp+531,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
        bufp->chgIData(oldp+532,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
        bufp->chgIData(oldp+533,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
        bufp->chgIData(oldp+534,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
        bufp->chgIData(oldp+535,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
        bufp->chgIData(oldp+536,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
        bufp->chgIData(oldp+537,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
        bufp->chgIData(oldp+538,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
        bufp->chgIData(oldp+539,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
        bufp->chgIData(oldp+540,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
        bufp->chgIData(oldp+541,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
        bufp->chgIData(oldp+542,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
        bufp->chgIData(oldp+543,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
        bufp->chgIData(oldp+544,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
        bufp->chgIData(oldp+545,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
        bufp->chgIData(oldp+546,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
        bufp->chgIData(oldp+547,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
        bufp->chgIData(oldp+548,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
        bufp->chgIData(oldp+549,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
        bufp->chgIData(oldp+550,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
        bufp->chgIData(oldp+551,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
        bufp->chgIData(oldp+552,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
        bufp->chgIData(oldp+553,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
        bufp->chgIData(oldp+554,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
        bufp->chgWData(oldp+555,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
        bufp->chgWData(oldp+559,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
        bufp->chgWData(oldp+563,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
        bufp->chgWData(oldp+567,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
        bufp->chgWData(oldp+571,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
        bufp->chgWData(oldp+575,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
        bufp->chgWData(oldp+579,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
        bufp->chgWData(oldp+583,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
        bufp->chgWData(oldp+587,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
        bufp->chgWData(oldp+591,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
        bufp->chgWData(oldp+595,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
        bufp->chgWData(oldp+599,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
        bufp->chgWData(oldp+603,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
        bufp->chgWData(oldp+607,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
        bufp->chgWData(oldp+611,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
        bufp->chgWData(oldp+615,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
        bufp->chgWData(oldp+619,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
        bufp->chgWData(oldp+623,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
        bufp->chgWData(oldp+627,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
        bufp->chgWData(oldp+631,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
        bufp->chgWData(oldp+635,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
        bufp->chgWData(oldp+639,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
        bufp->chgWData(oldp+643,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
        bufp->chgWData(oldp+647,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
        bufp->chgWData(oldp+651,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
        bufp->chgWData(oldp+655,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
        bufp->chgWData(oldp+659,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
        bufp->chgWData(oldp+663,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
        bufp->chgWData(oldp+667,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
        bufp->chgWData(oldp+671,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
        bufp->chgWData(oldp+675,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
        bufp->chgWData(oldp+679,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
        bufp->chgCData(oldp+683,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
        bufp->chgCData(oldp+684,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
        bufp->chgCData(oldp+685,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
        bufp->chgCData(oldp+686,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
        bufp->chgCData(oldp+687,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in_1),5);
        bufp->chgCData(oldp+688,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),2);
        bufp->chgCData(oldp+689,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+690,((3U & vlSelf->Top__DOT__core__DOT__ex_reg_result)),2);
        bufp->chgCData(oldp+691,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U))))
                                            : (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)))
                                                : vlSelf->Top__DOT__core__DOT__ex_reg_wd)))),8);
        bufp->chgCData(oldp+692,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U))))
                                            : (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)))
                                                : (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))))),8);
        bufp->chgCData(oldp+693,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U))))
                                            : (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : vlSelf->Top__DOT__core__DOT__ex_reg_wd))
                                                : (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U))))),8);
        bufp->chgCData(oldp+694,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : vlSelf->Top__DOT__core__DOT__ex_reg_wd)))
                                            : (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)))
                                                : (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U))))),8);
        bufp->chgSData(oldp+695,(vlSelf->Top__DOT__core__DOT__MEM__DOT__io_dccmReq_bits_dataRequest_lo),16);
        bufp->chgSData(oldp+696,(vlSelf->Top__DOT__core__DOT__MEM__DOT__io_dccmReq_bits_dataRequest_hi),16);
        bufp->chgIData(oldp+697,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                                   ? (((vlSelf->Top__DOT__core__DOT__vlcount 
                                        != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                       & (0x27U == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                       ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                           ? (vlSelf->Top__DOT__core__DOT__ex_reg_read_data1 
                                              + vlSelf->Top__DOT__core__DOT__addrcount)
                                           : 0U) : 0U)
                                   : vlSelf->Top__DOT__core__DOT__ex_reg_result)),32);
        bufp->chgIData(oldp+698,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                                   ? (((vlSelf->Top__DOT__core__DOT__vlcount 
                                        != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                       & (0x27U == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                       ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                           ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                               ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                               : ((2U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                                   : 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                           : 0U) : 0U)
                                   : vlSelf->Top__DOT__core__DOT__ex_reg_wd)),32);
        bufp->chgSData(oldp+699,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
        bufp->chgCData(oldp+700,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
        bufp->chgBit(oldp+701,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        bufp->chgCData(oldp+702,((7U & vlSelf->Top__DOT__core__DOT__vtype)),3);
        bufp->chgCData(oldp+703,((7U & (vlSelf->Top__DOT__core__DOT__vtype 
                                        >> 3U))),3);
        bufp->chgCData(oldp+704,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__sew),7);
        bufp->chgCData(oldp+705,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__lmul),4);
        bufp->chgSData(oldp+706,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                            >> 2U))),13);
        bufp->chgSData(oldp+707,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                            >> 2U))),12);
        bufp->chgSData(oldp+708,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                            >> 2U))),13);
        bufp->chgBit(oldp+709,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+710,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+711,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgSData(oldp+712,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        bufp->chgIData(oldp+713,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+714,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+715,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+716,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgSData(oldp+717,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        bufp->chgIData(oldp+718,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+719,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+720,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                   ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                   : vlSelf->Top__DOT__core__DOT___GEN_58)),32);
        bufp->chgBit(oldp+721,((((IData)(vlSelf->Top__DOT__core__DOT__Execute_io_stall) 
                                 | (IData)(vlSelf->Top__DOT__core__DOT__IDecode_io_stall)) 
                                | (IData)(vlSelf->Top__DOT__core__DOT__IF_stall))));
        bufp->chgIData(oldp+722,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                   ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                      + vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                       ? ((((0x1fU 
                                             & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)) 
                                            == (0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                            ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                            : (((0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                    >> 7U)))
                                                ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                                : (
                                                   ((0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                                        >> 7U)))
                                                    ? vlSelf->Top__DOT__core__DOT__IDecode_io_writeData
                                                    : 
                                                   (((0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                         >> 7U)))
                                                     ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                                     : vlSelf->Top__DOT__core__DOT__IDecode_io_readData1)))) 
                                          + vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                       : (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                          + vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)))),32);
        bufp->chgBit(oldp+723,(((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
                                | (0U != (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))));
        if (((3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew)) 
             & (0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
            __Vtemp_ha96fd0ad__0[0U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_1[0U];
            __Vtemp_ha96fd0ad__0[1U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_1[1U];
            __Vtemp_ha96fd0ad__0[2U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_1[2U];
            __Vtemp_ha96fd0ad__0[3U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_1[3U];
        } else if (((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
            __Vtemp_ha96fd0ad__0[0U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_3[0U];
            __Vtemp_ha96fd0ad__0[1U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_3[1U];
            __Vtemp_ha96fd0ad__0[2U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_3[2U];
            __Vtemp_ha96fd0ad__0[3U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_3[3U];
        } else if (((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
            __Vtemp_ha96fd0ad__0[0U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_5[0U];
            __Vtemp_ha96fd0ad__0[1U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_5[1U];
            __Vtemp_ha96fd0ad__0[2U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_5[2U];
            __Vtemp_ha96fd0ad__0[3U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_5[3U];
        } else if (((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
            __Vtemp_ha96fd0ad__0[0U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_7[0U];
            __Vtemp_ha96fd0ad__0[1U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_7[1U];
            __Vtemp_ha96fd0ad__0[2U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_7[2U];
            __Vtemp_ha96fd0ad__0[3U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_T_7[3U];
        } else {
            __Vtemp_ha96fd0ad__0[0U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U];
            __Vtemp_ha96fd0ad__0[1U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U];
            __Vtemp_ha96fd0ad__0[2U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U];
            __Vtemp_ha96fd0ad__0[3U] = vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U];
        }
        bufp->chgWData(oldp+724,(__Vtemp_ha96fd0ad__0),128);
        bufp->chgIData(oldp+728,((IData)((VL_LTES_IQQ(36, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                           ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                           : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
        bufp->chgIData(oldp+729,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),32);
        bufp->chgIData(oldp+730,((IData)((0x7fffffffffffffffULL 
                                          & ((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                              ? (QData)((IData)(
                                                                (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                 & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                              : ((1U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                     | vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                      + vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                       - vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                     ? (QData)((IData)(
                                                                       VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                         < vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1)) 
                                                       << 
                                                       (0x1fU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                       : (QData)((IData)(
                                                                         ((7U 
                                                                           == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                           ? 
                                                                          (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                           : 
                                                                          ((8U 
                                                                            == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                            ? 
                                                                           VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, 
                                                                                (0x1fU 
                                                                                & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                            : 
                                                                           ((9U 
                                                                             == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                                             ? 
                                                                            (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                             ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)
                                                                             : 0U))))))))))))))),32);
        bufp->chgIData(oldp+731,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                   ? (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                                   : ((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                        | (3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                       | (2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)))
                                       ? (IData)((vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                                                  >> 0x20U))
                                       : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                           ? ((((vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                 >> 0x1fU)) 
                                               & (0U 
                                                  != vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                               ? (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                               : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                           : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                               ? vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                               : ((6U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend
                                                    : 0U))))))),32);
        bufp->chgIData(oldp+732,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_pc
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT___aluIn1_T_2)),32);
        bufp->chgIData(oldp+733,(((IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                   ? vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                   : vlSelf->Top__DOT__core__DOT__id_reg_imm)),32);
        bufp->chgIData(oldp+734,((((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                      >> 0x1fU)) ? 
                                  (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
        bufp->chgIData(oldp+735,((((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                      >> 0x1fU)) ? 
                                  (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
        bufp->chgQData(oldp+736,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                   ^ (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                    | (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                     & (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)) 
                                                      - 
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                       + (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                       : 0ULL)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_55))),64);
        bufp->chgQData(oldp+738,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                   ^ (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                    | (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                     & (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)) 
                                                      - 
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                       + (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                       : 0ULL)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_112))),64);
        bufp->chgIData(oldp+740,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffU
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_169))),32);
        bufp->chgIData(oldp+741,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffU
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_226))),32);
        bufp->chgIData(oldp+742,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffU
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_283))),32);
        bufp->chgIData(oldp+743,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffU
                                               : ((0x5bU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                    : 
                                                   ((0x4bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                      - 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 0U)))))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_340))),32);
        bufp->chgCData(oldp+744,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_853))))),8);
        bufp->chgCData(oldp+745,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 8U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 8U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 8U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           << 0x18U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            << 0x18U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 8U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_910))))),8);
        bufp->chgCData(oldp+746,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            << 0x10U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x10U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_967))))),8);
        bufp->chgCData(oldp+747,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x18U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x18U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x18U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           << 8U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            << 8U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                              >> 0x18U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1024))))),8);
        bufp->chgCData(oldp+748,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1081))))),8);
        bufp->chgCData(oldp+749,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 8U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 8U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 8U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x18U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x18U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 8U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1138))))),8);
        bufp->chgCData(oldp+750,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 0x10U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x10U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1195))))),8);
        bufp->chgCData(oldp+751,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x18U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x18U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x18U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 8U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            << 8U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                              >> 0x18U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1252))))),8);
        bufp->chgCData(oldp+752,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1257)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1263)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1269)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1309))))),8);
        bufp->chgCData(oldp+753,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1314)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1320)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1326)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 8U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 8U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 8U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x18U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x18U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 8U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1366))))),8);
        bufp->chgCData(oldp+754,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1371)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1377)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1383)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 0x10U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x10U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1423))))),8);
        bufp->chgCData(oldp+755,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1428)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1434)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1440)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x18U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x18U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x18U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 8U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            << 8U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                              >> 0x18U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1480))))),8);
        bufp->chgCData(oldp+756,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1485)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1491)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1497)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1537))))),8);
        bufp->chgCData(oldp+757,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1542)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1548)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1554)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 8U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 8U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 8U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x18U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             >> 8U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x18U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                              >> 8U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1594))))),8);
        bufp->chgCData(oldp+758,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1599)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1605)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1611)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             >> 0x10U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 0x10U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                              >> 0x10U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1651))))),8);
        bufp->chgCData(oldp+759,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1656)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1662)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1668)
                                                     ? 0xffU
                                                     : 
                                                    ((0x5bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x18U)) 
                                                      ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x2bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x18U)) 
                                                       | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x4bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x18U)) 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                         - 
                                                         ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 8U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                          ? 
                                                         (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            << 8U) 
                                                           | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                              >> 0x18U)) 
                                                          + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                          : 0U)))))))
                                                : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1708))))),8);
        bufp->chgSData(oldp+760,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_397))))),16);
        bufp->chgSData(oldp+761,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         >> 0x10U)) 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)) 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)) 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                             >> 0x10U)) 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_454))))),16);
        bufp->chgSData(oldp+762,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_511))))),16);
        bufp->chgSData(oldp+763,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         >> 0x10U)) 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)) 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)) 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                             >> 0x10U)) 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_568))))),16);
        bufp->chgSData(oldp+764,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_625))))),16);
        bufp->chgSData(oldp+765,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         >> 0x10U)) 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)) 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)) 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                             >> 0x10U)) 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_682))))),16);
        bufp->chgSData(oldp+766,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_739))))),16);
        bufp->chgSData(oldp+767,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x5bU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U)) 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                     : 
                                                    ((0x2bU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U)) 
                                                      | vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U)) 
                                                       & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B 
                                                        - 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U)))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                         ? 
                                                        (((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           << 0x10U) 
                                                          | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                             >> 0x10U)) 
                                                         + vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_796))))),16);
        bufp->chgQData(oldp+768,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_IQQ(64, (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
                                                               (((QData)((IData)(
                                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                    ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)) 
                                                     >= 
                                                     (((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                     ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3178))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+770,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_IQQ(64, (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
                                                               (((QData)((IData)(
                                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                    ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)) 
                                                     >= 
                                                     (((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                     ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3250))))
                                       : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                           & (1U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : 0xffffffffffffffffULL)))),64);
        bufp->chgIData(oldp+772,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffU
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3324)))
                                       : 0xffffffffU))),32);
        bufp->chgIData(oldp+773,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffU
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3396)))
                                       : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                           & (1U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : 0xffffffffU)))),32);
        bufp->chgIData(oldp+774,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffU
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3468)))
                                       : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                           & (2U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : 0xffffffffU)))),32);
        bufp->chgIData(oldp+775,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffU
                                               : ((0x3cU 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3540)))
                                       : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                           & (3U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : 0xffffffffU)))),32);
        bufp->chgCData(oldp+776,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3608))))))
                                                : 0xffU)))),8);
        bufp->chgCData(oldp+777,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                      >> 8U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 8U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                        >> 8U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 8U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3680))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (1U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+778,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                      >> 0x10U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                        >> 0x10U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3752))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (2U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+779,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                   >> 0x18U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         >> 0x18U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                     >> 0x18U))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3824))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (3U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+780,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3896))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (4U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+781,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                      >> 8U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 8U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                        >> 8U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 8U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3968))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (5U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+782,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                      >> 0x10U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                        >> 0x10U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4040))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (6U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+783,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                   >> 0x18U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         >> 0x18U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                     >> 0x18U))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4112))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (7U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+784,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1257)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1263)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1269)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4184))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (8U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+785,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1314)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1320)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1326)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                      >> 8U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 8U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                        >> 8U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 8U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4256))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (9U 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+786,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1371)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1377)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1383)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                      >> 0x10U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                        >> 0x10U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4328))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xaU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+787,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1428)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1434)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1440)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                   >> 0x18U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         >> 0x18U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                     >> 0x18U))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4400))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xbU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+788,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1485)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1491)
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1497)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4472))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xcU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+789,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x18U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1542)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1548)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1554)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                      >> 8U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 8U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 8U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x18U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 8U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 8U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x18U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 8U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4544))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xdU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x18U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 8U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+790,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 0x10U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1599)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1605)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1611)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (0xffU 
                                                                   & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                      >> 0x10U)))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (0xffU 
                                                         & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U)))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (0xffU 
                                                                     & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                        >> 0x10U)))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 0x10U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x10U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4616))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xeU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x10U))
                                                    : 0xffU))))),8);
        bufp->chgCData(oldp+791,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                            ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                << 8U) 
                                               | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U))
                                            : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1656)
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1662)
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x18U))
                                                    : 
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1668)
                                                     ? 0xffU
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (VL_GTES_III(8, 
                                                                  (0xffU 
                                                                   & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                  (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                   >> 0x18U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 8U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x18U)))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (((0xffU 
                                                         & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                        >= 
                                                        (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x18U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 8U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x18U)))
                                                       : 
                                                      ((0x2cU 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                        ? 
                                                       (VL_LTES_III(8, 
                                                                    (0xffU 
                                                                     & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                     >> 0x18U))
                                                         ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                         : 
                                                        ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          << 8U) 
                                                         | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                            >> 0x18U)))
                                                        : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4688))))))
                                                : (
                                                   ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                    & (0xfU 
                                                       > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                    ? 
                                                   ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                     << 8U) 
                                                    | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                       >> 0x18U))
                                                    : 0xffU))))),8);
        bufp->chgSData(oldp+792,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4760))))))
                                                  : 0xffffU)))),16);
        bufp->chgSData(oldp+793,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                  >> 0x10U))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        >> 0x10U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                                    >> 0x10U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                           >> 0x10U)))
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4832))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (1U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+794,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4904))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (2U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+795,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                  >> 0x10U))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        >> 0x10U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                                    >> 0x10U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                           >> 0x10U)))
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_4976))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (3U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+796,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5048))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (4U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+797,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                  >> 0x10U))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        >> 0x10U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                                    >> 0x10U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                           >> 0x10U)))
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5120))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (5U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+798,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5192))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (6U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 0xffffU))))),16);
        bufp->chgSData(oldp+799,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                              ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U))
                                              : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                                  ? 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                                    ? 0xffffU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    (VL_GTES_III(16, 
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                  >> 0x10U))
                                                      ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                      : 
                                                     ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     (((0xffffU 
                                                        & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A) 
                                                       >= 
                                                       (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        >> 0x10U))
                                                       ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                       : 
                                                      ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                       ? 
                                                      (VL_LTES_III(16, 
                                                                   (0xffffU 
                                                                    & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A), 
                                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                                    >> 0x10U))
                                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                        : 
                                                       ((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                           >> 0x10U)))
                                                       : (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5264))))))
                                                  : 
                                                 (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (7U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
        bufp->chgQData(oldp+800,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+802,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5336))),64);
        bufp->chgQData(oldp+804,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+806,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
        bufp->chgQData(oldp+808,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
        bufp->chgQData(oldp+810,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
        bufp->chgQData(oldp+812,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+814,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5510))),64);
        bufp->chgQData(oldp+816,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5539))),64);
        bufp->chgQData(oldp+818,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5568))),64);
        bufp->chgQData(oldp+820,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5597))),64);
        bufp->chgQData(oldp+822,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5626))),64);
        bufp->chgQData(oldp+824,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5655))),64);
        bufp->chgQData(oldp+826,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5684))),64);
        bufp->chgQData(oldp+828,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+830,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5742))),64);
        bufp->chgQData(oldp+832,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5771))),64);
        bufp->chgQData(oldp+834,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5800))),64);
        bufp->chgQData(oldp+836,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5829))),64);
        bufp->chgQData(oldp+838,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5858))),64);
        bufp->chgQData(oldp+840,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5887))),64);
        bufp->chgQData(oldp+842,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5916))),64);
        bufp->chgQData(oldp+844,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1257)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1263)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1269)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5945))),64);
        bufp->chgQData(oldp+846,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1314)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1320)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1326)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5974))),64);
        bufp->chgQData(oldp+848,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1371)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1377)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1383)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6003))),64);
        bufp->chgQData(oldp+850,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1428)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1434)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1440)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6032))),64);
        bufp->chgQData(oldp+852,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1485)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1491)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1497)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6061))),64);
        bufp->chgQData(oldp+854,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1542)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1548)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1554)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6090))),64);
        bufp->chgQData(oldp+856,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1599)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1605)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1611)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6119))),64);
        bufp->chgQData(oldp+858,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1656)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1662)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1668)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6148))),64);
        bufp->chgQData(oldp+860,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+862,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (((QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5336))),64);
        bufp->chgQData(oldp+864,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+866,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
        bufp->chgQData(oldp+868,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
        bufp->chgQData(oldp+870,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
        bufp->chgQData(oldp+872,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+874,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5742))),64);
        bufp->chgQData(oldp+876,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5771))),64);
        bufp->chgQData(oldp+878,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5800))),64);
        bufp->chgQData(oldp+880,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5829))),64);
        bufp->chgQData(oldp+882,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5858))),64);
        bufp->chgQData(oldp+884,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5887))),64);
        bufp->chgQData(oldp+886,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5916))),64);
        bufp->chgQData(oldp+888,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1257)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1263)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1269)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5945))),64);
        bufp->chgQData(oldp+890,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1314)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1320)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1326)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5974))),64);
        bufp->chgQData(oldp+892,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1371)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1377)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1383)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6003))),64);
        bufp->chgQData(oldp+894,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1428)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1434)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1440)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6032))),64);
        bufp->chgQData(oldp+896,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1485)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1491)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1497)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6061))),64);
        bufp->chgQData(oldp+898,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 8U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1542)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1548)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 8U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1554)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6090))),64);
        bufp->chgQData(oldp+900,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                         >> 0x10U))))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1599)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1605)
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                                 >> 0x10U))))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1611)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6119))),64);
        bufp->chgQData(oldp+902,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x18U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1656)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1662)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x18U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_1668)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_6148))),64);
        bufp->chgQData(oldp+904,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : 0xffffffffffffffffULL))),64);
        bufp->chgQData(oldp+906,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5510))),64);
        bufp->chgQData(oldp+908,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5539))),64);
        bufp->chgQData(oldp+910,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5568))),64);
        bufp->chgQData(oldp+912,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_585)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5597))),64);
        bufp->chgQData(oldp+914,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_642)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5626))),64);
        bufp->chgQData(oldp+916,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_699)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5655))),64);
        bufp->chgQData(oldp+918,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? (QData)((IData)(
                                                     (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U)))
                                   : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                       ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                              >> 0x10U)))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_756)
                                               ? 0xffffffffffffffffULL
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                       : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5684))),64);
        bufp->chgIData(oldp+920,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U)))
                                   ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                   : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                            >> 7U)))
                                       ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                       : (((0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                           == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                                  >> 7U)))
                                           ? vlSelf->Top__DOT__core__DOT__IDecode_io_writeData
                                           : (((0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U)))
                                               ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                               : vlSelf->Top__DOT__core__DOT__IDecode_io_readData1))))),32);
        bufp->chgBit(oldp+921,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU)))
                                 ? (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                    == vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                 : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)))
                                     ? (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                        != vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                     : ((4U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                         ? VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                             ? VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                                 : 
                                                (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2))))))));
        bufp->chgIData(oldp+922,((vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+923,((vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  & (~ vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
        bufp->chgIData(oldp+924,(((vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                   << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+925,(vlSelf->Top__DOT__dmem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+926,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgBit(oldp+927,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+928,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
        bufp->chgIData(oldp+929,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+930,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+931,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+932,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+933,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
        bufp->chgIData(oldp+934,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+935,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+936,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+937,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        bufp->chgIData(oldp+938,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                  >> 2U)),32);
        bufp->chgIData(oldp+939,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
        bufp->chgIData(oldp+940,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
        bufp->chgBit(oldp+941,(vlSelf->Top__DOT__core__DOT__pc_io_halt));
        bufp->chgBit(oldp+942,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                      >> 1U))));
        bufp->chgBit(oldp+943,((1U & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
        bufp->chgSData(oldp+944,((0x1fffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                             >> 2U))),13);
        bufp->chgSData(oldp+945,((0xfffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),12);
        bufp->chgSData(oldp+946,((0xfffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+947,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),32);
        bufp->chgIData(oldp+948,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
        bufp->chgIData(oldp+949,(vlSelf->Top__DOT__core__DOT__IDecode_io_writeData),32);
        bufp->chgIData(oldp+950,(vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult),32);
        bufp->chgIData(oldp+951,(vlSelf->Top__DOT__core__DOT__IDecode_io_readData1),32);
        bufp->chgIData(oldp+952,(vlSelf->Top__DOT__core__DOT__IDecode_io_readData2),32);
        bufp->chgBit(oldp+953,(vlSelf->Top__DOT__core__DOT__IDecode_io_pcSrc));
        bufp->chgIData(oldp+954,((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
        bufp->chgIData(oldp+955,(vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
        bufp->chgCData(oldp+956,(((0xbU == (0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                             >> 0x14U)))
                                   ? 3U : ((8U == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x14U)))
                                            ? 2U : 
                                           (0U == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x14U)))))),2);
        bufp->chgCData(oldp+957,(((3U == (3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                >> 0x1aU)))
                                   ? 4U : ((2U == (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x1aU)))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & 
                                              (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x1aU)))
                                             ? 2U : 1U)))),4);
        bufp->chgSData(oldp+958,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__eew),10);
        bufp->chgIData(oldp+959,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
        bufp->chgBit(oldp+960,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                    ? ((0U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | ((1U == (3U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xeU))) 
                                          | (3U == 
                                             (3U & 
                                              (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xeU)))))
                                    : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                        ? ((0U == (7U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xdU))) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                        : ((2U == (3U 
                                                   & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xeU))) 
                                              | ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         >> 0xeU))) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                           >> 0xeU))))))))))));
        bufp->chgIData(oldp+961,(vlSelf->Top__DOT__core__DOT__vlcount1),32);
        bufp->chgIData(oldp+962,(vlSelf->Top__DOT__core__DOT__emul_count),32);
        bufp->chgCData(oldp+963,(((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                   ? (0x3fU & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x19U))
                                   : 0U)),6);
        bufp->chgBit(oldp+964,(vlSelf->Top__DOT__core__DOT__IF_stall));
        bufp->chgIData(oldp+965,(vlSelf->Top__DOT__core__DOT___GEN_42),32);
        bufp->chgIData(oldp+966,((0x2023U | ((0x38000U 
                                              & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                | (0x200U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 3U)))))),18);
        bufp->chgIData(oldp+967,((0x6fU | ((0x1000000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               << 0xdU)) 
                                           | ((0xe00000U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  << 0x12U)) 
                                              | ((((0x1000U 
                                                    & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                    ? 0x1ffU
                                                    : 0U) 
                                                  << 0xcU) 
                                                 | (0x80U 
                                                    & ((~ 
                                                        (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         >> 0xfU)) 
                                                       << 7U))))))),25);
        bufp->chgSData(oldp+968,((0x63U | ((0x1000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 1U)) 
                                           | ((0xc00U 
                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                              | ((0x300U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 5U)) 
                                                 | (0x80U 
                                                    & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       >> 5U))))))),15);
        bufp->chgIData(oldp+969,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        bufp->chgIData(oldp+970,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        bufp->chgIData(oldp+971,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
        bufp->chgIData(oldp+972,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
        bufp->chgIData(oldp+973,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
        bufp->chgIData(oldp+974,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
        bufp->chgIData(oldp+975,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
        bufp->chgIData(oldp+976,(vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
        bufp->chgIData(oldp+977,(vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
        bufp->chgQData(oldp+978,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
        bufp->chgQData(oldp+980,((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))),64);
        bufp->chgCData(oldp+982,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)),8);
        bufp->chgQData(oldp+983,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_6),64);
        bufp->chgSData(oldp+985,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)),16);
        bufp->chgQData(oldp+986,((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))),64);
        bufp->chgCData(oldp+988,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)),8);
        bufp->chgQData(oldp+989,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_10),64);
        bufp->chgSData(oldp+991,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)),16);
        bufp->chgWData(oldp+992,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_15),512);
        bufp->chgWData(oldp+1008,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_18),512);
        bufp->chgQData(oldp+1024,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
        bufp->chgBit(oldp+1026,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
        bufp->chgIData(oldp+1027,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
        bufp->chgIData(oldp+1028,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
        bufp->chgIData(oldp+1029,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
        bufp->chgIData(oldp+1030,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+1031,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgIData(oldp+1032,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),32);
        bufp->chgCData(oldp+1033,((3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                         >> 0x1aU))),2);
        bufp->chgCData(oldp+1034,((0x1fU & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1035,((7U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1036,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__eew),7);
        bufp->chgCData(oldp+1037,(((3U == (3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                 >> 0x1aU)))
                                    ? 4U : ((2U == 
                                             (3U & 
                                              (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x1aU)))
                                             ? 3U : 
                                            ((1U == 
                                              (3U & 
                                               (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                >> 0x1aU)))
                                              ? 2U : 1U)))),3);
    }
    bufp->chgBit(oldp+1038,(vlSelf->clock));
    bufp->chgBit(oldp+1039,(vlSelf->reset));
    bufp->chgIData(oldp+1040,(vlSelf->io_pin),32);
    bufp->chgWData(oldp+1041,(vlSelf->io_v_pin),128);
    bufp->chgIData(oldp+1045,(vlSelf->io_fcsr),32);
    bufp->chgIData(oldp+1046,(((IData)(vlSelf->Top__DOT__core__DOT__pc_io_halt)
                                ? vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg
                                : ((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->chgIData(oldp+1047,(((IData)(vlSelf->Top__DOT__core__DOT__pc_io_halt)
                                ? vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg
                                : ((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->chgIData(oldp+1048,(((6U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                ? vlSelf->Top__DOT__core__DOT__mem_reg_csr_data
                                : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_csr_data
                                    : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_csr_data
                                        : ((3U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                            ? vlSelf->Top__DOT__core__DOT__IDecode_io_writeData
                                            : ((2U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                ? ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlSelf->Top__DOT__dmem__DOT__sram_rdata_o
                                                    : vlSelf->Top__DOT__core__DOT__ex_reg_result)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                                    : vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1))))))),32);
    bufp->chgBit(oldp+1049,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                              & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                 >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
    bufp->chgBit(oldp+1050,(vlSelf->Top__DOT__dmem__DOT__sram_csb_i));
    bufp->chgBit(oldp+1051,(vlSelf->Top__DOT__dmem__DOT__sram_we_i));
    bufp->chgBit(oldp+1052,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->chgBit(oldp+1053,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
