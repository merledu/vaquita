// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

//==========

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval\n"); );
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 8165, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 8165, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTop::_sequent__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_3;
    CData/*5:0*/ __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_5;
    CData/*5:0*/ __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter;
    WData/*1023:0*/ __Vtemp52[32];
    WData/*95:0*/ __Vtemp148[3];
    WData/*95:0*/ __Vtemp150[3];
    WData/*127:0*/ __Vtemp151[4];
    WData/*127:0*/ __Vtemp163[4];
    // Body
    vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = 0xfU;
    vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = 0U;
    vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg 
        = (0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                     >> 2U));
    vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg 
        = (1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)));
    vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg 
        = vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid;
    __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter;
    vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg 
        = vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest;
    vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg 
        = vlTOPp->Top__DOT__dmem__DOT__sram_csb_i;
    vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg 
        = vlTOPp->Top__DOT__dmem__DOT__sram_we_i;
    vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg 
        = vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane;
    vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg 
        = (0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                     >> 2U));
    __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_5 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5;
    __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_3 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((IData)(vlTOPp->Top__DOT__core__DOT__REG_7_3) 
                          & (0U != vlTOPp->Top__DOT__core__DOT__mem_reg_ins)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"ClkCycle: %10#, pc_rdata: %x, pc_wdata: %x, insn: %x, mode: 3, rs1_addr: %2#, rs1_rdata: %x, rs2_addr: %2#, rs2_rdata: %x, rd_addr: %2#, rd_wdata: %x, mem_addr: %x, mem_rdata: %x, mem_wdata: %x\n",
                       32,vlTOPp->Top__DOT__Tracer__DOT__clkCycle,
                       32,vlTOPp->Top__DOT__core__DOT__mem_reg_pc,
                       32,vlTOPp->Top__DOT__core__DOT__REG___05F3,
                       32,vlTOPp->Top__DOT__core__DOT__mem_reg_ins,
                       5,(IData)(vlTOPp->Top__DOT__core__DOT__REG_1_2),
                       32,vlTOPp->Top__DOT__core__DOT__REG_3_1,
                       5,(IData)(vlTOPp->Top__DOT__core__DOT__REG_2_2),
                       32,vlTOPp->Top__DOT__core__DOT__REG_4_1,
                       5,(IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_wra),
                       32,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                            ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                            : vlTOPp->Top__DOT__core__DOT___GEN_29),
                       32,vlTOPp->Top__DOT__core__DOT__REG_5,
                       32,vlTOPp->Top__DOT__core__DOT__MEM_io_readData,
                       32,vlTOPp->Top__DOT__core__DOT__REG_6);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                          & (8U == (0xfU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                            >> 0x1cU)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"%x\n",32,vlTOPp->Top__DOT__core__DOT__ex_reg_wd);
        }
    }
    vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_memRead));
    vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul = 
        ((IData)(vlTOPp->reset) ? 0U : (((((((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew) 
                                             == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)) 
                                            & (1U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))) 
                                           | (((((8U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                 & (0x10U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                                | ((0x10U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                   & (0x20U 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                               | ((0x20U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                  & (0x40U 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                              & (2U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                          | ((((8U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                               & (0x20U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                              | ((0x10U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                 & (0x40U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                             & (4U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                         | (((8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                             & (0x40U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                            & (8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))))
                                         ? 1U : (((
                                                   ((((((0x10U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                        & (8U 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                                       | ((0x20U 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                          & (0x10U 
                                                             == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                      | ((0x40U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                         & (0x20U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                     & (1U 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))) 
                                                    | ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___T_21) 
                                                       & (2U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                                   | ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___T_34) 
                                                      & (4U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                                  | ((((8U 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                       & (0x20U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                                      | ((0x10U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                         & (0x40U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                     & (8U 
                                                        == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))))
                                                  ? 2U
                                                  : 
                                                 ((((((((0x20U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                        & (8U 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                                       | ((0x40U 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                          & (0x10U 
                                                             == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))) 
                                                     | (((((0x10U 
                                                            == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                           & (8U 
                                                              == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                                                          | ((0x20U 
                                                              == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                             & (0x10U 
                                                                == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                         | ((0x40U 
                                                             == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                                                            & (0x20U 
                                                               == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                                                        & (2U 
                                                           == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                                    | ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___T_21) 
                                                       & (4U 
                                                          == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
                                                   | ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___T_34) 
                                                      & (8U 
                                                         == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))))
                                                   ? 4U
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___GEN_0)))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = 0U;
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fU & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_25)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_13));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__vtype = 0U;
    } else {
        if ((((0x57U == (0x7fU & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o)) 
              & (7U == (7U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                              >> 0xcU)))) & ((~ (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                 >> 0x1fU)) 
                                             | (3U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x1eU)))))) {
            vlTOPp->Top__DOT__core__DOT__vtype = (0x7ffU 
                                                  & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                     >> 0x14U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__lmul = 0U;
    } else {
        if ((((0x57U == (0x7fU & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o)) 
              & (7U == (7U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                              >> 0xcU)))) & ((~ (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                 >> 0x1fU)) 
                                             | (3U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x1eU)))))) {
            vlTOPp->Top__DOT__core__DOT__lmul = (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x14U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__delays = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__delays = (((vlTOPp->Top__DOT__core__DOT__delays 
                                                 != vlTOPp->Top__DOT__core__DOT__vlcount1) 
                                                & (0x27U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o)))
                                                ? vlTOPp->Top__DOT__core__DOT___T_66
                                                : 0U);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient 
            = (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_16);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[0U];
        vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1bU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1dU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1fU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1cU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1eU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter = 0x20U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
             | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))) {
            if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid) {
                __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter = 0x20U;
            } else {
                if ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))) {
                    __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter 
                        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_39;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x1aU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x15U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x13U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x14U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xeU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x16U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x17U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x18U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x19U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xfU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x10U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x11U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0x12U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((9U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((7U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xbU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xaU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((5U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((8U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xcU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable) {
            if ((0xdU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13 
                    = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[0U];
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[1U];
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[2U];
        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[3U];
    }
    vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out = 0U;
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load 
        = ((~ (IData)(vlTOPp->reset)) & ((0x57U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x27U 
                                             != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            & (7U == 
                                               (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
    vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite));
    vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
    vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG 
                    = (1U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0x15U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG 
                    = (1U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0x11U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG 
                    = (3U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0xbU));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG 
                    = (1U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 7U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG 
                    = (1U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en) {
            if ((0x300U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)))) {
                if ((0x342U != (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data;
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp 
            = ((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                ? 2U : ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                         ? 2U : ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                  ? 2U : 0U)));
    }
    vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
        vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm 
            = (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU));
    }
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel 
        = ((~ (IData)(vlTOPp->reset)) & ((0x57U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & (((7U == 
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
                                            | (((7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU))) 
                                                & (2U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x1eU)))) 
                                               | ((~ 
                                                   ((7U 
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
                                                               >> 0xcU))))))))));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x57U == 
                                           (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                           ? (((7U 
                                                == 
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
                                                         >> 0x1eU)))))
                                               ? 3U
                                               : ((
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xcU))) 
                                                   & (2U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1eU))))
                                                   ? 3U
                                                   : 
                                                  (((7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xcU))) 
                                                    & (3U 
                                                       == 
                                                       (3U 
                                                        & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0x1eU))))
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xcU)))
                                                     ? 4U
                                                     : 
                                                    ((4U 
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
                                           : 0U));
    vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop = 
        ((IData)(vlTOPp->reset) ? 0U : ((0x57U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((~ ((7U 
                                                == 
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
                                           & (((7U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                               & (2U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU)))) 
                                              | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14)))));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_7) {
            vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg 
                = ((2U & vlTOPp->Top__DOT__core__DOT__pc_io_in)
                    ? 1U : 0U);
        } else {
            if (vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_8) {
                vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg 
                    = ((2U & vlTOPp->Top__DOT__core__DOT__pc_io_in)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)
                            ? 1U : 2U) : 0U);
            } else {
                if (vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_9) {
                    vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg 
                        = ((2U & vlTOPp->Top__DOT__core__DOT__pc_io_in)
                            ? 1U : 0U);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr = 0U;
        vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr 
            = (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                        >> 0x14U));
        vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg 
            = (0xffffU & (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                          >> 0x10U));
        vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr 
            = (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU));
    }
    vlTOPp->Top__DOT__imem__DOT__validReg = ((~ (IData)(vlTOPp->reset)) 
                                             & (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG = 0U;
    } else {
        if ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
              & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
             & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                  | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                 | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))))) {
            vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG 
                = ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                    ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                    : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                        ? 0U : vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1 = 0U;
    } else {
        if ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
              & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
             & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                  | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                 | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))))) {
            vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1 
                = ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                    ? ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                        ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)
                    : vlTOPp->Top__DOT__core__DOT__id_reg_imm);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2 = 0U;
    } else {
        if ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
              & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
             & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                  | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                 | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))))) {
            vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2 
                = vlTOPp->Top__DOT__core__DOT__id_reg_f3;
        }
    }
    __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_3 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3)
                                          ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_33)
                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_21)));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_5 = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3) {
            __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_5 
                = ((0x20U > (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5))
                    ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_73)
                    : 0U);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[3U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[3U] = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[0U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[1U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[2U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[3U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[0U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[1U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[2U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[3U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr;
    }
    vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[3U] = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_vtype = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[1U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[2U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[3U] 
            = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))
                ? 0U : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                         & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                         ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                         : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                             & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                             ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                             : 0U)));
        vlTOPp->Top__DOT__core__DOT__id_reg_vtype = 
            ((0xfffff800U & ((- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg 
                                               >> 0xaU)))) 
                             << 0xbU)) | (0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg));
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__mem_reg_vset) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg 
                = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__dmem__DOT__validReg)))) {
            vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset 
                = (3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__dmem__DOT__validReg)))) {
            vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3 
                = (7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                         >> 0xcU));
        }
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter 
        = __Vdly__Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter;
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5 
        = __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_5;
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3 
        = __Vdly__Top__DOT__core__DOT__Execute__DOT__REG_3;
    vlTOPp->Top__DOT__core__DOT__REG_7_3 = vlTOPp->Top__DOT__core__DOT__REG_7_2;
    vlTOPp->Top__DOT__Tracer__DOT__clkCycle = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : vlTOPp->Top__DOT__Tracer__DOT___T_1);
    vlTOPp->Top__DOT__core__DOT__REG___05F3 = vlTOPp->Top__DOT__core__DOT__REG___05F2;
    vlTOPp->Top__DOT__core__DOT__REG_4_1 = vlTOPp->Top__DOT__core__DOT__REG_4_0;
    vlTOPp->Top__DOT__core__DOT__REG_3_1 = vlTOPp->Top__DOT__core__DOT__REG_3_0;
    vlTOPp->Top__DOT__core__DOT__REG_1_2 = vlTOPp->Top__DOT__core__DOT__REG_1_1;
    vlTOPp->Top__DOT__core__DOT__REG_2_2 = vlTOPp->Top__DOT__core__DOT__REG_2_1;
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__mem_reg_wra = 0U;
        vlTOPp->Top__DOT__core__DOT__REG_6 = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_result = 0U;
        vlTOPp->Top__DOT__core__DOT__REG_5 = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_pc = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__mem_reg_wra = vlTOPp->Top__DOT__core__DOT__ex_reg_wra;
        vlTOPp->Top__DOT__core__DOT__REG_6 = vlTOPp->Top__DOT__core__DOT__ex_reg_wd;
        vlTOPp->Top__DOT__core__DOT__mem_reg_result 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_result;
        vlTOPp->Top__DOT__core__DOT__REG_5 = vlTOPp->Top__DOT__core__DOT__ex_reg_result;
        vlTOPp->Top__DOT__core__DOT__mem_reg_pc = vlTOPp->Top__DOT__core__DOT__ex_reg_pc;
        vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg;
    }
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_memRead = 0U;
    vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul = 
        ((3U == (7U & vlTOPp->Top__DOT__core__DOT__vtype))
          ? 8U : ((2U == (7U & vlTOPp->Top__DOT__core__DOT__vtype))
                   ? 4U : ((1U == (7U & vlTOPp->Top__DOT__core__DOT__vtype))
                            ? 2U : (0U == (7U & vlTOPp->Top__DOT__core__DOT__vtype)))));
    vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew = (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__core__DOT__vtype 
                                                        >> 3U)))
                                                    ? 0x40U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__core__DOT__vtype 
                                                         >> 3U)))
                                                     ? 0x20U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__core__DOT__vtype 
                                                          >> 3U)))
                                                      ? 0x10U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__core__DOT__vtype 
                                                           >> 3U)))
                                                       ? 8U
                                                       : 0U))));
    vlTOPp->Top__DOT__core__DOT___T_66 = ((IData)(1U) 
                                          + vlTOPp->Top__DOT__core__DOT__delays);
    vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_39 
        = (0x3fU & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter) 
                    - (IData)(1U)));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite 
        = ((~ (IData)(vlTOPp->reset)) & ((0x57U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & (0x27U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                          & (0x13U 
                                             != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x33U 
                                             != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x73U 
                                                   != 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((3U 
                                                      != 
                                                      (0x7fU 
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                                     & (0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))))));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins = 
        ((~ (IData)(vlTOPp->reset)) & ((0x57U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       | (0x27U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
    vlTOPp->io_fcsr = ((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                         << 5U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                    << 4U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                           << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                      << 1U) | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))));
    vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data = 
        ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Top__DOT__core__DOT__id_reg_csr_data);
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead 
        = ((~ (IData)(vlTOPp->reset)) & ((0x33U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x13U 
                                             != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x73U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
    if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp52[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                          >> 0x1fU))));
        __Vtemp52[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                            >> 0x1fU))));
        __Vtemp52[0x10U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x11U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x12U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x13U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x14U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x15U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x16U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x17U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x18U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x19U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1aU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1bU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1cU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1dU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1eU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
        __Vtemp52[0x1fU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                             >> 0x1fU))));
    } else {
        __Vtemp52[4U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U])));
        __Vtemp52[5U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U])));
        __Vtemp52[6U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U])));
        __Vtemp52[7U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U])));
        __Vtemp52[8U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U])));
        __Vtemp52[9U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                          & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                          ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                              >> 0x1fU))))
                          : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                  >> 0x1fU))))
                              : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                   >> 0x1fU))))
                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U])));
        __Vtemp52[0xaU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU])));
        __Vtemp52[0xbU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU])));
        __Vtemp52[0xcU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU])));
        __Vtemp52[0xdU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU])));
        __Vtemp52[0xeU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU])));
        __Vtemp52[0xfU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                >> 0x1fU))))
                            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                               >> 0x1fU))))
                                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                     >> 0x1fU))))
                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU])));
        __Vtemp52[0x10U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U])));
        __Vtemp52[0x11U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U])));
        __Vtemp52[0x12U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U])));
        __Vtemp52[0x13U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U])));
        __Vtemp52[0x14U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U])));
        __Vtemp52[0x15U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U])));
        __Vtemp52[0x16U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U])));
        __Vtemp52[0x17U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U])));
        __Vtemp52[0x18U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U])));
        __Vtemp52[0x19U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U])));
        __Vtemp52[0x1aU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU])));
        __Vtemp52[0x1bU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU])));
        __Vtemp52[0x1cU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU])));
        __Vtemp52[0x1dU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU])));
        __Vtemp52[0x1eU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU])));
        __Vtemp52[0x1fU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                                 >> 0x1fU))))
                             : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                >> 0x1fU))))
                                 : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU])));
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U] = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U] 
            = (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[0U]
                : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[0U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[0U]
                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[0U]
                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U]))));
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U] 
            = (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[1U]
                : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[1U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[1U]
                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[1U]
                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U]))));
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U] 
            = (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[2U]
                : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[2U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[2U]
                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[2U]
                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U]))));
        vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U] 
            = (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U]
                : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U]
                        : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U]
                            : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U]))));
    }
    vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr = ((~ (IData)(vlTOPp->reset)) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_is_csr));
    vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_7 
        = (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg));
    vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_8 
        = (1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg));
    vlTOPp->Top__DOT__core__DOT__Realigner__DOT___T_9 
        = (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_73 
        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_imm = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_f7 = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_imm = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out;
        vlTOPp->Top__DOT__core__DOT__id_reg_f7 = vlTOPp->Top__DOT__core__DOT__IDecode_io_func7;
    }
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc 
        = ((~ (IData)(vlTOPp->reset)) & ((0x33U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1 = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_f3 = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1 
            = ((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                ? 0U : ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                         ? 0U : ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x23U 
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
                                                       & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))));
        vlTOPp->Top__DOT__core__DOT__id_reg_f3 = (7U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU));
    }
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in 
        = (0x1fU & ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr) 
                    + (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v)));
    vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr));
    vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U] = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[0U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[1U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[2U];
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U] 
                = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[3U];
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                          & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))))) {
                if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))) {
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[0U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[1U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[2U];
                    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U] 
                        = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[3U];
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__mem_reg_vset) {
            vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg 
                = ((0x80000000U & ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype) 
                                   << 1U)) | (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__mem_reg_ins = 0U;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__mem_reg_ins = vlTOPp->Top__DOT__core__DOT__ex_reg_ins;
        vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vl;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__addrcount = 0U;
    } else {
        if (((vlTOPp->Top__DOT__core__DOT__vlcount 
              != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
             & (0x27U == (0x7fU & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))) {
                vlTOPp->Top__DOT__core__DOT__addrcount 
                    = vlTOPp->Top__DOT__core__DOT___T_105;
            }
        }
    }
    vlTOPp->Top__DOT__core__DOT__vlcount = ((IData)(vlTOPp->reset)
                                             ? 0U : 
                                            (((vlTOPp->Top__DOT__core__DOT__vlcount 
                                               != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                              & (0x27U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                              ? vlTOPp->Top__DOT__core__DOT___T_117
                                              : 0U));
    vlTOPp->Top__DOT__dmem__DOT__validReg = ((~ (IData)(vlTOPp->reset)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                                & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable)) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable))));
    if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1[3U];
    }
    if ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2[3U];
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3[3U];
    }
    if ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4[3U];
    }
    if ((5U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5[3U];
    }
    if ((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6[3U];
    }
    if ((7U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7[3U];
    }
    if ((8U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8[3U];
    }
    if ((9U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9[3U];
    }
    if ((0xaU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10[3U];
    }
    if ((0xbU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11[3U];
    }
    if ((0xcU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12[3U];
    }
    if ((0xdU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13[3U];
    }
    if ((0xeU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14[3U];
    }
    if ((0xfU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15[3U];
    }
    if ((0x10U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16[3U];
    }
    if ((0x11U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17[3U];
    }
    if ((0x12U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18[3U];
    }
    if ((0x13U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19[3U];
    }
    if ((0x14U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20[3U];
    }
    if ((0x15U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21[3U];
    }
    if ((0x16U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22[3U];
    }
    if ((0x17U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23[3U];
    }
    if ((0x18U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24[3U];
    }
    if ((0x19U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25[3U];
    }
    if ((0x1aU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26[3U];
    }
    if ((0x1bU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27[3U];
    }
    if ((0x1cU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28[3U];
    }
    if ((0x1dU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29[3U];
    }
    if ((0x1eU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30[3U];
    }
    if ((0x1fU == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31[3U];
    }
    vlTOPp->Top__DOT__core__DOT__REG_7_2 = vlTOPp->Top__DOT__core__DOT__REG_7_1;
    vlTOPp->Top__DOT__Tracer__DOT___T_1 = ((IData)(1U) 
                                           + vlTOPp->Top__DOT__Tracer__DOT__clkCycle);
    vlTOPp->Top__DOT__core__DOT__REG___05F2 = vlTOPp->Top__DOT__core__DOT__REG___05F1;
    vlTOPp->Top__DOT__core__DOT__REG_4_0 = vlTOPp->Top__DOT__core__DOT__id_reg_rd2;
    vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Top__DOT__core__DOT__id_reg_rd1);
    vlTOPp->Top__DOT__core__DOT__REG_3_0 = vlTOPp->Top__DOT__core__DOT__id_reg_rd1;
    vlTOPp->Top__DOT__core__DOT__REG_1_1 = vlTOPp->Top__DOT__core__DOT__REG_1_0;
    vlTOPp->Top__DOT__core__DOT__REG_2_1 = vlTOPp->Top__DOT__core__DOT__REG_2_0;
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__ex_reg_wra = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_wd = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_result = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_pc = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__ex_reg_wra = vlTOPp->Top__DOT__core__DOT__id_reg_wra;
        vlTOPp->Top__DOT__core__DOT__ex_reg_wd = ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                                   ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13);
        vlTOPp->Top__DOT__core__DOT__ex_reg_result 
            = vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult;
        vlTOPp->Top__DOT__core__DOT__ex_reg_pc = vlTOPp->Top__DOT__core__DOT__id_reg_pc;
        vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg 
            = vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg;
    }
    vlTOPp->Top__DOT__core__DOT___GEN_29 = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                             ? ((IData)(4U) 
                                                + vlTOPp->Top__DOT__core__DOT__mem_reg_pc)
                                             : vlTOPp->Top__DOT__core__DOT__mem_reg_result);
    vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
            ? (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite)
            : (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_csr_data = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v 
            = vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v;
        vlTOPp->Top__DOT__core__DOT__id_reg_csr_data 
            = ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                 >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25);
    }
    vlTOPp->Top__DOT__core__DOT__id_reg_is_csr = ((~ (IData)(vlTOPp->reset)) 
                                                  & (0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__core__DOT__if_reg_ins)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_25 
        = ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
            & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                 | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
               | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))))
            ? (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)
            : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_21 
        = ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
            & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                 | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
               | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)))) 
           | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out 
        = ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp))
            ? 2U : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                     ? ((1U & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)) 
                               | (~ ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                     >> 5U)))) ? 2U
                         : 3U) : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                   ? 6U : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                            ? 4U : 
                                           ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                             ? 5U : 
                                            ((5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                              ? ((0x20U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7))
                                                  ? 8U
                                                  : 7U)
                                              : ((7U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                                  ? 0U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))
                                                    ? 9U
                                                    : 0xfU)))))))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_70 
        = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
            & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
           & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
               | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
              | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_20 
        = ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3))) 
            & ((((4U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                 | (5U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
               | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)))) 
           | ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
              & ((((0U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)) 
                   | (1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                  | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3))) 
                 | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3)
            ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2)
            : (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3));
    vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 7U)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall)))) {
            vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite 
                = ((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                     & (0x13U != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                    & ((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                       | ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                          | ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                             | ((3U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x23U != (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x63U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x37U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))))))) 
                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
        }
    }
    if ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[0U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[1U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[2U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[3U] 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[0U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[1U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[2U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U];
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96[3U] 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U];
    }
    vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
    vlTOPp->Top__DOT__core__DOT__mem_reg_vtype = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype));
    vlTOPp->Top__DOT__core__DOT__mem_reg_vset = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
    vlTOPp->Top__DOT__core__DOT___T_105 = ((IData)(4U) 
                                           + vlTOPp->Top__DOT__core__DOT__addrcount);
    vlTOPp->Top__DOT__core__DOT___T_117 = ((IData)(1U) 
                                           + vlTOPp->Top__DOT__core__DOT__vlcount);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_vl = 0U;
        vlTOPp->Top__DOT__core__DOT__ex_reg_ins = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType 
            = vlTOPp->Top__DOT__core__DOT__id_reg_lsuType;
        vlTOPp->Top__DOT__core__DOT__ex_reg_vl = (IData)(
                                                         (VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax));
        vlTOPp->Top__DOT__core__DOT__ex_reg_ins = vlTOPp->Top__DOT__core__DOT__id_reg_ins;
    }
    vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
           | ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
               ? (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead)
               : (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
            << 5U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                       << 4U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                  << 3U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                             << 2U) 
                                            | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                << 1U) 
                                               | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_33 
        = ((0x20U > (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5)) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_21));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3)
            ? ((0x20U > (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5)) 
               & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_20))
            : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_20));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u 
        = ((5U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
           | (7U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s 
        = ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
           | (6U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_37)));
    vlTOPp->Top__DOT__core__DOT__REG_7_1 = vlTOPp->Top__DOT__core__DOT__REG_7_0;
    vlTOPp->Top__DOT__core__DOT__REG___05F1 = vlTOPp->Top__DOT__core__DOT__REG___05F0;
    vlTOPp->Top__DOT__core__DOT__id_reg_rd1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1);
    vlTOPp->Top__DOT__core__DOT__REG_1_0 = (0x1fU & 
                                            (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU));
    vlTOPp->Top__DOT__core__DOT__REG_2_0 = (0x1fU & 
                                            (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_wra = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall)))) {
            vlTOPp->Top__DOT__core__DOT__id_reg_wra 
                = (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                            >> 7U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__id_reg_rd2 = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_pc = 0U;
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg = 0U;
        vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v = 0U;
        vlTOPp->Top__DOT__core__DOT__lmul_reg = 0U;
    } else {
        vlTOPp->Top__DOT__core__DOT__id_reg_rd2 = vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2;
        vlTOPp->Top__DOT__core__DOT__id_reg_pc = vlTOPp->Top__DOT__core__DOT__if_reg_pc;
        vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg 
            = ((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                ? 0U : ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                         ? 0U : ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                           ? 1U : (
                                                   (0x23U 
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
                                                         : 0U))))))))));
        vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v 
            = (0xfU & vlTOPp->Top__DOT__core__DOT__lmul_reg);
        vlTOPp->Top__DOT__core__DOT__lmul_reg = (((vlTOPp->Top__DOT__core__DOT__lmul_reg 
                                                   != vlTOPp->Top__DOT__core__DOT__vlmul_count) 
                                                  & (((0x57U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o)) 
                                                      & (7U 
                                                         != 
                                                         (7U 
                                                          & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                             >> 0xcU)))) 
                                                     | (0x27U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))))
                                                  ? vlTOPp->Top__DOT__core__DOT___T_60
                                                  : 0U);
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_13 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
            | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))
            ? ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
               & ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                   ? (1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready)))
            : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
    vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write = 
        ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
    vlTOPp->Top__DOT__core__DOT__ex_reg_vtype = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm));
    if (vlTOPp->Top__DOT__core__DOT__mem_reg_vset) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vset;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr;
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
               | (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress 
            = vlTOPp->Top__DOT__core__DOT__mem_reg_wra;
    }
    vlTOPp->Top__DOT__core__DOT__ex_reg_vset = ((~ (IData)(vlTOPp->reset)) 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
    vlTOPp->Top__DOT__core__DOT__id_reg_lsuType = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__if_reg_lsuType));
    vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
            & (0U == (7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                            >> 0xcU)))) ? ((0U == (3U 
                                                   & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                            ? 1U : 
                                           ((1U == 
                                             (3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                             ? 2U : 
                                            ((2U == 
                                              (3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                              ? 4U : 8U)))
            : (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
                & (1U == (7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                >> 0xcU)))) ? ((0U 
                                                == 
                                                (3U 
                                                 & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                ? 3U
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__core__DOT__ex_reg_result))
                                                    ? 6U
                                                    : 0xcU))
                : 0xfU));
    vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo = ((0xff00U 
                                                  & ((((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                                        >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                                         : vlTOPp->Top__DOT__core__DOT__ex_reg_wd))));
    vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi = ((0xff00U 
                                                  & ((((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                                        >> 0x18U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                                         >> 0x10U)))));
    vlTOPp->Top__DOT__core__DOT__id_reg_ins = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : vlTOPp->Top__DOT__core__DOT__if_reg_ins);
    vlTOPp->Top__DOT__core__DOT__Execute_io_stall = 
        ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3)
          ? ((0x20U > (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5)) 
             | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_70))
          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_70));
    vlTOPp->Top__DOT__core__DOT__vlmul_count = (((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                                 | (1U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                                 ? 0U
                                                 : 
                                                (((1U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                                  | (2U 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                                  ? 1U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                                   ? 3U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                                    | (8U 
                                                       == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                                    ? 7U
                                                    : 0U))));
    vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi) 
            << 0x10U) | (IData)(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo));
    vlTOPp->Top__DOT__core__DOT__REG_7_0 = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write;
    vlTOPp->Top__DOT__core__DOT__REG___05F0 = ((IData)(vlTOPp->Top__DOT__core__DOT___GEN_13)
                                                ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                                : vlTOPp->Top__DOT__core__DOT___T_145);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__if_reg_pc = 0U;
    } else {
        if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) {
            vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                = vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg;
        }
    }
    vlTOPp->Top__DOT__core__DOT___T_60 = ((IData)(1U) 
                                          + vlTOPp->Top__DOT__core__DOT__lmul_reg);
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC 
        = (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr) 
              == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr)) 
             & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr))) 
            & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write))
            ? 1U : (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr) 
                       == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr)) 
                      & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr))) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write))
                     ? 2U : 0U));
    vlTOPp->Top__DOT__core__DOT__id_reg_z_imm = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 (0x7ffU 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U)));
    vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset = 
        ((~ (IData)(vlTOPp->reset)) & ((0x57U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & (((7U == (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU))) 
                                           & ((0U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU))) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU))))) 
                                          | (((7U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                              & (2U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))) 
                                             | ((7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU))) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x1eU))))))));
    if (vlTOPp->Top__DOT__core__DOT__ex_reg_vset) {
        vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew 
            = (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype) 
                     >> 3U));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vta 
            = (1U & ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype) 
                     >> 6U));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vma 
            = (1U & ((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype) 
                     >> 7U));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vl 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vl;
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew 
            = (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vset)
                      ? ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype) 
                         >> 3U) : (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg 
                                   >> 3U)));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vta 
            = (1U & ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vset)
                      ? ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype) 
                         >> 6U) : (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg 
                                   >> 6U)));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vma 
            = (1U & ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vset)
                      ? ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype) 
                         >> 7U) : (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg 
                                   >> 7U)));
        vlTOPp->Top__DOT__core__DOT__Execute_io_vl 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vset)
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl
                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg);
    }
    vlTOPp->Top__DOT__core__DOT__if_reg_lsuType = ((IData)(vlTOPp->reset)
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                         >> 0x1aU)))
                                                     ? 4U
                                                     : 
                                                    ((2U 
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
                                                       : 1U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 8U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 9U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xaU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xbU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xcU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xdU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xeU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 0xfU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 4U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 5U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 6U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 7U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 2U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 3U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249 
        = (1U & ((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                      >> 1U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3 
        = ((0x1f8U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x17U)) | (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB 
        = (((((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                        >> 0x14U)) == (0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))) 
             & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                >> 7U)))) & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite))
            ? 1U : (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr) 
                       == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr)) 
                      & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr))) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write))
                     ? 1U : (((((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                          >> 0x14U)) 
                                == (0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                             >> 7U))) 
                               & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                  >> 7U)))) 
                              & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite))
                              ? 2U : (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr) 
                                         == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr)) 
                                        & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr))) 
                                       & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write))
                                       ? 2U : 0U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA 
        = (((((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                        >> 0xfU)) == (0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                               >> 7U))) 
             & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                >> 7U)))) & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite))
            ? 1U : (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr) 
                       == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr)) 
                      & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr))) 
                     & (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write))
                     ? 1U : (((((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                             >> 7U))) 
                               & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                  >> 7U)))) 
                              & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite))
                              ? 2U : (((((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr) 
                                         == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr)) 
                                        & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr))) 
                                       & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write))
                                       ? 2U : 0U))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 8U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 9U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xaU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xbU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xcU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xdU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xeU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 0xfU))) & 
                 (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 4U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 5U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 6U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 7U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 2U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 3U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251 
        = (1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                      >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 1U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (1U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
            : 0xffffffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (1U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
            : 0xffffffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (2U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
            : 0xffffffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (3U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
            : 0xffffffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (1U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                           << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                        >> 0x10U)))
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (2U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (3U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                           << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                        >> 0x10U)))
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (4U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (5U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                           << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                        >> 0x10U)))
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (6U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])
            : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (7U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                          >> 0x10U)) : 0xffffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (8U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])
            : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (9U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                         << 0x18U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                      >> 8U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xaU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                         << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                      >> 0x10U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xbU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                         << 8U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                   >> 0x18U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xcU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])
            : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xdU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                        >> 8U)) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xeU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                        >> 0x10U)) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xfU >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                        >> 0x18U)) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])
            : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (1U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                         << 0x18U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                      >> 8U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (2U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                         << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                      >> 0x10U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (3U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                         << 8U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                   >> 0x18U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (4U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])
            : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (5U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                         << 0x18U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                      >> 8U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (6U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                         << 0x10U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                      >> 0x10U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (7U >= vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                         << 8U) | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                   >> 0x18U))) : 0xffU);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (8U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (9U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                         << 0x18U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                           >> 8U)))))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xaU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                         << 0x10U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                           >> 0x10U)))))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xbU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                         << 8U) | (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x18U)))))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xcU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xdU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                        >> 8U)))) : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xeU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                        >> 0x10U))))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528 
        = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
            & (0xfU > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
            ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                        >> 0x18U))))
            : 0xffffffffffffffffULL);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481 
        = ((8U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (8U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539 
        = ((9U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (9U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597 
        = ((0xaU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xaU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655 
        = ((0xbU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xbU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713 
        = ((0xcU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xcU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771 
        = ((0xdU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xdU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829 
        = ((0xeU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xeU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887 
        = ((0xfU >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0xfU < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779 
        = ((4U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (4U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837 
        = ((5U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (5U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895 
        = ((6U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (6U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953 
        = ((7U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (7U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425 
        = ((2U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (2U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483 
        = ((3U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (3U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187 
        = ((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245 
        = ((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
           & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4235 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (4U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4308 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (5U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4381 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (6U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4454 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (7U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3789 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (2U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3862 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (3U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3562 
        = ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
           & (1U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
           & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc 
        = ((0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop)))
            ? (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f3)
            : ((1U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop)))
                ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3)
                : ((2U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop)))
                    ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3)
                    : ((3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop)))
                        ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3)
                        : 0U))));
    if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[0U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[1U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[2U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v2_data[3U]);
    }
    if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
            = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[0U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[1U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[2U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
            = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                : vlTOPp->Top__DOT__core__DOT__id_reg_v1_data[3U]);
    }
    vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg = 
        ((IData)(vlTOPp->reset) ? 0xfffffffcU : vlTOPp->Top__DOT__core__DOT__pc_io_in);
    if (vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1 
            = (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                        >> 0xfU));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd 
            = (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                        >> 7U));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14 
            = (0x7ffU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                         >> 0x14U));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1 = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__core__DOT__if_reg_ins = 0U;
    } else {
        if (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
             | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))) {
            vlTOPp->Top__DOT__core__DOT__if_reg_ins = 0U;
        } else {
            if (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) {
                vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                    = vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o;
            }
        }
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4235) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972 
            = (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209 
            = (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4308) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001 
            = (QData)((IData)((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                             >> 0x10U)))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                         << 0x18U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                           >> 8U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4381) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030 
            = (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                         << 0x10U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                           >> 0x10U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4454) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059 
            = (QData)((IData)((0xffffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                          >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                         << 8U) | (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 0x18U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3789) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793 
            = (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914 
            = (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                         << 0x10U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                           >> 0x10U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3862) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822 
            = (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943 
            = (QData)((IData)((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                             >> 0x10U)))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                         << 8U) | (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 0x18U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180 = 0xffffffffffffffffULL;
    }
    if (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3562) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701 
            = (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764 
            = (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885 
            = (QData)((IData)((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                             >> 0x10U)))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122 
            = (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                         << 0x18U) 
                                        | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                           >> 8U)))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885 = 0xffffffffffffffffULL;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122 = 0xffffffffffffffffULL;
    }
    if ((0x28U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231 
            = (VL_LTES_IQQ(1,64,64, (((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))), 
                           (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))
                : (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289 
            = (VL_LTES_IQQ(1,64,64, (((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))), 
                           (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))
                : (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353 
            = (VL_LTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U], 
                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411 
            = (VL_LTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U], 
                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469 
            = (VL_LTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U], 
                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527 
            = (VL_LTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U], 
                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]), 
                                      (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))
                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U))), 
                                      (0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                     >> 0x10U))))
                           ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                            >> 0x10U))
                           : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                            >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]), 
                                      (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))
                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U))), 
                                      (0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                     >> 0x10U))))
                           ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                            >> 0x10U))
                           : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                            >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_823 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]), 
                                      (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))
                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_881 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U))), 
                                      (0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                     >> 0x10U))))
                           ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                            >> 0x10U))
                           : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                               << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                            >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_939 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]), 
                                      (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))
                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_997 
            = (0xffffU & (VL_LTES_III(1,16,16, (0xffffU 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   >> 0x10U)), 
                                      (0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  >> 0x10U)))
                           ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                              >> 0x10U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           >> 0x10U)));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]), 
                                    (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))
                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              << 0x18U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                >> 8U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 8U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                             << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                          >> 8U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                          << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                       >> 8U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                >> 0x10U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x10U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                          >> 0x10U))
                         : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                          >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                >> 0x18U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x18U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                             << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                       >> 0x18U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                          << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                    >> 0x18U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]), 
                                    (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))
                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                             >> 8U)), 
                                    (0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 8U)))
                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                            >> 8U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                      >> 8U)));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                             >> 0x10U)), 
                                    (0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x10U)))
                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                            >> 0x10U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                         >> 0x10U)));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                             >> 0x18U)), 
                                    (0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x18U)))
                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                            >> 0x18U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                         >> 0x18U)));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]), 
                                    (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))
                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              << 0x18U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                >> 8U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 8U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                             << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                          >> 8U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                          << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                       >> 8U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                >> 0x10U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x10U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                          >> 0x10U))
                         : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                          >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1235 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                >> 0x18U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x18U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                             << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                       >> 0x18U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                          << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                    >> 0x18U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]), 
                                    (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))
                         ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              << 0x18U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                >> 8U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 8U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                             << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                          >> 8U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                          << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                       >> 8U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                >> 0x10U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x10U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                          >> 0x10U))
                         : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                             << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                          >> 0x10U))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1467 
            = (0xffU & (VL_LTES_III(1,8,8, (0xffU & 
                                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                >> 0x18U))), 
                                    (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x18U))))
                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                             << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                       >> 0x18U)) : 
                        ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                          << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                    >> 0x18U))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? (((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                    <= (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))
                    : (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))) 
                       ^ (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))) 
                           | (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))) 
                               & (((QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? ((((QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))) 
                                   - (((QData)((IData)(
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? ((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))) 
                                       + (((QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))))
                                    : 0ULL))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? (((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                    <= (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))
                    : (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))) 
                       ^ (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))) 
                           | (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? ((((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))) 
                               & (((QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? ((((QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))) 
                                   - (((QData)((IData)(
                                                       vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? ((((QData)((IData)(
                                                         vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))) 
                                       + (((QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))))
                                    : 0ULL))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                    <= vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                       ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                           | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                               & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                   - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                    : 0U))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                    <= vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                       ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                           | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                               & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                   - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                    : 0U))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                    <= vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                       ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                           | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                               & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                   - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                    : 0U))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527 
            = ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                    <= vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])
                : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                       ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                    : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                        ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                           | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                        : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                            ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                               & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                            : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                   - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                    ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                       + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                    : 0U))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]) 
                               <= (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))
                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                  ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                      | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                              - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                  + 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                              >> 0x10U))) 
                               <= (0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x10U))))
                               ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                >> 0x10U))
                               : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                >> 0x10U)))
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x10U)) 
                                  ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   >> 0x10U)))
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                        >> 0x10U)) 
                                      | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                            >> 0x10U)))
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                              >> 0x10U)) 
                                          & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                >> 0x10U)))
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                  >> 0x10U)) 
                                              - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                    >> 0x10U)))
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? ((
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U)))
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]) 
                               <= (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))
                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                      | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                              - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  + 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              >> 0x10U))) 
                               <= (0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x10U))))
                               ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                >> 0x10U))
                               : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                >> 0x10U)))
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x10U)) 
                                  ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   >> 0x10U)))
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        >> 0x10U)) 
                                      | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                            >> 0x10U)))
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                              >> 0x10U)) 
                                          & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                >> 0x10U)))
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  >> 0x10U)) 
                                              - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    >> 0x10U)))
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? ((
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U)))
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_823 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]) 
                               <= (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))
                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                      | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                              - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  + 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_881 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              >> 0x10U))) 
                               <= (0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x10U))))
                               ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                >> 0x10U))
                               : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                   << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                >> 0x10U)))
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x10U)) 
                                  ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   >> 0x10U)))
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        >> 0x10U)) 
                                      | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                            >> 0x10U)))
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                              >> 0x10U)) 
                                          & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                >> 0x10U)))
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  >> 0x10U)) 
                                              - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    >> 0x10U)))
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? ((
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U)))
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_939 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                               <= (0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))
                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                               : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                   ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                      | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                   : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                       ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                       : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                           ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  + 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                               : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_997 
            = (0xffffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? (((0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                           >> 0x10U)) 
                               <= (0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x10U)))
                               ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                  >> 0x10U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               >> 0x10U))
                           : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                   ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                  >> 0x10U) : ((0x50U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                   >> 0x10U)
                                                : (
                                                   (0x48U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                    >> 0x10U)
                                                    : 
                                                   ((0xb8U 
                                                     == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                     ? 
                                                    ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 0x10U) 
                                                     - 
                                                     (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                      >> 0x10U))
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                      ? 
                                                     ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       >> 0x10U) 
                                                      + 
                                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                       >> 0x10U))
                                                      : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]) 
                             <= (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))
                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                            - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 8U))) <= 
                             (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        >> 8U)))) ? 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                           >> 8U)) : 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           >> 8U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               >> 8U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                    << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 8U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                      << 0x18U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                   >> 8U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 8U))) : 
                                ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                  ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                       << 0x18U) | 
                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                       >> 8U)) & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                     >> 8U)))
                                  : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                      ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                             >> 8U)) 
                                         - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               >> 8U)))
                                      : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                          ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 8U)) 
                                             + ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   >> 8U)))
                                          : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 0x10U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                             >> 0x10U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              >> 0x10U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                              >> 0x10U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               >> 0x10U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 0x10U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                   >> 0x10U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 0x10U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                            >> 0x10U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              >> 0x10U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                >> 0x10U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  >> 0x10U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x10U)))
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  >> 0x18U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                           << 8U) | 
                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           >> 0x18U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                           >> 0x18U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           >> 0x18U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                  << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                            >> 0x18U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                    << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              >> 0x18U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                      << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                >> 0x18U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  >> 0x18U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          << 8U) | 
                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                          >> 0x18U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                            << 8U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                              >> 0x18U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                >> 0x18U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                << 8U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                  >> 0x18U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                    >> 0x18U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                      >> 0x18U)))
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                             <= (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))
                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                            - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                       >> 8U)) <= (0xffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 8U)))
                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                >> 8U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          >> 8U)) : 
                        ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                          ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                              ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                             >> 8U) : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                        ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                            | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                           >> 8U) : 
                                       ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                             & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                            >> 8U) : 
                                        ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                          ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 8U) 
                                             - (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                >> 8U))
                                          : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                              ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  >> 8U) 
                                                 + 
                                                 (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                  >> 8U))
                                              : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                       >> 0x10U)) <= 
                             (0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                       >> 0x10U))) ? 
                            (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                             >> 0x10U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          >> 0x10U))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                 ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                >> 0x10U) : ((0x50U 
                                              == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                              ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                 >> 0x10U)
                                              : ((0x48U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                  >> 0x10U)
                                                  : 
                                                 ((0xb8U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    >> 0x10U) 
                                                   - 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    >> 0x10U))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                     >> 0x10U) 
                                                    + 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                     >> 0x10U))
                                                    : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                       >> 0x18U)) <= 
                             (0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                       >> 0x18U))) ? 
                            (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                             >> 0x18U) : (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                          >> 0x18U))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                 ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                >> 0x18U) : ((0x50U 
                                              == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                              ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                  | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                 >> 0x18U)
                                              : ((0x48U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                  ? 
                                                 ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]) 
                                                  >> 0x18U)
                                                  : 
                                                 ((0xb8U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                   ? 
                                                  ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                    >> 0x18U) 
                                                   - 
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                    >> 0x18U))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                    ? 
                                                   ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                     >> 0x18U) 
                                                    + 
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                     >> 0x18U))
                                                    : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]) 
                             <= (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))
                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                            - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 8U))) <= 
                             (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                        >> 8U)))) ? 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                           >> 8U)) : 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                           >> 8U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                               >> 8U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                    << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 8U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                      << 0x18U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                   >> 8U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 8U))) : 
                                ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                  ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                       << 0x18U) | 
                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                       >> 8U)) & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                     >> 8U)))
                                  : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                      ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                             >> 8U)) 
                                         - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                             << 0x18U) 
                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                               >> 8U)))
                                      : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                          ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 8U)) 
                                             + ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   >> 8U)))
                                          : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 0x10U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                             >> 0x10U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                              >> 0x10U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                              >> 0x10U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                               >> 0x10U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 0x10U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                   >> 0x10U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 0x10U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                            >> 0x10U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                              >> 0x10U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                >> 0x10U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                  >> 0x10U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x10U)))
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1235 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                  >> 0x18U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           << 8U) | 
                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                           >> 0x18U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                           >> 0x18U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                           >> 0x18U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                  << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                            >> 0x18U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                    << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                              >> 0x18U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                      << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                >> 0x18U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                  >> 0x18U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                          << 8U) | 
                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                          >> 0x18U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                            << 8U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                              >> 0x18U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                >> 0x18U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                << 8U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                  >> 0x18U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                    >> 0x18U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                      >> 0x18U)))
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]) 
                             <= (0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))
                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                ^ vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                            - vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                + vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 8U))) <= 
                             (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        >> 8U)))) ? 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                           >> 8U)) : 
                            ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                              << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           >> 8U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               >> 8U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                    << 0x18U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 8U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                      << 0x18U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                   >> 8U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 0x18U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 8U))) : 
                                ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                  ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                       << 0x18U) | 
                                      (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                       >> 8U)) & ((
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                     >> 8U)))
                                  : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                      ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                             >> 8U)) 
                                         - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                             << 0x18U) 
                                            | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               >> 8U)))
                                      : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                          ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 8U)) 
                                             + ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   >> 8U)))
                                          : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 0x10U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                             >> 0x10U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              >> 0x10U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                 << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                              >> 0x10U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               >> 0x10U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                    << 0x10U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 0x10U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                   >> 0x10U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 0x10U) | 
                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 0x10U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                          << 0x10U) 
                                         | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                            >> 0x10U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              >> 0x10U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                              << 0x10U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                >> 0x10U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  >> 0x10U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x10U)))
                                             : 0U)))))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1467 
            = (0xffU & ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                         ? (((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  >> 0x18U))) 
                             <= (0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                           << 8U) | 
                                          (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           >> 0x18U))))
                             ? ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                           >> 0x18U))
                             : ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                 << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                           >> 0x18U)))
                         : ((0x58U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                  << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                            >> 0x18U)) 
                                ^ ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                    << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              >> 0x18U)))
                             : ((0x50U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                 ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                      << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                >> 0x18U)) 
                                    | ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        << 8U) | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  >> 0x18U)))
                                 : ((0x48U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                     ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                          << 8U) | 
                                         (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                          >> 0x18U)) 
                                        & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                            << 8U) 
                                           | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                              >> 0x18U)))
                                     : ((0xb8U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                         ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                              << 8U) 
                                             | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                >> 0x18U)) 
                                            - ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                << 8U) 
                                               | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                  >> 0x18U)))
                                         : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                             ? (((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                    >> 0x18U)) 
                                                + (
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                      >> 0x18U)))
                                             : 0U)))))));
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___T_57 
        = (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1)) 
            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd)))
            ? vlTOPp->Top__DOT__core__DOT__Execute_io_vl
            : 0U);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_2 
        = ((0U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? 2U : ((4U & (((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                       >> 3U)))
                                                   ? 1U
                                                   : 0U) 
                                                 << 1U)) 
                                          | ((1U == 
                                              (7U & 
                                               ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                >> 3U)))
                                              ? 1U : 0U)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_4 
        = ((1U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? 2U : ((4U & (((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                       >> 3U)))
                                                   ? 1U
                                                   : 0U) 
                                                 << 1U)) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                >> 3U)))
                                              ? 1U : 0U)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_7 
        = ((2U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? 2U : ((4U & (((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                       >> 3U)))
                                                   ? 1U
                                                   : 0U) 
                                                 << 1U)) 
                                          | ((3U == 
                                              (7U & 
                                               ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                >> 3U)))
                                              ? 1U : 0U)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19 
        = ((5U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)))
            ? 1U : ((6U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)))
                     ? 1U : ((7U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)))
                              ? 1U : ((8U & ((((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                   >> 2U)) 
                                               << 3U) 
                                              & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                 << 2U)) 
                                             & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                << 3U))) 
                                      | ((4U & ((((~ 
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                    >> 2U)) 
                                                  << 2U) 
                                                 & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                    << 1U)) 
                                                & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)) 
                                                   << 2U))) 
                                         | ((2U & (
                                                   (((~ 
                                                      ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                       >> 2U)) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                         >> 1U))) 
                                                    & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (((~ 
                                                  ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14))) 
                                                | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                                   >> 2U)))))))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488[0U] 
        = (IData)(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                ? 0xffffffffffffffffULL
                                : (((QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                        : 0xffffffffffffffffULL)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488[1U] 
        = (IData)((((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                             ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                 ? 0xffffffffffffffffULL
                                 : (((QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                         : 0xffffffffffffffffULL)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488[2U] 
        = (IData)(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                ? 0xffffffffffffffffULL
                                : (((QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488[3U] 
        = (IData)((((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                             ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                 ? 0xffffffffffffffffULL
                                 : (((QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[0U] 
        = (IData)(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                            ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                        : 0xffffffffffffffffULL)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[1U] 
        = (IData)((((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                             ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                         : 0xffffffffffffffffULL)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[2U] 
        = (IData)(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                            ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[3U] 
        = (IData)((((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                             ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[4U] 
        = (IData)(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                            ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[5U] 
        = (IData)((((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                             ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[6U] 
        = (IData)(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                            ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607[7U] 
        = (IData)((((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                             ? (QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0U] 
        = (IData)(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                            ? (QData)((IData)((0xffffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                        : 0xffffffffffffffffULL)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[1U] 
        = (IData)((((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                             ? (QData)((IData)((0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                         : 0xffffffffffffffffULL)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[2U] 
        = (IData)(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                            ? (QData)((IData)((0xffffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[3U] 
        = (IData)((((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                             ? (QData)((IData)((0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[4U] 
        = (IData)(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                            ? (QData)((IData)((0xffffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[5U] 
        = (IData)((((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                             ? (QData)((IData)((0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[6U] 
        = (IData)(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                            ? (QData)((IData)((0xffffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[7U] 
        = (IData)((((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                             ? (QData)((IData)((0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[8U] 
        = (IData)(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                            ? (QData)((IData)((0xffffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[9U] 
        = (IData)((((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                             ? (QData)((IData)((0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xaU] 
        = (IData)(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                            ? (QData)((IData)((0xffffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xbU] 
        = (IData)((((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                             ? (QData)((IData)((0xffffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xcU] 
        = (IData)(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                            ? (QData)((IData)((0xffffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xdU] 
        = (IData)((((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                             ? (QData)((IData)((0xffffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xeU] 
        = (IData)(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                            ? (QData)((IData)((0xffffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 0x10U))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xfU] 
        = (IData)((((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffffU & (
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                             ? (QData)((IData)((0xffffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffffU 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       >> 0x10U))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0U] 
        = (IData)(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                        : 0xffffffffffffffffULL)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[1U] 
        = (IData)((((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                         : 0xffffffffffffffffULL)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[2U] 
        = (IData)(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 8U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                         >> 8U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[3U] 
        = (IData)((((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 8U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 8U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                          >> 8U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[4U] 
        = (IData)(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[5U] 
        = (IData)((((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[6U] 
        = (IData)(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 << 8U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 0x18U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                       << 8U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                         >> 0x18U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[7U] 
        = (IData)((((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x18U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x18U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                          >> 0x18U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[8U] 
        = (IData)(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[9U] 
        = (IData)((((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xaU] 
        = (IData)(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 8U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                         >> 8U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xbU] 
        = (IData)((((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 8U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 8U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                          >> 8U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xcU] 
        = (IData)(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xdU] 
        = (IData)((((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xeU] 
        = (IData)(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 << 8U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 0x18U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                       << 8U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                         >> 0x18U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xfU] 
        = (IData)((((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x18U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x18U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                          >> 0x18U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[0U] 
        = (IData)(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                    : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                        & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                        ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                       >> 0x19U)) & 
                                   (~ vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                  & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                            : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                ? 0xffffffffffffffffULL
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[1U] 
        = (IData)((((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                     : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                         & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                         ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x19U)) 
                                    & (~ vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                   & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                             ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                             : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                 ? 0xffffffffffffffffULL
                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[2U] 
        = (IData)(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                        & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                        ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                       >> 0x19U)) & 
                                   (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                       >> 1U))) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                            ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                ? 0xffffffffffffffffULL
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
        = (IData)((((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                     : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                         & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                         ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x19U)) 
                                    & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                          >> 1U))) 
                                   & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                             ? (((QData)((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                             : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                 ? 0xffffffffffffffffULL
                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297)) 
                   >> 0x20U));
    __Vtemp148[1U] = (IData)((((QData)((IData)(((3U 
                                                 < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 
                                                  (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                    & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffffffU
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527))
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535)))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                             ? 
                                                            vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
                                                              vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                               : 
                                                              (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                                ? 0xffffffffU
                                                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469))
                                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477))))));
    __Vtemp148[2U] = (IData)(((((QData)((IData)(((3U 
                                                  < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
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
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                    : 
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffffffffU
                                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527))
                                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((2U 
                                                              < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                              ? 
                                                             vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
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
                                                               vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                                : 
                                                               (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                                 & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                                 ? 0xffffffffU
                                                                 : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469))
                                                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477))))) 
                              >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[0U] 
        = ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
            : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                               >> 0x19U)) & (~ vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                          & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                    ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                    : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                        & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                        ? 0xffffffffU : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353))
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[1U] 
        = ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
            ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
            : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                ? ((1U & (((~ (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                               >> 0x19U)) & (~ (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                >> 1U))) 
                          & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                    ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                    : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                        & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                        ? 0xffffffffU : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411))
                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[2U] 
        = __Vtemp148[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
        = __Vtemp148[2U];
    __Vtemp150[0U] = ((0xffff0000U & (((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                        ? ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                              >> 0x10U))
                                        : (((3U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                            & (3U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                            ? ((1U 
                                                & (((~ 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 0x19U)) 
                                                    & (~ 
                                                       (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                        >> 3U))) 
                                                   & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                    & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765)))
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773))) 
                                      << 0x10U)) | 
                      (0xffffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                   : (((2U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (2U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                      >> 2U))) 
                                                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                               & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffU
                                               : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707)))
                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715)))));
    __Vtemp150[1U] = (IData)((((QData)((IData)(((0xffff0000U 
                                                 & (((7U 
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
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & ((6U 
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((0xffff0000U 
                                                             & (((5U 
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
                                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889))) 
                                                                << 0x10U)) 
                                                            | (0xffffU 
                                                               & ((4U 
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
                                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831)))))))));
    __Vtemp150[2U] = (IData)(((((QData)((IData)(((0xffff0000U 
                                                  & (((7U 
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & ((6U 
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
                                                         : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & (((5U 
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
                                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889))) 
                                                                 << 0x10U)) 
                                                             | (0xffffU 
                                                                & ((4U 
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
                                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831)))))))) 
                              >> 0x20U));
    __Vtemp151[0U] = ((0xffff0000U & (((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                        ? ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                              >> 0x10U))
                                        : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                            & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                            ? ((1U 
                                                & (((~ 
                                                     (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 0x19U)) 
                                                    & (~ 
                                                       (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                        >> 1U))) 
                                                   & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                : (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                    & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                    ? 0xffffU
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649)))
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657))) 
                                      << 0x10U)) | 
                      (0xffffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                   : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                       & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                       ? ((1U & (((~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                    >> 0x19U)) 
                                                  & (~ 
                                                     vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                                 & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                           ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                               & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                               ? 0xffffU
                                               : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591)))
                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599)))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[0U] 
        = __Vtemp151[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[1U] 
        = __Vtemp150[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[2U] 
        = __Vtemp150[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
        = __Vtemp150[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3 
        = (((QData)((IData)(((0xff000000U & (((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                               : ((
                                                   (7U 
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((6U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : (
                                                   ((6U 
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
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((5U 
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
                                                  : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359))) 
                                               << 8U)) 
                                   | (0xffU & ((4U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                : (
                                                   ((4U 
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
                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                               : ((
                                                   (3U 
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243))) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (((2U 
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((1U 
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
                                                      : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((0U 
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
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069))))))))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_5 
        = ((0U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? 4U : ((8U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_4) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_4)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_8 
        = ((1U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? 4U : ((8U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_7) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_7)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_10 
        = ((3U == (7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                         >> 3U))) ? ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19)) 
                                     << 1U) : 0ULL);
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en 
        = ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
           & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in 
        = (0x1fU & ((vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                     >> 0xfU) + (IData)(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in 
        = (0x1fU & ((vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                     >> 0x14U) + (IData)(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_7 
        = ((0U == (7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                         >> 0xcU))) | ((4U == (7U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                       | (3U == (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate__DOT___GEN_2 
        = (((0x17U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
            | (0x37U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))
            ? (0xfffff000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
            : ((0x23U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                ? ((((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 7U))))
                : ((0x63U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                    ? ((((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                          ? 0x7ffffU : 0U) << 0xdU) 
                       | ((0x1000U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x13U)) | 
                          ((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 7U))))))
                    : ((((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                          ? 0x7ffU : 0U) << 0x15U) 
                       | ((0x100000U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xbU)) | 
                          ((0xff000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins) 
                           | ((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 9U)) | 
                              (0x7feU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U)))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in 
        = (0x1fU & ((vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                     >> 7U) + (IData)(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
            ? 0U : ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                     ? 0U : ((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                              ? 0U : ((3U == (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                       ? 0U : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                ? 0U
                                                : (
                                                   (0x63U 
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
                                                       ? 1U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 0U))))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25 
        = ((2U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                             >> 0x14U))) ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
            : ((1U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                 >> 0x14U))) ? (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                 << 4U) 
                                                | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))
                : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U)))
                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG
                    : ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)))
                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG
                        : ((0x305U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))
                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG
                            : ((0x342U == (0xfffU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG
                                : ((0x300U == (0xfffU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))
                                    ? (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                        << 0x15U) | 
                                       (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                         << 0x11U) 
                                        | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                            << 0xbU) 
                                           | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                               << 7U) 
                                              | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                 << 3U)))))
                                    : ((0xf14U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                        : ((0x301U 
                                            == (0xfffU 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                            : 0U)))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27 
        = ((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_wra) 
           == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_wra)));
    vlTOPp->Top__DOT__core__DOT__IDecode_io_func7 = 
        (((0x33U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
          | ((0x13U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
             & (5U == (7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                             >> 0xcU))))) ? (0x7fU 
                                             & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x19U))
          : 0U);
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_16 
        = ((0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                     >> 7U)) == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_13 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                              >> 7U))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28 
        = ((0x13U != (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
           & ((0x73U != (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
              & ((3U != (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                 & ((0x23U != (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                    & (0x63U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_77 
        = ((0xdU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13
            : ((0xcU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xfU))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12
                : ((0xbU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0xfU))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)))
                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10
                        : ((9U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9
                            : ((8U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU)))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1
                                                      : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0)))))))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_110 
        = ((0xdU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                              >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13
            : ((0xcU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12
                : ((0xbU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))
                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10
                        : ((9U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))
                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9
                            : ((8U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1
                                                      : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0)))))))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_7 
        = ((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                     >> 7U)) == (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_4 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                              >> 7U))));
    if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[1U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[2U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[3U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[3U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[4U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[4U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[5U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[5U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[6U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[6U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[7U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[7U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[8U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[8U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[9U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[9U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xaU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xaU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xbU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xbU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xcU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xcU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xdU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xdU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xeU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xeU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xfU] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309[0xfU];
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[1U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[2U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[3U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[4U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[5U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[6U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[7U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[8U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[9U] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xaU] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xbU] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xcU] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xdU] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xeU] = 0U;
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10[0xfU] = 0U;
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[1U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[2U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[3U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[3U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[4U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[4U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[5U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[5U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[6U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[6U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[7U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[7U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[8U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[8U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[9U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[9U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xaU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xaU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xbU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xbU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xcU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xcU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xdU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xdU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xeU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xeU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0xfU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28[0xfU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x10U] 
        = (IData)(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x11U] 
        = (IData)((((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x12U] 
        = (IData)(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 8U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                         >> 8U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x13U] 
        = (IData)((((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 8U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 8U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                          >> 8U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x14U] 
        = (IData)(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                         >> 0x10U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x15U] 
        = (IData)((((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                          >> 0x10U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x16U] 
        = (IData)(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 8U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x18U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       << 8U) 
                                                      | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                         >> 0x18U)))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x17U] 
        = (IData)((((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x18U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x18U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                        << 8U) 
                                                       | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                          >> 0x18U)))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x18U] 
        = (IData)(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x19U] 
        = (IData)((((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1aU] 
        = (IData)(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 8U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 8U))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1bU] 
        = (IData)((((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 8U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 8U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       >> 8U))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1cU] 
        = (IData)(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x10U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 0x10U))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1dU] 
        = (IData)((((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       >> 0x10U))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1eU] 
        = (IData)(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x18U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                      >> 0x18U))))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074[0x1fU] 
        = (IData)((((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x18U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x18U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                       >> 0x18U))))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528)) 
                   >> 0x20U));
    __Vtemp163[2U] = (IData)((((QData)((IData)(((0xff000000U 
                                                 & (((0xfU 
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
                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939))) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & (((0xeU 
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
                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((0xdU 
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
                                                             : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((0xcU 
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
                                                              : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((0xff000000U 
                                                             & (((0xbU 
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
                                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707))) 
                                                                << 0x18U)) 
                                                            | ((0xff0000U 
                                                                & (((0xaU 
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
                                                                      : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & (((9U 
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
                                                                         : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((8U 
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
                                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533)))))))))));
    __Vtemp163[3U] = (IData)(((((QData)((IData)(((0xff000000U 
                                                  & (((0xfU 
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
                                                        : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939))) 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & (((0xeU 
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
                                                           : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((0xdU 
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
                                                              : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((0xcU 
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
                                                               : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff000000U 
                                                              & (((0xbU 
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
                                                                    : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707))) 
                                                                 << 0x18U)) 
                                                             | ((0xff0000U 
                                                                 & (((0xaU 
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
                                                                       : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & (((9U 
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
                                                                          : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((8U 
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
                                                                           : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533)))))))))) 
                              >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[0U] 
        = (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[1U] 
        = (IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[2U] 
        = __Vtemp163[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
        = __Vtemp163[3U];
}
