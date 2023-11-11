// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop::_sequent__TOP__9(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__9\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__dmem__DOT__sram_we_i = ((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                              & (~ (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite)));
    vlTOPp->Top__DOT__dmem__DOT__sram_csb_i = (1U & 
                                               ((~ 
                                                 ((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                                  & (~ (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite)))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                                    & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite)))));
}

VL_INLINE_OPT void VTop::_combo__TOP__10(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_combo__TOP__10\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid 
        = (1U & (~ ((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                               | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                              | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall)))));
    vlTOPp->Top__DOT__core__DOT__pc_io_halt = (1U & 
                                               (((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall)) 
                                                 | (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid))) 
                                                | (1U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    vlTOPp->Top__DOT__core__DOT___T_70 = ((1U & ((~ 
                                                  (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
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
                                                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu__DOT___T_14))))
                                           ? ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)
                                               ? ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                                   ? 
                                                  (vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                                                   + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                                    ? 
                                                   ((((0x1fU 
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
                                                    : 
                                                   (vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                                                    + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)))
                                               : ((
                                                   (0U 
                                                    != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                   & ((0U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
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
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                             >> 0xdU))) 
                                                        | (IData)(vlTOPp->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                                        : 
                                                       ((2U 
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
                                                                        >> 0xeU))))))))))
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                                    ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                                    : 
                                                   ((IData)(2U) 
                                                    + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))
                                                   : 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                                    ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))))
                                           : vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg);
    vlTOPp->Top__DOT__core__DOT__pc_io_in = ((IData)(vlTOPp->Top__DOT__core__DOT___T_22)
                                              ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                              : vlTOPp->Top__DOT__core__DOT___T_70);
    vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
        = ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
             & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))
            ? ((IData)(4U) + vlTOPp->Top__DOT__core__DOT__pc_io_in)
            : vlTOPp->Top__DOT__core__DOT__pc_io_in);
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clock)) & (IData)(vlTOPp->__Vclklast__TOP__clock))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) ^ (IData)(vlTOPp->__Vclklast__TOP__clock))) {
        vlTOPp->_multiclk__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTop::_change_request_1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request_1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
