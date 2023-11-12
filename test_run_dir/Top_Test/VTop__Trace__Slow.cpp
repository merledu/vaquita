// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VTop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VTop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VTop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VTop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1031,"clock", false,-1);
        tracep->declBit(c+1032,"reset", false,-1);
        tracep->declBus(c+1033,"io_pin", false,-1, 31,0);
        tracep->declArray(c+1034,"io_v_pin", false,-1, 127,0);
        tracep->declBus(c+1038,"io_fcsr", false,-1, 31,0);
        tracep->declBit(c+1031,"Top clock", false,-1);
        tracep->declBit(c+1032,"Top reset", false,-1);
        tracep->declBus(c+1033,"Top io_pin", false,-1, 31,0);
        tracep->declArray(c+1034,"Top io_v_pin", false,-1, 127,0);
        tracep->declBus(c+1038,"Top io_fcsr", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core_clock", false,-1);
        tracep->declBit(c+1032,"Top core_reset", false,-1);
        tracep->declBus(c+700,"Top core_io_pin", false,-1, 31,0);
        tracep->declArray(c+13,"Top core_io_Vpin", false,-1, 127,0);
        tracep->declBit(c+17,"Top core_io_dmemReq_valid", false,-1);
        tracep->declBus(c+18,"Top core_io_dmemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top core_io_dmemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top core_io_dmemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top core_io_dmemReq_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top core_io_dmemRsp_valid", false,-1);
        tracep->declBus(c+1,"Top core_io_dmemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1021,"Top core_io_imemReq_valid", false,-1);
        tracep->declBus(c+1022,"Top core_io_imemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core_io_imemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top core_io_imemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top core_io_imemReq_bits_isWrite", false,-1);
        tracep->declBit(c+23,"Top core_io_imemRsp_valid", false,-1);
        tracep->declBus(c+2,"Top core_io_imemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+24,"Top core_io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+25,"Top core_io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+26,"Top core_io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+27,"Top core_io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+700,"Top core_io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+28,"Top core_io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+29,"Top core_io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+903,"Top core_io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+30,"Top core_io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+31,"Top core_io_rvfiBool_0", false,-1);
        tracep->declBus(c+32,"Top core_io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+33,"Top core_io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+34,"Top core_io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+35,"Top core_io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1031,"Top dmem_clock", false,-1);
        tracep->declBit(c+1032,"Top dmem_reset", false,-1);
        tracep->declBit(c+17,"Top dmem_io_req_valid", false,-1);
        tracep->declBus(c+18,"Top dmem_io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top dmem_io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top dmem_io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top dmem_io_req_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top dmem_io_rsp_valid", false,-1);
        tracep->declBus(c+1,"Top dmem_io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top imem_clock", false,-1);
        tracep->declBit(c+1032,"Top imem_reset", false,-1);
        tracep->declBit(c+1021,"Top imem_io_req_valid", false,-1);
        tracep->declBus(c+1022,"Top imem_io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top imem_io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top imem_io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top imem_io_req_bits_isWrite", false,-1);
        tracep->declBit(c+23,"Top imem_io_rsp_valid", false,-1);
        tracep->declBus(c+2,"Top imem_io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top Tracer_clock", false,-1);
        tracep->declBit(c+1032,"Top Tracer_reset", false,-1);
        tracep->declBus(c+24,"Top Tracer_io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+25,"Top Tracer_io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+26,"Top Tracer_io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+27,"Top Tracer_io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+700,"Top Tracer_io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+28,"Top Tracer_io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+29,"Top Tracer_io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+903,"Top Tracer_io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+30,"Top Tracer_io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+31,"Top Tracer_io_rvfiBool_0", false,-1);
        tracep->declBus(c+32,"Top Tracer_io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+33,"Top Tracer_io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+34,"Top Tracer_io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBit(c+1031,"Top core clock", false,-1);
        tracep->declBit(c+1032,"Top core reset", false,-1);
        tracep->declBus(c+700,"Top core io_pin", false,-1, 31,0);
        tracep->declArray(c+13,"Top core io_Vpin", false,-1, 127,0);
        tracep->declBit(c+17,"Top core io_dmemReq_valid", false,-1);
        tracep->declBus(c+18,"Top core io_dmemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top core io_dmemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top core io_dmemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top core io_dmemReq_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top core io_dmemRsp_valid", false,-1);
        tracep->declBus(c+1,"Top core io_dmemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1021,"Top core io_imemReq_valid", false,-1);
        tracep->declBus(c+1022,"Top core io_imemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core io_imemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top core io_imemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top core io_imemReq_bits_isWrite", false,-1);
        tracep->declBit(c+23,"Top core io_imemRsp_valid", false,-1);
        tracep->declBus(c+2,"Top core io_imemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+24,"Top core io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+25,"Top core io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+26,"Top core io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+27,"Top core io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+700,"Top core io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+28,"Top core io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+29,"Top core io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+903,"Top core io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+30,"Top core io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+31,"Top core io_rvfiBool_0", false,-1);
        tracep->declBus(c+32,"Top core io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+33,"Top core io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+34,"Top core io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+35,"Top core io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1032,"Top core InstructionFetch_reset", false,-1);
        tracep->declBus(c+1023,"Top core InstructionFetch_io_address", false,-1, 31,0);
        tracep->declBus(c+904,"Top core InstructionFetch_io_instruction", false,-1, 31,0);
        tracep->declBit(c+701,"Top core InstructionFetch_io_stall", false,-1);
        tracep->declBit(c+1050,"Top core InstructionFetch_io_coreInstrReq_ready", false,-1);
        tracep->declBit(c+1021,"Top core InstructionFetch_io_coreInstrReq_valid", false,-1);
        tracep->declBus(c+1022,"Top core InstructionFetch_io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core InstructionFetch_io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top core InstructionFetch_io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top core InstructionFetch_io_coreInstrReq_bits_isWrite", false,-1);
        tracep->declBit(c+1050,"Top core InstructionFetch_io_coreInstrResp_ready", false,-1);
        tracep->declBit(c+23,"Top core InstructionFetch_io_coreInstrResp_valid", false,-1);
        tracep->declBus(c+2,"Top core InstructionFetch_io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode_reset", false,-1);
        tracep->declBus(c+36,"Top core IDecode_io_id_instruction", false,-1, 31,0);
        tracep->declBus(c+905,"Top core IDecode_io_writeData", false,-1, 31,0);
        tracep->declBus(c+32,"Top core IDecode_io_writeReg", false,-1, 4,0);
        tracep->declBus(c+37,"Top core IDecode_io_pcAddress", false,-1, 31,0);
        tracep->declBit(c+38,"Top core IDecode_io_ctl_writeEnable", false,-1);
        tracep->declBit(c+39,"Top core IDecode_io_id_ex_mem_read", false,-1);
        tracep->declBit(c+40,"Top core IDecode_io_ex_mem_mem_read", false,-1);
        tracep->declBit(c+22,"Top core IDecode_io_dmem_resp_valid", false,-1);
        tracep->declBus(c+41,"Top core IDecode_io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+42,"Top core IDecode_io_ex_mem_rd", false,-1, 4,0);
        tracep->declBit(c+43,"Top core IDecode_io_id_ex_branch", false,-1);
        tracep->declBus(c+44,"Top core IDecode_io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+26,"Top core IDecode_io_mem_wb_ins", false,-1, 31,0);
        tracep->declBus(c+45,"Top core IDecode_io_ex_ins", false,-1, 31,0);
        tracep->declBus(c+906,"Top core IDecode_io_ex_result", false,-1, 31,0);
        tracep->declBus(c+46,"Top core IDecode_io_ex_mem_result", false,-1, 31,0);
        tracep->declBus(c+905,"Top core IDecode_io_mem_wb_result", false,-1, 31,0);
        tracep->declBit(c+47,"Top core IDecode_io_id_ex_regWr", false,-1);
        tracep->declBit(c+48,"Top core IDecode_io_ex_mem_regWr", false,-1);
        tracep->declBit(c+49,"Top core IDecode_io_csr_Ex", false,-1);
        tracep->declBit(c+50,"Top core IDecode_io_csr_Mem", false,-1);
        tracep->declBit(c+51,"Top core IDecode_io_csr_Wb", false,-1);
        tracep->declBus(c+52,"Top core IDecode_io_csr_Ex_data", false,-1, 31,0);
        tracep->declBus(c+53,"Top core IDecode_io_csr_Mem_data", false,-1, 31,0);
        tracep->declBus(c+54,"Top core IDecode_io_csr_Wb_data", false,-1, 31,0);
        tracep->declBus(c+1,"Top core IDecode_io_dmem_data", false,-1, 31,0);
        tracep->declBus(c+55,"Top core IDecode_io_immediate", false,-1, 31,0);
        tracep->declBus(c+56,"Top core IDecode_io_writeRegAddress", false,-1, 4,0);
        tracep->declBus(c+907,"Top core IDecode_io_readData1", false,-1, 31,0);
        tracep->declBus(c+908,"Top core IDecode_io_readData2", false,-1, 31,0);
        tracep->declBus(c+57,"Top core IDecode_io_func7", false,-1, 6,0);
        tracep->declBus(c+58,"Top core IDecode_io_func3", false,-1, 2,0);
        tracep->declBus(c+59,"Top core IDecode_io_func6", false,-1, 5,0);
        tracep->declBit(c+60,"Top core IDecode_io_ctl_aluSrc", false,-1);
        tracep->declBus(c+61,"Top core IDecode_io_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+62,"Top core IDecode_io_ctl_regWrite", false,-1);
        tracep->declBit(c+63,"Top core IDecode_io_ctl_memRead", false,-1);
        tracep->declBit(c+64,"Top core IDecode_io_ctl_memWrite", false,-1);
        tracep->declBit(c+65,"Top core IDecode_io_ctl_branch", false,-1);
        tracep->declBus(c+66,"Top core IDecode_io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+67,"Top core IDecode_io_ctl_jump", false,-1, 1,0);
        tracep->declBit(c+68,"Top core IDecode_io_ctl_v_RegWrite", false,-1);
        tracep->declBit(c+69,"Top core IDecode_io_ctl_v_opBsel", false,-1);
        tracep->declBus(c+70,"Top core IDecode_io_ctl_v_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+71,"Top core IDecode_io_ctl_v_aluop", false,-1, 4,0);
        tracep->declBit(c+72,"Top core IDecode_io_ctl_v_vset", false,-1);
        tracep->declBus(c+73,"Top core IDecode_io_ctl_v_load", false,-1, 3,0);
        tracep->declBit(c+74,"Top core IDecode_io_ctl_v_ins", false,-1);
        tracep->declArray(c+75,"Top core IDecode_io_write_data", false,-1, 127,0);
        tracep->declBus(c+79,"Top core IDecode_io_wb_addr", false,-1, 4,0);
        tracep->declBit(c+80,"Top core IDecode_io_wb_RegWrite", false,-1);
        tracep->declBus(c+81,"Top core IDecode_io_id_lmul_count", false,-1, 3,0);
        tracep->declBus(c+82,"Top core IDecode_io_id_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+83,"Top core IDecode_io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+87,"Top core IDecode_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+91,"Top core IDecode_io_vs2_data", false,-1, 127,0);
        tracep->declBit(c+68,"Top core IDecode_io_reg_write", false,-1);
        tracep->declBus(c+95,"Top core IDecode_io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode_io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+56,"Top core IDecode_io_vd_addr", false,-1, 4,0);
        tracep->declArray(c+13,"Top core IDecode_io_vs3_data", false,-1, 127,0);
        tracep->declBus(c+97,"Top core IDecode_io_v_z_imm", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode_io_v_addi_imm", false,-1, 31,0);
        tracep->declBus(c+99,"Top core IDecode_io_vtypei", false,-1, 10,0);
        tracep->declBus(c+100,"Top core IDecode_io_vtypei_out", false,-1, 10,0);
        tracep->declBus(c+101,"Top core IDecode_io_vl", false,-1, 31,0);
        tracep->declBit(c+102,"Top core IDecode_io_ctl_vset", false,-1);
        tracep->declBus(c+103,"Top core IDecode_io_vl_out", false,-1, 31,0);
        tracep->declBus(c+1051,"Top core IDecode_io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+104,"Top core IDecode_io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBit(c+105,"Top core IDecode_io_hdu_pcWrite", false,-1);
        tracep->declBit(c+106,"Top core IDecode_io_hdu_if_reg_write", false,-1);
        tracep->declBit(c+909,"Top core IDecode_io_pcSrc", false,-1);
        tracep->declBus(c+702,"Top core IDecode_io_pcPlusOffset", false,-1, 31,0);
        tracep->declBit(c+703,"Top core IDecode_io_ifid_flush", false,-1);
        tracep->declBit(c+107,"Top core IDecode_io_stall", false,-1);
        tracep->declBus(c+1047,"Top core IDecode_io_csr_i_misa", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode_io_csr_i_mhartid", false,-1, 31,0);
        tracep->declBus(c+108,"Top core IDecode_io_csr_o_data", false,-1, 31,0);
        tracep->declBit(c+109,"Top core IDecode_io_is_csr", false,-1);
        tracep->declBus(c+35,"Top core IDecode_io_fscr_o_data", false,-1, 31,0);
        tracep->declBus(c+95,"Top core IDecode_io_rs_addr_0", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode_io_rs_addr_1", false,-1, 4,0);
        tracep->declBit(c+1031,"Top core Execute_clock", false,-1);
        tracep->declBit(c+1032,"Top core Execute_reset", false,-1);
        tracep->declBus(c+110,"Top core Execute_io_immediate", false,-1, 31,0);
        tracep->declBus(c+111,"Top core Execute_io_readData1", false,-1, 31,0);
        tracep->declBus(c+112,"Top core Execute_io_readData2", false,-1, 31,0);
        tracep->declBus(c+113,"Top core Execute_io_pcAddress", false,-1, 31,0);
        tracep->declBus(c+114,"Top core Execute_io_func7", false,-1, 6,0);
        tracep->declBus(c+115,"Top core Execute_io_func3", false,-1, 2,0);
        tracep->declBus(c+46,"Top core Execute_io_mem_result", false,-1, 31,0);
        tracep->declBus(c+905,"Top core Execute_io_wb_result", false,-1, 31,0);
        tracep->declBit(c+48,"Top core Execute_io_ex_mem_regWrite", false,-1);
        tracep->declBit(c+38,"Top core Execute_io_mem_wb_regWrite", false,-1);
        tracep->declBus(c+45,"Top core Execute_io_id_ex_ins", false,-1, 31,0);
        tracep->declBus(c+44,"Top core Execute_io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+26,"Top core Execute_io_mem_wb_ins", false,-1, 31,0);
        tracep->declBit(c+116,"Top core Execute_io_ctl_aluSrc", false,-1);
        tracep->declBus(c+117,"Top core Execute_io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+118,"Top core Execute_io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+119,"Top core Execute_io_func6", false,-1, 5,0);
        tracep->declBus(c+120,"Top core Execute_io_v_ctl_aluop", false,-1, 2,0);
        tracep->declBus(c+121,"Top core Execute_io_v_ctl_exsel", false,-1, 3,0);
        tracep->declBit(c+122,"Top core Execute_io_v_ctl_regwrite", false,-1);
        tracep->declBit(c+123,"Top core Execute_io_v_ctl_opBsel", false,-1);
        tracep->declBit(c+124,"Top core Execute_io_v_ctl_v_load", false,-1);
        tracep->declBit(c+125,"Top core Execute_io_v_ctl_v_ins", false,-1);
        tracep->declBit(c+126,"Top core Execute_io_v_ctl_vset", false,-1);
        tracep->declArray(c+127,"Top core Execute_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+131,"Top core Execute_io_vs2_data", false,-1, 127,0);
        tracep->declBus(c+135,"Top core Execute_io_vl", false,-1, 31,0);
        tracep->declBus(c+136,"Top core Execute_io_vstart", false,-1, 31,0);
        tracep->declArray(c+137,"Top core Execute_io_vs3_data", false,-1, 127,0);
        tracep->declBit(c+141,"Top core Execute_io_vma", false,-1);
        tracep->declBit(c+142,"Top core Execute_io_vta", false,-1);
        tracep->declBit(c+143,"Top core Execute_io_vm", false,-1);
        tracep->declArray(c+144,"Top core Execute_io_vs0", false,-1, 127,0);
        tracep->declBus(c+41,"Top core Execute_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute_io_v_sew", false,-1, 2,0);
        tracep->declBus(c+149,"Top core Execute_io_zimm", false,-1, 31,0);
        tracep->declBus(c+150,"Top core Execute_io_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+151,"Top core Execute_io_vec_mem_res", false,-1, 127,0);
        tracep->declArray(c+75,"Top core Execute_io_vec_wb_res", false,-1, 127,0);
        tracep->declBus(c+155,"Top core Execute_io_fu_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+79,"Top core Execute_io_fu_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+156,"Top core Execute_io_fu_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+157,"Top core Execute_io_fu_reg_vs2", false,-1, 4,0);
        tracep->declBit(c+158,"Top core Execute_io_fu_ex_reg_write", false,-1);
        tracep->declBit(c+80,"Top core Execute_io_fu_mem_reg_write", false,-1);
        tracep->declArray(c+704,"Top core Execute_io_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+708,"Top core Execute_io_vec_vl", false,-1, 31,0);
        tracep->declBus(c+159,"Top core Execute_io_vec_rd_out", false,-1, 4,0);
        tracep->declBus(c+910,"Top core Execute_io_vec_avl_o", false,-1, 31,0);
        tracep->declBus(c+160,"Top core Execute_io_vec_valmax_o", false,-1, 31,0);
        tracep->declBus(c+709,"Top core Execute_io_writeData", false,-1, 31,0);
        tracep->declBus(c+906,"Top core Execute_io_ALUresult", false,-1, 31,0);
        tracep->declBit(c+161,"Top core Execute_io_stall", false,-1);
        tracep->declBit(c+1031,"Top core MEM_clock", false,-1);
        tracep->declBit(c+1032,"Top core MEM_reset", false,-1);
        tracep->declBus(c+46,"Top core MEM_io_aluResultIn", false,-1, 31,0);
        tracep->declBus(c+162,"Top core MEM_io_writeData", false,-1, 31,0);
        tracep->declBit(c+21,"Top core MEM_io_writeEnable", false,-1);
        tracep->declBit(c+40,"Top core MEM_io_readEnable", false,-1);
        tracep->declBus(c+903,"Top core MEM_io_readData", false,-1, 31,0);
        tracep->declBus(c+163,"Top core MEM_io_f3", false,-1, 2,0);
        tracep->declBit(c+17,"Top core MEM_io_dccmReq_valid", false,-1);
        tracep->declBus(c+18,"Top core MEM_io_dccmReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top core MEM_io_dccmReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top core MEM_io_dccmReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top core MEM_io_dccmReq_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top core MEM_io_dccmRsp_valid", false,-1);
        tracep->declBus(c+1,"Top core MEM_io_dccmRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core pc_clock", false,-1);
        tracep->declBit(c+1032,"Top core pc_reset", false,-1);
        tracep->declBus(c+1024,"Top core pc_io_in", false,-1, 31,0);
        tracep->declBit(c+1025,"Top core pc_io_halt", false,-1);
        tracep->declBus(c+164,"Top core pc_io_out", false,-1, 31,0);
        tracep->declBus(c+1039,"Top core pc_io_pc4", false,-1, 31,0);
        tracep->declBus(c+1040,"Top core pc_io_pc2", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core Realigner_clock", false,-1);
        tracep->declBit(c+1032,"Top core Realigner_reset", false,-1);
        tracep->declBus(c+1024,"Top core Realigner_io_ral_address_i", false,-1, 31,0);
        tracep->declBus(c+904,"Top core Realigner_io_ral_instruction_i", false,-1, 31,0);
        tracep->declBit(c+909,"Top core Realigner_io_ral_jmp", false,-1);
        tracep->declBus(c+1023,"Top core Realigner_io_ral_address_o", false,-1, 31,0);
        tracep->declBus(c+911,"Top core Realigner_io_ral_instruction_o", false,-1, 31,0);
        tracep->declBit(c+165,"Top core Realigner_io_ral_halt_o", false,-1);
        tracep->declBus(c+911,"Top core CompressedDecoder_io_instruction_i", false,-1, 31,0);
        tracep->declBit(c+912,"Top core CompressedDecoder_io_is_comp", false,-1);
        tracep->declBus(c+913,"Top core CompressedDecoder_io_instruction_o", false,-1, 31,0);
        tracep->declBus(c+37,"Top core if_reg_pc", false,-1, 31,0);
        tracep->declBus(c+36,"Top core if_reg_ins", false,-1, 31,0);
        tracep->declBus(c+82,"Top core if_reg_lmul_v", false,-1, 3,0);
        tracep->declBus(c+113,"Top core id_reg_pc", false,-1, 31,0);
        tracep->declBus(c+111,"Top core id_reg_rd1", false,-1, 31,0);
        tracep->declBus(c+112,"Top core id_reg_rd2", false,-1, 31,0);
        tracep->declBus(c+110,"Top core id_reg_imm", false,-1, 31,0);
        tracep->declBus(c+166,"Top core id_reg_wra", false,-1, 4,0);
        tracep->declBus(c+114,"Top core id_reg_f7", false,-1, 6,0);
        tracep->declBus(c+115,"Top core id_reg_f3", false,-1, 2,0);
        tracep->declBus(c+45,"Top core id_reg_ins", false,-1, 31,0);
        tracep->declBit(c+116,"Top core id_reg_ctl_aluSrc", false,-1);
        tracep->declBus(c+118,"Top core id_reg_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+167,"Top core id_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+47,"Top core id_reg_ctl_regWrite", false,-1);
        tracep->declBit(c+39,"Top core id_reg_ctl_memRead", false,-1);
        tracep->declBit(c+168,"Top core id_reg_ctl_memWrite", false,-1);
        tracep->declBus(c+117,"Top core id_reg_ctl_aluOp", false,-1, 1,0);
        tracep->declBit(c+49,"Top core id_reg_is_csr", false,-1);
        tracep->declBus(c+52,"Top core id_reg_csr_data", false,-1, 31,0);
        tracep->declBus(c+169,"Top core id_reg_z_imm", false,-1, 10,0);
        tracep->declBus(c+136,"Top core id_reg_vstart_out", false,-1, 31,0);
        tracep->declBus(c+149,"Top core id_reg_vtype", false,-1, 31,0);
        tracep->declBus(c+150,"Top core id_reg_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+144,"Top core id_reg_v0_data", false,-1, 127,0);
        tracep->declArray(c+127,"Top core id_reg_v1_data", false,-1, 127,0);
        tracep->declArray(c+131,"Top core id_reg_v2_data", false,-1, 127,0);
        tracep->declArray(c+137,"Top core id_reg_vs3_data", false,-1, 127,0);
        tracep->declBus(c+156,"Top core id_reg_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+157,"Top core id_reg_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+170,"Top core id_reg_vd_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Top core id_reg_lmul_v", false,-1, 3,0);
        tracep->declBit(c+122,"Top core id_reg_ctl_RegWrite", false,-1);
        tracep->declBit(c+123,"Top core id_reg_ctl_opBsel", false,-1);
        tracep->declBus(c+121,"Top core id_reg_ctl_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+172,"Top core id_reg_ctl_aluop", false,-1, 4,0);
        tracep->declBit(c+126,"Top core id_reg_ctl_vset", false,-1);
        tracep->declBit(c+124,"Top core id_reg_ctl_v_load", false,-1);
        tracep->declBit(c+125,"Top core id_reg_ctl_v_ins", false,-1);
        tracep->declBus(c+46,"Top core ex_reg_result", false,-1, 31,0);
        tracep->declBus(c+162,"Top core ex_reg_wd", false,-1, 31,0);
        tracep->declBus(c+173,"Top core ex_reg_wra", false,-1, 4,0);
        tracep->declBus(c+44,"Top core ex_reg_ins", false,-1, 31,0);
        tracep->declBus(c+174,"Top core ex_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+48,"Top core ex_reg_ctl_regWrite", false,-1);
        tracep->declBit(c+40,"Top core ex_reg_ctl_memRead", false,-1);
        tracep->declBit(c+21,"Top core ex_reg_ctl_memWrite", false,-1);
        tracep->declBus(c+175,"Top core ex_reg_pc", false,-1, 31,0);
        tracep->declBit(c+50,"Top core ex_reg_is_csr", false,-1);
        tracep->declBus(c+53,"Top core ex_reg_csr_data", false,-1, 31,0);
        tracep->declArray(c+151,"Top core ex_reg_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+176,"Top core ex_reg_vl", false,-1, 31,0);
        tracep->declBus(c+155,"Top core ex_reg_vd_addr", false,-1, 4,0);
        tracep->declBus(c+177,"Top core ex_reg_lmul_v", false,-1, 3,0);
        tracep->declBit(c+178,"Top core ex_reg_vset", false,-1);
        tracep->declBit(c+158,"Top core ex_reg_reg_write", false,-1);
        tracep->declBus(c+179,"Top core ex_reg_vtype", false,-1, 10,0);
        tracep->declBus(c+26,"Top core mem_reg_ins", false,-1, 31,0);
        tracep->declBus(c+180,"Top core mem_reg_result", false,-1, 31,0);
        tracep->declBus(c+32,"Top core mem_reg_wra", false,-1, 4,0);
        tracep->declBus(c+181,"Top core mem_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+38,"Top core mem_reg_ctl_regWrite", false,-1);
        tracep->declBus(c+24,"Top core mem_reg_pc", false,-1, 31,0);
        tracep->declBit(c+51,"Top core mem_reg_is_csr", false,-1);
        tracep->declBus(c+54,"Top core mem_reg_csr_data", false,-1, 31,0);
        tracep->declArray(c+75,"Top core mem_reg_vec_alu_out", false,-1, 127,0);
        tracep->declBus(c+101,"Top core mem_reg_vec_vl", false,-1, 31,0);
        tracep->declBus(c+99,"Top core mem_reg_vtype", false,-1, 10,0);
        tracep->declBus(c+79,"Top core mem_reg_vec_vd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"Top core mem_reg_lmul_v", false,-1, 3,0);
        tracep->declBit(c+102,"Top core mem_reg_vset", false,-1);
        tracep->declBit(c+80,"Top core mem_reg_vec_reg_write", false,-1);
        tracep->declBus(c+182,"Top core lmul", false,-1, 2,0);
        tracep->declBus(c+913,"Top core instruction", false,-1, 31,0);
        tracep->declBus(c+183,"Top core lmul_reg", false,-1, 31,0);
        tracep->declBus(c+184,"Top core vlmul_count", false,-1, 31,0);
        tracep->declBus(c+914,"Top core func7", false,-1, 5,0);
        tracep->declBit(c+915,"Top core IF_stall", false,-1);
        tracep->declBit(c+165,"Top core ral_halt_o", false,-1);
        tracep->declBus(c+916,"Top core next_pc_selector", false,-1, 31,0);
        tracep->declBit(c+912,"Top core is_comp", false,-1);
        tracep->declBus(c+185,"Top core REG__0", false,-1, 31,0);
        tracep->declBus(c+186,"Top core REG__1", false,-1, 31,0);
        tracep->declBus(c+187,"Top core REG__2", false,-1, 31,0);
        tracep->declBus(c+25,"Top core REG__3", false,-1, 31,0);
        tracep->declBus(c+188,"Top core REG_1_0", false,-1, 4,0);
        tracep->declBus(c+189,"Top core REG_1_1", false,-1, 4,0);
        tracep->declBus(c+33,"Top core REG_1_2", false,-1, 4,0);
        tracep->declBus(c+190,"Top core REG_2_0", false,-1, 4,0);
        tracep->declBus(c+191,"Top core REG_2_1", false,-1, 4,0);
        tracep->declBus(c+34,"Top core REG_2_2", false,-1, 4,0);
        tracep->declBus(c+192,"Top core REG_3_0", false,-1, 31,0);
        tracep->declBus(c+28,"Top core REG_3_1", false,-1, 31,0);
        tracep->declBus(c+193,"Top core REG_4_0", false,-1, 31,0);
        tracep->declBus(c+29,"Top core REG_4_1", false,-1, 31,0);
        tracep->declBus(c+27,"Top core REG_5", false,-1, 31,0);
        tracep->declBus(c+30,"Top core REG_6", false,-1, 31,0);
        tracep->declBit(c+194,"Top core REG_7_0", false,-1);
        tracep->declBit(c+195,"Top core REG_7_1", false,-1);
        tracep->declBit(c+196,"Top core REG_7_2", false,-1);
        tracep->declBit(c+31,"Top core REG_7_3", false,-1);
        tracep->declBit(c+1032,"Top core InstructionFetch reset", false,-1);
        tracep->declBus(c+1023,"Top core InstructionFetch io_address", false,-1, 31,0);
        tracep->declBus(c+904,"Top core InstructionFetch io_instruction", false,-1, 31,0);
        tracep->declBit(c+701,"Top core InstructionFetch io_stall", false,-1);
        tracep->declBit(c+1050,"Top core InstructionFetch io_coreInstrReq_ready", false,-1);
        tracep->declBit(c+1021,"Top core InstructionFetch io_coreInstrReq_valid", false,-1);
        tracep->declBus(c+1022,"Top core InstructionFetch io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core InstructionFetch io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top core InstructionFetch io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top core InstructionFetch io_coreInstrReq_bits_isWrite", false,-1);
        tracep->declBit(c+1050,"Top core InstructionFetch io_coreInstrResp_ready", false,-1);
        tracep->declBit(c+23,"Top core InstructionFetch io_coreInstrResp_valid", false,-1);
        tracep->declBus(c+2,"Top core InstructionFetch io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode reset", false,-1);
        tracep->declBus(c+36,"Top core IDecode io_id_instruction", false,-1, 31,0);
        tracep->declBus(c+905,"Top core IDecode io_writeData", false,-1, 31,0);
        tracep->declBus(c+32,"Top core IDecode io_writeReg", false,-1, 4,0);
        tracep->declBus(c+37,"Top core IDecode io_pcAddress", false,-1, 31,0);
        tracep->declBit(c+38,"Top core IDecode io_ctl_writeEnable", false,-1);
        tracep->declBit(c+39,"Top core IDecode io_id_ex_mem_read", false,-1);
        tracep->declBit(c+40,"Top core IDecode io_ex_mem_mem_read", false,-1);
        tracep->declBit(c+22,"Top core IDecode io_dmem_resp_valid", false,-1);
        tracep->declBus(c+41,"Top core IDecode io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+42,"Top core IDecode io_ex_mem_rd", false,-1, 4,0);
        tracep->declBit(c+43,"Top core IDecode io_id_ex_branch", false,-1);
        tracep->declBus(c+44,"Top core IDecode io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+26,"Top core IDecode io_mem_wb_ins", false,-1, 31,0);
        tracep->declBus(c+45,"Top core IDecode io_ex_ins", false,-1, 31,0);
        tracep->declBus(c+906,"Top core IDecode io_ex_result", false,-1, 31,0);
        tracep->declBus(c+46,"Top core IDecode io_ex_mem_result", false,-1, 31,0);
        tracep->declBus(c+905,"Top core IDecode io_mem_wb_result", false,-1, 31,0);
        tracep->declBit(c+47,"Top core IDecode io_id_ex_regWr", false,-1);
        tracep->declBit(c+48,"Top core IDecode io_ex_mem_regWr", false,-1);
        tracep->declBit(c+49,"Top core IDecode io_csr_Ex", false,-1);
        tracep->declBit(c+50,"Top core IDecode io_csr_Mem", false,-1);
        tracep->declBit(c+51,"Top core IDecode io_csr_Wb", false,-1);
        tracep->declBus(c+52,"Top core IDecode io_csr_Ex_data", false,-1, 31,0);
        tracep->declBus(c+53,"Top core IDecode io_csr_Mem_data", false,-1, 31,0);
        tracep->declBus(c+54,"Top core IDecode io_csr_Wb_data", false,-1, 31,0);
        tracep->declBus(c+1,"Top core IDecode io_dmem_data", false,-1, 31,0);
        tracep->declBus(c+55,"Top core IDecode io_immediate", false,-1, 31,0);
        tracep->declBus(c+56,"Top core IDecode io_writeRegAddress", false,-1, 4,0);
        tracep->declBus(c+907,"Top core IDecode io_readData1", false,-1, 31,0);
        tracep->declBus(c+908,"Top core IDecode io_readData2", false,-1, 31,0);
        tracep->declBus(c+57,"Top core IDecode io_func7", false,-1, 6,0);
        tracep->declBus(c+58,"Top core IDecode io_func3", false,-1, 2,0);
        tracep->declBus(c+59,"Top core IDecode io_func6", false,-1, 5,0);
        tracep->declBit(c+60,"Top core IDecode io_ctl_aluSrc", false,-1);
        tracep->declBus(c+61,"Top core IDecode io_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+62,"Top core IDecode io_ctl_regWrite", false,-1);
        tracep->declBit(c+63,"Top core IDecode io_ctl_memRead", false,-1);
        tracep->declBit(c+64,"Top core IDecode io_ctl_memWrite", false,-1);
        tracep->declBit(c+65,"Top core IDecode io_ctl_branch", false,-1);
        tracep->declBus(c+66,"Top core IDecode io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+67,"Top core IDecode io_ctl_jump", false,-1, 1,0);
        tracep->declBit(c+68,"Top core IDecode io_ctl_v_RegWrite", false,-1);
        tracep->declBit(c+69,"Top core IDecode io_ctl_v_opBsel", false,-1);
        tracep->declBus(c+70,"Top core IDecode io_ctl_v_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+71,"Top core IDecode io_ctl_v_aluop", false,-1, 4,0);
        tracep->declBit(c+72,"Top core IDecode io_ctl_v_vset", false,-1);
        tracep->declBus(c+73,"Top core IDecode io_ctl_v_load", false,-1, 3,0);
        tracep->declBit(c+74,"Top core IDecode io_ctl_v_ins", false,-1);
        tracep->declArray(c+75,"Top core IDecode io_write_data", false,-1, 127,0);
        tracep->declBus(c+79,"Top core IDecode io_wb_addr", false,-1, 4,0);
        tracep->declBit(c+80,"Top core IDecode io_wb_RegWrite", false,-1);
        tracep->declBus(c+81,"Top core IDecode io_id_lmul_count", false,-1, 3,0);
        tracep->declBus(c+82,"Top core IDecode io_id_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+83,"Top core IDecode io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+87,"Top core IDecode io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+91,"Top core IDecode io_vs2_data", false,-1, 127,0);
        tracep->declBit(c+68,"Top core IDecode io_reg_write", false,-1);
        tracep->declBus(c+95,"Top core IDecode io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+56,"Top core IDecode io_vd_addr", false,-1, 4,0);
        tracep->declArray(c+13,"Top core IDecode io_vs3_data", false,-1, 127,0);
        tracep->declBus(c+97,"Top core IDecode io_v_z_imm", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode io_v_addi_imm", false,-1, 31,0);
        tracep->declBus(c+99,"Top core IDecode io_vtypei", false,-1, 10,0);
        tracep->declBus(c+100,"Top core IDecode io_vtypei_out", false,-1, 10,0);
        tracep->declBus(c+101,"Top core IDecode io_vl", false,-1, 31,0);
        tracep->declBit(c+102,"Top core IDecode io_ctl_vset", false,-1);
        tracep->declBus(c+103,"Top core IDecode io_vl_out", false,-1, 31,0);
        tracep->declBus(c+1051,"Top core IDecode io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+104,"Top core IDecode io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBit(c+105,"Top core IDecode io_hdu_pcWrite", false,-1);
        tracep->declBit(c+106,"Top core IDecode io_hdu_if_reg_write", false,-1);
        tracep->declBit(c+909,"Top core IDecode io_pcSrc", false,-1);
        tracep->declBus(c+702,"Top core IDecode io_pcPlusOffset", false,-1, 31,0);
        tracep->declBit(c+703,"Top core IDecode io_ifid_flush", false,-1);
        tracep->declBit(c+107,"Top core IDecode io_stall", false,-1);
        tracep->declBus(c+1047,"Top core IDecode io_csr_i_misa", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode io_csr_i_mhartid", false,-1, 31,0);
        tracep->declBus(c+108,"Top core IDecode io_csr_o_data", false,-1, 31,0);
        tracep->declBit(c+109,"Top core IDecode io_is_csr", false,-1);
        tracep->declBus(c+35,"Top core IDecode io_fscr_o_data", false,-1, 31,0);
        tracep->declBus(c+95,"Top core IDecode io_rs_addr_0", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode io_rs_addr_1", false,-1, 4,0);
        tracep->declBit(c+1031,"Top core IDecode csr_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode csr_reset", false,-1);
        tracep->declBus(c+1047,"Top core IDecode csr_io_i_misa_value", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode csr_io_i_mhartid_value", false,-1, 31,0);
        tracep->declBus(c+1041,"Top core IDecode csr_io_i_data", false,-1, 31,0);
        tracep->declBus(c+95,"Top core IDecode csr_io_i_imm", false,-1, 4,0);
        tracep->declBus(c+108,"Top core IDecode csr_io_o_data", false,-1, 31,0);
        tracep->declBus(c+58,"Top core IDecode csr_io_i_opr", false,-1, 2,0);
        tracep->declBus(c+197,"Top core IDecode csr_io_i_addr", false,-1, 11,0);
        tracep->declBit(c+198,"Top core IDecode csr_io_i_w_en", false,-1);
        tracep->declBus(c+35,"Top core IDecode csr_io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+47,"Top core IDecode csrController_io_regWrExecute", false,-1);
        tracep->declBus(c+41,"Top core IDecode csrController_io_rdSelExecute", false,-1, 4,0);
        tracep->declBit(c+49,"Top core IDecode csrController_io_csrWrExecute", false,-1);
        tracep->declBit(c+48,"Top core IDecode csrController_io_regWrMemory", false,-1);
        tracep->declBus(c+42,"Top core IDecode csrController_io_rdSelMemory", false,-1, 4,0);
        tracep->declBit(c+50,"Top core IDecode csrController_io_csrWrMemory", false,-1);
        tracep->declBit(c+38,"Top core IDecode csrController_io_regWrWriteback", false,-1);
        tracep->declBus(c+32,"Top core IDecode csrController_io_rdSelWriteback", false,-1, 4,0);
        tracep->declBit(c+51,"Top core IDecode csrController_io_csrWrWriteback", false,-1);
        tracep->declBus(c+95,"Top core IDecode csrController_io_rs1SelDecode", false,-1, 4,0);
        tracep->declBit(c+109,"Top core IDecode csrController_io_csrInstDecode", false,-1);
        tracep->declBus(c+199,"Top core IDecode csrController_io_forwardRS1", false,-1, 2,0);
        tracep->declBit(c+39,"Top core IDecode hdu_io_id_ex_memRead", false,-1);
        tracep->declBit(c+40,"Top core IDecode hdu_io_ex_mem_memRead", false,-1);
        tracep->declBit(c+43,"Top core IDecode hdu_io_id_ex_branch", false,-1);
        tracep->declBus(c+41,"Top core IDecode hdu_io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+42,"Top core IDecode hdu_io_ex_mem_rd", false,-1, 4,0);
        tracep->declBus(c+95,"Top core IDecode hdu_io_id_rs1", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode hdu_io_id_rs2", false,-1, 4,0);
        tracep->declBit(c+917,"Top core IDecode hdu_io_taken", false,-1);
        tracep->declBus(c+67,"Top core IDecode hdu_io_jump", false,-1, 1,0);
        tracep->declBit(c+65,"Top core IDecode hdu_io_branch", false,-1);
        tracep->declBit(c+106,"Top core IDecode hdu_io_if_reg_write", false,-1);
        tracep->declBit(c+105,"Top core IDecode hdu_io_pc_write", false,-1);
        tracep->declBit(c+106,"Top core IDecode hdu_io_ctl_mux", false,-1);
        tracep->declBit(c+703,"Top core IDecode hdu_io_ifid_flush", false,-1);
        tracep->declBit(c+105,"Top core IDecode hdu_io_take_branch", false,-1);
        tracep->declBus(c+36,"Top core IDecode control_io_in", false,-1, 31,0);
        tracep->declBit(c+60,"Top core IDecode control_io_aluSrc", false,-1);
        tracep->declBus(c+61,"Top core IDecode control_io_memToReg", false,-1, 1,0);
        tracep->declBit(c+200,"Top core IDecode control_io_regWrite", false,-1);
        tracep->declBit(c+63,"Top core IDecode control_io_memRead", false,-1);
        tracep->declBit(c+201,"Top core IDecode control_io_memWrite", false,-1);
        tracep->declBit(c+65,"Top core IDecode control_io_branch", false,-1);
        tracep->declBus(c+66,"Top core IDecode control_io_aluOp", false,-1, 1,0);
        tracep->declBus(c+67,"Top core IDecode control_io_jump", false,-1, 1,0);
        tracep->declBus(c+104,"Top core IDecode control_io_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+36,"Top core IDecode Vcontrol_io_Instruction", false,-1, 31,0);
        tracep->declBit(c+68,"Top core IDecode Vcontrol_io_RegWrite", false,-1);
        tracep->declBit(c+69,"Top core IDecode Vcontrol_io_opBsel", false,-1);
        tracep->declBus(c+70,"Top core IDecode Vcontrol_io_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+71,"Top core IDecode Vcontrol_io_aluop", false,-1, 4,0);
        tracep->declBit(c+72,"Top core IDecode Vcontrol_io_vset", false,-1);
        tracep->declBit(c+202,"Top core IDecode Vcontrol_io_v_load", false,-1);
        tracep->declBit(c+203,"Top core IDecode Vcontrol_io_v_store", false,-1);
        tracep->declBit(c+74,"Top core IDecode Vcontrol_io_v_ins", false,-1);
        tracep->declBit(c+204,"Top core IDecode Vcontrol_io_RegRead", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol_io_V_MemToReg", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol_io_V_MemRead", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol_io_memWrite", false,-1);
        tracep->declBit(c+1031,"Top core IDecode registers_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode registers_reset", false,-1);
        tracep->declBus(c+95,"Top core IDecode registers_io_readAddress_0", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode registers_io_readAddress_1", false,-1, 4,0);
        tracep->declBit(c+205,"Top core IDecode registers_io_writeEnable", false,-1);
        tracep->declBus(c+206,"Top core IDecode registers_io_writeAddress", false,-1, 4,0);
        tracep->declBus(c+918,"Top core IDecode registers_io_writeData", false,-1, 31,0);
        tracep->declBus(c+207,"Top core IDecode registers_io_readData_0", false,-1, 31,0);
        tracep->declBus(c+208,"Top core IDecode registers_io_readData_1", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode v_registers_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode v_registers_reset", false,-1);
        tracep->declBus(c+95,"Top core IDecode v_registers_io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode v_registers_io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+79,"Top core IDecode v_registers_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"Top core IDecode v_registers_io_lmul_count", false,-1, 3,0);
        tracep->declBus(c+82,"Top core IDecode v_registers_io_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+83,"Top core IDecode v_registers_io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+87,"Top core IDecode v_registers_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+91,"Top core IDecode v_registers_io_vs2_data", false,-1, 127,0);
        tracep->declArray(c+13,"Top core IDecode v_registers_io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+75,"Top core IDecode v_registers_io_vd_data", false,-1, 127,0);
        tracep->declBit(c+80,"Top core IDecode v_registers_io_reg_write", false,-1);
        tracep->declBit(c+204,"Top core IDecode v_registers_io_reg_read", false,-1);
        tracep->declBus(c+36,"Top core IDecode immediate_io_instruction", false,-1, 31,0);
        tracep->declBus(c+55,"Top core IDecode immediate_io_out", false,-1, 31,0);
        tracep->declBus(c+36,"Top core IDecode v_immediate_io_instruction", false,-1, 31,0);
        tracep->declBus(c+209,"Top core IDecode v_immediate_io_z_imm", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode v_immediate_io_addi_imm", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode vec_csr_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode vec_csr_reset", false,-1);
        tracep->declBus(c+99,"Top core IDecode vec_csr_io_vtypei", false,-1, 10,0);
        tracep->declBus(c+101,"Top core IDecode vec_csr_io_vl", false,-1, 31,0);
        tracep->declBit(c+102,"Top core IDecode vec_csr_io_vset", false,-1);
        tracep->declBus(c+103,"Top core IDecode vec_csr_io_vl_out", false,-1, 31,0);
        tracep->declBus(c+210,"Top core IDecode vec_csr_io_vtype_out", false,-1, 31,0);
        tracep->declBus(c+1051,"Top core IDecode vec_csr_io_vstart_out", false,-1, 31,0);
        tracep->declBit(c+65,"Top core IDecode bu_io_branch", false,-1);
        tracep->declBus(c+58,"Top core IDecode bu_io_funct3", false,-1, 2,0);
        tracep->declBus(c+919,"Top core IDecode bu_io_rd1", false,-1, 31,0);
        tracep->declBus(c+920,"Top core IDecode bu_io_rd2", false,-1, 31,0);
        tracep->declBit(c+105,"Top core IDecode bu_io_take_branch", false,-1);
        tracep->declBit(c+917,"Top core IDecode bu_io_taken", false,-1);
        tracep->declBus(c+710,"Top core IDecode j_offset", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode csr clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode csr reset", false,-1);
        tracep->declBus(c+1047,"Top core IDecode csr io_i_misa_value", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode csr io_i_mhartid_value", false,-1, 31,0);
        tracep->declBus(c+1041,"Top core IDecode csr io_i_data", false,-1, 31,0);
        tracep->declBus(c+95,"Top core IDecode csr io_i_imm", false,-1, 4,0);
        tracep->declBus(c+108,"Top core IDecode csr io_o_data", false,-1, 31,0);
        tracep->declBus(c+58,"Top core IDecode csr io_i_opr", false,-1, 2,0);
        tracep->declBus(c+197,"Top core IDecode csr io_i_addr", false,-1, 11,0);
        tracep->declBit(c+198,"Top core IDecode csr io_i_w_en", false,-1);
        tracep->declBus(c+35,"Top core IDecode csr io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode csr csrRegFile_clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode csr csrRegFile_reset", false,-1);
        tracep->declBus(c+1047,"Top core IDecode csr csrRegFile_io_MISA_i_value", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode csr csrRegFile_io_MHARTID_i_value", false,-1, 31,0);
        tracep->declBus(c+211,"Top core IDecode csr csrRegFile_io_CSR_i_opr", false,-1, 1,0);
        tracep->declBus(c+108,"Top core IDecode csr csrRegFile_io_CSR_o_data", false,-1, 31,0);
        tracep->declBus(c+921,"Top core IDecode csr csrRegFile_io_CSR_i_data", false,-1, 31,0);
        tracep->declBus(c+197,"Top core IDecode csr csrRegFile_io_CSR_i_addr", false,-1, 11,0);
        tracep->declBit(c+198,"Top core IDecode csr csrRegFile_io_CSR_i_w_en", false,-1);
        tracep->declBit(c+212,"Top core IDecode csr csrRegFile_io_FCSR_nx", false,-1);
        tracep->declBit(c+213,"Top core IDecode csr csrRegFile_io_FCSR_uf", false,-1);
        tracep->declBit(c+214,"Top core IDecode csr csrRegFile_io_FCSR_of", false,-1);
        tracep->declBit(c+215,"Top core IDecode csr csrRegFile_io_FCSR_dz", false,-1);
        tracep->declBit(c+216,"Top core IDecode csr csrRegFile_io_FCSR_nv", false,-1);
        tracep->declBus(c+217,"Top core IDecode csr csrRegFile_io_FCSR_frm", false,-1, 2,0);
        tracep->declBus(c+218,"Top core IDecode csr lo", false,-1, 2,0);
        tracep->declBus(c+219,"Top core IDecode csr hi", false,-1, 28,0);
        tracep->declBit(c+1031,"Top core IDecode csr csrRegFile clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode csr csrRegFile reset", false,-1);
        tracep->declBus(c+1047,"Top core IDecode csr csrRegFile io_MISA_i_value", false,-1, 31,0);
        tracep->declBus(c+1047,"Top core IDecode csr csrRegFile io_MHARTID_i_value", false,-1, 31,0);
        tracep->declBus(c+211,"Top core IDecode csr csrRegFile io_CSR_i_opr", false,-1, 1,0);
        tracep->declBus(c+108,"Top core IDecode csr csrRegFile io_CSR_o_data", false,-1, 31,0);
        tracep->declBus(c+921,"Top core IDecode csr csrRegFile io_CSR_i_data", false,-1, 31,0);
        tracep->declBus(c+197,"Top core IDecode csr csrRegFile io_CSR_i_addr", false,-1, 11,0);
        tracep->declBit(c+198,"Top core IDecode csr csrRegFile io_CSR_i_w_en", false,-1);
        tracep->declBit(c+212,"Top core IDecode csr csrRegFile io_FCSR_nx", false,-1);
        tracep->declBit(c+213,"Top core IDecode csr csrRegFile io_FCSR_uf", false,-1);
        tracep->declBit(c+214,"Top core IDecode csr csrRegFile io_FCSR_of", false,-1);
        tracep->declBit(c+215,"Top core IDecode csr csrRegFile io_FCSR_dz", false,-1);
        tracep->declBit(c+216,"Top core IDecode csr csrRegFile io_FCSR_nv", false,-1);
        tracep->declBus(c+217,"Top core IDecode csr csrRegFile io_FCSR_frm", false,-1, 2,0);
        tracep->declBus(c+220,"Top core IDecode csr csrRegFile MISA_REG", false,-1, 31,0);
        tracep->declBus(c+220,"Top core IDecode csr csrRegFile MHARTID_REG", false,-1, 31,0);
        tracep->declBus(c+221,"Top core IDecode csr csrRegFile MCAUSE_REG", false,-1, 31,0);
        tracep->declBus(c+222,"Top core IDecode csr csrRegFile MTVEC_REG", false,-1, 31,0);
        tracep->declBus(c+223,"Top core IDecode csr csrRegFile MEPC_REG", false,-1, 31,0);
        tracep->declBus(c+224,"Top core IDecode csr csrRegFile MIE_REG", false,-1, 31,0);
        tracep->declBit(c+225,"Top core IDecode csr csrRegFile MSTATUS_TW_REG", false,-1);
        tracep->declBit(c+226,"Top core IDecode csr csrRegFile MSTATUS_MPRV_REG", false,-1);
        tracep->declBus(c+227,"Top core IDecode csr csrRegFile MSTATUS_MPP_REG", false,-1, 1,0);
        tracep->declBit(c+228,"Top core IDecode csr csrRegFile MSTATUS_MPIE_REG", false,-1);
        tracep->declBit(c+229,"Top core IDecode csr csrRegFile MSTATUS_MIE_REG", false,-1);
        tracep->declBit(c+212,"Top core IDecode csr csrRegFile FCSR_NX_REG", false,-1);
        tracep->declBit(c+213,"Top core IDecode csr csrRegFile FCSR_UF_REG", false,-1);
        tracep->declBit(c+214,"Top core IDecode csr csrRegFile FCSR_OF_REG", false,-1);
        tracep->declBit(c+215,"Top core IDecode csr csrRegFile FCSR_DZ_REG", false,-1);
        tracep->declBit(c+216,"Top core IDecode csr csrRegFile FCSR_NV_REG", false,-1);
        tracep->declBus(c+217,"Top core IDecode csr csrRegFile FCSR_FRM_REG", false,-1, 2,0);
        tracep->declBus(c+230,"Top core IDecode csr csrRegFile lo", false,-1, 10,0);
        tracep->declBus(c+231,"Top core IDecode csr csrRegFile MSTATUS_WIRE", false,-1, 31,0);
        tracep->declBus(c+232,"Top core IDecode csr csrRegFile FFLAGS_WIRE", false,-1, 31,0);
        tracep->declBus(c+233,"Top core IDecode csr csrRegFile FRM_WIRE", false,-1, 31,0);
        tracep->declBus(c+234,"Top core IDecode csr csrRegFile FCSR_WIRE", false,-1, 31,0);
        tracep->declBus(c+235,"Top core IDecode csr csrRegFile r_data", false,-1, 31,0);
        tracep->declBus(c+711,"Top core IDecode csr csrRegFile set_data", false,-1, 31,0);
        tracep->declBus(c+712,"Top core IDecode csr csrRegFile clear_data", false,-1, 31,0);
        tracep->declBus(c+922,"Top core IDecode csr csrRegFile w_data", false,-1, 31,0);
        tracep->declBit(c+47,"Top core IDecode csrController io_regWrExecute", false,-1);
        tracep->declBus(c+41,"Top core IDecode csrController io_rdSelExecute", false,-1, 4,0);
        tracep->declBit(c+49,"Top core IDecode csrController io_csrWrExecute", false,-1);
        tracep->declBit(c+48,"Top core IDecode csrController io_regWrMemory", false,-1);
        tracep->declBus(c+42,"Top core IDecode csrController io_rdSelMemory", false,-1, 4,0);
        tracep->declBit(c+50,"Top core IDecode csrController io_csrWrMemory", false,-1);
        tracep->declBit(c+38,"Top core IDecode csrController io_regWrWriteback", false,-1);
        tracep->declBus(c+32,"Top core IDecode csrController io_rdSelWriteback", false,-1, 4,0);
        tracep->declBit(c+51,"Top core IDecode csrController io_csrWrWriteback", false,-1);
        tracep->declBus(c+95,"Top core IDecode csrController io_rs1SelDecode", false,-1, 4,0);
        tracep->declBit(c+109,"Top core IDecode csrController io_csrInstDecode", false,-1);
        tracep->declBus(c+199,"Top core IDecode csrController io_forwardRS1", false,-1, 2,0);
        tracep->declBit(c+236,"Top core IDecode csrController hazard_DecEx", false,-1);
        tracep->declBit(c+237,"Top core IDecode csrController hazard_DecMem", false,-1);
        tracep->declBit(c+238,"Top core IDecode csrController hazard_DecWb", false,-1);
        tracep->declBit(c+239,"Top core IDecode csrController csrHazard_DecEx", false,-1);
        tracep->declBit(c+240,"Top core IDecode csrController csrHazard_DecMem", false,-1);
        tracep->declBit(c+241,"Top core IDecode csrController csrHazard_DecWb", false,-1);
        tracep->declBit(c+39,"Top core IDecode hdu io_id_ex_memRead", false,-1);
        tracep->declBit(c+40,"Top core IDecode hdu io_ex_mem_memRead", false,-1);
        tracep->declBit(c+43,"Top core IDecode hdu io_id_ex_branch", false,-1);
        tracep->declBus(c+41,"Top core IDecode hdu io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+42,"Top core IDecode hdu io_ex_mem_rd", false,-1, 4,0);
        tracep->declBus(c+95,"Top core IDecode hdu io_id_rs1", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode hdu io_id_rs2", false,-1, 4,0);
        tracep->declBit(c+917,"Top core IDecode hdu io_taken", false,-1);
        tracep->declBus(c+67,"Top core IDecode hdu io_jump", false,-1, 1,0);
        tracep->declBit(c+65,"Top core IDecode hdu io_branch", false,-1);
        tracep->declBit(c+106,"Top core IDecode hdu io_if_reg_write", false,-1);
        tracep->declBit(c+105,"Top core IDecode hdu io_pc_write", false,-1);
        tracep->declBit(c+106,"Top core IDecode hdu io_ctl_mux", false,-1);
        tracep->declBit(c+703,"Top core IDecode hdu io_ifid_flush", false,-1);
        tracep->declBit(c+105,"Top core IDecode hdu io_take_branch", false,-1);
        tracep->declBus(c+36,"Top core IDecode control io_in", false,-1, 31,0);
        tracep->declBit(c+60,"Top core IDecode control io_aluSrc", false,-1);
        tracep->declBus(c+61,"Top core IDecode control io_memToReg", false,-1, 1,0);
        tracep->declBit(c+200,"Top core IDecode control io_regWrite", false,-1);
        tracep->declBit(c+63,"Top core IDecode control io_memRead", false,-1);
        tracep->declBit(c+201,"Top core IDecode control io_memWrite", false,-1);
        tracep->declBit(c+65,"Top core IDecode control io_branch", false,-1);
        tracep->declBus(c+66,"Top core IDecode control io_aluOp", false,-1, 1,0);
        tracep->declBus(c+67,"Top core IDecode control io_jump", false,-1, 1,0);
        tracep->declBus(c+104,"Top core IDecode control io_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+36,"Top core IDecode Vcontrol io_Instruction", false,-1, 31,0);
        tracep->declBit(c+68,"Top core IDecode Vcontrol io_RegWrite", false,-1);
        tracep->declBit(c+69,"Top core IDecode Vcontrol io_opBsel", false,-1);
        tracep->declBus(c+70,"Top core IDecode Vcontrol io_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+71,"Top core IDecode Vcontrol io_aluop", false,-1, 4,0);
        tracep->declBit(c+72,"Top core IDecode Vcontrol io_vset", false,-1);
        tracep->declBit(c+202,"Top core IDecode Vcontrol io_v_load", false,-1);
        tracep->declBit(c+203,"Top core IDecode Vcontrol io_v_store", false,-1);
        tracep->declBit(c+74,"Top core IDecode Vcontrol io_v_ins", false,-1);
        tracep->declBit(c+204,"Top core IDecode Vcontrol io_RegRead", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol io_V_MemToReg", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol io_V_MemRead", false,-1);
        tracep->declBit(c+1049,"Top core IDecode Vcontrol io_memWrite", false,-1);
        tracep->declBus(c+242,"Top core IDecode Vcontrol configtype", false,-1, 1,0);
        tracep->declBus(c+243,"Top core IDecode Vcontrol opcode", false,-1, 6,0);
        tracep->declBus(c+58,"Top core IDecode Vcontrol func3", false,-1, 2,0);
        tracep->declBit(c+1031,"Top core IDecode registers clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode registers reset", false,-1);
        tracep->declBus(c+95,"Top core IDecode registers io_readAddress_0", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode registers io_readAddress_1", false,-1, 4,0);
        tracep->declBit(c+205,"Top core IDecode registers io_writeEnable", false,-1);
        tracep->declBus(c+206,"Top core IDecode registers io_writeAddress", false,-1, 4,0);
        tracep->declBus(c+918,"Top core IDecode registers io_writeData", false,-1, 31,0);
        tracep->declBus(c+207,"Top core IDecode registers io_readData_0", false,-1, 31,0);
        tracep->declBus(c+208,"Top core IDecode registers io_readData_1", false,-1, 31,0);
        tracep->declBus(c+244,"Top core IDecode registers reg_0", false,-1, 31,0);
        tracep->declBus(c+245,"Top core IDecode registers reg_1", false,-1, 31,0);
        tracep->declBus(c+246,"Top core IDecode registers reg_2", false,-1, 31,0);
        tracep->declBus(c+247,"Top core IDecode registers reg_3", false,-1, 31,0);
        tracep->declBus(c+248,"Top core IDecode registers reg_4", false,-1, 31,0);
        tracep->declBus(c+249,"Top core IDecode registers reg_5", false,-1, 31,0);
        tracep->declBus(c+250,"Top core IDecode registers reg_6", false,-1, 31,0);
        tracep->declBus(c+251,"Top core IDecode registers reg_7", false,-1, 31,0);
        tracep->declBus(c+252,"Top core IDecode registers reg_8", false,-1, 31,0);
        tracep->declBus(c+253,"Top core IDecode registers reg_9", false,-1, 31,0);
        tracep->declBus(c+254,"Top core IDecode registers reg_10", false,-1, 31,0);
        tracep->declBus(c+255,"Top core IDecode registers reg_11", false,-1, 31,0);
        tracep->declBus(c+256,"Top core IDecode registers reg_12", false,-1, 31,0);
        tracep->declBus(c+257,"Top core IDecode registers reg_13", false,-1, 31,0);
        tracep->declBus(c+258,"Top core IDecode registers reg_14", false,-1, 31,0);
        tracep->declBus(c+259,"Top core IDecode registers reg_15", false,-1, 31,0);
        tracep->declBus(c+260,"Top core IDecode registers reg_16", false,-1, 31,0);
        tracep->declBus(c+261,"Top core IDecode registers reg_17", false,-1, 31,0);
        tracep->declBus(c+262,"Top core IDecode registers reg_18", false,-1, 31,0);
        tracep->declBus(c+263,"Top core IDecode registers reg_19", false,-1, 31,0);
        tracep->declBus(c+264,"Top core IDecode registers reg_20", false,-1, 31,0);
        tracep->declBus(c+265,"Top core IDecode registers reg_21", false,-1, 31,0);
        tracep->declBus(c+266,"Top core IDecode registers reg_22", false,-1, 31,0);
        tracep->declBus(c+267,"Top core IDecode registers reg_23", false,-1, 31,0);
        tracep->declBus(c+268,"Top core IDecode registers reg_24", false,-1, 31,0);
        tracep->declBus(c+269,"Top core IDecode registers reg_25", false,-1, 31,0);
        tracep->declBus(c+270,"Top core IDecode registers reg_26", false,-1, 31,0);
        tracep->declBus(c+271,"Top core IDecode registers reg_27", false,-1, 31,0);
        tracep->declBus(c+272,"Top core IDecode registers reg_28", false,-1, 31,0);
        tracep->declBus(c+273,"Top core IDecode registers reg_29", false,-1, 31,0);
        tracep->declBus(c+274,"Top core IDecode registers reg_30", false,-1, 31,0);
        tracep->declBus(c+275,"Top core IDecode registers reg_31", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core IDecode v_registers clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode v_registers reset", false,-1);
        tracep->declBus(c+95,"Top core IDecode v_registers io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+96,"Top core IDecode v_registers io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+79,"Top core IDecode v_registers io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"Top core IDecode v_registers io_lmul_count", false,-1, 3,0);
        tracep->declBus(c+82,"Top core IDecode v_registers io_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+83,"Top core IDecode v_registers io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+87,"Top core IDecode v_registers io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+91,"Top core IDecode v_registers io_vs2_data", false,-1, 127,0);
        tracep->declArray(c+13,"Top core IDecode v_registers io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+75,"Top core IDecode v_registers io_vd_data", false,-1, 127,0);
        tracep->declBit(c+80,"Top core IDecode v_registers io_reg_write", false,-1);
        tracep->declBit(c+204,"Top core IDecode v_registers io_reg_read", false,-1);
        tracep->declArray(c+276,"Top core IDecode v_registers register_0", false,-1, 127,0);
        tracep->declArray(c+280,"Top core IDecode v_registers register_1", false,-1, 127,0);
        tracep->declArray(c+284,"Top core IDecode v_registers register_2", false,-1, 127,0);
        tracep->declArray(c+288,"Top core IDecode v_registers register_3", false,-1, 127,0);
        tracep->declArray(c+292,"Top core IDecode v_registers register_4", false,-1, 127,0);
        tracep->declArray(c+296,"Top core IDecode v_registers register_5", false,-1, 127,0);
        tracep->declArray(c+300,"Top core IDecode v_registers register_6", false,-1, 127,0);
        tracep->declArray(c+304,"Top core IDecode v_registers register_7", false,-1, 127,0);
        tracep->declArray(c+308,"Top core IDecode v_registers register_8", false,-1, 127,0);
        tracep->declArray(c+312,"Top core IDecode v_registers register_9", false,-1, 127,0);
        tracep->declArray(c+316,"Top core IDecode v_registers register_10", false,-1, 127,0);
        tracep->declArray(c+320,"Top core IDecode v_registers register_11", false,-1, 127,0);
        tracep->declArray(c+324,"Top core IDecode v_registers register_12", false,-1, 127,0);
        tracep->declArray(c+328,"Top core IDecode v_registers register_13", false,-1, 127,0);
        tracep->declArray(c+332,"Top core IDecode v_registers register_14", false,-1, 127,0);
        tracep->declArray(c+336,"Top core IDecode v_registers register_15", false,-1, 127,0);
        tracep->declArray(c+340,"Top core IDecode v_registers register_16", false,-1, 127,0);
        tracep->declArray(c+344,"Top core IDecode v_registers register_17", false,-1, 127,0);
        tracep->declArray(c+348,"Top core IDecode v_registers register_18", false,-1, 127,0);
        tracep->declArray(c+352,"Top core IDecode v_registers register_19", false,-1, 127,0);
        tracep->declArray(c+356,"Top core IDecode v_registers register_20", false,-1, 127,0);
        tracep->declArray(c+360,"Top core IDecode v_registers register_21", false,-1, 127,0);
        tracep->declArray(c+364,"Top core IDecode v_registers register_22", false,-1, 127,0);
        tracep->declArray(c+368,"Top core IDecode v_registers register_23", false,-1, 127,0);
        tracep->declArray(c+372,"Top core IDecode v_registers register_24", false,-1, 127,0);
        tracep->declArray(c+376,"Top core IDecode v_registers register_25", false,-1, 127,0);
        tracep->declArray(c+380,"Top core IDecode v_registers register_26", false,-1, 127,0);
        tracep->declArray(c+384,"Top core IDecode v_registers register_27", false,-1, 127,0);
        tracep->declArray(c+388,"Top core IDecode v_registers register_28", false,-1, 127,0);
        tracep->declArray(c+392,"Top core IDecode v_registers register_29", false,-1, 127,0);
        tracep->declArray(c+396,"Top core IDecode v_registers register_30", false,-1, 127,0);
        tracep->declArray(c+400,"Top core IDecode v_registers register_31", false,-1, 127,0);
        tracep->declBus(c+404,"Top core IDecode v_registers vs1_in", false,-1, 4,0);
        tracep->declBus(c+405,"Top core IDecode v_registers vs2_in", false,-1, 4,0);
        tracep->declBus(c+406,"Top core IDecode v_registers vs3_in", false,-1, 4,0);
        tracep->declBus(c+407,"Top core IDecode v_registers vsd_in", false,-1, 4,0);
        tracep->declBus(c+36,"Top core IDecode immediate io_instruction", false,-1, 31,0);
        tracep->declBus(c+55,"Top core IDecode immediate io_out", false,-1, 31,0);
        tracep->declBus(c+243,"Top core IDecode immediate opcode", false,-1, 6,0);
        tracep->declBus(c+197,"Top core IDecode immediate lo", false,-1, 11,0);
        tracep->declBus(c+408,"Top core IDecode immediate hi", false,-1, 19,0);
        tracep->declBus(c+409,"Top core IDecode immediate hi_1", false,-1, 19,0);
        tracep->declBus(c+410,"Top core IDecode immediate hi_2", false,-1, 6,0);
        tracep->declBus(c+56,"Top core IDecode immediate lo_2", false,-1, 4,0);
        tracep->declBus(c+411,"Top core IDecode immediate lo_3", false,-1, 11,0);
        tracep->declBus(c+408,"Top core IDecode immediate hi_3", false,-1, 19,0);
        tracep->declBit(c+412,"Top core IDecode immediate hi_hi", false,-1);
        tracep->declBit(c+413,"Top core IDecode immediate hi_lo", false,-1);
        tracep->declBus(c+414,"Top core IDecode immediate lo_hi", false,-1, 5,0);
        tracep->declBus(c+415,"Top core IDecode immediate lo_lo", false,-1, 3,0);
        tracep->declBus(c+416,"Top core IDecode immediate hi_lo_1", false,-1, 11,0);
        tracep->declBus(c+417,"Top core IDecode immediate hi_hi_1", false,-1, 18,0);
        tracep->declBus(c+418,"Top core IDecode immediate hi_lo_2", false,-1, 7,0);
        tracep->declBit(c+419,"Top core IDecode immediate lo_hi_1", false,-1);
        tracep->declBus(c+420,"Top core IDecode immediate lo_lo_1", false,-1, 9,0);
        tracep->declBus(c+421,"Top core IDecode immediate hi_lo_3", false,-1, 19,0);
        tracep->declBus(c+422,"Top core IDecode immediate hi_hi_3", false,-1, 10,0);
        tracep->declBus(c+36,"Top core IDecode v_immediate io_instruction", false,-1, 31,0);
        tracep->declBus(c+209,"Top core IDecode v_immediate io_z_imm", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode v_immediate io_addi_imm", false,-1, 31,0);
        tracep->declBus(c+423,"Top core IDecode v_immediate hi", false,-1, 20,0);
        tracep->declBus(c+424,"Top core IDecode v_immediate lo", false,-1, 10,0);
        tracep->declBus(c+95,"Top core IDecode v_immediate lo_1", false,-1, 4,0);
        tracep->declBit(c+1031,"Top core IDecode vec_csr clock", false,-1);
        tracep->declBit(c+1032,"Top core IDecode vec_csr reset", false,-1);
        tracep->declBus(c+99,"Top core IDecode vec_csr io_vtypei", false,-1, 10,0);
        tracep->declBus(c+101,"Top core IDecode vec_csr io_vl", false,-1, 31,0);
        tracep->declBit(c+102,"Top core IDecode vec_csr io_vset", false,-1);
        tracep->declBus(c+103,"Top core IDecode vec_csr io_vl_out", false,-1, 31,0);
        tracep->declBus(c+210,"Top core IDecode vec_csr io_vtype_out", false,-1, 31,0);
        tracep->declBus(c+1051,"Top core IDecode vec_csr io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+210,"Top core IDecode vec_csr vtypeReg", false,-1, 31,0);
        tracep->declBus(c+103,"Top core IDecode vec_csr vlReg", false,-1, 31,0);
        tracep->declBit(c+65,"Top core IDecode bu io_branch", false,-1);
        tracep->declBus(c+58,"Top core IDecode bu io_funct3", false,-1, 2,0);
        tracep->declBus(c+919,"Top core IDecode bu io_rd1", false,-1, 31,0);
        tracep->declBus(c+920,"Top core IDecode bu io_rd2", false,-1, 31,0);
        tracep->declBit(c+105,"Top core IDecode bu io_take_branch", false,-1);
        tracep->declBit(c+917,"Top core IDecode bu io_taken", false,-1);
        tracep->declBit(c+713,"Top core IDecode bu check", false,-1);
        tracep->declBit(c+1031,"Top core Execute clock", false,-1);
        tracep->declBit(c+1032,"Top core Execute reset", false,-1);
        tracep->declBus(c+110,"Top core Execute io_immediate", false,-1, 31,0);
        tracep->declBus(c+111,"Top core Execute io_readData1", false,-1, 31,0);
        tracep->declBus(c+112,"Top core Execute io_readData2", false,-1, 31,0);
        tracep->declBus(c+113,"Top core Execute io_pcAddress", false,-1, 31,0);
        tracep->declBus(c+114,"Top core Execute io_func7", false,-1, 6,0);
        tracep->declBus(c+115,"Top core Execute io_func3", false,-1, 2,0);
        tracep->declBus(c+46,"Top core Execute io_mem_result", false,-1, 31,0);
        tracep->declBus(c+905,"Top core Execute io_wb_result", false,-1, 31,0);
        tracep->declBit(c+48,"Top core Execute io_ex_mem_regWrite", false,-1);
        tracep->declBit(c+38,"Top core Execute io_mem_wb_regWrite", false,-1);
        tracep->declBus(c+45,"Top core Execute io_id_ex_ins", false,-1, 31,0);
        tracep->declBus(c+44,"Top core Execute io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+26,"Top core Execute io_mem_wb_ins", false,-1, 31,0);
        tracep->declBit(c+116,"Top core Execute io_ctl_aluSrc", false,-1);
        tracep->declBus(c+117,"Top core Execute io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+118,"Top core Execute io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+119,"Top core Execute io_func6", false,-1, 5,0);
        tracep->declBus(c+120,"Top core Execute io_v_ctl_aluop", false,-1, 2,0);
        tracep->declBus(c+121,"Top core Execute io_v_ctl_exsel", false,-1, 3,0);
        tracep->declBit(c+122,"Top core Execute io_v_ctl_regwrite", false,-1);
        tracep->declBit(c+123,"Top core Execute io_v_ctl_opBsel", false,-1);
        tracep->declBit(c+124,"Top core Execute io_v_ctl_v_load", false,-1);
        tracep->declBit(c+125,"Top core Execute io_v_ctl_v_ins", false,-1);
        tracep->declBit(c+126,"Top core Execute io_v_ctl_vset", false,-1);
        tracep->declArray(c+127,"Top core Execute io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+131,"Top core Execute io_vs2_data", false,-1, 127,0);
        tracep->declBus(c+135,"Top core Execute io_vl", false,-1, 31,0);
        tracep->declBus(c+136,"Top core Execute io_vstart", false,-1, 31,0);
        tracep->declArray(c+137,"Top core Execute io_vs3_data", false,-1, 127,0);
        tracep->declBit(c+141,"Top core Execute io_vma", false,-1);
        tracep->declBit(c+142,"Top core Execute io_vta", false,-1);
        tracep->declBit(c+143,"Top core Execute io_vm", false,-1);
        tracep->declArray(c+144,"Top core Execute io_vs0", false,-1, 127,0);
        tracep->declBus(c+41,"Top core Execute io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute io_v_sew", false,-1, 2,0);
        tracep->declBus(c+149,"Top core Execute io_zimm", false,-1, 31,0);
        tracep->declBus(c+150,"Top core Execute io_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+151,"Top core Execute io_vec_mem_res", false,-1, 127,0);
        tracep->declArray(c+75,"Top core Execute io_vec_wb_res", false,-1, 127,0);
        tracep->declBus(c+155,"Top core Execute io_fu_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+79,"Top core Execute io_fu_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+156,"Top core Execute io_fu_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+157,"Top core Execute io_fu_reg_vs2", false,-1, 4,0);
        tracep->declBit(c+158,"Top core Execute io_fu_ex_reg_write", false,-1);
        tracep->declBit(c+80,"Top core Execute io_fu_mem_reg_write", false,-1);
        tracep->declArray(c+704,"Top core Execute io_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+708,"Top core Execute io_vec_vl", false,-1, 31,0);
        tracep->declBus(c+159,"Top core Execute io_vec_rd_out", false,-1, 4,0);
        tracep->declBus(c+910,"Top core Execute io_vec_avl_o", false,-1, 31,0);
        tracep->declBus(c+160,"Top core Execute io_vec_valmax_o", false,-1, 31,0);
        tracep->declBus(c+709,"Top core Execute io_writeData", false,-1, 31,0);
        tracep->declBus(c+906,"Top core Execute io_ALUresult", false,-1, 31,0);
        tracep->declBit(c+161,"Top core Execute io_stall", false,-1);
        tracep->declBus(c+923,"Top core Execute alu_io_input1", false,-1, 31,0);
        tracep->declBus(c+924,"Top core Execute alu_io_input2", false,-1, 31,0);
        tracep->declBus(c+425,"Top core Execute alu_io_aluCtl", false,-1, 3,0);
        tracep->declBus(c+714,"Top core Execute alu_io_result", false,-1, 31,0);
        tracep->declBus(c+117,"Top core Execute aluCtl_io_aluOp", false,-1, 1,0);
        tracep->declBit(c+426,"Top core Execute aluCtl_io_f7", false,-1);
        tracep->declBus(c+115,"Top core Execute aluCtl_io_f3", false,-1, 2,0);
        tracep->declBit(c+116,"Top core Execute aluCtl_io_aluSrc", false,-1);
        tracep->declBus(c+425,"Top core Execute aluCtl_io_out", false,-1, 3,0);
        tracep->declBus(c+42,"Top core Execute ForwardingUnit_io_ex_reg_rd", false,-1, 4,0);
        tracep->declBus(c+427,"Top core Execute ForwardingUnit_io_mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+428,"Top core Execute ForwardingUnit_io_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+429,"Top core Execute ForwardingUnit_io_reg_rs2", false,-1, 4,0);
        tracep->declBit(c+48,"Top core Execute ForwardingUnit_io_ex_regWrite", false,-1);
        tracep->declBit(c+38,"Top core Execute ForwardingUnit_io_mem_regWrite", false,-1);
        tracep->declBus(c+155,"Top core Execute ForwardingUnit_io_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+79,"Top core Execute ForwardingUnit_io_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+156,"Top core Execute ForwardingUnit_io_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+157,"Top core Execute ForwardingUnit_io_reg_vs2", false,-1, 4,0);
        tracep->declBit(c+158,"Top core Execute ForwardingUnit_io_ex_reg_write", false,-1);
        tracep->declBit(c+80,"Top core Execute ForwardingUnit_io_mem_reg_write", false,-1);
        tracep->declBus(c+430,"Top core Execute ForwardingUnit_io_forwardA", false,-1, 1,0);
        tracep->declBus(c+431,"Top core Execute ForwardingUnit_io_forwardB", false,-1, 1,0);
        tracep->declBus(c+115,"Top core Execute Vec_aluCtl_io_func3", false,-1, 2,0);
        tracep->declBus(c+120,"Top core Execute Vec_aluCtl_io_aluOp", false,-1, 2,0);
        tracep->declBus(c+119,"Top core Execute Vec_aluCtl_io_func6", false,-1, 5,0);
        tracep->declBus(c+432,"Top core Execute Vec_aluCtl_io_aluc", false,-1, 8,0);
        tracep->declBus(c+925,"Top core Execute vec_alu_io_in_A", false,-1, 31,0);
        tracep->declBus(c+926,"Top core Execute vec_alu_io_in_B", false,-1, 31,0);
        tracep->declArray(c+433,"Top core Execute vec_alu_io_vs1", false,-1, 127,0);
        tracep->declArray(c+437,"Top core Execute vec_alu_io_vs2", false,-1, 127,0);
        tracep->declArray(c+144,"Top core Execute vec_alu_io_vs0", false,-1, 127,0);
        tracep->declArray(c+137,"Top core Execute vec_alu_io_vd", false,-1, 127,0);
        tracep->declBus(c+135,"Top core Execute vec_alu_io_vl", false,-1, 31,0);
        tracep->declBus(c+136,"Top core Execute vec_alu_io_vstart", false,-1, 31,0);
        tracep->declBit(c+141,"Top core Execute vec_alu_io_vma", false,-1);
        tracep->declBit(c+142,"Top core Execute vec_alu_io_vta", false,-1);
        tracep->declBit(c+143,"Top core Execute vec_alu_io_vm", false,-1);
        tracep->declBus(c+41,"Top core Execute vec_alu_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+432,"Top core Execute vec_alu_io_aluc", false,-1, 8,0);
        tracep->declBus(c+148,"Top core Execute vec_alu_io_sew", false,-1, 2,0);
        tracep->declBit(c+125,"Top core Execute vec_alu_io_v_ins", false,-1);
        tracep->declArray(c+704,"Top core Execute vec_alu_io_v_output", false,-1, 127,0);
        tracep->declBus(c+441,"Top core Execute vec_config_io_zimm", false,-1, 31,0);
        tracep->declBus(c+442,"Top core Execute vec_config_io_rs1", false,-1, 4,0);
        tracep->declBus(c+159,"Top core Execute vec_config_io_rd", false,-1, 4,0);
        tracep->declBus(c+927,"Top core Execute vec_config_io_rs1_readdata", false,-1, 31,0);
        tracep->declBus(c+443,"Top core Execute vec_config_io_current_vl", false,-1, 31,0);
        tracep->declBus(c+444,"Top core Execute vec_config_io_lmul", false,-1, 31,0);
        tracep->declBus(c+708,"Top core Execute vec_config_io_vl", false,-1, 31,0);
        tracep->declBus(c+159,"Top core Execute vec_config_io_rd_out", false,-1, 4,0);
        tracep->declBus(c+910,"Top core Execute vec_config_io_avl_o", false,-1, 31,0);
        tracep->declBus(c+160,"Top core Execute vec_config_io_valmax_o", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core Execute MDU_clock", false,-1);
        tracep->declBit(c+1032,"Top core Execute MDU_reset", false,-1);
        tracep->declBus(c+928,"Top core Execute MDU_io_src_a", false,-1, 31,0);
        tracep->declBus(c+929,"Top core Execute MDU_io_src_b", false,-1, 31,0);
        tracep->declBus(c+445,"Top core Execute MDU_io_op", false,-1, 4,0);
        tracep->declBit(c+446,"Top core Execute MDU_io_valid", false,-1);
        tracep->declBit(c+447,"Top core Execute MDU_io_ready", false,-1);
        tracep->declBit(c+448,"Top core Execute MDU_io_output_valid", false,-1);
        tracep->declBus(c+715,"Top core Execute MDU_io_output_bits", false,-1, 31,0);
        tracep->declBus(c+930,"Top core Execute inputMux1", false,-1, 31,0);
        tracep->declBus(c+931,"Top core Execute inputMux2", false,-1, 31,0);
        tracep->declBus(c+716,"Top core Execute aluIn1", false,-1, 31,0);
        tracep->declBus(c+717,"Top core Execute aluIn2", false,-1, 31,0);
        tracep->declBus(c+449,"Top core Execute REG", false,-1, 31,0);
        tracep->declBus(c+450,"Top core Execute REG_1", false,-1, 31,0);
        tracep->declBus(c+451,"Top core Execute REG_2", false,-1, 2,0);
        tracep->declBit(c+452,"Top core Execute REG_3", false,-1);
        tracep->declBus(c+453,"Top core Execute REG_4", false,-1, 5,0);
        tracep->declBus(c+454,"Top core Execute REG_5", false,-1, 5,0);
        tracep->declBus(c+923,"Top core Execute alu io_input1", false,-1, 31,0);
        tracep->declBus(c+924,"Top core Execute alu io_input2", false,-1, 31,0);
        tracep->declBus(c+425,"Top core Execute alu io_aluCtl", false,-1, 3,0);
        tracep->declBus(c+714,"Top core Execute alu io_result", false,-1, 31,0);
        tracep->declBus(c+117,"Top core Execute aluCtl io_aluOp", false,-1, 1,0);
        tracep->declBit(c+426,"Top core Execute aluCtl io_f7", false,-1);
        tracep->declBus(c+115,"Top core Execute aluCtl io_f3", false,-1, 2,0);
        tracep->declBit(c+116,"Top core Execute aluCtl io_aluSrc", false,-1);
        tracep->declBus(c+425,"Top core Execute aluCtl io_out", false,-1, 3,0);
        tracep->declBus(c+42,"Top core Execute ForwardingUnit io_ex_reg_rd", false,-1, 4,0);
        tracep->declBus(c+427,"Top core Execute ForwardingUnit io_mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+428,"Top core Execute ForwardingUnit io_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+429,"Top core Execute ForwardingUnit io_reg_rs2", false,-1, 4,0);
        tracep->declBit(c+48,"Top core Execute ForwardingUnit io_ex_regWrite", false,-1);
        tracep->declBit(c+38,"Top core Execute ForwardingUnit io_mem_regWrite", false,-1);
        tracep->declBus(c+155,"Top core Execute ForwardingUnit io_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+79,"Top core Execute ForwardingUnit io_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+156,"Top core Execute ForwardingUnit io_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+157,"Top core Execute ForwardingUnit io_reg_vs2", false,-1, 4,0);
        tracep->declBit(c+158,"Top core Execute ForwardingUnit io_ex_reg_write", false,-1);
        tracep->declBit(c+80,"Top core Execute ForwardingUnit io_mem_reg_write", false,-1);
        tracep->declBus(c+430,"Top core Execute ForwardingUnit io_forwardA", false,-1, 1,0);
        tracep->declBus(c+431,"Top core Execute ForwardingUnit io_forwardB", false,-1, 1,0);
        tracep->declBus(c+115,"Top core Execute Vec_aluCtl io_func3", false,-1, 2,0);
        tracep->declBus(c+120,"Top core Execute Vec_aluCtl io_aluOp", false,-1, 2,0);
        tracep->declBus(c+119,"Top core Execute Vec_aluCtl io_func6", false,-1, 5,0);
        tracep->declBus(c+432,"Top core Execute Vec_aluCtl io_aluc", false,-1, 8,0);
        tracep->declBus(c+925,"Top core Execute vec_alu io_in_A", false,-1, 31,0);
        tracep->declBus(c+926,"Top core Execute vec_alu io_in_B", false,-1, 31,0);
        tracep->declArray(c+433,"Top core Execute vec_alu io_vs1", false,-1, 127,0);
        tracep->declArray(c+437,"Top core Execute vec_alu io_vs2", false,-1, 127,0);
        tracep->declArray(c+144,"Top core Execute vec_alu io_vs0", false,-1, 127,0);
        tracep->declArray(c+137,"Top core Execute vec_alu io_vd", false,-1, 127,0);
        tracep->declBus(c+135,"Top core Execute vec_alu io_vl", false,-1, 31,0);
        tracep->declBus(c+136,"Top core Execute vec_alu io_vstart", false,-1, 31,0);
        tracep->declBit(c+141,"Top core Execute vec_alu io_vma", false,-1);
        tracep->declBit(c+142,"Top core Execute vec_alu io_vta", false,-1);
        tracep->declBit(c+143,"Top core Execute vec_alu io_vm", false,-1);
        tracep->declBus(c+41,"Top core Execute vec_alu io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+432,"Top core Execute vec_alu io_aluc", false,-1, 8,0);
        tracep->declBus(c+148,"Top core Execute vec_alu io_sew", false,-1, 2,0);
        tracep->declBit(c+125,"Top core Execute vec_alu io_v_ins", false,-1);
        tracep->declArray(c+704,"Top core Execute vec_alu io_v_output", false,-1, 127,0);
        tracep->declBus(c+455,"Top core Execute vec_alu sew_8_a_0", false,-1, 7,0);
        tracep->declBus(c+456,"Top core Execute vec_alu sew_8_a_1", false,-1, 7,0);
        tracep->declBus(c+457,"Top core Execute vec_alu sew_8_a_2", false,-1, 7,0);
        tracep->declBus(c+458,"Top core Execute vec_alu sew_8_a_3", false,-1, 7,0);
        tracep->declBus(c+459,"Top core Execute vec_alu sew_8_a_4", false,-1, 7,0);
        tracep->declBus(c+460,"Top core Execute vec_alu sew_8_a_5", false,-1, 7,0);
        tracep->declBus(c+461,"Top core Execute vec_alu sew_8_a_6", false,-1, 7,0);
        tracep->declBus(c+462,"Top core Execute vec_alu sew_8_a_7", false,-1, 7,0);
        tracep->declBus(c+463,"Top core Execute vec_alu sew_8_a_8", false,-1, 7,0);
        tracep->declBus(c+464,"Top core Execute vec_alu sew_8_a_9", false,-1, 7,0);
        tracep->declBus(c+465,"Top core Execute vec_alu sew_8_a_10", false,-1, 7,0);
        tracep->declBus(c+466,"Top core Execute vec_alu sew_8_a_11", false,-1, 7,0);
        tracep->declBus(c+467,"Top core Execute vec_alu sew_8_a_12", false,-1, 7,0);
        tracep->declBus(c+468,"Top core Execute vec_alu sew_8_a_13", false,-1, 7,0);
        tracep->declBus(c+469,"Top core Execute vec_alu sew_8_a_14", false,-1, 7,0);
        tracep->declBus(c+470,"Top core Execute vec_alu sew_8_a_15", false,-1, 7,0);
        tracep->declBus(c+471,"Top core Execute vec_alu sew_8_b_0", false,-1, 7,0);
        tracep->declBus(c+472,"Top core Execute vec_alu sew_8_b_1", false,-1, 7,0);
        tracep->declBus(c+473,"Top core Execute vec_alu sew_8_b_2", false,-1, 7,0);
        tracep->declBus(c+474,"Top core Execute vec_alu sew_8_b_3", false,-1, 7,0);
        tracep->declBus(c+475,"Top core Execute vec_alu sew_8_b_4", false,-1, 7,0);
        tracep->declBus(c+476,"Top core Execute vec_alu sew_8_b_5", false,-1, 7,0);
        tracep->declBus(c+477,"Top core Execute vec_alu sew_8_b_6", false,-1, 7,0);
        tracep->declBus(c+478,"Top core Execute vec_alu sew_8_b_7", false,-1, 7,0);
        tracep->declBus(c+479,"Top core Execute vec_alu sew_8_b_8", false,-1, 7,0);
        tracep->declBus(c+480,"Top core Execute vec_alu sew_8_b_9", false,-1, 7,0);
        tracep->declBus(c+481,"Top core Execute vec_alu sew_8_b_10", false,-1, 7,0);
        tracep->declBus(c+482,"Top core Execute vec_alu sew_8_b_11", false,-1, 7,0);
        tracep->declBus(c+483,"Top core Execute vec_alu sew_8_b_12", false,-1, 7,0);
        tracep->declBus(c+484,"Top core Execute vec_alu sew_8_b_13", false,-1, 7,0);
        tracep->declBus(c+485,"Top core Execute vec_alu sew_8_b_14", false,-1, 7,0);
        tracep->declBus(c+486,"Top core Execute vec_alu sew_8_b_15", false,-1, 7,0);
        tracep->declBus(c+487,"Top core Execute vec_alu sew_16_a_0", false,-1, 15,0);
        tracep->declBus(c+488,"Top core Execute vec_alu sew_16_a_1", false,-1, 15,0);
        tracep->declBus(c+489,"Top core Execute vec_alu sew_16_a_2", false,-1, 15,0);
        tracep->declBus(c+490,"Top core Execute vec_alu sew_16_a_3", false,-1, 15,0);
        tracep->declBus(c+491,"Top core Execute vec_alu sew_16_a_4", false,-1, 15,0);
        tracep->declBus(c+492,"Top core Execute vec_alu sew_16_a_5", false,-1, 15,0);
        tracep->declBus(c+493,"Top core Execute vec_alu sew_16_a_6", false,-1, 15,0);
        tracep->declBus(c+494,"Top core Execute vec_alu sew_16_a_7", false,-1, 15,0);
        tracep->declBus(c+495,"Top core Execute vec_alu sew_16_b_0", false,-1, 15,0);
        tracep->declBus(c+496,"Top core Execute vec_alu sew_16_b_1", false,-1, 15,0);
        tracep->declBus(c+497,"Top core Execute vec_alu sew_16_b_2", false,-1, 15,0);
        tracep->declBus(c+498,"Top core Execute vec_alu sew_16_b_3", false,-1, 15,0);
        tracep->declBus(c+499,"Top core Execute vec_alu sew_16_b_4", false,-1, 15,0);
        tracep->declBus(c+500,"Top core Execute vec_alu sew_16_b_5", false,-1, 15,0);
        tracep->declBus(c+501,"Top core Execute vec_alu sew_16_b_6", false,-1, 15,0);
        tracep->declBus(c+502,"Top core Execute vec_alu sew_16_b_7", false,-1, 15,0);
        tracep->declBus(c+503,"Top core Execute vec_alu sew_32_a_0", false,-1, 31,0);
        tracep->declBus(c+504,"Top core Execute vec_alu sew_32_a_1", false,-1, 31,0);
        tracep->declBus(c+505,"Top core Execute vec_alu sew_32_a_2", false,-1, 31,0);
        tracep->declBus(c+506,"Top core Execute vec_alu sew_32_a_3", false,-1, 31,0);
        tracep->declBus(c+507,"Top core Execute vec_alu sew_32_b_0", false,-1, 31,0);
        tracep->declBus(c+508,"Top core Execute vec_alu sew_32_b_1", false,-1, 31,0);
        tracep->declBus(c+509,"Top core Execute vec_alu sew_32_b_2", false,-1, 31,0);
        tracep->declBus(c+510,"Top core Execute vec_alu sew_32_b_3", false,-1, 31,0);
        tracep->declQuad(c+511,"Top core Execute vec_alu sew_64_a_0", false,-1, 63,0);
        tracep->declQuad(c+513,"Top core Execute vec_alu sew_64_a_1", false,-1, 63,0);
        tracep->declQuad(c+515,"Top core Execute vec_alu sew_64_b_0", false,-1, 63,0);
        tracep->declQuad(c+517,"Top core Execute vec_alu sew_64_b_1", false,-1, 63,0);
        tracep->declBus(c+519,"Top core Execute vec_alu sew_8_vd_0", false,-1, 7,0);
        tracep->declBus(c+520,"Top core Execute vec_alu sew_8_vd_1", false,-1, 7,0);
        tracep->declBus(c+521,"Top core Execute vec_alu sew_8_vd_2", false,-1, 7,0);
        tracep->declBus(c+522,"Top core Execute vec_alu sew_8_vd_3", false,-1, 7,0);
        tracep->declBus(c+523,"Top core Execute vec_alu sew_8_vd_4", false,-1, 7,0);
        tracep->declBus(c+524,"Top core Execute vec_alu sew_8_vd_5", false,-1, 7,0);
        tracep->declBus(c+525,"Top core Execute vec_alu sew_8_vd_6", false,-1, 7,0);
        tracep->declBus(c+526,"Top core Execute vec_alu sew_8_vd_7", false,-1, 7,0);
        tracep->declBus(c+527,"Top core Execute vec_alu sew_8_vd_8", false,-1, 7,0);
        tracep->declBus(c+528,"Top core Execute vec_alu sew_8_vd_9", false,-1, 7,0);
        tracep->declBus(c+529,"Top core Execute vec_alu sew_8_vd_10", false,-1, 7,0);
        tracep->declBus(c+530,"Top core Execute vec_alu sew_8_vd_11", false,-1, 7,0);
        tracep->declBus(c+531,"Top core Execute vec_alu sew_8_vd_12", false,-1, 7,0);
        tracep->declBus(c+532,"Top core Execute vec_alu sew_8_vd_13", false,-1, 7,0);
        tracep->declBus(c+533,"Top core Execute vec_alu sew_8_vd_14", false,-1, 7,0);
        tracep->declBus(c+534,"Top core Execute vec_alu sew_8_vd_15", false,-1, 7,0);
        tracep->declBus(c+535,"Top core Execute vec_alu sew_16_vd_0", false,-1, 15,0);
        tracep->declBus(c+536,"Top core Execute vec_alu sew_16_vd_1", false,-1, 15,0);
        tracep->declBus(c+537,"Top core Execute vec_alu sew_16_vd_2", false,-1, 15,0);
        tracep->declBus(c+538,"Top core Execute vec_alu sew_16_vd_3", false,-1, 15,0);
        tracep->declBus(c+539,"Top core Execute vec_alu sew_16_vd_4", false,-1, 15,0);
        tracep->declBus(c+540,"Top core Execute vec_alu sew_16_vd_5", false,-1, 15,0);
        tracep->declBus(c+541,"Top core Execute vec_alu sew_16_vd_6", false,-1, 15,0);
        tracep->declBus(c+542,"Top core Execute vec_alu sew_16_vd_7", false,-1, 15,0);
        tracep->declBus(c+543,"Top core Execute vec_alu sew_32_vd_0", false,-1, 31,0);
        tracep->declBus(c+544,"Top core Execute vec_alu sew_32_vd_1", false,-1, 31,0);
        tracep->declBus(c+545,"Top core Execute vec_alu sew_32_vd_2", false,-1, 31,0);
        tracep->declBus(c+546,"Top core Execute vec_alu sew_32_vd_3", false,-1, 31,0);
        tracep->declQuad(c+547,"Top core Execute vec_alu sew_64_vd_0", false,-1, 63,0);
        tracep->declQuad(c+549,"Top core Execute vec_alu sew_64_vd_1", false,-1, 63,0);
        tracep->declQuad(c+551,"Top core Execute vec_alu lo", false,-1, 63,0);
        tracep->declQuad(c+553,"Top core Execute vec_alu hi", false,-1, 63,0);
        tracep->declBus(c+555,"Top core Execute vec_alu lo_lo", false,-1, 31,0);
        tracep->declBus(c+556,"Top core Execute vec_alu lo_hi", false,-1, 31,0);
        tracep->declBus(c+557,"Top core Execute vec_alu hi_lo", false,-1, 31,0);
        tracep->declBus(c+558,"Top core Execute vec_alu hi_hi", false,-1, 31,0);
        tracep->declBus(c+559,"Top core Execute vec_alu lo_lo_lo", false,-1, 15,0);
        tracep->declBus(c+560,"Top core Execute vec_alu lo_lo_hi", false,-1, 15,0);
        tracep->declBus(c+561,"Top core Execute vec_alu lo_hi_lo", false,-1, 15,0);
        tracep->declBus(c+562,"Top core Execute vec_alu lo_hi_hi", false,-1, 15,0);
        tracep->declBus(c+563,"Top core Execute vec_alu hi_lo_lo", false,-1, 15,0);
        tracep->declBus(c+564,"Top core Execute vec_alu hi_lo_hi", false,-1, 15,0);
        tracep->declBus(c+565,"Top core Execute vec_alu hi_hi_lo", false,-1, 15,0);
        tracep->declBus(c+566,"Top core Execute vec_alu hi_hi_hi", false,-1, 15,0);
        tracep->declBus(c+567,"Top core Execute vec_alu lo_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+568,"Top core Execute vec_alu lo_lo_lo_hi", false,-1, 7,0);
        tracep->declBus(c+569,"Top core Execute vec_alu lo_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+570,"Top core Execute vec_alu lo_lo_hi_hi", false,-1, 7,0);
        tracep->declBus(c+571,"Top core Execute vec_alu lo_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+572,"Top core Execute vec_alu lo_hi_lo_hi", false,-1, 7,0);
        tracep->declBus(c+573,"Top core Execute vec_alu lo_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+574,"Top core Execute vec_alu lo_hi_hi_hi", false,-1, 7,0);
        tracep->declQuad(c+575,"Top core Execute vec_alu lo_3", false,-1, 63,0);
        tracep->declBus(c+577,"Top core Execute vec_alu hi_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+578,"Top core Execute vec_alu hi_lo_lo_hi", false,-1, 7,0);
        tracep->declBus(c+579,"Top core Execute vec_alu hi_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+580,"Top core Execute vec_alu hi_lo_hi_hi", false,-1, 7,0);
        tracep->declBus(c+581,"Top core Execute vec_alu hi_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+582,"Top core Execute vec_alu hi_hi_lo_hi", false,-1, 7,0);
        tracep->declBus(c+583,"Top core Execute vec_alu hi_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+584,"Top core Execute vec_alu hi_hi_hi_hi", false,-1, 7,0);
        tracep->declQuad(c+718,"Top core Execute vec_alu lo_5", false,-1, 63,0);
        tracep->declQuad(c+720,"Top core Execute vec_alu hi_5", false,-1, 63,0);
        tracep->declBus(c+722,"Top core Execute vec_alu lo_lo_3", false,-1, 31,0);
        tracep->declBus(c+723,"Top core Execute vec_alu lo_hi_3", false,-1, 31,0);
        tracep->declBus(c+724,"Top core Execute vec_alu hi_lo_3", false,-1, 31,0);
        tracep->declBus(c+725,"Top core Execute vec_alu hi_hi_3", false,-1, 31,0);
        tracep->declBus(c+726,"Top core Execute vec_alu lo_lo_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+727,"Top core Execute vec_alu lo_lo_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+728,"Top core Execute vec_alu lo_lo_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+729,"Top core Execute vec_alu lo_lo_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+730,"Top core Execute vec_alu lo_hi_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+731,"Top core Execute vec_alu lo_hi_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+732,"Top core Execute vec_alu lo_hi_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+733,"Top core Execute vec_alu lo_hi_hi_hi_1", false,-1, 7,0);
        tracep->declQuad(c+932,"Top core Execute vec_alu lo_7", false,-1, 63,0);
        tracep->declBus(c+734,"Top core Execute vec_alu hi_lo_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+735,"Top core Execute vec_alu hi_lo_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+736,"Top core Execute vec_alu hi_lo_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+737,"Top core Execute vec_alu hi_lo_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+738,"Top core Execute vec_alu hi_hi_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+739,"Top core Execute vec_alu hi_hi_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+740,"Top core Execute vec_alu hi_hi_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+741,"Top core Execute vec_alu hi_hi_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+742,"Top core Execute vec_alu lo_lo_lo_3", false,-1, 15,0);
        tracep->declBus(c+743,"Top core Execute vec_alu lo_lo_hi_3", false,-1, 15,0);
        tracep->declBus(c+744,"Top core Execute vec_alu lo_hi_lo_3", false,-1, 15,0);
        tracep->declBus(c+745,"Top core Execute vec_alu lo_hi_hi_3", false,-1, 15,0);
        tracep->declBus(c+746,"Top core Execute vec_alu hi_lo_lo_3", false,-1, 15,0);
        tracep->declBus(c+747,"Top core Execute vec_alu hi_lo_hi_3", false,-1, 15,0);
        tracep->declBus(c+748,"Top core Execute vec_alu hi_hi_lo_3", false,-1, 15,0);
        tracep->declBus(c+749,"Top core Execute vec_alu hi_hi_hi_3", false,-1, 15,0);
        tracep->declQuad(c+750,"Top core Execute vec_alu lo_10", false,-1, 63,0);
        tracep->declQuad(c+752,"Top core Execute vec_alu hi_10", false,-1, 63,0);
        tracep->declBus(c+754,"Top core Execute vec_alu lo_lo_6", false,-1, 31,0);
        tracep->declBus(c+755,"Top core Execute vec_alu lo_hi_6", false,-1, 31,0);
        tracep->declBus(c+756,"Top core Execute vec_alu hi_lo_6", false,-1, 31,0);
        tracep->declBus(c+757,"Top core Execute vec_alu hi_hi_6", false,-1, 31,0);
        tracep->declBus(c+758,"Top core Execute vec_alu lo_lo_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+759,"Top core Execute vec_alu lo_lo_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+760,"Top core Execute vec_alu lo_lo_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+761,"Top core Execute vec_alu lo_lo_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+762,"Top core Execute vec_alu lo_hi_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+763,"Top core Execute vec_alu lo_hi_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+764,"Top core Execute vec_alu lo_hi_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+765,"Top core Execute vec_alu lo_hi_hi_hi_2", false,-1, 7,0);
        tracep->declQuad(c+934,"Top core Execute vec_alu lo_12", false,-1, 63,0);
        tracep->declBus(c+766,"Top core Execute vec_alu hi_lo_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+767,"Top core Execute vec_alu hi_lo_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+768,"Top core Execute vec_alu hi_lo_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+769,"Top core Execute vec_alu hi_lo_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+770,"Top core Execute vec_alu hi_hi_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+771,"Top core Execute vec_alu hi_hi_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+772,"Top core Execute vec_alu hi_hi_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+773,"Top core Execute vec_alu hi_hi_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+774,"Top core Execute vec_alu lo_lo_lo_5", false,-1, 15,0);
        tracep->declBus(c+775,"Top core Execute vec_alu lo_lo_hi_5", false,-1, 15,0);
        tracep->declBus(c+776,"Top core Execute vec_alu lo_hi_lo_5", false,-1, 15,0);
        tracep->declBus(c+777,"Top core Execute vec_alu lo_hi_hi_5", false,-1, 15,0);
        tracep->declBus(c+778,"Top core Execute vec_alu hi_lo_lo_5", false,-1, 15,0);
        tracep->declBus(c+779,"Top core Execute vec_alu hi_lo_hi_5", false,-1, 15,0);
        tracep->declBus(c+780,"Top core Execute vec_alu hi_hi_lo_5", false,-1, 15,0);
        tracep->declBus(c+781,"Top core Execute vec_alu hi_hi_hi_5", false,-1, 15,0);
        tracep->declQuad(c+782,"Top core Execute vec_alu lo_16", false,-1, 63,0);
        tracep->declQuad(c+784,"Top core Execute vec_alu hi_16", false,-1, 63,0);
        tracep->declQuad(c+786,"Top core Execute vec_alu lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+788,"Top core Execute vec_alu lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+790,"Top core Execute vec_alu hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+792,"Top core Execute vec_alu hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+794,"Top core Execute vec_alu lo_lo_lo_6", false,-1, 63,0);
        tracep->declQuad(c+796,"Top core Execute vec_alu lo_lo_hi_6", false,-1, 63,0);
        tracep->declQuad(c+798,"Top core Execute vec_alu lo_hi_lo_6", false,-1, 63,0);
        tracep->declQuad(c+800,"Top core Execute vec_alu lo_hi_hi_6", false,-1, 63,0);
        tracep->declQuad(c+802,"Top core Execute vec_alu hi_lo_lo_6", false,-1, 63,0);
        tracep->declQuad(c+804,"Top core Execute vec_alu hi_lo_hi_6", false,-1, 63,0);
        tracep->declQuad(c+806,"Top core Execute vec_alu hi_hi_lo_6", false,-1, 63,0);
        tracep->declQuad(c+808,"Top core Execute vec_alu hi_hi_hi_6", false,-1, 63,0);
        tracep->declQuad(c+810,"Top core Execute vec_alu lo_lo_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+812,"Top core Execute vec_alu lo_lo_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+814,"Top core Execute vec_alu lo_lo_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+816,"Top core Execute vec_alu lo_lo_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+818,"Top core Execute vec_alu lo_hi_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+820,"Top core Execute vec_alu lo_hi_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+822,"Top core Execute vec_alu lo_hi_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+824,"Top core Execute vec_alu lo_hi_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+826,"Top core Execute vec_alu hi_lo_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+828,"Top core Execute vec_alu hi_lo_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+830,"Top core Execute vec_alu hi_lo_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+832,"Top core Execute vec_alu hi_lo_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+834,"Top core Execute vec_alu hi_hi_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+836,"Top core Execute vec_alu hi_hi_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+838,"Top core Execute vec_alu hi_hi_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+840,"Top core Execute vec_alu hi_hi_hi_hi_3", false,-1, 63,0);
        tracep->declArray(c+936,"Top core Execute vec_alu lo_19", false,-1, 511,0);
        tracep->declQuad(c+842,"Top core Execute vec_alu lo_22", false,-1, 63,0);
        tracep->declQuad(c+844,"Top core Execute vec_alu hi_22", false,-1, 63,0);
        tracep->declQuad(c+846,"Top core Execute vec_alu lo_lo_12", false,-1, 63,0);
        tracep->declQuad(c+848,"Top core Execute vec_alu lo_hi_12", false,-1, 63,0);
        tracep->declQuad(c+850,"Top core Execute vec_alu hi_lo_12", false,-1, 63,0);
        tracep->declQuad(c+852,"Top core Execute vec_alu hi_hi_12", false,-1, 63,0);
        tracep->declQuad(c+854,"Top core Execute vec_alu lo_lo_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+856,"Top core Execute vec_alu lo_lo_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+858,"Top core Execute vec_alu lo_lo_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+860,"Top core Execute vec_alu lo_lo_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+862,"Top core Execute vec_alu lo_hi_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+864,"Top core Execute vec_alu lo_hi_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+866,"Top core Execute vec_alu lo_hi_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+868,"Top core Execute vec_alu lo_hi_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+870,"Top core Execute vec_alu hi_lo_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+872,"Top core Execute vec_alu hi_lo_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+874,"Top core Execute vec_alu hi_lo_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+876,"Top core Execute vec_alu hi_lo_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+878,"Top core Execute vec_alu hi_hi_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+880,"Top core Execute vec_alu hi_hi_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+882,"Top core Execute vec_alu hi_hi_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+884,"Top core Execute vec_alu hi_hi_hi_hi_4", false,-1, 63,0);
        tracep->declArray(c+952,"Top core Execute vec_alu lo_24", false,-1, 511,0);
        tracep->declQuad(c+886,"Top core Execute vec_alu lo_lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+888,"Top core Execute vec_alu lo_lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+890,"Top core Execute vec_alu lo_hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+892,"Top core Execute vec_alu lo_hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+894,"Top core Execute vec_alu hi_lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+896,"Top core Execute vec_alu hi_lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+898,"Top core Execute vec_alu hi_hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+900,"Top core Execute vec_alu hi_hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+585,"Top core Execute vec_alu lo_26", false,-1, 63,0);
        tracep->declQuad(c+587,"Top core Execute vec_alu hi_26", false,-1, 63,0);
        tracep->declQuad(c+589,"Top core Execute vec_alu lo_lo_15", false,-1, 63,0);
        tracep->declQuad(c+591,"Top core Execute vec_alu lo_hi_15", false,-1, 63,0);
        tracep->declQuad(c+593,"Top core Execute vec_alu hi_lo_15", false,-1, 63,0);
        tracep->declQuad(c+595,"Top core Execute vec_alu hi_hi_15", false,-1, 63,0);
        tracep->declQuad(c+597,"Top core Execute vec_alu lo_lo_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+599,"Top core Execute vec_alu lo_lo_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+601,"Top core Execute vec_alu lo_lo_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+603,"Top core Execute vec_alu lo_lo_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+605,"Top core Execute vec_alu lo_hi_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+607,"Top core Execute vec_alu lo_hi_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+609,"Top core Execute vec_alu lo_hi_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+611,"Top core Execute vec_alu lo_hi_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+613,"Top core Execute vec_alu hi_lo_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+615,"Top core Execute vec_alu hi_lo_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+617,"Top core Execute vec_alu hi_lo_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+619,"Top core Execute vec_alu hi_lo_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+621,"Top core Execute vec_alu hi_hi_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+623,"Top core Execute vec_alu hi_hi_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+625,"Top core Execute vec_alu hi_hi_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+627,"Top core Execute vec_alu hi_hi_hi_hi_5", false,-1, 63,0);
        tracep->declArray(c+629,"Top core Execute vec_alu lo_28", false,-1, 511,0);
        tracep->declQuad(c+645,"Top core Execute vec_alu lo_lo_lo_11", false,-1, 63,0);
        tracep->declQuad(c+647,"Top core Execute vec_alu lo_lo_hi_11", false,-1, 63,0);
        tracep->declQuad(c+649,"Top core Execute vec_alu lo_hi_lo_11", false,-1, 63,0);
        tracep->declQuad(c+651,"Top core Execute vec_alu lo_hi_hi_11", false,-1, 63,0);
        tracep->declQuad(c+653,"Top core Execute vec_alu hi_lo_lo_11", false,-1, 63,0);
        tracep->declQuad(c+655,"Top core Execute vec_alu hi_lo_hi_11", false,-1, 63,0);
        tracep->declQuad(c+657,"Top core Execute vec_alu hi_hi_lo_11", false,-1, 63,0);
        tracep->declQuad(c+659,"Top core Execute vec_alu hi_hi_hi_11", false,-1, 63,0);
        tracep->declBus(c+441,"Top core Execute vec_config io_zimm", false,-1, 31,0);
        tracep->declBus(c+442,"Top core Execute vec_config io_rs1", false,-1, 4,0);
        tracep->declBus(c+159,"Top core Execute vec_config io_rd", false,-1, 4,0);
        tracep->declBus(c+927,"Top core Execute vec_config io_rs1_readdata", false,-1, 31,0);
        tracep->declBus(c+443,"Top core Execute vec_config io_current_vl", false,-1, 31,0);
        tracep->declBus(c+444,"Top core Execute vec_config io_lmul", false,-1, 31,0);
        tracep->declBus(c+708,"Top core Execute vec_config io_vl", false,-1, 31,0);
        tracep->declBus(c+159,"Top core Execute vec_config io_rd_out", false,-1, 4,0);
        tracep->declBus(c+910,"Top core Execute vec_config io_avl_o", false,-1, 31,0);
        tracep->declBus(c+160,"Top core Execute vec_config io_valmax_o", false,-1, 31,0);
        tracep->declBus(c+661,"Top core Execute vec_config vlmul", false,-1, 2,0);
        tracep->declBus(c+662,"Top core Execute vec_config vsew", false,-1, 2,0);
        tracep->declBit(c+663,"Top core Execute vec_config lo_lo", false,-1);
        tracep->declBit(c+664,"Top core Execute vec_config lo_hi", false,-1);
        tracep->declBit(c+665,"Top core Execute vec_config hi_lo", false,-1);
        tracep->declBit(c+666,"Top core Execute vec_config hi_hi", false,-1);
        tracep->declQuad(c+667,"Top core Execute vec_config valmax", false,-1, 35,0);
        tracep->declQuad(c+968,"Top core Execute vec_config avl", false,-1, 35,0);
        tracep->declBit(c+1031,"Top core Execute MDU clock", false,-1);
        tracep->declBit(c+1032,"Top core Execute MDU reset", false,-1);
        tracep->declBus(c+928,"Top core Execute MDU io_src_a", false,-1, 31,0);
        tracep->declBus(c+929,"Top core Execute MDU io_src_b", false,-1, 31,0);
        tracep->declBus(c+445,"Top core Execute MDU io_op", false,-1, 4,0);
        tracep->declBit(c+446,"Top core Execute MDU io_valid", false,-1);
        tracep->declBit(c+447,"Top core Execute MDU io_ready", false,-1);
        tracep->declBit(c+448,"Top core Execute MDU io_output_valid", false,-1);
        tracep->declBus(c+715,"Top core Execute MDU io_output_bits", false,-1, 31,0);
        tracep->declQuad(c+970,"Top core Execute MDU result", false,-1, 63,0);
        tracep->declBit(c+447,"Top core Execute MDU r_ready", false,-1);
        tracep->declBus(c+669,"Top core Execute MDU r_counter", false,-1, 5,0);
        tracep->declBus(c+670,"Top core Execute MDU r_dividend", false,-1, 31,0);
        tracep->declBus(c+671,"Top core Execute MDU r_quotient", false,-1, 31,0);
        tracep->declBit(c+672,"Top core Execute MDU is_div_rem_u", false,-1);
        tracep->declBit(c+673,"Top core Execute MDU is_div_rem_s", false,-1);
        tracep->declBit(c+1031,"Top core MEM clock", false,-1);
        tracep->declBit(c+1032,"Top core MEM reset", false,-1);
        tracep->declBus(c+46,"Top core MEM io_aluResultIn", false,-1, 31,0);
        tracep->declBus(c+162,"Top core MEM io_writeData", false,-1, 31,0);
        tracep->declBit(c+21,"Top core MEM io_writeEnable", false,-1);
        tracep->declBit(c+40,"Top core MEM io_readEnable", false,-1);
        tracep->declBus(c+903,"Top core MEM io_readData", false,-1, 31,0);
        tracep->declBus(c+163,"Top core MEM io_f3", false,-1, 2,0);
        tracep->declBit(c+17,"Top core MEM io_dccmReq_valid", false,-1);
        tracep->declBus(c+18,"Top core MEM io_dccmReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top core MEM io_dccmReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top core MEM io_dccmReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top core MEM io_dccmReq_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top core MEM io_dccmRsp_valid", false,-1);
        tracep->declBus(c+1,"Top core MEM io_dccmRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+674,"Top core MEM offset", false,-1, 1,0);
        tracep->declBus(c+675,"Top core MEM funct3", false,-1, 2,0);
        tracep->declBus(c+676,"Top core MEM offsetSW", false,-1, 1,0);
        tracep->declBus(c+677,"Top core MEM wdata_0", false,-1, 7,0);
        tracep->declBus(c+678,"Top core MEM wdata_1", false,-1, 7,0);
        tracep->declBus(c+679,"Top core MEM wdata_2", false,-1, 7,0);
        tracep->declBus(c+680,"Top core MEM wdata_3", false,-1, 7,0);
        tracep->declBus(c+681,"Top core MEM lo", false,-1, 15,0);
        tracep->declBus(c+682,"Top core MEM hi", false,-1, 15,0);
        tracep->declBus(c+972,"Top core MEM rdata", false,-1, 31,0);
        tracep->declBus(c+973,"Top core MEM hi_1", false,-1, 23,0);
        tracep->declBus(c+974,"Top core MEM lo_1", false,-1, 7,0);
        tracep->declBus(c+975,"Top core MEM hi_2", false,-1, 23,0);
        tracep->declBus(c+976,"Top core MEM lo_2", false,-1, 7,0);
        tracep->declBus(c+977,"Top core MEM hi_3", false,-1, 23,0);
        tracep->declBus(c+978,"Top core MEM lo_3", false,-1, 7,0);
        tracep->declBus(c+979,"Top core MEM hi_4", false,-1, 23,0);
        tracep->declBus(c+980,"Top core MEM lo_4", false,-1, 7,0);
        tracep->declBus(c+981,"Top core MEM lo_9", false,-1, 15,0);
        tracep->declBus(c+982,"Top core MEM lo_10", false,-1, 15,0);
        tracep->declBus(c+983,"Top core MEM lo_11", false,-1, 15,0);
        tracep->declBus(c+984,"Top core MEM hi_12", false,-1, 15,0);
        tracep->declBus(c+985,"Top core MEM hi_13", false,-1, 15,0);
        tracep->declBus(c+986,"Top core MEM hi_14", false,-1, 15,0);
        tracep->declBit(c+1031,"Top core pc clock", false,-1);
        tracep->declBit(c+1032,"Top core pc reset", false,-1);
        tracep->declBus(c+1024,"Top core pc io_in", false,-1, 31,0);
        tracep->declBit(c+1025,"Top core pc io_halt", false,-1);
        tracep->declBus(c+164,"Top core pc io_out", false,-1, 31,0);
        tracep->declBus(c+1039,"Top core pc io_pc4", false,-1, 31,0);
        tracep->declBus(c+1040,"Top core pc io_pc2", false,-1, 31,0);
        tracep->declBus(c+164,"Top core pc pc_reg", false,-1, 31,0);
        tracep->declBit(c+1031,"Top core Realigner clock", false,-1);
        tracep->declBit(c+1032,"Top core Realigner reset", false,-1);
        tracep->declBus(c+1024,"Top core Realigner io_ral_address_i", false,-1, 31,0);
        tracep->declBus(c+904,"Top core Realigner io_ral_instruction_i", false,-1, 31,0);
        tracep->declBit(c+909,"Top core Realigner io_ral_jmp", false,-1);
        tracep->declBus(c+1023,"Top core Realigner io_ral_address_o", false,-1, 31,0);
        tracep->declBus(c+911,"Top core Realigner io_ral_instruction_o", false,-1, 31,0);
        tracep->declBit(c+165,"Top core Realigner io_ral_halt_o", false,-1);
        tracep->declBit(c+1026,"Top core Realigner addri", false,-1);
        tracep->declBus(c+683,"Top core Realigner lhw_reg", false,-1, 15,0);
        tracep->declBus(c+987,"Top core Realigner hi", false,-1, 15,0);
        tracep->declBus(c+902,"Top core Realigner conc_instr", false,-1, 31,0);
        tracep->declBus(c+684,"Top core Realigner stateReg", false,-1, 1,0);
        tracep->declBit(c+1042,"Top core Realigner pc4_sel", false,-1);
        tracep->declBit(c+685,"Top core Realigner conc_sel", false,-1);
        tracep->declBus(c+911,"Top core CompressedDecoder io_instruction_i", false,-1, 31,0);
        tracep->declBit(c+912,"Top core CompressedDecoder io_is_comp", false,-1);
        tracep->declBus(c+913,"Top core CompressedDecoder io_instruction_o", false,-1, 31,0);
        tracep->declBus(c+988,"Top core CompressedDecoder hi_hi_hi_lo", false,-1, 3,0);
        tracep->declBus(c+989,"Top core CompressedDecoder hi_hi_lo", false,-1, 1,0);
        tracep->declBit(c+990,"Top core CompressedDecoder hi_lo_hi_hi", false,-1);
        tracep->declBit(c+991,"Top core CompressedDecoder hi_lo_hi_lo", false,-1);
        tracep->declBus(c+992,"Top core CompressedDecoder lo_lo_hi", false,-1, 2,0);
        tracep->declBus(c+993,"Top core CompressedDecoder hi_hi_lo_1", false,-1, 2,0);
        tracep->declBus(c+994,"Top core CompressedDecoder lo_hi_hi_hi", false,-1, 2,0);
        tracep->declBit(c+995,"Top core CompressedDecoder hi_hi_lo_2", false,-1);
        tracep->declBus(c+996,"Top core CompressedDecoder lo_hi_lo", false,-1, 1,0);
        tracep->declBus(c+997,"Top core CompressedDecoder lo_2", false,-1, 17,0);
        tracep->declBus(c+998,"Top core CompressedDecoder hi_hi_hi_3", false,-1, 5,0);
        tracep->declBus(c+999,"Top core CompressedDecoder hi_lo_hi_3", false,-1, 4,0);
        tracep->declBus(c+1000,"Top core CompressedDecoder hi_lo_lo", false,-1, 4,0);
        tracep->declBit(c+1001,"Top core CompressedDecoder hi_hi_hi_lo_3", false,-1);
        tracep->declBus(c+1002,"Top core CompressedDecoder hi_hi_lo_4", false,-1, 1,0);
        tracep->declBit(c+1003,"Top core CompressedDecoder hi_lo_hi_lo_2", false,-1);
        tracep->declBit(c+1004,"Top core CompressedDecoder hi_lo_lo_1", false,-1);
        tracep->declBit(c+1005,"Top core CompressedDecoder lo_hi_hi_hi_2", false,-1);
        tracep->declBus(c+1006,"Top core CompressedDecoder lo_hi_hi_lo", false,-1, 2,0);
        tracep->declBus(c+1007,"Top core CompressedDecoder lo_hi_lo_2", false,-1, 8,0);
        tracep->declBit(c+1008,"Top core CompressedDecoder lo_lo_hi_lo", false,-1);
        tracep->declBus(c+1009,"Top core CompressedDecoder lo_4", false,-1, 24,0);
        tracep->declBus(c+1010,"Top core CompressedDecoder hi_hi_7", false,-1, 14,0);
        tracep->declBus(c+1011,"Top core CompressedDecoder hi_hi_hi_hi_4", false,-1, 2,0);
        tracep->declBus(c+1012,"Top core CompressedDecoder hi_hi_hi_lo_5", false,-1, 1,0);
        tracep->declBit(c+1013,"Top core CompressedDecoder hi_hi_hi_lo_6", false,-1);
        tracep->declBus(c+1014,"Top core CompressedDecoder hi_hi_hi_hi_9", false,-1, 3,0);
        tracep->declBit(c+1015,"Top core CompressedDecoder lo_hi_hi_lo_2", false,-1);
        tracep->declBus(c+1016,"Top core CompressedDecoder lo_16", false,-1, 14,0);
        tracep->declBus(c+1017,"Top core CompressedDecoder hi_hi_hi_lo_11", false,-1, 1,0);
        tracep->declBus(c+1018,"Top core CompressedDecoder hi_lo_hi_13", false,-1, 2,0);
        tracep->declBus(c+1019,"Top core CompressedDecoder hi_hi_hi_lo_12", false,-1, 1,0);
        tracep->declBus(c+1020,"Top core CompressedDecoder lo_hi_lo_9", false,-1, 2,0);
        tracep->declBit(c+1031,"Top dmem clock", false,-1);
        tracep->declBit(c+1032,"Top dmem reset", false,-1);
        tracep->declBit(c+17,"Top dmem io_req_valid", false,-1);
        tracep->declBus(c+18,"Top dmem io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+19,"Top dmem io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+20,"Top dmem io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+21,"Top dmem io_req_bits_isWrite", false,-1);
        tracep->declBit(c+22,"Top dmem io_rsp_valid", false,-1);
        tracep->declBus(c+1,"Top dmem io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top dmem sram_clk_i", false,-1);
        tracep->declBit(c+1032,"Top dmem sram_rst_i", false,-1);
        tracep->declBit(c+1043,"Top dmem sram_csb_i", false,-1);
        tracep->declBit(c+1044,"Top dmem sram_we_i", false,-1);
        tracep->declBus(c+20,"Top dmem sram_wmask_i", false,-1, 3,0);
        tracep->declBus(c+686,"Top dmem sram_addr_i", false,-1, 12,0);
        tracep->declBus(c+19,"Top dmem sram_wdata_i", false,-1, 31,0);
        tracep->declBus(c+1,"Top dmem sram_rdata_o", false,-1, 31,0);
        tracep->declBit(c+22,"Top dmem validReg", false,-1);
        tracep->declBus(c+1052,"Top dmem sram IFILE_IN", false,-1, 0,0);
        tracep->declBit(c+1031,"Top dmem sram clk_i", false,-1);
        tracep->declBit(c+1032,"Top dmem sram rst_i", false,-1);
        tracep->declBit(c+1043,"Top dmem sram csb_i", false,-1);
        tracep->declBus(c+687,"Top dmem sram addr_i", false,-1, 11,0);
        tracep->declBus(c+19,"Top dmem sram wdata_i", false,-1, 31,0);
        tracep->declBus(c+20,"Top dmem sram wmask_i", false,-1, 3,0);
        tracep->declBit(c+1044,"Top dmem sram we_i", false,-1);
        tracep->declBus(c+1,"Top dmem sram rdata_o", false,-1, 31,0);
        tracep->declBit(c+3,"Top dmem sram csb", false,-1);
        tracep->declBus(c+4,"Top dmem sram addr_o", false,-1, 11,0);
        tracep->declBus(c+5,"Top dmem sram wdata_o", false,-1, 31,0);
        tracep->declBus(c+6,"Top dmem sram wmask_o", false,-1, 3,0);
        tracep->declBit(c+7,"Top dmem sram we_o", false,-1);
        tracep->declBus(c+1053,"Top dmem sram rdata_i", false,-1, 31,0);
        tracep->declBit(c+1045,"Top dmem sram rvalid", false,-1);
        tracep->declBus(c+1054,"Top dmem sram memory NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+1055,"Top dmem sram memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1056,"Top dmem sram memory ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1057,"Top dmem sram memory RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1058,"Top dmem sram memory DELAY", false,-1, 31,0);
        tracep->declBus(c+1051,"Top dmem sram memory IZERO", false,-1, 31,0);
        tracep->declBus(c+1052,"Top dmem sram memory IFILE", false,-1, 0,0);
        tracep->declBit(c+1031,"Top dmem sram memory clk0", false,-1);
        tracep->declBit(c+1043,"Top dmem sram memory csb0", false,-1);
        tracep->declBit(c+1044,"Top dmem sram memory web0", false,-1);
        tracep->declBus(c+20,"Top dmem sram memory wmask0", false,-1, 3,0);
        tracep->declBus(c+688,"Top dmem sram memory addr0", false,-1, 12,0);
        tracep->declBus(c+19,"Top dmem sram memory din0", false,-1, 31,0);
        tracep->declBus(c+1,"Top dmem sram memory dout0", false,-1, 31,0);
        tracep->declBit(c+1049,"Top dmem sram memory clk1", false,-1);
        tracep->declBit(c+1050,"Top dmem sram memory csb1", false,-1);
        tracep->declBus(c+1059,"Top dmem sram memory addr1", false,-1, 12,0);
        tracep->declBus(c+1060,"Top dmem sram memory dout1", false,-1, 31,0);
        tracep->declBit(c+689,"Top dmem sram memory csb0_reg", false,-1);
        tracep->declBit(c+690,"Top dmem sram memory web0_reg", false,-1);
        tracep->declBus(c+691,"Top dmem sram memory wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+692,"Top dmem sram memory addr0_reg", false,-1, 12,0);
        tracep->declBus(c+693,"Top dmem sram memory din0_reg", false,-1, 31,0);
        tracep->declBit(c+1061,"Top dmem sram memory csb1_reg", false,-1);
        tracep->declBus(c+1062,"Top dmem sram memory addr1_reg", false,-1, 12,0);
        tracep->declBus(c+1063,"Top dmem sram memory i", false,-1, 31,0);
        tracep->declBit(c+1031,"Top imem clock", false,-1);
        tracep->declBit(c+1032,"Top imem reset", false,-1);
        tracep->declBit(c+1021,"Top imem io_req_valid", false,-1);
        tracep->declBus(c+1022,"Top imem io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1047,"Top imem io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1048,"Top imem io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1049,"Top imem io_req_bits_isWrite", false,-1);
        tracep->declBit(c+23,"Top imem io_rsp_valid", false,-1);
        tracep->declBus(c+2,"Top imem io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1031,"Top imem sram_clk_i", false,-1);
        tracep->declBit(c+1032,"Top imem sram_rst_i", false,-1);
        tracep->declBit(c+1027,"Top imem sram_csb_i", false,-1);
        tracep->declBit(c+1021,"Top imem sram_we_i", false,-1);
        tracep->declBus(c+1048,"Top imem sram_wmask_i", false,-1, 3,0);
        tracep->declBus(c+1028,"Top imem sram_addr_i", false,-1, 12,0);
        tracep->declBus(c+1047,"Top imem sram_wdata_i", false,-1, 31,0);
        tracep->declBus(c+2,"Top imem sram_rdata_o", false,-1, 31,0);
        tracep->declBit(c+23,"Top imem validReg", false,-1);
        tracep->declArray(c+1064,"Top imem sram IFILE_IN", false,-1, 351,0);
        tracep->declBit(c+1031,"Top imem sram clk_i", false,-1);
        tracep->declBit(c+1032,"Top imem sram rst_i", false,-1);
        tracep->declBit(c+1027,"Top imem sram csb_i", false,-1);
        tracep->declBus(c+1029,"Top imem sram addr_i", false,-1, 11,0);
        tracep->declBus(c+1047,"Top imem sram wdata_i", false,-1, 31,0);
        tracep->declBus(c+1048,"Top imem sram wmask_i", false,-1, 3,0);
        tracep->declBit(c+1021,"Top imem sram we_i", false,-1);
        tracep->declBus(c+2,"Top imem sram rdata_o", false,-1, 31,0);
        tracep->declBit(c+8,"Top imem sram csb", false,-1);
        tracep->declBus(c+9,"Top imem sram addr_o", false,-1, 11,0);
        tracep->declBus(c+10,"Top imem sram wdata_o", false,-1, 31,0);
        tracep->declBus(c+11,"Top imem sram wmask_o", false,-1, 3,0);
        tracep->declBit(c+12,"Top imem sram we_o", false,-1);
        tracep->declBus(c+1075,"Top imem sram rdata_i", false,-1, 31,0);
        tracep->declBit(c+1046,"Top imem sram rvalid", false,-1);
        tracep->declBus(c+1054,"Top imem sram memory NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+1055,"Top imem sram memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1056,"Top imem sram memory ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1057,"Top imem sram memory RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1058,"Top imem sram memory DELAY", false,-1, 31,0);
        tracep->declBus(c+1051,"Top imem sram memory IZERO", false,-1, 31,0);
        tracep->declArray(c+1064,"Top imem sram memory IFILE", false,-1, 351,0);
        tracep->declBit(c+1031,"Top imem sram memory clk0", false,-1);
        tracep->declBit(c+1027,"Top imem sram memory csb0", false,-1);
        tracep->declBit(c+1021,"Top imem sram memory web0", false,-1);
        tracep->declBus(c+1048,"Top imem sram memory wmask0", false,-1, 3,0);
        tracep->declBus(c+1030,"Top imem sram memory addr0", false,-1, 12,0);
        tracep->declBus(c+1047,"Top imem sram memory din0", false,-1, 31,0);
        tracep->declBus(c+2,"Top imem sram memory dout0", false,-1, 31,0);
        tracep->declBit(c+1049,"Top imem sram memory clk1", false,-1);
        tracep->declBit(c+1050,"Top imem sram memory csb1", false,-1);
        tracep->declBus(c+1059,"Top imem sram memory addr1", false,-1, 12,0);
        tracep->declBus(c+1076,"Top imem sram memory dout1", false,-1, 31,0);
        tracep->declBit(c+694,"Top imem sram memory csb0_reg", false,-1);
        tracep->declBit(c+695,"Top imem sram memory web0_reg", false,-1);
        tracep->declBus(c+696,"Top imem sram memory wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+697,"Top imem sram memory addr0_reg", false,-1, 12,0);
        tracep->declBus(c+698,"Top imem sram memory din0_reg", false,-1, 31,0);
        tracep->declBit(c+1077,"Top imem sram memory csb1_reg", false,-1);
        tracep->declBus(c+1078,"Top imem sram memory addr1_reg", false,-1, 12,0);
        tracep->declBus(c+1079,"Top imem sram memory i", false,-1, 31,0);
        tracep->declBit(c+1031,"Top Tracer clock", false,-1);
        tracep->declBit(c+1032,"Top Tracer reset", false,-1);
        tracep->declBus(c+24,"Top Tracer io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+25,"Top Tracer io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+26,"Top Tracer io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+27,"Top Tracer io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+700,"Top Tracer io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+28,"Top Tracer io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+29,"Top Tracer io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+903,"Top Tracer io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+30,"Top Tracer io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+31,"Top Tracer io_rvfiBool_0", false,-1);
        tracep->declBus(c+32,"Top Tracer io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+33,"Top Tracer io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+34,"Top Tracer io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+699,"Top Tracer clkCycle", false,-1, 31,0);
    }
}

void VTop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VTop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VTop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp1047[4];
    WData/*127:0*/ __Vtemp1055[4];
    WData/*127:0*/ __Vtemp1063[4];
    WData/*127:0*/ __Vtemp1080[4];
    WData/*351:0*/ __Vtemp1081[11];
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o),32);
        tracep->fullIData(oldp+2,(vlTOPp->Top__DOT__imem__DOT__sram_rdata_o),32);
        tracep->fullBit(oldp+3,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__csb));
        tracep->fullSData(oldp+4,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
        tracep->fullIData(oldp+5,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        tracep->fullCData(oldp+6,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        tracep->fullBit(oldp+7,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__we_o));
        tracep->fullBit(oldp+8,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__csb));
        tracep->fullSData(oldp+9,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
        tracep->fullIData(oldp+10,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        tracep->fullCData(oldp+11,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        tracep->fullBit(oldp+12,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__we_o));
        tracep->fullWData(oldp+13,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
        tracep->fullBit(oldp+17,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        tracep->fullIData(oldp+18,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                              >> 2U))),32);
        tracep->fullIData(oldp+19,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        tracep->fullCData(oldp+20,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        tracep->fullBit(oldp+21,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        tracep->fullBit(oldp+22,(vlTOPp->Top__DOT__dmem__DOT__validReg));
        tracep->fullBit(oldp+23,(vlTOPp->Top__DOT__imem__DOT__validReg));
        tracep->fullIData(oldp+24,(vlTOPp->Top__DOT__core__DOT__mem_reg_pc),32);
        tracep->fullIData(oldp+25,(vlTOPp->Top__DOT__core__DOT__REG___05F3),32);
        tracep->fullIData(oldp+26,(vlTOPp->Top__DOT__core__DOT__mem_reg_ins),32);
        tracep->fullIData(oldp+27,(vlTOPp->Top__DOT__core__DOT__REG_5),32);
        tracep->fullIData(oldp+28,(vlTOPp->Top__DOT__core__DOT__REG_3_1),32);
        tracep->fullIData(oldp+29,(vlTOPp->Top__DOT__core__DOT__REG_4_1),32);
        tracep->fullIData(oldp+30,(vlTOPp->Top__DOT__core__DOT__REG_6),32);
        tracep->fullBit(oldp+31,(vlTOPp->Top__DOT__core__DOT__REG_7_3));
        tracep->fullCData(oldp+32,(vlTOPp->Top__DOT__core__DOT__mem_reg_wra),5);
        tracep->fullCData(oldp+33,(vlTOPp->Top__DOT__core__DOT__REG_1_2),5);
        tracep->fullCData(oldp+34,(vlTOPp->Top__DOT__core__DOT__REG_2_2),5);
        tracep->fullIData(oldp+35,(((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                      << 5U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                 << 4U) 
                                                | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                   << 3U))) 
                                    | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                        << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
        tracep->fullIData(oldp+36,(vlTOPp->Top__DOT__core__DOT__if_reg_ins),32);
        tracep->fullIData(oldp+37,(vlTOPp->Top__DOT__core__DOT__if_reg_pc),32);
        tracep->fullBit(oldp+38,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
        tracep->fullBit(oldp+39,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead));
        tracep->fullBit(oldp+40,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead));
        tracep->fullCData(oldp+41,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                             >> 7U))),5);
        tracep->fullCData(oldp+42,((0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U))),5);
        tracep->fullBit(oldp+43,((0x63U == (0x7fU & vlTOPp->Top__DOT__core__DOT__id_reg_ins))));
        tracep->fullIData(oldp+44,(vlTOPp->Top__DOT__core__DOT__ex_reg_ins),32);
        tracep->fullIData(oldp+45,(vlTOPp->Top__DOT__core__DOT__id_reg_ins),32);
        tracep->fullIData(oldp+46,(vlTOPp->Top__DOT__core__DOT__ex_reg_result),32);
        tracep->fullBit(oldp+47,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite));
        tracep->fullBit(oldp+48,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
        tracep->fullBit(oldp+49,(vlTOPp->Top__DOT__core__DOT__id_reg_is_csr));
        tracep->fullBit(oldp+50,(vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr));
        tracep->fullBit(oldp+51,(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr));
        tracep->fullIData(oldp+52,(vlTOPp->Top__DOT__core__DOT__id_reg_csr_data),32);
        tracep->fullIData(oldp+53,(vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data),32);
        tracep->fullIData(oldp+54,(vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data),32);
        tracep->fullIData(oldp+55,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
        tracep->fullCData(oldp+56,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 7U))),5);
        tracep->fullCData(oldp+57,(vlTOPp->Top__DOT__core__DOT__IDecode_io_func7),7);
        tracep->fullCData(oldp+58,((7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+59,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x1aU))),6);
        tracep->fullBit(oldp+60,(((0x33U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28))));
        tracep->fullCData(oldp+61,(((0x33U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                     ? 0U : ((0x13U 
                                              == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                              ? 0U : 
                                             ((0x73U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((3U 
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
        tracep->fullBit(oldp+62,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                   & (0x13U != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x73U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((3U == 
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
        tracep->fullBit(oldp+63,(((0x33U != (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & (3U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))));
        tracep->fullBit(oldp+64,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                                   & (0x13U != vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x33U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x13U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((3U != 
                                               (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                              & (0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))))));
        tracep->fullBit(oldp+65,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
        tracep->fullCData(oldp+66,(((0x33U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                     ? 2U : ((0x13U 
                                              == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                              ? 2U : 
                                             ((0x73U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                               ? 2U
                                               : 0U)))),2);
        tracep->fullCData(oldp+67,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
        tracep->fullBit(oldp+68,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
        tracep->fullBit(oldp+69,(((0x57U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & (((7U == (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                      & ((0U == (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x1eU))) 
                                         | (1U == (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU))))) 
                                     | (((7U == (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         & (2U == (3U 
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
                                           & ((0U != 
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
        tracep->fullCData(oldp+70,(((0x57U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                     ? (((7U == (7U 
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
                                         ? 3U : (((7U 
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
                                     : 0U)),4);
        tracep->fullCData(oldp+71,(((0x57U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                    & ((~ ((7U == (7U 
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
                                                     >> 0x1eU)))))) 
                                       & (((7U == (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU))) 
                                           & (2U == 
                                              (3U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1eU)))) 
                                          | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14))))),5);
        tracep->fullBit(oldp+72,(((0x57U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & (((7U == (7U & 
                                              (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                      & ((0U == (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x1eU))) 
                                         | (1U == (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU))))) 
                                     | (((7U == (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         & (2U == (3U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1eU)))) 
                                        | ((7U == (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU))) 
                                           & (3U == 
                                              (3U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1eU)))))))));
        tracep->fullCData(oldp+73,(((0x57U != (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                    & ((0x27U != (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & (7U == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))),4);
        tracep->fullBit(oldp+74,(((0x57U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (0x27U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
        tracep->fullWData(oldp+75,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
        tracep->fullCData(oldp+79,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
        tracep->fullBit(oldp+80,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write));
        tracep->fullCData(oldp+81,(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v),4);
        tracep->fullCData(oldp+82,(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v),4);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1047[0U] = 0U;
            __Vtemp1047[1U] = 0U;
            __Vtemp1047[2U] = 0U;
            __Vtemp1047[3U] = 0U;
        } else {
            __Vtemp1047[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                    : 0U));
            __Vtemp1047[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                    : 0U));
            __Vtemp1047[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                    : 0U));
            __Vtemp1047[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+83,(__Vtemp1047),128);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1055[0U] = 0U;
            __Vtemp1055[1U] = 0U;
            __Vtemp1055[2U] = 0U;
            __Vtemp1055[3U] = 0U;
        } else {
            __Vtemp1055[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                    : 0U));
            __Vtemp1055[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                    : 0U));
            __Vtemp1055[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                    : 0U));
            __Vtemp1055[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+87,(__Vtemp1055),128);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1063[0U] = 0U;
            __Vtemp1063[1U] = 0U;
            __Vtemp1063[2U] = 0U;
            __Vtemp1063[3U] = 0U;
        } else {
            __Vtemp1063[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                    : 0U));
            __Vtemp1063[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                    : 0U));
            __Vtemp1063[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                    : 0U));
            __Vtemp1063[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+91,(__Vtemp1063),128);
        tracep->fullCData(oldp+95,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+96,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+97,(((0xfffff800U & 
                                     ((- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))) 
                                      << 0xbU)) | (0x7ffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))),32);
        tracep->fullIData(oldp+98,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU))),32);
        tracep->fullSData(oldp+99,(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype),11);
        tracep->fullSData(oldp+100,((0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
        tracep->fullIData(oldp+101,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl),32);
        tracep->fullBit(oldp+102,(vlTOPp->Top__DOT__core__DOT__mem_reg_vset));
        tracep->fullIData(oldp+103,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
        tracep->fullCData(oldp+104,(((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((0x73U 
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
        tracep->fullBit(oldp+105,((1U & ((~ (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
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
        tracep->fullBit(oldp+106,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
        tracep->fullBit(oldp+107,(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall));
        tracep->fullIData(oldp+108,(((3U == (0xfffU 
                                             & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                      ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                      : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25)),32);
        tracep->fullBit(oldp+109,((0x73U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
        tracep->fullIData(oldp+110,(vlTOPp->Top__DOT__core__DOT__id_reg_imm),32);
        tracep->fullIData(oldp+111,(vlTOPp->Top__DOT__core__DOT__id_reg_rd1),32);
        tracep->fullIData(oldp+112,(vlTOPp->Top__DOT__core__DOT__id_reg_rd2),32);
        tracep->fullIData(oldp+113,(vlTOPp->Top__DOT__core__DOT__id_reg_pc),32);
        tracep->fullCData(oldp+114,(vlTOPp->Top__DOT__core__DOT__id_reg_f7),7);
        tracep->fullCData(oldp+115,(vlTOPp->Top__DOT__core__DOT__id_reg_f3),3);
        tracep->fullBit(oldp+116,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        tracep->fullCData(oldp+117,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        tracep->fullCData(oldp+118,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        tracep->fullCData(oldp+119,((0x3fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0x1aU))),6);
        tracep->fullCData(oldp+120,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
        tracep->fullCData(oldp+121,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
        tracep->fullBit(oldp+122,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
        tracep->fullBit(oldp+123,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel));
        tracep->fullBit(oldp+124,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load));
        tracep->fullBit(oldp+125,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
        tracep->fullBit(oldp+126,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
        tracep->fullWData(oldp+127,(vlTOPp->Top__DOT__core__DOT__id_reg_v1_data),128);
        tracep->fullWData(oldp+131,(vlTOPp->Top__DOT__core__DOT__id_reg_v2_data),128);
        tracep->fullIData(oldp+135,(vlTOPp->Top__DOT__core__DOT__Execute_io_vl),32);
        tracep->fullIData(oldp+136,(vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out),32);
        tracep->fullWData(oldp+137,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data),128);
        tracep->fullBit(oldp+141,(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
        tracep->fullBit(oldp+142,(vlTOPp->Top__DOT__core__DOT__Execute_io_vta));
        tracep->fullBit(oldp+143,((1U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                         >> 0x19U))));
        tracep->fullWData(oldp+144,(vlTOPp->Top__DOT__core__DOT__id_reg_v0_data),128);
        tracep->fullCData(oldp+148,(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew),3);
        tracep->fullIData(oldp+149,(vlTOPp->Top__DOT__core__DOT__id_reg_vtype),32);
        tracep->fullIData(oldp+150,(vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
        tracep->fullWData(oldp+151,(vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
        tracep->fullCData(oldp+155,(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr),5);
        tracep->fullCData(oldp+156,(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr),5);
        tracep->fullCData(oldp+157,(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr),5);
        tracep->fullBit(oldp+158,(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
        tracep->fullCData(oldp+159,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
        tracep->fullIData(oldp+160,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
        tracep->fullBit(oldp+161,(vlTOPp->Top__DOT__core__DOT__Execute_io_stall));
        tracep->fullIData(oldp+162,(vlTOPp->Top__DOT__core__DOT__ex_reg_wd),32);
        tracep->fullCData(oldp+163,((7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                           >> 0xcU))),3);
        tracep->fullIData(oldp+164,(vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        tracep->fullBit(oldp+165,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        tracep->fullCData(oldp+166,(vlTOPp->Top__DOT__core__DOT__id_reg_wra),5);
        tracep->fullCData(oldp+167,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        tracep->fullBit(oldp+168,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
        tracep->fullSData(oldp+169,(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm),11);
        tracep->fullCData(oldp+170,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr),5);
        tracep->fullCData(oldp+171,(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v),4);
        tracep->fullCData(oldp+172,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
        tracep->fullCData(oldp+173,(vlTOPp->Top__DOT__core__DOT__ex_reg_wra),5);
        tracep->fullCData(oldp+174,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        tracep->fullIData(oldp+175,(vlTOPp->Top__DOT__core__DOT__ex_reg_pc),32);
        tracep->fullIData(oldp+176,(vlTOPp->Top__DOT__core__DOT__ex_reg_vl),32);
        tracep->fullCData(oldp+177,(vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v),4);
        tracep->fullBit(oldp+178,(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
        tracep->fullSData(oldp+179,(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype),11);
        tracep->fullIData(oldp+180,(vlTOPp->Top__DOT__core__DOT__mem_reg_result),32);
        tracep->fullCData(oldp+181,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        tracep->fullCData(oldp+182,(vlTOPp->Top__DOT__core__DOT__lmul),3);
        tracep->fullIData(oldp+183,(vlTOPp->Top__DOT__core__DOT__lmul_reg),32);
        tracep->fullIData(oldp+184,(vlTOPp->Top__DOT__core__DOT__vlmul_count),32);
        tracep->fullIData(oldp+185,(vlTOPp->Top__DOT__core__DOT__REG___05F0),32);
        tracep->fullIData(oldp+186,(vlTOPp->Top__DOT__core__DOT__REG___05F1),32);
        tracep->fullIData(oldp+187,(vlTOPp->Top__DOT__core__DOT__REG___05F2),32);
        tracep->fullCData(oldp+188,(vlTOPp->Top__DOT__core__DOT__REG_1_0),5);
        tracep->fullCData(oldp+189,(vlTOPp->Top__DOT__core__DOT__REG_1_1),5);
        tracep->fullCData(oldp+190,(vlTOPp->Top__DOT__core__DOT__REG_2_0),5);
        tracep->fullCData(oldp+191,(vlTOPp->Top__DOT__core__DOT__REG_2_1),5);
        tracep->fullIData(oldp+192,(vlTOPp->Top__DOT__core__DOT__REG_3_0),32);
        tracep->fullIData(oldp+193,(vlTOPp->Top__DOT__core__DOT__REG_4_0),32);
        tracep->fullBit(oldp+194,(vlTOPp->Top__DOT__core__DOT__REG_7_0));
        tracep->fullBit(oldp+195,(vlTOPp->Top__DOT__core__DOT__REG_7_1));
        tracep->fullBit(oldp+196,(vlTOPp->Top__DOT__core__DOT__REG_7_2));
        tracep->fullSData(oldp+197,((0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))),12);
        tracep->fullBit(oldp+198,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
        tracep->fullCData(oldp+199,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
        tracep->fullBit(oldp+200,(((0x33U == (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x13U == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x73U == 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((3U == 
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
        tracep->fullBit(oldp+201,(((0x33U != (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
                                             (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                            & (0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))))));
        tracep->fullBit(oldp+202,(((0x57U != (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x27U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & (7U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
        tracep->fullBit(oldp+203,(((0x57U != (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   & (0x27U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
        tracep->fullBit(oldp+204,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
        tracep->fullBit(oldp+205,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
        tracep->fullCData(oldp+206,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
        tracep->fullIData(oldp+207,(((0U == (0x1fU 
                                             & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                      ? 0U : ((0x1fU 
                                               == (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                               ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31
                                               : ((0x1eU 
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
        tracep->fullIData(oldp+208,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
        tracep->fullIData(oldp+209,(((((0x40000000U 
                                        & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                        ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+210,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
        tracep->fullCData(oldp+211,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+212,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        tracep->fullBit(oldp+213,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        tracep->fullBit(oldp+214,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        tracep->fullBit(oldp+215,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        tracep->fullBit(oldp+216,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        tracep->fullCData(oldp+217,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        tracep->fullCData(oldp+218,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                      << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
        tracep->fullIData(oldp+219,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                      << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        tracep->fullIData(oldp+220,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        tracep->fullIData(oldp+221,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        tracep->fullIData(oldp+222,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        tracep->fullIData(oldp+223,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        tracep->fullIData(oldp+224,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        tracep->fullBit(oldp+225,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        tracep->fullBit(oldp+226,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        tracep->fullCData(oldp+227,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        tracep->fullBit(oldp+228,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        tracep->fullBit(oldp+229,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        tracep->fullSData(oldp+230,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                      << 7U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                << 3U))),11);
        tracep->fullIData(oldp+231,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                      << 0x15U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                    << 0x11U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                       << 0xbU) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                          << 7U) 
                                                         | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                            << 3U)))))),32);
        tracep->fullIData(oldp+232,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                      << 4U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                 << 3U) 
                                                | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
        tracep->fullIData(oldp+233,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        tracep->fullIData(oldp+234,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
        tracep->fullIData(oldp+235,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        tracep->fullBit(oldp+236,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
        tracep->fullBit(oldp+237,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
        tracep->fullBit(oldp+238,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                      & (~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                   & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
        tracep->fullBit(oldp+239,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
        tracep->fullBit(oldp+240,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
        tracep->fullBit(oldp+241,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                   & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        tracep->fullCData(oldp+242,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x1eU))),2);
        tracep->fullCData(oldp+243,((0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)),7);
        tracep->fullIData(oldp+244,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
        tracep->fullIData(oldp+245,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
        tracep->fullIData(oldp+246,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
        tracep->fullIData(oldp+247,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
        tracep->fullIData(oldp+248,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
        tracep->fullIData(oldp+249,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
        tracep->fullIData(oldp+250,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
        tracep->fullIData(oldp+251,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
        tracep->fullIData(oldp+252,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
        tracep->fullIData(oldp+253,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
        tracep->fullIData(oldp+254,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
        tracep->fullIData(oldp+255,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
        tracep->fullIData(oldp+256,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
        tracep->fullIData(oldp+257,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
        tracep->fullIData(oldp+258,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
        tracep->fullIData(oldp+259,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
        tracep->fullIData(oldp+260,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
        tracep->fullIData(oldp+261,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
        tracep->fullIData(oldp+262,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
        tracep->fullIData(oldp+263,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
        tracep->fullIData(oldp+264,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
        tracep->fullIData(oldp+265,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
        tracep->fullIData(oldp+266,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
        tracep->fullIData(oldp+267,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
        tracep->fullIData(oldp+268,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
        tracep->fullIData(oldp+269,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
        tracep->fullIData(oldp+270,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
        tracep->fullIData(oldp+271,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
        tracep->fullIData(oldp+272,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
        tracep->fullIData(oldp+273,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
        tracep->fullIData(oldp+274,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
        tracep->fullIData(oldp+275,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
        tracep->fullWData(oldp+276,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
        tracep->fullWData(oldp+280,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
        tracep->fullWData(oldp+284,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
        tracep->fullWData(oldp+288,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
        tracep->fullWData(oldp+292,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
        tracep->fullWData(oldp+296,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
        tracep->fullWData(oldp+300,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
        tracep->fullWData(oldp+304,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
        tracep->fullWData(oldp+308,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
        tracep->fullWData(oldp+312,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
        tracep->fullWData(oldp+316,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
        tracep->fullWData(oldp+320,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
        tracep->fullWData(oldp+324,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
        tracep->fullWData(oldp+328,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
        tracep->fullWData(oldp+332,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
        tracep->fullWData(oldp+336,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
        tracep->fullWData(oldp+340,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
        tracep->fullWData(oldp+344,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
        tracep->fullWData(oldp+348,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
        tracep->fullWData(oldp+352,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
        tracep->fullWData(oldp+356,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
        tracep->fullWData(oldp+360,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
        tracep->fullWData(oldp+364,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
        tracep->fullWData(oldp+368,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
        tracep->fullWData(oldp+372,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
        tracep->fullWData(oldp+376,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
        tracep->fullWData(oldp+380,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
        tracep->fullWData(oldp+384,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
        tracep->fullWData(oldp+388,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
        tracep->fullWData(oldp+392,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
        tracep->fullWData(oldp+396,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
        tracep->fullWData(oldp+400,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
        tracep->fullCData(oldp+404,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
        tracep->fullCData(oldp+405,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
        tracep->fullCData(oldp+406,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
        tracep->fullCData(oldp+407,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
        tracep->fullIData(oldp+408,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0xfffffU : 0U)),20);
        tracep->fullIData(oldp+409,((0xfffffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))),20);
        tracep->fullCData(oldp+410,((0x7fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x19U))),7);
        tracep->fullSData(oldp+411,(((0xfe0U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U)))),12);
        tracep->fullBit(oldp+412,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+413,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 7U))));
        tracep->fullCData(oldp+414,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x19U))),6);
        tracep->fullCData(oldp+415,((0xfU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 8U))),4);
        tracep->fullSData(oldp+416,(((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 8U)))))),12);
        tracep->fullIData(oldp+417,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x7ffffU : 0U)),19);
        tracep->fullCData(oldp+418,((0xffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+419,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))));
        tracep->fullSData(oldp+420,((0x3ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+421,(((0x80000U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x15U)))))),20);
        tracep->fullSData(oldp+422,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x7ffU : 0U)),11);
        tracep->fullIData(oldp+423,(((0x40000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x1fffffU : 0U)),21);
        tracep->fullSData(oldp+424,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))),11);
        tracep->fullCData(oldp+425,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
        tracep->fullBit(oldp+426,((1U & ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                         >> 5U))));
        tracep->fullCData(oldp+427,((0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                              >> 7U))),5);
        tracep->fullCData(oldp+428,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+429,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+430,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        tracep->fullCData(oldp+431,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        tracep->fullSData(oldp+432,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
        tracep->fullWData(oldp+433,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
        tracep->fullWData(oldp+437,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
        tracep->fullIData(oldp+441,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12),32);
        tracep->fullCData(oldp+442,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
        tracep->fullIData(oldp+443,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset)
                                      ? vlTOPp->Top__DOT__core__DOT__Execute_io_vl
                                      : 0U)),32);
        tracep->fullIData(oldp+444,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
        tracep->fullCData(oldp+445,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35),5);
        tracep->fullBit(oldp+446,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid));
        tracep->fullBit(oldp+447,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
        tracep->fullBit(oldp+448,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                   | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                        | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                       | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                          | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                                         & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))));
        tracep->fullIData(oldp+449,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG),32);
        tracep->fullIData(oldp+450,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1),32);
        tracep->fullCData(oldp+451,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2),3);
        tracep->fullBit(oldp+452,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
        tracep->fullCData(oldp+453,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4),6);
        tracep->fullCData(oldp+454,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5),6);
        tracep->fullCData(oldp+455,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
        tracep->fullCData(oldp+456,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+457,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+458,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+459,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
        tracep->fullCData(oldp+460,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+461,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+462,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+463,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
        tracep->fullCData(oldp+464,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+465,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+466,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+467,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
        tracep->fullCData(oldp+468,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+469,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+470,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x18U))),8);
        tracep->fullCData(oldp+471,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
        tracep->fullCData(oldp+472,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+473,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+474,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+475,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
        tracep->fullCData(oldp+476,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+477,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+478,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+479,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
        tracep->fullCData(oldp+480,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+481,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+482,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+483,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
        tracep->fullCData(oldp+484,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+485,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+486,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+487,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
        tracep->fullSData(oldp+488,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+489,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
        tracep->fullSData(oldp+490,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+491,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
        tracep->fullSData(oldp+492,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+493,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
        tracep->fullSData(oldp+494,((0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+495,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
        tracep->fullSData(oldp+496,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+497,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
        tracep->fullSData(oldp+498,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+499,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
        tracep->fullSData(oldp+500,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+501,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
        tracep->fullSData(oldp+502,((0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+503,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
        tracep->fullIData(oldp+504,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
        tracep->fullIData(oldp+505,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
        tracep->fullIData(oldp+506,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
        tracep->fullIData(oldp+507,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
        tracep->fullIData(oldp+508,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
        tracep->fullIData(oldp+509,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
        tracep->fullIData(oldp+510,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
        tracep->fullQData(oldp+511,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
        tracep->fullQData(oldp+513,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
        tracep->fullQData(oldp+515,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
        tracep->fullQData(oldp+517,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
        tracep->fullCData(oldp+519,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
        tracep->fullCData(oldp+520,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+521,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+522,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+523,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
        tracep->fullCData(oldp+524,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+525,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+526,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+527,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
        tracep->fullCData(oldp+528,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+529,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+530,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+531,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
        tracep->fullCData(oldp+532,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+533,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+534,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+535,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
        tracep->fullSData(oldp+536,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+537,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
        tracep->fullSData(oldp+538,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+539,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
        tracep->fullSData(oldp+540,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+541,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
        tracep->fullSData(oldp+542,((0xffffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+543,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
        tracep->fullIData(oldp+544,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
        tracep->fullIData(oldp+545,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
        tracep->fullIData(oldp+546,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
        tracep->fullQData(oldp+547,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
        tracep->fullQData(oldp+549,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
        tracep->fullQData(oldp+551,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_230))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_238))),64);
        tracep->fullQData(oldp+553,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                    >> 1U))) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_288))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_296))),64);
        tracep->fullIData(oldp+555,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                      : (((0U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (0U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U])) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_190) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_351))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_359))),32);
        tracep->fullIData(oldp+556,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                      : (((1U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (1U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                    >> 1U))) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_248) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_409))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_417))),32);
        tracep->fullIData(oldp+557,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                      : (((2U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (2U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                    >> 2U))) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_427) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_467))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_475))),32);
        tracep->fullIData(oldp+558,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                      : (((3U >= vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out) 
                                          & (3U < vlTOPp->Top__DOT__core__DOT__Execute_io_vl))
                                          ? ((1U & 
                                              (((~ 
                                                 (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x19U)) 
                                                & (~ 
                                                   (vlTOPp->Top__DOT__core__DOT__id_reg_v0_data[0U] 
                                                    >> 3U))) 
                                               & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))))
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_525))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_533))),32);
        tracep->fullSData(oldp+559,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+560,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+561,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+562,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+563,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+564,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+565,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+566,((0xffffU & ((7U 
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
        tracep->fullCData(oldp+567,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                               : ((
                                                   (0U 
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
        tracep->fullCData(oldp+568,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                               : ((
                                                   (1U 
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
        tracep->fullCData(oldp+569,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                               : ((
                                                   (2U 
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
        tracep->fullCData(oldp+570,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_485) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1231)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1239))))),8);
        tracep->fullCData(oldp+571,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                               : ((
                                                   (4U 
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
        tracep->fullCData(oldp+572,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                               : ((
                                                   (5U 
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
        tracep->fullCData(oldp+573,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 0x10U))
                                               : ((
                                                   (6U 
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
        tracep->fullCData(oldp+574,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_954) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1463)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1471))))),8);
        tracep->fullQData(oldp+575,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3),64);
        tracep->fullCData(oldp+577,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                               : ((
                                                   (8U 
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
        tracep->fullCData(oldp+578,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                               : ((
                                                   (9U 
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
        tracep->fullCData(oldp+579,((0xffU & ((0xaU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                               : ((
                                                   (0xaU 
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
        tracep->fullCData(oldp+580,((0xffU & ((0xbU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                               : ((
                                                   (0xbU 
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
        tracep->fullCData(oldp+581,((0xffU & ((0xcU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                               : ((
                                                   (0xcU 
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
        tracep->fullCData(oldp+582,((0xffU & ((0xdU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                               : ((
                                                   (0xdU 
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
        tracep->fullCData(oldp+583,((0xffU & ((0xeU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                               : ((
                                                   (0xeU 
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
        tracep->fullCData(oldp+584,((0xffU & ((0xfU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                               : ((
                                                   (0xfU 
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
        tracep->fullQData(oldp+585,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+587,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
        tracep->fullQData(oldp+589,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+591,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
        tracep->fullQData(oldp+593,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
        tracep->fullQData(oldp+595,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
        tracep->fullQData(oldp+597,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+599,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
        tracep->fullQData(oldp+601,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
        tracep->fullQData(oldp+603,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
        tracep->fullQData(oldp+605,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
        tracep->fullQData(oldp+607,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
        tracep->fullQData(oldp+609,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
        tracep->fullQData(oldp+611,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
        tracep->fullQData(oldp+613,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
        tracep->fullQData(oldp+615,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
        tracep->fullQData(oldp+617,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
        tracep->fullQData(oldp+619,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
        tracep->fullQData(oldp+621,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
        tracep->fullQData(oldp+623,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 8U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
        tracep->fullQData(oldp+625,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
        tracep->fullQData(oldp+627,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x18U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
        tracep->fullWData(oldp+629,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28),512);
        tracep->fullQData(oldp+645,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+647,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
        tracep->fullQData(oldp+649,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
        tracep->fullQData(oldp+651,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
        tracep->fullQData(oldp+653,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
        tracep->fullQData(oldp+655,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
        tracep->fullQData(oldp+657,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
        tracep->fullQData(oldp+659,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
        tracep->fullCData(oldp+661,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))),3);
        tracep->fullCData(oldp+662,((7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+663,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 1U)) 
                                          & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))) 
                                         | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                            >> 2U)))));
        tracep->fullBit(oldp+664,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 2U)) 
                                          & (~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                                >> 1U))) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
        tracep->fullBit(oldp+665,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 2U)) 
                                          & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12))))));
        tracep->fullBit(oldp+666,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                              >> 2U)) 
                                          & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12) 
                                             >> 1U)) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_12)))));
        tracep->fullQData(oldp+667,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
        tracep->fullCData(oldp+669,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter),6);
        tracep->fullIData(oldp+670,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend),32);
        tracep->fullIData(oldp+671,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient),32);
        tracep->fullBit(oldp+672,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u));
        tracep->fullBit(oldp+673,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s));
        tracep->fullCData(oldp+674,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset),2);
        tracep->fullCData(oldp+675,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3),3);
        tracep->fullCData(oldp+676,((3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result)),2);
        tracep->fullCData(oldp+677,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 0xcU))))
                                               ? ((0U 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
        tracep->fullCData(oldp+678,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 0xcU))))
                                               ? ((0U 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
        tracep->fullCData(oldp+679,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 0xcU))))
                                               ? ((0U 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
        tracep->fullCData(oldp+680,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 0xcU))))
                                               ? ((0U 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
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
        tracep->fullSData(oldp+681,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo),16);
        tracep->fullSData(oldp+682,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi),16);
        tracep->fullSData(oldp+683,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
        tracep->fullCData(oldp+684,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
        tracep->fullBit(oldp+685,((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        tracep->fullSData(oldp+686,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),13);
        tracep->fullSData(oldp+687,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),12);
        tracep->fullSData(oldp+688,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),13);
        tracep->fullBit(oldp+689,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        tracep->fullBit(oldp+690,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        tracep->fullCData(oldp+691,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        tracep->fullSData(oldp+692,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        tracep->fullIData(oldp+693,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        tracep->fullBit(oldp+694,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        tracep->fullBit(oldp+695,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        tracep->fullCData(oldp+696,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        tracep->fullSData(oldp+697,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        tracep->fullIData(oldp+698,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        tracep->fullIData(oldp+699,(vlTOPp->Top__DOT__Tracer__DOT__clkCycle),32);
        tracep->fullIData(oldp+700,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                      ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                                      : vlTOPp->Top__DOT__core__DOT___GEN_15)),32);
        tracep->fullBit(oldp+701,((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                    | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall))));
        tracep->fullIData(oldp+702,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                      ? (vlTOPp->Top__DOT__core__DOT__if_reg_pc 
                                         + vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                      : ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                          ? ((((0x1fU 
                                                & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                               == (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U)))
                                               ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                               : ((
                                                   (0x1fU 
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
        tracep->fullBit(oldp+703,(((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
                                   | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))));
        if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
             & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))) {
            __Vtemp1080[0U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[0U];
            __Vtemp1080[1U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[1U];
            __Vtemp1080[2U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[2U];
            __Vtemp1080[3U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_300[3U];
        } else {
            __Vtemp1080[0U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[0U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[0U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[0U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U])));
            __Vtemp1080[1U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[1U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[1U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[1U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U])));
            __Vtemp1080[2U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_537[2U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1006[2U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc)))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939[2U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U])));
            __Vtemp1080[3U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
        tracep->fullWData(oldp+704,(__Vtemp1080),128);
        tracep->fullIData(oldp+708,((IData)((VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
        tracep->fullIData(oldp+709,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)),32);
        tracep->fullIData(oldp+710,((((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U)))
                                      ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                      : (((0x1fU & 
                                           (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)))
                                          ? vlTOPp->Top__DOT__core__DOT__ex_reg_result
                                          : (((0x1fU 
                                               & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU)) 
                                              == (0x1fU 
                                                  & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                                     >> 7U)))
                                              ? vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData
                                              : (((0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U)))
                                                  ? vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult
                                                  : vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1))))),32);
        tracep->fullIData(oldp+711,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                     | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        tracep->fullIData(oldp+712,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                     & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
        tracep->fullBit(oldp+713,(((0U == (7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU)))
                                    ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                       == vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                    : ((1U == (7U & 
                                               (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                        ? (vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                           != vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                        : ((4U == (7U 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU)))
                                            ? VL_LTS_III(1,32,32, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                                ? VL_GTES_III(1,32,32, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                                : (
                                                   (6U 
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
        tracep->fullIData(oldp+714,((IData)((0x7fffffffffffffffULL 
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
        tracep->fullIData(oldp+715,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
                                      ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                                      : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)) 
                                           | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))) 
                                          | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35)))
                                          ? (IData)(
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                                                     >> 0x20U))
                                          : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_35))
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
                                                    : 0U))))))),32);
        tracep->fullIData(oldp+716,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_16)),32);
        tracep->fullIData(oldp+717,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                      ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                      : vlTOPp->Top__DOT__core__DOT__id_reg_imm)),32);
        tracep->fullQData(oldp+718,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
        tracep->fullQData(oldp+720,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
        tracep->fullIData(oldp+722,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
        tracep->fullIData(oldp+723,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
        tracep->fullIData(oldp+724,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
        tracep->fullIData(oldp+725,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
        tracep->fullCData(oldp+726,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
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
        tracep->fullCData(oldp+727,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
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
        tracep->fullCData(oldp+728,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
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
        tracep->fullCData(oldp+729,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+730,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+731,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
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
        tracep->fullCData(oldp+732,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
        tracep->fullCData(oldp+733,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+734,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
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
        tracep->fullCData(oldp+735,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
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
        tracep->fullCData(oldp+736,((0xffU & ((0xaU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
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
        tracep->fullCData(oldp+737,((0xffU & ((0xbU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
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
        tracep->fullCData(oldp+738,((0xffU & ((0xcU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
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
        tracep->fullCData(oldp+739,((0xffU & ((0xdU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
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
        tracep->fullCData(oldp+740,((0xffU & ((0xeU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
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
        tracep->fullCData(oldp+741,((0xffU & ((0xfU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
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
        tracep->fullSData(oldp+742,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+743,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+744,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+745,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+746,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+747,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+748,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+749,((0xffffU & ((7U 
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
        tracep->fullQData(oldp+750,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
        tracep->fullQData(oldp+752,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : 0xffffffffffffffffULL)))),64);
        tracep->fullIData(oldp+754,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
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
        tracep->fullIData(oldp+755,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : 0xffffffffU)))),32);
        tracep->fullIData(oldp+756,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : 0xffffffffU)))),32);
        tracep->fullIData(oldp+757,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : 0xffffffffU)))),32);
        tracep->fullCData(oldp+758,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
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
        tracep->fullCData(oldp+759,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
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
        tracep->fullCData(oldp+760,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
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
        tracep->fullCData(oldp+761,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+762,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+763,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_834)
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
        tracep->fullCData(oldp+764,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+765,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+766,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
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
        tracep->fullCData(oldp+767,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1535)
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
        tracep->fullCData(oldp+768,((0xffU & ((0xaU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1593)
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
        tracep->fullCData(oldp+769,((0xffU & ((0xbU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1651)
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
        tracep->fullCData(oldp+770,((0xffU & ((0xcU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
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
        tracep->fullCData(oldp+771,((0xffU & ((0xdU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1767)
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
        tracep->fullCData(oldp+772,((0xffU & ((0xeU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1825)
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
        tracep->fullCData(oldp+773,((0xffU & ((0xfU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1883)
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
        tracep->fullSData(oldp+774,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+775,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+776,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+777,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+778,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+779,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+780,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+781,((0xffffU & ((7U 
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
        tracep->fullQData(oldp+782,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+784,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
        tracep->fullQData(oldp+786,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+788,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
        tracep->fullQData(oldp+790,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
        tracep->fullQData(oldp+792,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
        tracep->fullQData(oldp+794,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+796,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
        tracep->fullQData(oldp+798,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
        tracep->fullQData(oldp+800,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
        tracep->fullQData(oldp+802,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
        tracep->fullQData(oldp+804,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
        tracep->fullQData(oldp+806,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
        tracep->fullQData(oldp+808,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
        tracep->fullQData(oldp+810,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+812,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
        tracep->fullQData(oldp+814,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
        tracep->fullQData(oldp+816,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
        tracep->fullQData(oldp+818,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
        tracep->fullQData(oldp+820,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
        tracep->fullQData(oldp+822,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
        tracep->fullQData(oldp+824,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
        tracep->fullQData(oldp+826,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
        tracep->fullQData(oldp+828,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
        tracep->fullQData(oldp+830,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
        tracep->fullQData(oldp+832,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
        tracep->fullQData(oldp+834,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
        tracep->fullQData(oldp+836,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
        tracep->fullQData(oldp+838,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
        tracep->fullQData(oldp+840,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
        tracep->fullQData(oldp+842,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+844,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5697))),64);
        tracep->fullQData(oldp+846,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+848,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_244)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_250)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5760))),64);
        tracep->fullQData(oldp+850,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5789))),64);
        tracep->fullQData(oldp+852,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5818))),64);
        tracep->fullQData(oldp+854,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+856,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6118))),64);
        tracep->fullQData(oldp+858,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6147))),64);
        tracep->fullQData(oldp+860,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6176))),64);
        tracep->fullQData(oldp+862,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6205))),64);
        tracep->fullQData(oldp+864,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6234))),64);
        tracep->fullQData(oldp+866,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6263))),64);
        tracep->fullQData(oldp+868,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6292))),64);
        tracep->fullQData(oldp+870,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1477)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1483)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1489)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6321))),64);
        tracep->fullQData(oldp+872,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1547)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6350))),64);
        tracep->fullQData(oldp+874,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1605)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6379))),64);
        tracep->fullQData(oldp+876,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1663)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6408))),64);
        tracep->fullQData(oldp+878,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1709)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1715)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1721)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6437))),64);
        tracep->fullQData(oldp+880,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1779)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6466))),64);
        tracep->fullQData(oldp+882,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1837)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6495))),64);
        tracep->fullQData(oldp+884,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1895)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6524))),64);
        tracep->fullQData(oldp+886,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_186)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_192)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_198)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+888,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_256)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5881))),64);
        tracep->fullQData(oldp+890,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_423)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_435)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5910))),64);
        tracep->fullQData(oldp+892,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5939))),64);
        tracep->fullQData(oldp+894,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_776)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_782)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_788)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5968))),64);
        tracep->fullQData(oldp+896,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_846)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5997))),64);
        tracep->fullQData(oldp+898,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_892)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_898)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_904)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6026))),64);
        tracep->fullQData(oldp+900,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_962)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6055))),64);
        tracep->fullIData(oldp+902,(((0xffff0000U & 
                                      (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                       << 0x10U)) | (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        tracep->fullIData(oldp+903,(vlTOPp->Top__DOT__core__DOT__MEM_io_readData),32);
        tracep->fullIData(oldp+904,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
        tracep->fullIData(oldp+905,(vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData),32);
        tracep->fullIData(oldp+906,(vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult),32);
        tracep->fullIData(oldp+907,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1),32);
        tracep->fullIData(oldp+908,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2),32);
        tracep->fullBit(oldp+909,(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc));
        tracep->fullIData(oldp+910,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
        tracep->fullIData(oldp+911,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
        tracep->fullBit(oldp+912,(((0U != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                   & ((0U == (3U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                       ? ((0U == (3U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xeU))) 
                                          | ((1U == 
                                              (3U & 
                                               (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                             | (3U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 0xeU)))))
                                       : ((1U == (3U 
                                                  & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                           ? ((0U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xdU))) 
                                              | (IData)(vlTOPp->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                           : ((2U == 
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
        tracep->fullIData(oldp+913,(vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
        tracep->fullCData(oldp+914,(((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                      ? (0x3fU & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                  >> 0x19U))
                                      : 0U)),6);
        tracep->fullBit(oldp+915,(vlTOPp->Top__DOT__core__DOT__IF_stall));
        tracep->fullIData(oldp+916,(vlTOPp->Top__DOT__core__DOT___T_42),32);
        tracep->fullBit(oldp+917,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
        tracep->fullIData(oldp+918,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
        tracep->fullIData(oldp+919,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
        tracep->fullIData(oldp+920,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
        tracep->fullIData(oldp+921,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        tracep->fullIData(oldp+922,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        tracep->fullIData(oldp+923,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        tracep->fullIData(oldp+924,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        tracep->fullIData(oldp+925,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
        tracep->fullIData(oldp+926,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
        tracep->fullIData(oldp+927,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
        tracep->fullIData(oldp+928,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a),32);
        tracep->fullIData(oldp+929,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b),32);
        tracep->fullIData(oldp+930,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
        tracep->fullIData(oldp+931,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
        tracep->fullQData(oldp+932,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7),64);
        tracep->fullQData(oldp+934,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12),64);
        tracep->fullWData(oldp+936,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19),512);
        tracep->fullWData(oldp+952,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24),512);
        tracep->fullQData(oldp+968,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
        tracep->fullQData(oldp+970,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result),64);
        tracep->fullIData(oldp+972,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata),32);
        tracep->fullIData(oldp+973,(((0x80U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+974,((0xffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),8);
        tracep->fullIData(oldp+975,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+976,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 8U))),8);
        tracep->fullIData(oldp+977,(((0x800000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+978,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x10U))),8);
        tracep->fullIData(oldp+979,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+980,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+981,((0xffffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),16);
        tracep->fullSData(oldp+982,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                >> 8U))),16);
        tracep->fullSData(oldp+983,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+984,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U)),16);
        tracep->fullSData(oldp+985,(((0x800000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U)),16);
        tracep->fullSData(oldp+986,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U)),16);
        tracep->fullSData(oldp+987,((0xffffU & vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction)),16);
        tracep->fullCData(oldp+988,((0xfU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 7U))),4);
        tracep->fullCData(oldp+989,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+990,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         >> 5U))));
        tracep->fullBit(oldp+991,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         >> 6U))));
        tracep->fullCData(oldp+992,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                           >> 2U))),3);
        tracep->fullCData(oldp+993,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                           >> 0xaU))),3);
        tracep->fullCData(oldp+994,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                           >> 7U))),3);
        tracep->fullBit(oldp+995,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         >> 0xcU))));
        tracep->fullCData(oldp+996,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                           >> 0xaU))),2);
        tracep->fullIData(oldp+997,((0x2023U | ((0x38000U 
                                                 & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    << 8U)) 
                                                | ((0xc00U 
                                                    & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                   | (0x200U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 3U)))))),18);
        tracep->fullCData(oldp+998,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                      ? 0x3fU : 0U)),6);
        tracep->fullCData(oldp+999,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 2U))),5);
        tracep->fullCData(oldp+1000,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),5);
        tracep->fullBit(oldp+1001,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 8U))));
        tracep->fullCData(oldp+1002,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 9U))),2);
        tracep->fullBit(oldp+1003,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 7U))));
        tracep->fullBit(oldp+1004,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 2U))));
        tracep->fullBit(oldp+1005,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1006,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 3U))),3);
        tracep->fullSData(oldp+1007,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0x1ffU : 0U)),9);
        tracep->fullBit(oldp+1008,((1U & (~ (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xfU)))));
        tracep->fullIData(oldp+1009,((0x6fU | ((0x1000000U 
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
        tracep->fullSData(oldp+1010,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0x7fffU : 0U)),15);
        tracep->fullCData(oldp+1011,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 7U : 0U)),3);
        tracep->fullCData(oldp+1012,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 3U))),2);
        tracep->fullBit(oldp+1013,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xaU))));
        tracep->fullCData(oldp+1014,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+1015,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xdU))));
        tracep->fullSData(oldp+1016,((0x63U | ((0x1000U 
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
        tracep->fullCData(oldp+1017,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 2U))),2);
        tracep->fullCData(oldp+1018,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 4U))),3);
        tracep->fullCData(oldp+1019,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 7U))),2);
        tracep->fullCData(oldp+1020,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 9U))),3);
        tracep->fullBit(oldp+1021,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        tracep->fullIData(oldp+1022,((0x3fffffffU & 
                                      (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                       >> 2U))),32);
        tracep->fullIData(oldp+1023,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
        tracep->fullIData(oldp+1024,(vlTOPp->Top__DOT__core__DOT__pc_io_in),32);
        tracep->fullBit(oldp+1025,(vlTOPp->Top__DOT__core__DOT__pc_io_halt));
        tracep->fullBit(oldp+1026,((1U & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                          >> 1U))));
        tracep->fullBit(oldp+1027,((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
        tracep->fullSData(oldp+1028,((0x1fffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                 >> 2U))),13);
        tracep->fullSData(oldp+1029,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                >> 2U))),12);
        tracep->fullSData(oldp+1030,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                >> 2U))),13);
        tracep->fullBit(oldp+1031,(vlTOPp->clock));
        tracep->fullBit(oldp+1032,(vlTOPp->reset));
        tracep->fullIData(oldp+1033,(vlTOPp->io_pin),32);
        tracep->fullWData(oldp+1034,(vlTOPp->io_v_pin),128);
        tracep->fullIData(oldp+1038,(vlTOPp->io_fcsr),32);
        tracep->fullIData(oldp+1039,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                       ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                       : ((IData)(4U) 
                                          + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->fullIData(oldp+1040,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                       ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                       : ((IData)(2U) 
                                          + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->fullIData(oldp+1041,(((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
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
        tracep->fullBit(oldp+1042,((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                     & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                        >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
        tracep->fullBit(oldp+1043,(vlTOPp->Top__DOT__dmem__DOT__sram_csb_i));
        tracep->fullBit(oldp+1044,(vlTOPp->Top__DOT__dmem__DOT__sram_we_i));
        tracep->fullBit(oldp+1045,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rvalid));
        tracep->fullBit(oldp+1046,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rvalid));
        tracep->fullIData(oldp+1047,(0U),32);
        tracep->fullCData(oldp+1048,(0xfU),4);
        tracep->fullBit(oldp+1049,(0U));
        tracep->fullBit(oldp+1050,(1U));
        tracep->fullIData(oldp+1051,(0U),32);
        tracep->fullBit(oldp+1052,(0U));
        tracep->fullIData(oldp+1053,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rdata_i),32);
        tracep->fullIData(oldp+1054,(4U),32);
        tracep->fullIData(oldp+1055,(0x20U),32);
        tracep->fullIData(oldp+1056,(0xdU),32);
        tracep->fullIData(oldp+1057,(0x2000U),32);
        tracep->fullIData(oldp+1058,(3U),32);
        tracep->fullSData(oldp+1059,(0U),13);
        tracep->fullIData(oldp+1060,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1),32);
        tracep->fullBit(oldp+1061,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg));
        tracep->fullSData(oldp+1062,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
        tracep->fullIData(oldp+1063,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i),32);
        __Vtemp1081[0U] = 0x2e747874U;
        __Vtemp1081[1U] = 0x2f61736dU;
        __Vtemp1081[2U] = 0x75737276U;
        __Vtemp1081[3U] = 0x75636c65U;
        __Vtemp1081[4U] = 0x65662f6eU;
        __Vtemp1081[5U] = 0x6c617465U;
        __Vtemp1081[6U] = 0x746f702fU;
        __Vtemp1081[7U] = 0x4465736bU;
        __Vtemp1081[8U] = 0x6972612fU;
        __Vtemp1081[9U] = 0x652f6d61U;
        __Vtemp1081[0xaU] = 0x2f686f6dU;
        tracep->fullWData(oldp+1064,(__Vtemp1081),352);
        tracep->fullIData(oldp+1075,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
        tracep->fullIData(oldp+1076,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
        tracep->fullBit(oldp+1077,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
        tracep->fullSData(oldp+1078,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
        tracep->fullIData(oldp+1079,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
    }
}
