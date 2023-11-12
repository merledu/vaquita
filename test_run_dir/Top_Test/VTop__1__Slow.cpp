// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

void VTop::_settle__TOP__7(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_settle__TOP__7\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp777[3];
    WData/*95:0*/ __Vtemp778[3];
    WData/*95:0*/ __Vtemp779[3];
    WData/*95:0*/ __Vtemp780[3];
    WData/*95:0*/ __Vtemp781[3];
    WData/*95:0*/ __Vtemp784[3];
    WData/*95:0*/ __Vtemp788[3];
    WData/*95:0*/ __Vtemp792[3];
    WData/*127:0*/ __Vtemp793[4];
    WData/*127:0*/ __Vtemp798[4];
    WData/*127:0*/ __Vtemp800[4];
    WData/*1023:0*/ __Vtemp822[32];
    WData/*1023:0*/ __Vtemp824[32];
    WData/*1023:0*/ __Vtemp844[32];
    // Body
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[1U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[2U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[3U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[3U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[4U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[4U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[5U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[5U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[6U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[6U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[7U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[7U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[8U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[8U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[9U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[9U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xaU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xaU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xbU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xbU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xcU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xcU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xdU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xdU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xeU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xeU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xfU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xfU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x10U] 
        = (IData)(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x11U] 
        = (IData)((((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x12U] 
        = (IData)(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x18U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 8U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x13U] 
        = (IData)((((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 8U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 8U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x14U] 
        = (IData)(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x10U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x15U] 
        = (IData)((((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x16U] 
        = (IData)(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 8U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x18U)))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                            ? (QData)((IData)((0xffU 
                                               & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U)))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x17U] 
        = (IData)((((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x18U)))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657)
                             ? (QData)((IData)((0xffU 
                                                & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x18U)))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x18U] 
        = (IData)(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x19U] 
        = (IData)((((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                             ? (QData)((IData)((0xffU 
                                                & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1aU] 
        = (IData)(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 8U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1bU] 
        = (IData)((((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 8U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 8U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1cU] 
        = (IData)(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x10U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1dU] 
        = (IData)((((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x10U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1eU] 
        = (IData)(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x18U))))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                            ? (QData)((IData)((0xffU 
                                               & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1fU] 
        = (IData)((((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                     ? (QData)((IData)((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x18U))))
                     : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
                         ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889)
                             ? (QData)((IData)((0xffU 
                                                & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   >> 0x18U))))
                             : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 
        = (((QData)((IData)(((0xff000000U & (((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950)
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
                                                    : 0xffU))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((6U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
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
                                                     : 0xffU))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((5U 
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
                                                   : 0xffU))) 
                                               << 8U)) 
                                   | (0xffU & ((4U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
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
                                                     : 0xffU))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
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
                                                    : 0xffU))) 
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
                                                    : 0xffU))) 
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
                                                       : 0xffU))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((0U 
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
                                                       : 0xffU)))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc = 
        ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
         | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)));
    vlTOPp->Top__DOT__core__DOT__pc_io_halt = (1U & 
                                               (((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall)) 
                                                 | (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid))) 
                                                | (1U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    VL_EXTEND_WI(95,32, __Vtemp777, (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a 
                                         >> 0x1fU))
                                      ? (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a)
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a));
    VL_EXTEND_WI(95,32, __Vtemp778, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_SUB_W(3, __Vtemp780, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40);
    VL_EXTEND_WI(95,32, __Vtemp781, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp784, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp788, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    if (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
         | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[0U] 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? __Vtemp777[0U] : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                     ? (VL_GTE_W(3, __Vtemp778, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                         ? __Vtemp780[0U]
                                         : __Vtemp781[0U])
                                     : __Vtemp784[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[1U] 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? __Vtemp777[1U] : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                     ? (VL_GTE_W(3, __Vtemp778, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                         ? __Vtemp780[1U]
                                         : __Vtemp781[1U])
                                     : __Vtemp784[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[2U] 
            = (0x7fffffffU & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                               ? __Vtemp777[2U] : (
                                                   (0U 
                                                    != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                                    ? 
                                                   (VL_GTE_W(3, __Vtemp778, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                                     ? 
                                                    __Vtemp780[2U]
                                                     : 
                                                    __Vtemp781[2U])
                                                    : 
                                                   __Vtemp784[2U])));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[0U] 
            = __Vtemp788[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[1U] 
            = __Vtemp788[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[2U] 
            = (0x7fffffffU & __Vtemp788[2U]);
    }
    VL_EXTEND_WI(95,32, __Vtemp792, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_16 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
            | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))
            ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? 0ULL : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                           ? (VL_GTE_W(3, __Vtemp792, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                               ? ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)) 
                                  + (1ULL << (0x3fU 
                                              & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter) 
                                                 - (IData)(1U)))))
                               : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)))
                           : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient))))
            : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_75 
        = (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
            | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                 | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
               | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                   | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                  & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                     & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))
            ? ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                     | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                    | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)))
                    ? (IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                               >> 0x20U)) : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                              ? (((
                                                   (1U 
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
                                              : ((5U 
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
                                                    : 0U))))))
            : 0U);
    __Vtemp793[2U] = (IData)((((QData)((IData)(((0xff000000U 
                                                 & (((0xfU 
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
                                                        : 0xffU))) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & (((0xeU 
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
                                                           : 0xffU))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((0xdU 
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
                                                              : 0xffU))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((0xcU 
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
                                                               : 0xffU))))))))) 
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
                                                                    : 0xffU))) 
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
                                                                       : 0xffU))) 
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
                                                                          : 0xffU))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((8U 
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
                                                                           : 0xffU)))))))))));
    __Vtemp793[3U] = (IData)(((((QData)((IData)(((0xff000000U 
                                                  & (((0xfU 
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
                                                         : 0xffU))) 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & (((0xeU 
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
                                                            : 0xffU))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((0xdU 
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
                                                               : 0xffU))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((0xcU 
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
                                                                : 0xffU))))))))) 
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
                                                                     : 0xffU))) 
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
                                                                        : 0xffU))) 
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
                                                                           : 0xffU))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((8U 
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
                                                                            : 0xffU)))))))))) 
                              >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[0U] 
        = (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[1U] 
        = (IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[2U] 
        = __Vtemp793[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
        = __Vtemp793[3U];
    vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult 
        = ((((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3) 
             & (1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4))) 
            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready))
            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_75
            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_75
                : (IData)((0x7fffffffffffffffULL & 
                           ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                             ? (QData)((IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                & vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                             : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                 ? (QData)((IData)(
                                                   (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                    | vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                 : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                     ? (QData)((IData)(
                                                       (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                        + vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                     : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                         ? (QData)((IData)(
                                                           (vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                            - vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                         : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                             ? (QData)((IData)(
                                                               VL_LTS_III(1,32,32, vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                             : ((5U 
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
                                                                        : 0U))))))))))))))));
    VL_EXTEND_WI(128,32, __Vtemp798, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A);
    VL_EXTEND_WI(128,32, __Vtemp800, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A);
    if (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp822[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                           >> 0x1fU))));
        __Vtemp822[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                           >> 0x1fU))));
        __Vtemp822[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                             >> 0x1fU))));
        __Vtemp822[0x10U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x11U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x12U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x13U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x14U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x15U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x16U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x17U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x18U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x19U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1aU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1bU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1cU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1dU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1eU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
        __Vtemp822[0x1fU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                              >> 0x1fU))));
    } else {
        __Vtemp822[8U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                               >> 7U)))
                               ? (- (IData)((1U & (
                                                   __Vtemp798[3U] 
                                                   >> 0x1fU))))
                               : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                    >> 0x1fU))))
                                   : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                        >> 0x1fU))))
                                       : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[8U]
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[8U]
                                               : 0U)))))
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[8U]);
        __Vtemp822[9U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                               >> 7U)))
                               ? (- (IData)((1U & (
                                                   __Vtemp798[3U] 
                                                   >> 0x1fU))))
                               : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                    >> 0x1fU))))
                                   : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                        >> 0x1fU))))
                                       : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[9U]
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[9U]
                                               : 0U)))))
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[9U]);
        __Vtemp822[0xaU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xaU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xaU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xaU]);
        __Vtemp822[0xbU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xbU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xbU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xbU]);
        __Vtemp822[0xcU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xcU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xcU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xcU]);
        __Vtemp822[0xdU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xdU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xdU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xdU]);
        __Vtemp822[0xeU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xeU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xeU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xeU]);
        __Vtemp822[0xfU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp798[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0xfU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xfU]);
        __Vtemp822[0x10U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x10U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x10U]);
        __Vtemp822[0x11U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x11U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x11U]);
        __Vtemp822[0x12U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x12U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x12U]);
        __Vtemp822[0x13U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x13U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x13U]);
        __Vtemp822[0x14U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x14U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x14U]);
        __Vtemp822[0x15U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x15U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x15U]);
        __Vtemp822[0x16U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x16U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x16U]);
        __Vtemp822[0x17U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x17U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x17U]);
        __Vtemp822[0x18U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x18U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x18U]);
        __Vtemp822[0x19U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x19U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x19U]);
        __Vtemp822[0x1aU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1aU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1aU]);
        __Vtemp822[0x1bU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1bU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1bU]);
        __Vtemp822[0x1cU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1cU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1cU]);
        __Vtemp822[0x1dU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1dU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1dU]);
        __Vtemp822[0x1eU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1eU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1eU]);
        __Vtemp822[0x1fU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp798[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0x1fU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1fU]);
    }
    if (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp824[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                           >> 0x1fU))));
        __Vtemp824[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                           >> 0x1fU))));
        __Vtemp824[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                           >> 0x1fU))));
        __Vtemp824[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                           >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U];
    } else {
        __Vtemp824[4U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp798[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[4U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[4U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[4U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[4U]));
        __Vtemp824[5U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp798[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[5U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[5U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[5U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[5U]));
        __Vtemp824[6U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp798[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[6U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[6U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[6U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[6U]));
        __Vtemp824[7U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp798[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[7U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[7U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[7U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[7U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[0U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp800[0U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[0U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[0U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[0U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[0U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[1U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp800[1U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[1U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[1U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[1U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[1U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[2U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp800[2U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[2U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[2U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[2U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[2U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[2U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633[3U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp800[3U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700[3U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821[3U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058[3U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527[3U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[3U]));
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[4U] 
        = __Vtemp824[4U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[5U] 
        = __Vtemp824[5U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[6U] 
        = __Vtemp824[6U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[7U] 
        = __Vtemp824[7U];
    if (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041[3U] 
                                >> 0x1fU))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U] 
            = __Vtemp822[8U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U] 
            = __Vtemp822[9U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU] 
            = __Vtemp822[0xaU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU] 
            = __Vtemp822[0xbU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU] 
            = __Vtemp822[0xcU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU] 
            = __Vtemp822[0xdU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU] 
            = __Vtemp822[0xeU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU] 
            = __Vtemp822[0xfU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U] 
            = __Vtemp822[0x10U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U] 
            = __Vtemp822[0x11U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U] 
            = __Vtemp822[0x12U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U] 
            = __Vtemp822[0x13U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U] 
            = __Vtemp822[0x14U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U] 
            = __Vtemp822[0x15U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U] 
            = __Vtemp822[0x16U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U] 
            = __Vtemp822[0x17U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U] 
            = __Vtemp822[0x18U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U] 
            = __Vtemp822[0x19U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU] 
            = __Vtemp822[0x1aU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU] 
            = __Vtemp822[0x1bU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU] 
            = __Vtemp822[0x1cU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU] 
            = __Vtemp822[0x1dU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU] 
            = __Vtemp822[0x1eU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU] 
            = __Vtemp822[0x1fU];
    }
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data 
        = ((0x4000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
            ? (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)) : ((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
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
                                                    : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1)))))));
    vlTOPp->Top__DOT__core__DOT___T_90 = ((1U & ((~ 
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
    if (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp844[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                           >> 0x1fU))));
        __Vtemp844[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                             >> 0x1fU))));
        __Vtemp844[0x10U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x11U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x12U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x13U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x14U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x15U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x16U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x17U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x18U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x19U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1aU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1bU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1cU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1dU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1eU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
        __Vtemp844[0x1fU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U] 
                                              >> 0x1fU))));
    } else {
        __Vtemp844[4U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[4U])));
        __Vtemp844[5U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[5U])));
        __Vtemp844[6U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[6U])));
        __Vtemp844[7U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[7U])));
        __Vtemp844[8U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U])));
        __Vtemp844[9U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U])));
        __Vtemp844[0xaU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU])));
        __Vtemp844[0xbU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU])));
        __Vtemp844[0xcU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU])));
        __Vtemp844[0xdU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU])));
        __Vtemp844[0xeU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU])));
        __Vtemp844[0xfU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU])));
        __Vtemp844[0x10U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U])));
        __Vtemp844[0x11U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U])));
        __Vtemp844[0x12U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U])));
        __Vtemp844[0x13U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U])));
        __Vtemp844[0x14U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U])));
        __Vtemp844[0x15U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U])));
        __Vtemp844[0x16U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U])));
        __Vtemp844[0x17U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U])));
        __Vtemp844[0x18U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U])));
        __Vtemp844[0x19U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U])));
        __Vtemp844[0x1aU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU])));
        __Vtemp844[0x1bU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU])));
        __Vtemp844[0x1cU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU])));
        __Vtemp844[0x1dU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU])));
        __Vtemp844[0x1eU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU])));
        __Vtemp844[0x1fU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU])));
    }
    if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043[3U] 
                                >> 0x1fU))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[0U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[0U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[0U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[0U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[0U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[1U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[1U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[1U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[1U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[1U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[2U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[2U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[2U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[2U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[2U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019[3U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411[3U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565[3U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865[3U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[4U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[5U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[6U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[7U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[8U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[9U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xaU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xbU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xcU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xdU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xeU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0xfU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x10U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x11U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x12U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x13U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x14U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x15U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x16U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x17U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x18U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x19U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1aU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1bU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1cU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1dU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1eU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp844[0x1fU]);
    }
    vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
        = ((3U == (3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                         >> 0xcU))) ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                       & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))
            : ((2U == (3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                             >> 0xcU))) ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                           | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)
                : ((1U == (3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                 >> 0xcU))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data
                    : 0U)));
    vlTOPp->Top__DOT__core__DOT__pc_io_in = ((IData)(vlTOPp->Top__DOT__core__DOT___T_42)
                                              ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                              : vlTOPp->Top__DOT__core__DOT___T_90);
    if ((0x305U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                              >> 0x14U)))) {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
            = (1U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
            = (1U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
            = (1U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
            = (1U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
            = (1U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
            = (7U & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
    } else {
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG;
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
            = ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG);
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
            = ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))) ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG
                : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U)))
                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                    : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
            = (1U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                              : ((1U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                  ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                  : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
            = (1U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 1U) : ((1U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                               >> 1U)
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG))))));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
            = (1U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 2U) : ((1U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                               >> 2U)
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG))))));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
            = (1U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 3U) : ((1U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                               >> 3U)
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG))))));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
            = (1U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 4U) : ((1U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                               >> 4U)
                                            : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG))))));
        vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
            = (7U & ((0x341U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                      ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                      : ((0x304U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                          ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                          : ((3U == (0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                              ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 5U) : ((1U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                                            : ((2U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                                : (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)))))));
    }
    vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
        = ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
             & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))
            ? ((IData)(4U) + vlTOPp->Top__DOT__core__DOT__pc_io_in)
            : vlTOPp->Top__DOT__core__DOT__pc_io_in);
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_initial\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void VTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_settle\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_pin = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, io_v_pin);
    io_fcsr = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__InstructionFetch_io_instruction = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode_io_writeData = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode_io_readData1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode_io_readData2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode_io_func7 = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__IDecode_io_pcSrc = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode_io_stall = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute_io_vl = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute_io_vma = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute_io_vta = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute_io_v_sew = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute_io_ALUresult = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute_io_stall = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__MEM_io_readData = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__MEM_io_dccmReq_valid = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__pc_io_in = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__pc_io_halt = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Realigner_io_ral_address_o = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Realigner_io_ral_instruction_o = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder_io_instruction_o = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__if_reg_ins = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__if_reg_lmul_v = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__id_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_rd1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_rd2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_imm = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_wra = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_f7 = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__id_reg_f3 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__id_reg_ins = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_ctl_aluSrc = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_aluSrc1 = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__id_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__id_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_memRead = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_memWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_aluOp = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__id_reg_is_csr = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_csr_data = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_z_imm = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__id_reg_vstart_out = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_vtype = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__id_reg_v_addi_imm = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__id_reg_v0_data);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__id_reg_v1_data);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__id_reg_v2_data);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__id_reg_vs3_data);
    Top__DOT__core__DOT__id_reg_vs1_addr = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_vs2_addr = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_vd_addr = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_lmul_v = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__id_reg_ctl_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_opBsel = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_Ex_sel = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__id_reg_ctl_aluop = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_ctl_vset = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_load = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_ins = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_result = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_wd = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_wra = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__ex_reg_ins = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__ex_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_ctl_memRead = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_ctl_memWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_is_csr = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_csr_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__ex_reg_vec_alu_res);
    Top__DOT__core__DOT__ex_reg_vl = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_vd_addr = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__ex_reg_lmul_v = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__ex_reg_vset = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_reg_write = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_vtype = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__mem_reg_ins = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__mem_reg_result = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__mem_reg_wra = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__mem_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__mem_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__mem_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__mem_reg_is_csr = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__mem_reg_csr_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__mem_reg_vec_alu_out);
    Top__DOT__core__DOT__mem_reg_vec_vl = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__mem_reg_vtype = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__mem_reg_vec_vd_addr = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__mem_reg_lmul_v = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__mem_reg_vset = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__mem_reg_vec_reg_write = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__lmul = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__lmul_reg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__vlmul_count = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_42 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT___T_44 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IF_stall = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT___T_90 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___GEN_15 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG___05F0 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG___05F1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG___05F2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG___05F3 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_1_0 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_1_1 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_1_2 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_2_0 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_2_1 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_2_2 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__REG_3_0 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_3_1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_4_0 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_4_1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_5 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_6 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__REG_7_0 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__REG_7_1 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__REG_7_2 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__REG_7_3 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__control_io_branch = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__control_io_jump = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data);
    Top__DOT__core__DOT__IDecode__DOT__immediate_io_out = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__bu_io_taken = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_4 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_7 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_13 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_16 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__hdu__DOT___T_14 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_7 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_77 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_90 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_110 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__registers__DOT___GEN_123 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31);
    Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_21);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_53);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_85);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_95);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_96);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_97);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_98);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_99);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_100);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_101);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_102);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_103);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_104);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_105);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_106);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_107);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_108);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_109);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_110);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_111);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_112);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_113);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_114);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_115);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_116);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_117);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_118);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_119);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_120);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_121);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_122);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_123);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_124);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_125);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_126);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_127);
    Top__DOT__core__DOT__IDecode__DOT__immediate__DOT___GEN_2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__alu_io_input1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__alu_io_input2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc = VL_RAND_RESET_I(9);
    Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2);
    Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__MDU_io_valid = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__inputMux1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT___T_13 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__inputMux2 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT___T_16 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT___GEN_0 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT___GEN_12 = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__Execute__DOT__REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__REG_1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__REG_2 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT__REG_3 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__REG_4 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT__REG_5 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT___T_68 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_18 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_19 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_23 = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__Execute__DOT___T_71 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT___GEN_31 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_35 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT___T_75 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3 = VL_RAND_RESET_I(9);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_230 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_238 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_288 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_296 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_351 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_359 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_409 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_417 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_467 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_475 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_525 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_533 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_588 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_596 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_646 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_654 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_704 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_712 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_762 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_770 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_780 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_820 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_828 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_838 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_840 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_878 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_886 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_896 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_936 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_944 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_950 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_956 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_994 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1002 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1057 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1065 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1115 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1123 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1173 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1181 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1231 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1239 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1289 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1297 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1347 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1355 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1405 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1413 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1463 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1471 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1521 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1529 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1541 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1579 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1587 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1599 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1637 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1645 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1657 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1695 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1703 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1753 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1761 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1773 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1811 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1819 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1831 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1869 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1877 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1889 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1927 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1935 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2043);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2243);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3019);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3411);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3476 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3549 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3558 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3565);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3632 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3705 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3778 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3785 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3851 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3858 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3865);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3928 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4001 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4074 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4147 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4220 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4231 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4293 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4304 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4366 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4377 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4439 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4450 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4512 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4585 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4658 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4731 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4804 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4877 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4950 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5023 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5041);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5104 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5177 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5250 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5323 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5396 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5469 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5542 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5615 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5633);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5700);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5821);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6058);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6527);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6594);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6715);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7184);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7421);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_5);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7484);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7603);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8070);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8305);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_10);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_2 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_4 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_5 = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_7 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_8 = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_9 = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_10 = VL_RAND_RESET_Q(33);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_11 = VL_RAND_RESET_Q(34);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_12 = VL_RAND_RESET_Q(35);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax = VL_RAND_RESET_Q(36);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19 = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___T_57 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl = VL_RAND_RESET_Q(36);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_39 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(95, Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_13 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95, Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15);
    Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_16 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__MEM__DOT__offset = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__MEM__DOT__funct3 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__MEM__DOT__lo = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__MEM__DOT__hi = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__MEM__DOT__rdata = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__MEM__DOT___GEN_53 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Realigner__DOT__lhw_reg = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Realigner__DOT__stateReg = VL_RAND_RESET_I(2);
    Top__DOT__core__DOT__Realigner__DOT___T_7 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Realigner__DOT___T_8 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Realigner__DOT___T_9 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___T_20 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___T_42 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_16 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___T_62 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_32 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_52 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62 = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__sram_csb_i = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram_we_i = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram_rdata_o = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__validReg = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__csb = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__addr_o = VL_RAND_RESET_I(12);
    Top__DOT__dmem__DOT__sram__DOT__wdata_o = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__sram__DOT__wmask_o = VL_RAND_RESET_I(4);
    Top__DOT__dmem__DOT__sram__DOT__we_o = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__rdata_i = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1 = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_RAND_RESET_I(13);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg = VL_RAND_RESET_I(32);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_RAND_RESET_I(1);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_RAND_RESET_I(13);
    Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            Top__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__imem__DOT__sram_rdata_o = VL_RAND_RESET_I(32);
    Top__DOT__imem__DOT__validReg = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__csb = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__addr_o = VL_RAND_RESET_I(12);
    Top__DOT__imem__DOT__sram__DOT__wdata_o = VL_RAND_RESET_I(32);
    Top__DOT__imem__DOT__sram__DOT__wmask_o = VL_RAND_RESET_I(4);
    Top__DOT__imem__DOT__sram__DOT__we_o = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__rdata_i = VL_RAND_RESET_I(32);
    Top__DOT__imem__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1 = VL_RAND_RESET_I(32);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_RAND_RESET_I(13);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = VL_RAND_RESET_I(32);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_RAND_RESET_I(1);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_RAND_RESET_I(13);
    Top__DOT__imem__DOT__sram__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__Tracer__DOT__clkCycle = VL_RAND_RESET_I(32);
    Top__DOT__Tracer__DOT___T_1 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
