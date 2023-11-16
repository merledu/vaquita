// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

void VTop::_settle__TOP__7(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_settle__TOP__7\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp767[3];
    WData/*127:0*/ __Vtemp768[4];
    WData/*95:0*/ __Vtemp778[3];
    WData/*95:0*/ __Vtemp779[3];
    WData/*95:0*/ __Vtemp780[3];
    WData/*95:0*/ __Vtemp781[3];
    WData/*95:0*/ __Vtemp782[3];
    WData/*95:0*/ __Vtemp785[3];
    WData/*95:0*/ __Vtemp789[3];
    WData/*95:0*/ __Vtemp793[3];
    WData/*127:0*/ __Vtemp794[4];
    WData/*127:0*/ __Vtemp799[4];
    WData/*127:0*/ __Vtemp801[4];
    WData/*1023:0*/ __Vtemp823[32];
    WData/*1023:0*/ __Vtemp825[32];
    WData/*1023:0*/ __Vtemp845[32];
    // Body
    __Vtemp767[0U] = ((0xffff0000U & (((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                        ? ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                              >> 0x10U))
                                        : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                            ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
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
                                            : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                & (3U 
                                                   > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : 0xffffU))) 
                                      << 0x10U)) | 
                      (0xffffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                   : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                       ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                           ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                               ? 0xffffU
                                               : ((0x3cU 
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
                                       : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                           & (2U > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                           ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : 0xffffU)))));
    __Vtemp767[1U] = (IData)((((QData)((IData)(((0xffff0000U 
                                                 & (((7U 
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
                                                        : 0xffffU))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & ((6U 
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
                                                         : 0xffffU))))))) 
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
                                                                    : 0xffffU))) 
                                                                << 0x10U)) 
                                                            | (0xffffU 
                                                               & ((4U 
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
                                                                     : 0xffffU)))))))));
    __Vtemp767[2U] = (IData)(((((QData)((IData)(((0xffff0000U 
                                                  & (((7U 
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
                                                         : 0xffffU))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & ((6U 
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
                                                          : 0xffffU))))))) 
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
                                                                     : 0xffffU))) 
                                                                 << 0x10U)) 
                                                             | (0xffffU 
                                                                & ((4U 
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
                                                                      : 0xffffU)))))))) 
                              >> 0x20U));
    __Vtemp768[0U] = ((0xffff0000U & (((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                        ? ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                              >> 0x10U))
                                        : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                            ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
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
                                            : (((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vta)) 
                                                & (1U 
                                                   > vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                : 0xffffU))) 
                                      << 0x10U)) | 
                      (0xffffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                   ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                   : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                       ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                           ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                               ? 0xffffU
                                               : ((0x3cU 
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
                                       : 0xffffU))));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[0U] 
        = __Vtemp768[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[1U] 
        = __Vtemp767[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[2U] 
        = __Vtemp767[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
        = __Vtemp767[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[1U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[1U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[2U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[3U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[3U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[4U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[4U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[5U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[5U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[6U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[6U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[7U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[7U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[8U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[8U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[9U] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[9U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xaU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xaU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xbU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xbU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xcU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xcU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xdU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xdU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xeU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xeU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xfU] 
        = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19[0xfU];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x10U] 
        = (IData)(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x11U] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x12U] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x13U] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x14U] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x15U] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x16U] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x17U] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x18U] 
        = (IData)(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                    ? (QData)((IData)((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                    : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                        ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                            ? (QData)((IData)((0xffU 
                                               & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                            : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                ? 0xffffffffffffffffULL
                                : (QData)((IData)((0xffU 
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x19U] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1aU] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1bU] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1cU] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1dU] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1eU] 
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
                                                   & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1fU] 
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
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                         : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528)) 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 
        = (((QData)((IData)(((0xff000000U & (((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953)
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
                                                    : 0xffU))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((6U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? (
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
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
                                                   : 0xffU))) 
                                               << 8U)) 
                                   | (0xffU & ((4U 
                                                < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                                ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
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
                                                     : 0xffU))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
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
                                                       : 0xffU))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((0U 
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
                                                       : 0xffU)))))))));
    vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc = 
        ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
         | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)));
    vlTOPp->Top__DOT__core__DOT__vlsu__DOT___GEN_0 
        = (((((((0x40U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                & (8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
               & (1U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))) 
              | ((((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                   & (8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                  | ((0x40U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                     & (0x10U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                 & (2U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
             | (((((0x10U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                   & (8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew))) 
                  | ((0x40U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                     & (0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                 | ((0x20U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew)) 
                    & (0x10U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew)))) 
                & (4U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul)))) 
            | ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT___T_21) 
               & (8U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul))))
            ? 8U : (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul));
    vlTOPp->Top__DOT__core__DOT__pc_io_halt = (1U & 
                                               (((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall)) 
                                                 | (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid))) 
                                                | (1U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    VL_EXTEND_WI(95,32, __Vtemp778, (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a 
                                         >> 0x1fU))
                                      ? (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a)
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a));
    VL_EXTEND_WI(95,32, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp780, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_SUB_W(3, __Vtemp781, __Vtemp780, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40);
    VL_EXTEND_WI(95,32, __Vtemp782, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp785, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    VL_EXTEND_WI(95,32, __Vtemp789, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    if (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
         | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[0U] 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? __Vtemp778[0U] : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                     ? (VL_GTE_W(3, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                         ? __Vtemp781[0U]
                                         : __Vtemp782[0U])
                                     : __Vtemp785[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[1U] 
            = ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? __Vtemp778[1U] : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                     ? (VL_GTE_W(3, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                         ? __Vtemp781[1U]
                                         : __Vtemp782[1U])
                                     : __Vtemp785[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[2U] 
            = (0x7fffffffU & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                               ? __Vtemp778[2U] : (
                                                   (0U 
                                                    != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                                                    ? 
                                                   (VL_GTE_W(3, __Vtemp779, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                                                     ? 
                                                    __Vtemp781[2U]
                                                     : 
                                                    __Vtemp782[2U])
                                                    : 
                                                   __Vtemp785[2U])));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[0U] 
            = __Vtemp789[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[1U] 
            = __Vtemp789[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_15[2U] 
            = (0x7fffffffU & __Vtemp789[2U]);
    }
    VL_EXTEND_WI(95,32, __Vtemp793, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___GEN_16 
        = (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
            | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u))
            ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)
                ? 0ULL : ((0U != (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))
                           ? (VL_GTE_W(3, __Vtemp793, vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT___T_40)
                               ? ((QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)) 
                                  + (1ULL << (0x3fU 
                                              & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter) 
                                                 - (IData)(1U)))))
                               : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)))
                           : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient))))
            : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient)));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_77 
        = (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
            | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
                 | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
                | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
               | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                   | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                  & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                     & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))
            ? ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
                ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
                     | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
                    | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)))
                    ? (IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                               >> 0x20U)) : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
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
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
                                                   ? 
                                                  ((0x80000000U 
                                                    & vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a)
                                                    ? 
                                                   (- vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
                                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend
                                                    : 0U))))))
            : 0U);
    __Vtemp794[2U] = (IData)((((QData)((IData)(((0xff000000U 
                                                 & (((0xfU 
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
                                                        : 0xffU))) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & (((0xeU 
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
                                                           : 0xffU))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((0xdU 
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
                                                              : 0xffU))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((0xcU 
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
                                                                          : 0xffU))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((8U 
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
                                                                           : 0xffU)))))))))));
    __Vtemp794[3U] = (IData)(((((QData)((IData)(((0xff000000U 
                                                  & (((0xfU 
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
                                                         : 0xffU))) 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & (((0xeU 
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
                                                            : 0xffU))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((0xdU 
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
                                                               : 0xffU))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((0xcU 
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
                                                                           : 0xffU))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((8U 
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
                                                                            : 0xffU)))))))))) 
                              >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[0U] 
        = (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12);
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[1U] 
        = (IData)((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 
                   >> 0x20U));
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[2U] 
        = __Vtemp794[2U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
        = __Vtemp794[3U];
    vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult 
        = ((((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3) 
             & (1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4))) 
            & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready))
            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_77
            : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7)) 
                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_77
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
    VL_EXTEND_WI(128,32, __Vtemp799, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A);
    VL_EXTEND_WI(128,32, __Vtemp801, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A);
    if (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp823[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                           >> 0x1fU))));
        __Vtemp823[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                           >> 0x1fU))));
        __Vtemp823[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                             >> 0x1fU))));
        __Vtemp823[0x10U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x11U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x12U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x13U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x14U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x15U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x16U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x17U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x18U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x19U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1aU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1bU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1cU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1dU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1eU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
        __Vtemp823[0x1fU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                              >> 0x1fU))));
    } else {
        __Vtemp823[8U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                               >> 7U)))
                               ? (- (IData)((1U & (
                                                   __Vtemp799[3U] 
                                                   >> 0x1fU))))
                               : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                    >> 0x1fU))))
                                   : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                        >> 0x1fU))))
                                       : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[8U]
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[8U]
                                               : 0U)))))
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[8U]);
        __Vtemp823[9U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                           ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                               >> 7U)))
                               ? (- (IData)((1U & (
                                                   __Vtemp799[3U] 
                                                   >> 0x1fU))))
                               : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                    >> 0x1fU))))
                                   : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                        >> 0x1fU))))
                                       : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[9U]
                                           : ((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[9U]
                                               : 0U)))))
                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[9U]);
        __Vtemp823[0xaU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xaU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xaU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xaU]);
        __Vtemp823[0xbU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xbU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xbU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xbU]);
        __Vtemp823[0xcU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xcU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xcU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xcU]);
        __Vtemp823[0xdU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xdU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xdU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xdU]);
        __Vtemp823[0xeU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xeU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xeU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xeU]);
        __Vtemp823[0xfU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                             ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                 >> 7U)))
                                 ? (- (IData)((1U & 
                                               (__Vtemp799[3U] 
                                                >> 0x1fU))))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                      >> 0x1fU))))
                                     : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                          >> 0x1fU))))
                                         : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                             ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU]
                                             : ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                 ? 
                                                vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0xfU]
                                                 : 0U)))))
                             : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0xfU]);
        __Vtemp823[0x10U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x10U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x10U]);
        __Vtemp823[0x11U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x11U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x11U]);
        __Vtemp823[0x12U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x12U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x12U]);
        __Vtemp823[0x13U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x13U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x13U]);
        __Vtemp823[0x14U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x14U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x14U]);
        __Vtemp823[0x15U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x15U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x15U]);
        __Vtemp823[0x16U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x16U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x16U]);
        __Vtemp823[0x17U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x17U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x17U]);
        __Vtemp823[0x18U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x18U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x18U]);
        __Vtemp823[0x19U] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x19U]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x19U]);
        __Vtemp823[0x1aU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1aU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1aU]);
        __Vtemp823[0x1bU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1bU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1bU]);
        __Vtemp823[0x1cU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1cU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1cU]);
        __Vtemp823[0x1dU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1dU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1dU]);
        __Vtemp823[0x1eU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1eU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1eU]);
        __Vtemp823[0x1fU] = ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                              ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 7U)))
                                  ? (- (IData)((1U 
                                                & (__Vtemp799[3U] 
                                                   >> 0x1fU))))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                       >> 0x1fU))))
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U] 
                                                           >> 0x1fU))))
                                          : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? (- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0xfU] 
                                                               >> 0x1fU))))
                                              : ((0U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0x1fU]
                                                  : 0U)))))
                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0x1fU]);
    }
    if (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        __Vtemp825[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                           >> 0x1fU))));
        __Vtemp825[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                           >> 0x1fU))));
        __Vtemp825[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                           >> 0x1fU))));
        __Vtemp825[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                           >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U];
    } else {
        __Vtemp825[4U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp799[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[4U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[4U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[4U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[4U]));
        __Vtemp825[5U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp799[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[5U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[5U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[5U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[5U]));
        __Vtemp825[6U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp799[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[6U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[6U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[6U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[6U]));
        __Vtemp825[7U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U] 
                                               >> 0x1fU))))
                           : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                               ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                   ? (- (IData)((1U 
                                                 & (__Vtemp799[3U] 
                                                    >> 0x1fU))))
                                   : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U] 
                                                        >> 0x1fU))))
                                       : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                           ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[7U]
                                           : ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[7U]
                                               : ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[7U]
                                                   : 0U)))))
                               : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[7U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[0U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp801[0U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[0U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[0U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[0U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[0U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[0U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[1U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp801[1U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[1U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[1U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[1U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[1U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[1U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[2U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp801[2U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[2U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[2U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[2U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[2U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[2U]));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U] 
            = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637[3U]
                : ((0xbcU == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                    ? ((0U == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                        >> 7U))) ? 
                       __Vtemp801[3U] : ((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                          ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704[3U]
                                          : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825[3U]
                                              : ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062[3U]
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531[3U]
                                                   : 0U)))))
                    : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_16[3U]));
    }
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[4U] 
        = __Vtemp825[4U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[5U] 
        = __Vtemp825[5U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[6U] 
        = __Vtemp825[6U];
    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[7U] 
        = __Vtemp825[7U];
    if (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045[3U] 
                                >> 0x1fU))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U] 
            = __Vtemp823[8U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U] 
            = __Vtemp823[9U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU] 
            = __Vtemp823[0xaU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU] 
            = __Vtemp823[0xbU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU] 
            = __Vtemp823[0xcU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU] 
            = __Vtemp823[0xdU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU] 
            = __Vtemp823[0xeU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU] 
            = __Vtemp823[0xfU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U] 
            = __Vtemp823[0x10U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U] 
            = __Vtemp823[0x11U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U] 
            = __Vtemp823[0x12U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U] 
            = __Vtemp823[0x13U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U] 
            = __Vtemp823[0x14U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U] 
            = __Vtemp823[0x15U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U] 
            = __Vtemp823[0x16U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U] 
            = __Vtemp823[0x17U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U] 
            = __Vtemp823[0x18U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U] 
            = __Vtemp823[0x19U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU] 
            = __Vtemp823[0x1aU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU] 
            = __Vtemp823[0x1bU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU] 
            = __Vtemp823[0x1cU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU] 
            = __Vtemp823[0x1dU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU] 
            = __Vtemp823[0x1eU];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU] 
            = __Vtemp823[0x1fU];
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
    vlTOPp->Top__DOT__core__DOT___T_164 = ((1U & ((~ 
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
                                                ? (
                                                   (1U 
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
                                                : (
                                                   ((0U 
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
        __Vtemp845[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                           >> 0x1fU))));
        __Vtemp845[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                             >> 0x1fU))));
        __Vtemp845[0x10U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x11U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x12U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x13U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x14U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x15U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x16U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x17U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x18U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x19U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1aU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1bU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1cU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1dU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1eU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
        __Vtemp845[0x1fU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U] 
                                              >> 0x1fU))));
    } else {
        __Vtemp845[4U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[4U])));
        __Vtemp845[5U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[5U])));
        __Vtemp845[6U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[6U])));
        __Vtemp845[7U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[7U])));
        __Vtemp845[8U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[8U])));
        __Vtemp845[9U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                           & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                           ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                               >> 0x1fU))))
                           : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                               & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                               ? (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                               : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                   & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                   ? (- (IData)((1U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                    >> 0x1fU))))
                                   : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[9U])));
        __Vtemp845[0xaU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xaU])));
        __Vtemp845[0xbU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xbU])));
        __Vtemp845[0xcU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xcU])));
        __Vtemp845[0xdU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xdU])));
        __Vtemp845[0xeU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xeU])));
        __Vtemp845[0xfU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                             & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                             ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                 >> 0x1fU))))
                             : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                 & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                 ? (- (IData)((1U & 
                                               (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                >> 0x1fU))))
                                 : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                     & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                     ? (- (IData)((1U 
                                                   & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                      >> 0x1fU))))
                                     : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0xfU])));
        __Vtemp845[0x10U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x10U])));
        __Vtemp845[0x11U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x11U])));
        __Vtemp845[0x12U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x12U])));
        __Vtemp845[0x13U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x13U])));
        __Vtemp845[0x14U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x14U])));
        __Vtemp845[0x15U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x15U])));
        __Vtemp845[0x16U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x16U])));
        __Vtemp845[0x17U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x17U])));
        __Vtemp845[0x18U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x18U])));
        __Vtemp845[0x19U] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x19U])));
        __Vtemp845[0x1aU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1aU])));
        __Vtemp845[0x1bU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1bU])));
        __Vtemp845[0x1cU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1cU])));
        __Vtemp845[0x1dU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1dU])));
        __Vtemp845[0x1eU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1eU])));
        __Vtemp845[0x1fU] = (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                              & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                              ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U] 
                                                  >> 0x1fU))))
                              : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                  & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                  ? (- (IData)((1U 
                                                & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U] 
                                                   >> 0x1fU))))
                                  : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                      & (4U == (7U 
                                                & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U] 
                                                       >> 0x1fU))))
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0x1fU])));
    }
    if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
         & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[0U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[1U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[2U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U] 
            = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U];
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU] 
            = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047[3U] 
                                >> 0x1fU))));
    } else {
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[0U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[0U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[0U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[0U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[0U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[0U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[1U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[1U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[1U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[1U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[1U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[1U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[2U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[2U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[2U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[2U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[2U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[2U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U]
                : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                    & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023[3U]
                    : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                        & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415[3U]
                        : (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                            & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                            ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569[3U]
                            : (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (4U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869[3U]
                                : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_19[3U])))));
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[4U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[5U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[6U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[7U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[8U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[9U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xaU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xbU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xcU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xdU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xeU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0xfU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x10U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x11U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x12U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x13U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x14U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x15U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x16U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x17U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x18U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x19U]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1aU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1bU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1cU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1dU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1eU]);
        vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU] 
            = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                & (3U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                ? (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247[3U] 
                                    >> 0x1fU)))) : 
               __Vtemp845[0x1fU]);
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
    vlTOPp->Top__DOT__core__DOT__pc_io_in = ((IData)(vlTOPp->Top__DOT__core__DOT___T_64)
                                              ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                              : vlTOPp->Top__DOT__core__DOT___T_164);
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
    Top__DOT__core__DOT__MEM_io_writeEnable = VL_RAND_RESET_I(1);
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
    Top__DOT__core__DOT__if_reg_eew = VL_RAND_RESET_I(10);
    Top__DOT__core__DOT__if_reg_lsuType = VL_RAND_RESET_I(4);
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
    Top__DOT__core__DOT__id_reg_eew = VL_RAND_RESET_I(10);
    Top__DOT__core__DOT__id_reg_lsuType = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__id_reg_ctl_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_opBsel = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_Ex_sel = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__id_reg_ctl_aluop = VL_RAND_RESET_I(5);
    Top__DOT__core__DOT__id_reg_ctl_vset = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_load = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_ins = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_memRead = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__id_reg_ctl_v_MemWrite = VL_RAND_RESET_I(1);
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
    Top__DOT__core__DOT__ex_reg_ctl_v_memRead = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_reg_write = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__ex_reg_vtype = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__ex_reg_eew = VL_RAND_RESET_I(10);
    Top__DOT__core__DOT__ex_reg_lsuType = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__ex_reg_read_data1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__ex_reg_v_ins = VL_RAND_RESET_I(1);
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
    Top__DOT__core__DOT__vtype = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__vlcount1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__lmul_reg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_60 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__delays = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_64 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT___T_66 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__addrcount = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__vlcount = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_105 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_123 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_126 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___T_134 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__IF_stall = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT___T_164 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT___GEN_29 = VL_RAND_RESET_I(32);
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
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC = VL_RAND_RESET_I(2);
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
    Top__DOT__core__DOT__Execute__DOT___GEN_16 = VL_RAND_RESET_I(11);
    Top__DOT__core__DOT__Execute__DOT__REG = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__REG_1 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__REG_2 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT__REG_3 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__REG_4 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT__REG_5 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT___T_70 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_22 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_23 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_27 = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__Execute__DOT___T_73 = VL_RAND_RESET_I(6);
    Top__DOT__core__DOT__Execute__DOT___GEN_35 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT___GEN_39 = VL_RAND_RESET_I(3);
    Top__DOT__core__DOT__Execute__DOT___T_77 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl__DOT___T_3 = VL_RAND_RESET_I(9);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_591 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_599 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_649 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_657 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_707 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_715 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_765 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_773 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_823 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_831 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_843 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_881 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_889 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_939 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_947 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_953 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_957 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_959 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_997 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1005 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1235 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1467 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1545 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1603 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1661 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1777 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1835 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1893 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2047);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_2247);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3023);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3415);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3480 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3553 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3562 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3569);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3636 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3709 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3782 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3789 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3855 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3862 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3869);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_3932 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4005 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4078 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4151 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4224 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4235 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4297 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4308 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4370 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4381 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4443 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4454 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4516 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4589 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4662 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4735 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4808 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4881 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_4954 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5027 = VL_RAND_RESET_I(8);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5045);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5108 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5181 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5254 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5327 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5400 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5473 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5546 = VL_RAND_RESET_I(16);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5619 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5637);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5704);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5825);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6062);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499 = VL_RAND_RESET_Q(64);
    Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6531);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6598);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6719);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7188);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7425);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_5);
    VL_RAND_RESET_W(128, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7488);
    VL_RAND_RESET_W(256, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_7607);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28);
    VL_RAND_RESET_W(1024, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8074);
    VL_RAND_RESET_W(512, Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_8309);
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
    Top__DOT__core__DOT__MEM__DOT___GEN_55 = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    Top__DOT__core__DOT__vlsu__DOT__sew = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__vlsu__DOT__lmul = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__vlsu__DOT__eew = VL_RAND_RESET_I(7);
    Top__DOT__core__DOT__vlsu__DOT__emul = VL_RAND_RESET_I(4);
    Top__DOT__core__DOT__vlsu__DOT___T_21 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__vlsu__DOT___T_34 = VL_RAND_RESET_I(1);
    Top__DOT__core__DOT__vlsu__DOT___GEN_0 = VL_RAND_RESET_I(4);
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
