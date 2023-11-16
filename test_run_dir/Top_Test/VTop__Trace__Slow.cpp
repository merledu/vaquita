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
        tracep->declBit(c+1072,"clock", false,-1);
        tracep->declBit(c+1073,"reset", false,-1);
        tracep->declBus(c+1074,"io_pin", false,-1, 31,0);
        tracep->declArray(c+1075,"io_v_pin", false,-1, 127,0);
        tracep->declBus(c+1079,"io_fcsr", false,-1, 31,0);
        tracep->declBit(c+1072,"Top clock", false,-1);
        tracep->declBit(c+1073,"Top reset", false,-1);
        tracep->declBus(c+1074,"Top io_pin", false,-1, 31,0);
        tracep->declArray(c+1075,"Top io_v_pin", false,-1, 127,0);
        tracep->declBus(c+1079,"Top io_fcsr", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core_clock", false,-1);
        tracep->declBit(c+1073,"Top core_reset", false,-1);
        tracep->declBus(c+720,"Top core_io_pin", false,-1, 31,0);
        tracep->declArray(c+1,"Top core_io_Vpin", false,-1, 127,0);
        tracep->declBit(c+5,"Top core_io_dmemReq_valid", false,-1);
        tracep->declBus(c+6,"Top core_io_dmemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top core_io_dmemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top core_io_dmemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top core_io_dmemReq_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top core_io_dmemRsp_valid", false,-1);
        tracep->declBus(c+923,"Top core_io_dmemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1062,"Top core_io_imemReq_valid", false,-1);
        tracep->declBus(c+1063,"Top core_io_imemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core_io_imemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top core_io_imemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top core_io_imemReq_bits_isWrite", false,-1);
        tracep->declBit(c+11,"Top core_io_imemRsp_valid", false,-1);
        tracep->declBus(c+924,"Top core_io_imemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+12,"Top core_io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+13,"Top core_io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+14,"Top core_io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+15,"Top core_io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+720,"Top core_io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+16,"Top core_io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+17,"Top core_io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+935,"Top core_io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+18,"Top core_io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+19,"Top core_io_rvfiBool_0", false,-1);
        tracep->declBus(c+20,"Top core_io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+21,"Top core_io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+22,"Top core_io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+23,"Top core_io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1072,"Top dmem_clock", false,-1);
        tracep->declBit(c+1073,"Top dmem_reset", false,-1);
        tracep->declBit(c+5,"Top dmem_io_req_valid", false,-1);
        tracep->declBus(c+6,"Top dmem_io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top dmem_io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top dmem_io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top dmem_io_req_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top dmem_io_rsp_valid", false,-1);
        tracep->declBus(c+923,"Top dmem_io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top imem_clock", false,-1);
        tracep->declBit(c+1073,"Top imem_reset", false,-1);
        tracep->declBit(c+1062,"Top imem_io_req_valid", false,-1);
        tracep->declBus(c+1063,"Top imem_io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top imem_io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top imem_io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top imem_io_req_bits_isWrite", false,-1);
        tracep->declBit(c+11,"Top imem_io_rsp_valid", false,-1);
        tracep->declBus(c+924,"Top imem_io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top Tracer_clock", false,-1);
        tracep->declBit(c+1073,"Top Tracer_reset", false,-1);
        tracep->declBus(c+12,"Top Tracer_io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+13,"Top Tracer_io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+14,"Top Tracer_io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+15,"Top Tracer_io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+720,"Top Tracer_io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+16,"Top Tracer_io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+17,"Top Tracer_io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+935,"Top Tracer_io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+18,"Top Tracer_io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+19,"Top Tracer_io_rvfiBool_0", false,-1);
        tracep->declBus(c+20,"Top Tracer_io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+21,"Top Tracer_io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+22,"Top Tracer_io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBit(c+1072,"Top core clock", false,-1);
        tracep->declBit(c+1073,"Top core reset", false,-1);
        tracep->declBus(c+720,"Top core io_pin", false,-1, 31,0);
        tracep->declArray(c+1,"Top core io_Vpin", false,-1, 127,0);
        tracep->declBit(c+5,"Top core io_dmemReq_valid", false,-1);
        tracep->declBus(c+6,"Top core io_dmemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top core io_dmemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top core io_dmemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top core io_dmemReq_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top core io_dmemRsp_valid", false,-1);
        tracep->declBus(c+923,"Top core io_dmemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1062,"Top core io_imemReq_valid", false,-1);
        tracep->declBus(c+1063,"Top core io_imemReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core io_imemReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top core io_imemReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top core io_imemReq_bits_isWrite", false,-1);
        tracep->declBit(c+11,"Top core io_imemRsp_valid", false,-1);
        tracep->declBus(c+924,"Top core io_imemRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+12,"Top core io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+13,"Top core io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+14,"Top core io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+15,"Top core io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+720,"Top core io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+16,"Top core io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+17,"Top core io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+935,"Top core io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+18,"Top core io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+19,"Top core io_rvfiBool_0", false,-1);
        tracep->declBus(c+20,"Top core io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+21,"Top core io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+22,"Top core io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+23,"Top core io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1073,"Top core InstructionFetch_reset", false,-1);
        tracep->declBus(c+1064,"Top core InstructionFetch_io_address", false,-1, 31,0);
        tracep->declBus(c+936,"Top core InstructionFetch_io_instruction", false,-1, 31,0);
        tracep->declBit(c+721,"Top core InstructionFetch_io_stall", false,-1);
        tracep->declBit(c+1091,"Top core InstructionFetch_io_coreInstrReq_ready", false,-1);
        tracep->declBit(c+1062,"Top core InstructionFetch_io_coreInstrReq_valid", false,-1);
        tracep->declBus(c+1063,"Top core InstructionFetch_io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core InstructionFetch_io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top core InstructionFetch_io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top core InstructionFetch_io_coreInstrReq_bits_isWrite", false,-1);
        tracep->declBit(c+1091,"Top core InstructionFetch_io_coreInstrResp_ready", false,-1);
        tracep->declBit(c+11,"Top core InstructionFetch_io_coreInstrResp_valid", false,-1);
        tracep->declBus(c+924,"Top core InstructionFetch_io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode_reset", false,-1);
        tracep->declBus(c+24,"Top core IDecode_io_id_instruction", false,-1, 31,0);
        tracep->declBus(c+937,"Top core IDecode_io_writeData", false,-1, 31,0);
        tracep->declBus(c+20,"Top core IDecode_io_writeReg", false,-1, 4,0);
        tracep->declBus(c+25,"Top core IDecode_io_pcAddress", false,-1, 31,0);
        tracep->declBit(c+26,"Top core IDecode_io_ctl_writeEnable", false,-1);
        tracep->declBit(c+27,"Top core IDecode_io_id_ex_mem_read", false,-1);
        tracep->declBit(c+28,"Top core IDecode_io_ex_mem_mem_read", false,-1);
        tracep->declBit(c+10,"Top core IDecode_io_dmem_resp_valid", false,-1);
        tracep->declBus(c+29,"Top core IDecode_io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+30,"Top core IDecode_io_ex_mem_rd", false,-1, 4,0);
        tracep->declBit(c+31,"Top core IDecode_io_id_ex_branch", false,-1);
        tracep->declBus(c+32,"Top core IDecode_io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+14,"Top core IDecode_io_mem_wb_ins", false,-1, 31,0);
        tracep->declBus(c+33,"Top core IDecode_io_ex_ins", false,-1, 31,0);
        tracep->declBus(c+938,"Top core IDecode_io_ex_result", false,-1, 31,0);
        tracep->declBus(c+34,"Top core IDecode_io_ex_mem_result", false,-1, 31,0);
        tracep->declBus(c+937,"Top core IDecode_io_mem_wb_result", false,-1, 31,0);
        tracep->declBit(c+35,"Top core IDecode_io_id_ex_regWr", false,-1);
        tracep->declBit(c+36,"Top core IDecode_io_ex_mem_regWr", false,-1);
        tracep->declBit(c+37,"Top core IDecode_io_csr_Ex", false,-1);
        tracep->declBit(c+38,"Top core IDecode_io_csr_Mem", false,-1);
        tracep->declBit(c+39,"Top core IDecode_io_csr_Wb", false,-1);
        tracep->declBus(c+40,"Top core IDecode_io_csr_Ex_data", false,-1, 31,0);
        tracep->declBus(c+41,"Top core IDecode_io_csr_Mem_data", false,-1, 31,0);
        tracep->declBus(c+42,"Top core IDecode_io_csr_Wb_data", false,-1, 31,0);
        tracep->declBus(c+923,"Top core IDecode_io_dmem_data", false,-1, 31,0);
        tracep->declBus(c+43,"Top core IDecode_io_immediate", false,-1, 31,0);
        tracep->declBus(c+44,"Top core IDecode_io_writeRegAddress", false,-1, 4,0);
        tracep->declBus(c+939,"Top core IDecode_io_readData1", false,-1, 31,0);
        tracep->declBus(c+940,"Top core IDecode_io_readData2", false,-1, 31,0);
        tracep->declBus(c+45,"Top core IDecode_io_func7", false,-1, 6,0);
        tracep->declBus(c+46,"Top core IDecode_io_func3", false,-1, 2,0);
        tracep->declBus(c+47,"Top core IDecode_io_func6", false,-1, 5,0);
        tracep->declBit(c+48,"Top core IDecode_io_ctl_aluSrc", false,-1);
        tracep->declBus(c+49,"Top core IDecode_io_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+50,"Top core IDecode_io_ctl_regWrite", false,-1);
        tracep->declBit(c+51,"Top core IDecode_io_ctl_memRead", false,-1);
        tracep->declBit(c+52,"Top core IDecode_io_ctl_memWrite", false,-1);
        tracep->declBit(c+53,"Top core IDecode_io_ctl_branch", false,-1);
        tracep->declBus(c+54,"Top core IDecode_io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+55,"Top core IDecode_io_ctl_jump", false,-1, 1,0);
        tracep->declBit(c+56,"Top core IDecode_io_ctl_v_RegWrite", false,-1);
        tracep->declBit(c+57,"Top core IDecode_io_ctl_v_opBsel", false,-1);
        tracep->declBus(c+58,"Top core IDecode_io_ctl_v_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+59,"Top core IDecode_io_ctl_v_aluop", false,-1, 4,0);
        tracep->declBit(c+60,"Top core IDecode_io_ctl_v_vset", false,-1);
        tracep->declBus(c+61,"Top core IDecode_io_ctl_v_load", false,-1, 3,0);
        tracep->declBit(c+62,"Top core IDecode_io_ctl_v_ins", false,-1);
        tracep->declBit(c+1090,"Top core IDecode_io_ctl_v_memRead", false,-1);
        tracep->declBit(c+63,"Top core IDecode_io_ctl_v_memWrite", false,-1);
        tracep->declBit(c+64,"Top core IDecode_io_ctl_v_reg_read", false,-1);
        tracep->declArray(c+65,"Top core IDecode_io_write_data", false,-1, 127,0);
        tracep->declBus(c+69,"Top core IDecode_io_wb_addr", false,-1, 4,0);
        tracep->declBit(c+70,"Top core IDecode_io_wb_RegWrite", false,-1);
        tracep->declBus(c+71,"Top core IDecode_io_id_lmul_count", false,-1, 3,0);
        tracep->declBus(c+72,"Top core IDecode_io_id_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+73,"Top core IDecode_io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+77,"Top core IDecode_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+81,"Top core IDecode_io_vs2_data", false,-1, 127,0);
        tracep->declBit(c+56,"Top core IDecode_io_reg_write", false,-1);
        tracep->declBus(c+85,"Top core IDecode_io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode_io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+44,"Top core IDecode_io_vd_addr", false,-1, 4,0);
        tracep->declArray(c+1,"Top core IDecode_io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+65,"Top core IDecode_io_id_wbvs3_data", false,-1, 127,0);
        tracep->declBus(c+87,"Top core IDecode_io_v_z_imm", false,-1, 31,0);
        tracep->declBus(c+88,"Top core IDecode_io_v_addi_imm", false,-1, 31,0);
        tracep->declBus(c+89,"Top core IDecode_io_vtypei", false,-1, 10,0);
        tracep->declBus(c+90,"Top core IDecode_io_vtypei_out", false,-1, 10,0);
        tracep->declBus(c+91,"Top core IDecode_io_vl", false,-1, 31,0);
        tracep->declBit(c+92,"Top core IDecode_io_ctl_vset", false,-1);
        tracep->declBus(c+93,"Top core IDecode_io_vl_out", false,-1, 31,0);
        tracep->declBus(c+1092,"Top core IDecode_io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+94,"Top core IDecode_io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBit(c+95,"Top core IDecode_io_hdu_pcWrite", false,-1);
        tracep->declBit(c+96,"Top core IDecode_io_hdu_if_reg_write", false,-1);
        tracep->declBit(c+941,"Top core IDecode_io_pcSrc", false,-1);
        tracep->declBus(c+722,"Top core IDecode_io_pcPlusOffset", false,-1, 31,0);
        tracep->declBit(c+723,"Top core IDecode_io_ifid_flush", false,-1);
        tracep->declBit(c+97,"Top core IDecode_io_stall", false,-1);
        tracep->declBus(c+1088,"Top core IDecode_io_csr_i_misa", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode_io_csr_i_mhartid", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode_io_csr_o_data", false,-1, 31,0);
        tracep->declBit(c+99,"Top core IDecode_io_is_csr", false,-1);
        tracep->declBus(c+23,"Top core IDecode_io_fscr_o_data", false,-1, 31,0);
        tracep->declBus(c+85,"Top core IDecode_io_rs_addr_0", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode_io_rs_addr_1", false,-1, 4,0);
        tracep->declBit(c+1072,"Top core Execute_clock", false,-1);
        tracep->declBit(c+1073,"Top core Execute_reset", false,-1);
        tracep->declBus(c+100,"Top core Execute_io_immediate", false,-1, 31,0);
        tracep->declBus(c+101,"Top core Execute_io_readData1", false,-1, 31,0);
        tracep->declBus(c+102,"Top core Execute_io_readData2", false,-1, 31,0);
        tracep->declBus(c+103,"Top core Execute_io_pcAddress", false,-1, 31,0);
        tracep->declBus(c+104,"Top core Execute_io_func7", false,-1, 6,0);
        tracep->declBus(c+105,"Top core Execute_io_func3", false,-1, 2,0);
        tracep->declBus(c+34,"Top core Execute_io_mem_result", false,-1, 31,0);
        tracep->declBus(c+937,"Top core Execute_io_wb_result", false,-1, 31,0);
        tracep->declBit(c+36,"Top core Execute_io_ex_mem_regWrite", false,-1);
        tracep->declBit(c+26,"Top core Execute_io_mem_wb_regWrite", false,-1);
        tracep->declBus(c+33,"Top core Execute_io_id_ex_ins", false,-1, 31,0);
        tracep->declBus(c+32,"Top core Execute_io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+14,"Top core Execute_io_mem_wb_ins", false,-1, 31,0);
        tracep->declBit(c+106,"Top core Execute_io_ctl_aluSrc", false,-1);
        tracep->declBus(c+107,"Top core Execute_io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+108,"Top core Execute_io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+109,"Top core Execute_io_func6", false,-1, 5,0);
        tracep->declBus(c+110,"Top core Execute_io_v_ctl_aluop", false,-1, 2,0);
        tracep->declBus(c+111,"Top core Execute_io_v_ctl_exsel", false,-1, 3,0);
        tracep->declBit(c+112,"Top core Execute_io_v_ctl_regwrite", false,-1);
        tracep->declBit(c+113,"Top core Execute_io_v_ctl_opBsel", false,-1);
        tracep->declBit(c+114,"Top core Execute_io_v_ctl_v_load", false,-1);
        tracep->declBit(c+115,"Top core Execute_io_v_ctl_v_ins", false,-1);
        tracep->declBit(c+116,"Top core Execute_io_v_ctl_vset", false,-1);
        tracep->declArray(c+117,"Top core Execute_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+121,"Top core Execute_io_vs2_data", false,-1, 127,0);
        tracep->declBus(c+125,"Top core Execute_io_vl", false,-1, 31,0);
        tracep->declBus(c+126,"Top core Execute_io_vstart", false,-1, 31,0);
        tracep->declArray(c+127,"Top core Execute_io_vs3_data", false,-1, 127,0);
        tracep->declBit(c+131,"Top core Execute_io_vma", false,-1);
        tracep->declBit(c+132,"Top core Execute_io_vta", false,-1);
        tracep->declBit(c+133,"Top core Execute_io_vm", false,-1);
        tracep->declArray(c+134,"Top core Execute_io_vs0", false,-1, 127,0);
        tracep->declBus(c+29,"Top core Execute_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+138,"Top core Execute_io_v_sew", false,-1, 2,0);
        tracep->declBus(c+139,"Top core Execute_io_zimm", false,-1, 31,0);
        tracep->declBus(c+140,"Top core Execute_io_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+141,"Top core Execute_io_vec_mem_res", false,-1, 127,0);
        tracep->declArray(c+65,"Top core Execute_io_vec_wb_res", false,-1, 127,0);
        tracep->declArray(c+1,"Top core Execute_io_id_reg_vs3data", false,-1, 127,0);
        tracep->declBus(c+145,"Top core Execute_io_fu_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+69,"Top core Execute_io_fu_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+146,"Top core Execute_io_fu_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+147,"Top core Execute_io_fu_reg_vs2", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute_io_fu_reg_vs3", false,-1, 4,0);
        tracep->declBit(c+149,"Top core Execute_io_fu_ex_reg_write", false,-1);
        tracep->declBit(c+70,"Top core Execute_io_fu_mem_reg_write", false,-1);
        tracep->declBit(c+150,"Top core Execute_io_v_MemWrite", false,-1);
        tracep->declArray(c+724,"Top core Execute_io_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+728,"Top core Execute_io_vec_vl", false,-1, 31,0);
        tracep->declBus(c+151,"Top core Execute_io_vec_rd_out", false,-1, 4,0);
        tracep->declBus(c+942,"Top core Execute_io_vec_avl_o", false,-1, 31,0);
        tracep->declBus(c+152,"Top core Execute_io_vec_valmax_o", false,-1, 31,0);
        tracep->declArray(c+153,"Top core Execute_io_vs3_data_o", false,-1, 127,0);
        tracep->declBus(c+729,"Top core Execute_io_writeData", false,-1, 31,0);
        tracep->declBus(c+938,"Top core Execute_io_ALUresult", false,-1, 31,0);
        tracep->declBit(c+157,"Top core Execute_io_stall", false,-1);
        tracep->declBit(c+1072,"Top core MEM_clock", false,-1);
        tracep->declBit(c+1073,"Top core MEM_reset", false,-1);
        tracep->declBus(c+34,"Top core MEM_io_aluResultIn", false,-1, 31,0);
        tracep->declBus(c+158,"Top core MEM_io_v_addr", false,-1, 31,0);
        tracep->declBit(c+159,"Top core MEM_io_v_ins", false,-1);
        tracep->declBus(c+160,"Top core MEM_io_writeData", false,-1, 31,0);
        tracep->declBus(c+161,"Top core MEM_io_v_writeData", false,-1, 31,0);
        tracep->declBit(c+9,"Top core MEM_io_writeEnable", false,-1);
        tracep->declBit(c+162,"Top core MEM_io_readEnable", false,-1);
        tracep->declBus(c+935,"Top core MEM_io_readData", false,-1, 31,0);
        tracep->declBus(c+163,"Top core MEM_io_f3", false,-1, 2,0);
        tracep->declBit(c+5,"Top core MEM_io_dccmReq_valid", false,-1);
        tracep->declBus(c+6,"Top core MEM_io_dccmReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top core MEM_io_dccmReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top core MEM_io_dccmReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top core MEM_io_dccmReq_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top core MEM_io_dccmRsp_valid", false,-1);
        tracep->declBus(c+923,"Top core MEM_io_dccmRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core pc_clock", false,-1);
        tracep->declBit(c+1073,"Top core pc_reset", false,-1);
        tracep->declBus(c+1065,"Top core pc_io_in", false,-1, 31,0);
        tracep->declBit(c+1066,"Top core pc_io_halt", false,-1);
        tracep->declBus(c+164,"Top core pc_io_out", false,-1, 31,0);
        tracep->declBus(c+1080,"Top core pc_io_pc4", false,-1, 31,0);
        tracep->declBus(c+1081,"Top core pc_io_pc2", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core vlsu_clock", false,-1);
        tracep->declBit(c+1073,"Top core vlsu_reset", false,-1);
        tracep->declBus(c+943,"Top core vlsu_io_instr", false,-1, 31,0);
        tracep->declBus(c+165,"Top core vlsu_io_vtype", false,-1, 31,0);
        tracep->declBus(c+944,"Top core vlsu_io_UnitStride", false,-1, 1,0);
        tracep->declBus(c+1093,"Top core vlsu_io_evl", false,-1, 7,0);
        tracep->declBus(c+1094,"Top core vlsu_io_vs3_Addr", false,-1, 4,0);
        tracep->declBus(c+945,"Top core vlsu_io_lsuType", false,-1, 3,0);
        tracep->declBus(c+946,"Top core vlsu_io_eew", false,-1, 9,0);
        tracep->declBus(c+1095,"Top core vlsu_io_nf", false,-1, 3,0);
        tracep->declBus(c+166,"Top core vlsu_io_emmul", false,-1, 5,0);
        tracep->declBus(c+167,"Top core vlsu_io_emul", false,-1, 3,0);
        tracep->declBit(c+1072,"Top core Realigner_clock", false,-1);
        tracep->declBit(c+1073,"Top core Realigner_reset", false,-1);
        tracep->declBus(c+1065,"Top core Realigner_io_ral_address_i", false,-1, 31,0);
        tracep->declBus(c+936,"Top core Realigner_io_ral_instruction_i", false,-1, 31,0);
        tracep->declBit(c+941,"Top core Realigner_io_ral_jmp", false,-1);
        tracep->declBus(c+1064,"Top core Realigner_io_ral_address_o", false,-1, 31,0);
        tracep->declBus(c+947,"Top core Realigner_io_ral_instruction_o", false,-1, 31,0);
        tracep->declBit(c+168,"Top core Realigner_io_ral_halt_o", false,-1);
        tracep->declBus(c+947,"Top core CompressedDecoder_io_instruction_i", false,-1, 31,0);
        tracep->declBit(c+948,"Top core CompressedDecoder_io_is_comp", false,-1);
        tracep->declBus(c+943,"Top core CompressedDecoder_io_instruction_o", false,-1, 31,0);
        tracep->declBus(c+25,"Top core if_reg_pc", false,-1, 31,0);
        tracep->declBus(c+24,"Top core if_reg_ins", false,-1, 31,0);
        tracep->declBus(c+72,"Top core if_reg_lmul_v", false,-1, 3,0);
        tracep->declBus(c+169,"Top core if_reg_eew", false,-1, 9,0);
        tracep->declBus(c+170,"Top core if_reg_lsuType", false,-1, 3,0);
        tracep->declBus(c+103,"Top core id_reg_pc", false,-1, 31,0);
        tracep->declBus(c+101,"Top core id_reg_rd1", false,-1, 31,0);
        tracep->declBus(c+102,"Top core id_reg_rd2", false,-1, 31,0);
        tracep->declBus(c+100,"Top core id_reg_imm", false,-1, 31,0);
        tracep->declBus(c+171,"Top core id_reg_wra", false,-1, 4,0);
        tracep->declBus(c+104,"Top core id_reg_f7", false,-1, 6,0);
        tracep->declBus(c+105,"Top core id_reg_f3", false,-1, 2,0);
        tracep->declBus(c+33,"Top core id_reg_ins", false,-1, 31,0);
        tracep->declBit(c+106,"Top core id_reg_ctl_aluSrc", false,-1);
        tracep->declBus(c+108,"Top core id_reg_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+172,"Top core id_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+35,"Top core id_reg_ctl_regWrite", false,-1);
        tracep->declBit(c+27,"Top core id_reg_ctl_memRead", false,-1);
        tracep->declBit(c+173,"Top core id_reg_ctl_memWrite", false,-1);
        tracep->declBus(c+107,"Top core id_reg_ctl_aluOp", false,-1, 1,0);
        tracep->declBit(c+37,"Top core id_reg_is_csr", false,-1);
        tracep->declBus(c+40,"Top core id_reg_csr_data", false,-1, 31,0);
        tracep->declBus(c+174,"Top core id_reg_z_imm", false,-1, 10,0);
        tracep->declBus(c+126,"Top core id_reg_vstart_out", false,-1, 31,0);
        tracep->declBus(c+139,"Top core id_reg_vtype", false,-1, 31,0);
        tracep->declBus(c+140,"Top core id_reg_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+134,"Top core id_reg_v0_data", false,-1, 127,0);
        tracep->declArray(c+117,"Top core id_reg_v1_data", false,-1, 127,0);
        tracep->declArray(c+121,"Top core id_reg_v2_data", false,-1, 127,0);
        tracep->declArray(c+127,"Top core id_reg_vs3_data", false,-1, 127,0);
        tracep->declBus(c+146,"Top core id_reg_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+147,"Top core id_reg_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+148,"Top core id_reg_vd_addr", false,-1, 4,0);
        tracep->declBus(c+175,"Top core id_reg_lmul_v", false,-1, 3,0);
        tracep->declBus(c+176,"Top core id_reg_eew", false,-1, 9,0);
        tracep->declBus(c+177,"Top core id_reg_lsuType", false,-1, 3,0);
        tracep->declBit(c+112,"Top core id_reg_ctl_RegWrite", false,-1);
        tracep->declBit(c+113,"Top core id_reg_ctl_opBsel", false,-1);
        tracep->declBus(c+111,"Top core id_reg_ctl_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+178,"Top core id_reg_ctl_aluop", false,-1, 4,0);
        tracep->declBit(c+116,"Top core id_reg_ctl_vset", false,-1);
        tracep->declBit(c+114,"Top core id_reg_ctl_v_load", false,-1);
        tracep->declBit(c+115,"Top core id_reg_ctl_v_ins", false,-1);
        tracep->declBit(c+179,"Top core id_reg_ctl_v_memRead", false,-1);
        tracep->declBit(c+150,"Top core id_reg_ctl_v_MemWrite", false,-1);
        tracep->declBus(c+34,"Top core ex_reg_result", false,-1, 31,0);
        tracep->declBus(c+160,"Top core ex_reg_wd", false,-1, 31,0);
        tracep->declBus(c+180,"Top core ex_reg_wra", false,-1, 4,0);
        tracep->declBus(c+32,"Top core ex_reg_ins", false,-1, 31,0);
        tracep->declBus(c+181,"Top core ex_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+36,"Top core ex_reg_ctl_regWrite", false,-1);
        tracep->declBit(c+28,"Top core ex_reg_ctl_memRead", false,-1);
        tracep->declBit(c+182,"Top core ex_reg_ctl_memWrite", false,-1);
        tracep->declBus(c+183,"Top core ex_reg_pc", false,-1, 31,0);
        tracep->declBit(c+38,"Top core ex_reg_is_csr", false,-1);
        tracep->declBus(c+41,"Top core ex_reg_csr_data", false,-1, 31,0);
        tracep->declArray(c+141,"Top core ex_reg_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+184,"Top core ex_reg_vl", false,-1, 31,0);
        tracep->declBus(c+145,"Top core ex_reg_vd_addr", false,-1, 4,0);
        tracep->declBus(c+185,"Top core ex_reg_lmul_v", false,-1, 3,0);
        tracep->declBit(c+186,"Top core ex_reg_vset", false,-1);
        tracep->declBit(c+187,"Top core ex_reg_ctl_v_memRead", false,-1);
        tracep->declBit(c+188,"Top core ex_reg_ctl_v_MemWrite", false,-1);
        tracep->declBit(c+149,"Top core ex_reg_reg_write", false,-1);
        tracep->declBus(c+189,"Top core ex_reg_vtype", false,-1, 10,0);
        tracep->declBus(c+190,"Top core ex_reg_eew", false,-1, 9,0);
        tracep->declBus(c+191,"Top core ex_reg_lsuType", false,-1, 3,0);
        tracep->declBus(c+192,"Top core ex_reg_read_data1", false,-1, 31,0);
        tracep->declBit(c+159,"Top core ex_reg_v_ins", false,-1);
        tracep->declBus(c+14,"Top core mem_reg_ins", false,-1, 31,0);
        tracep->declBus(c+193,"Top core mem_reg_result", false,-1, 31,0);
        tracep->declBus(c+20,"Top core mem_reg_wra", false,-1, 4,0);
        tracep->declBus(c+194,"Top core mem_reg_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+26,"Top core mem_reg_ctl_regWrite", false,-1);
        tracep->declBus(c+12,"Top core mem_reg_pc", false,-1, 31,0);
        tracep->declBit(c+39,"Top core mem_reg_is_csr", false,-1);
        tracep->declBus(c+42,"Top core mem_reg_csr_data", false,-1, 31,0);
        tracep->declArray(c+65,"Top core mem_reg_vec_alu_out", false,-1, 127,0);
        tracep->declBus(c+91,"Top core mem_reg_vec_vl", false,-1, 31,0);
        tracep->declBus(c+89,"Top core mem_reg_vtype", false,-1, 10,0);
        tracep->declBus(c+69,"Top core mem_reg_vec_vd_addr", false,-1, 4,0);
        tracep->declBus(c+71,"Top core mem_reg_lmul_v", false,-1, 3,0);
        tracep->declBit(c+92,"Top core mem_reg_vset", false,-1);
        tracep->declBit(c+70,"Top core mem_reg_vec_reg_write", false,-1);
        tracep->declBus(c+195,"Top core lmul", false,-1, 2,0);
        tracep->declBus(c+165,"Top core vtype", false,-1, 31,0);
        tracep->declBus(c+943,"Top core instruction", false,-1, 31,0);
        tracep->declBus(c+949,"Top core vlcount1", false,-1, 31,0);
        tracep->declBus(c+196,"Top core lmul_reg", false,-1, 31,0);
        tracep->declBus(c+197,"Top core vlmul_count", false,-1, 31,0);
        tracep->declBus(c+198,"Top core delays", false,-1, 31,0);
        tracep->declBus(c+199,"Top core addrcount", false,-1, 31,0);
        tracep->declBus(c+200,"Top core vlcount", false,-1, 31,0);
        tracep->declBus(c+950,"Top core func7", false,-1, 5,0);
        tracep->declBit(c+951,"Top core IF_stall", false,-1);
        tracep->declBit(c+168,"Top core ral_halt_o", false,-1);
        tracep->declBus(c+952,"Top core next_pc_selector", false,-1, 31,0);
        tracep->declBit(c+948,"Top core is_comp", false,-1);
        tracep->declBus(c+201,"Top core REG__0", false,-1, 31,0);
        tracep->declBus(c+202,"Top core REG__1", false,-1, 31,0);
        tracep->declBus(c+203,"Top core REG__2", false,-1, 31,0);
        tracep->declBus(c+13,"Top core REG__3", false,-1, 31,0);
        tracep->declBus(c+204,"Top core REG_1_0", false,-1, 4,0);
        tracep->declBus(c+205,"Top core REG_1_1", false,-1, 4,0);
        tracep->declBus(c+21,"Top core REG_1_2", false,-1, 4,0);
        tracep->declBus(c+206,"Top core REG_2_0", false,-1, 4,0);
        tracep->declBus(c+207,"Top core REG_2_1", false,-1, 4,0);
        tracep->declBus(c+22,"Top core REG_2_2", false,-1, 4,0);
        tracep->declBus(c+208,"Top core REG_3_0", false,-1, 31,0);
        tracep->declBus(c+16,"Top core REG_3_1", false,-1, 31,0);
        tracep->declBus(c+209,"Top core REG_4_0", false,-1, 31,0);
        tracep->declBus(c+17,"Top core REG_4_1", false,-1, 31,0);
        tracep->declBus(c+15,"Top core REG_5", false,-1, 31,0);
        tracep->declBus(c+18,"Top core REG_6", false,-1, 31,0);
        tracep->declBit(c+210,"Top core REG_7_0", false,-1);
        tracep->declBit(c+211,"Top core REG_7_1", false,-1);
        tracep->declBit(c+212,"Top core REG_7_2", false,-1);
        tracep->declBit(c+19,"Top core REG_7_3", false,-1);
        tracep->declBus(c+1092,"Top core data", false,-1, 31,0);
        tracep->declBit(c+1073,"Top core InstructionFetch reset", false,-1);
        tracep->declBus(c+1064,"Top core InstructionFetch io_address", false,-1, 31,0);
        tracep->declBus(c+936,"Top core InstructionFetch io_instruction", false,-1, 31,0);
        tracep->declBit(c+721,"Top core InstructionFetch io_stall", false,-1);
        tracep->declBit(c+1091,"Top core InstructionFetch io_coreInstrReq_ready", false,-1);
        tracep->declBit(c+1062,"Top core InstructionFetch io_coreInstrReq_valid", false,-1);
        tracep->declBus(c+1063,"Top core InstructionFetch io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core InstructionFetch io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top core InstructionFetch io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top core InstructionFetch io_coreInstrReq_bits_isWrite", false,-1);
        tracep->declBit(c+1091,"Top core InstructionFetch io_coreInstrResp_ready", false,-1);
        tracep->declBit(c+11,"Top core InstructionFetch io_coreInstrResp_valid", false,-1);
        tracep->declBus(c+924,"Top core InstructionFetch io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode reset", false,-1);
        tracep->declBus(c+24,"Top core IDecode io_id_instruction", false,-1, 31,0);
        tracep->declBus(c+937,"Top core IDecode io_writeData", false,-1, 31,0);
        tracep->declBus(c+20,"Top core IDecode io_writeReg", false,-1, 4,0);
        tracep->declBus(c+25,"Top core IDecode io_pcAddress", false,-1, 31,0);
        tracep->declBit(c+26,"Top core IDecode io_ctl_writeEnable", false,-1);
        tracep->declBit(c+27,"Top core IDecode io_id_ex_mem_read", false,-1);
        tracep->declBit(c+28,"Top core IDecode io_ex_mem_mem_read", false,-1);
        tracep->declBit(c+10,"Top core IDecode io_dmem_resp_valid", false,-1);
        tracep->declBus(c+29,"Top core IDecode io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+30,"Top core IDecode io_ex_mem_rd", false,-1, 4,0);
        tracep->declBit(c+31,"Top core IDecode io_id_ex_branch", false,-1);
        tracep->declBus(c+32,"Top core IDecode io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+14,"Top core IDecode io_mem_wb_ins", false,-1, 31,0);
        tracep->declBus(c+33,"Top core IDecode io_ex_ins", false,-1, 31,0);
        tracep->declBus(c+938,"Top core IDecode io_ex_result", false,-1, 31,0);
        tracep->declBus(c+34,"Top core IDecode io_ex_mem_result", false,-1, 31,0);
        tracep->declBus(c+937,"Top core IDecode io_mem_wb_result", false,-1, 31,0);
        tracep->declBit(c+35,"Top core IDecode io_id_ex_regWr", false,-1);
        tracep->declBit(c+36,"Top core IDecode io_ex_mem_regWr", false,-1);
        tracep->declBit(c+37,"Top core IDecode io_csr_Ex", false,-1);
        tracep->declBit(c+38,"Top core IDecode io_csr_Mem", false,-1);
        tracep->declBit(c+39,"Top core IDecode io_csr_Wb", false,-1);
        tracep->declBus(c+40,"Top core IDecode io_csr_Ex_data", false,-1, 31,0);
        tracep->declBus(c+41,"Top core IDecode io_csr_Mem_data", false,-1, 31,0);
        tracep->declBus(c+42,"Top core IDecode io_csr_Wb_data", false,-1, 31,0);
        tracep->declBus(c+923,"Top core IDecode io_dmem_data", false,-1, 31,0);
        tracep->declBus(c+43,"Top core IDecode io_immediate", false,-1, 31,0);
        tracep->declBus(c+44,"Top core IDecode io_writeRegAddress", false,-1, 4,0);
        tracep->declBus(c+939,"Top core IDecode io_readData1", false,-1, 31,0);
        tracep->declBus(c+940,"Top core IDecode io_readData2", false,-1, 31,0);
        tracep->declBus(c+45,"Top core IDecode io_func7", false,-1, 6,0);
        tracep->declBus(c+46,"Top core IDecode io_func3", false,-1, 2,0);
        tracep->declBus(c+47,"Top core IDecode io_func6", false,-1, 5,0);
        tracep->declBit(c+48,"Top core IDecode io_ctl_aluSrc", false,-1);
        tracep->declBus(c+49,"Top core IDecode io_ctl_memToReg", false,-1, 1,0);
        tracep->declBit(c+50,"Top core IDecode io_ctl_regWrite", false,-1);
        tracep->declBit(c+51,"Top core IDecode io_ctl_memRead", false,-1);
        tracep->declBit(c+52,"Top core IDecode io_ctl_memWrite", false,-1);
        tracep->declBit(c+53,"Top core IDecode io_ctl_branch", false,-1);
        tracep->declBus(c+54,"Top core IDecode io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+55,"Top core IDecode io_ctl_jump", false,-1, 1,0);
        tracep->declBit(c+56,"Top core IDecode io_ctl_v_RegWrite", false,-1);
        tracep->declBit(c+57,"Top core IDecode io_ctl_v_opBsel", false,-1);
        tracep->declBus(c+58,"Top core IDecode io_ctl_v_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+59,"Top core IDecode io_ctl_v_aluop", false,-1, 4,0);
        tracep->declBit(c+60,"Top core IDecode io_ctl_v_vset", false,-1);
        tracep->declBus(c+61,"Top core IDecode io_ctl_v_load", false,-1, 3,0);
        tracep->declBit(c+62,"Top core IDecode io_ctl_v_ins", false,-1);
        tracep->declBit(c+1090,"Top core IDecode io_ctl_v_memRead", false,-1);
        tracep->declBit(c+63,"Top core IDecode io_ctl_v_memWrite", false,-1);
        tracep->declBit(c+64,"Top core IDecode io_ctl_v_reg_read", false,-1);
        tracep->declArray(c+65,"Top core IDecode io_write_data", false,-1, 127,0);
        tracep->declBus(c+69,"Top core IDecode io_wb_addr", false,-1, 4,0);
        tracep->declBit(c+70,"Top core IDecode io_wb_RegWrite", false,-1);
        tracep->declBus(c+71,"Top core IDecode io_id_lmul_count", false,-1, 3,0);
        tracep->declBus(c+72,"Top core IDecode io_id_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+73,"Top core IDecode io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+77,"Top core IDecode io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+81,"Top core IDecode io_vs2_data", false,-1, 127,0);
        tracep->declBit(c+56,"Top core IDecode io_reg_write", false,-1);
        tracep->declBus(c+85,"Top core IDecode io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+44,"Top core IDecode io_vd_addr", false,-1, 4,0);
        tracep->declArray(c+1,"Top core IDecode io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+65,"Top core IDecode io_id_wbvs3_data", false,-1, 127,0);
        tracep->declBus(c+87,"Top core IDecode io_v_z_imm", false,-1, 31,0);
        tracep->declBus(c+88,"Top core IDecode io_v_addi_imm", false,-1, 31,0);
        tracep->declBus(c+89,"Top core IDecode io_vtypei", false,-1, 10,0);
        tracep->declBus(c+90,"Top core IDecode io_vtypei_out", false,-1, 10,0);
        tracep->declBus(c+91,"Top core IDecode io_vl", false,-1, 31,0);
        tracep->declBit(c+92,"Top core IDecode io_ctl_vset", false,-1);
        tracep->declBus(c+93,"Top core IDecode io_vl_out", false,-1, 31,0);
        tracep->declBus(c+1092,"Top core IDecode io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+94,"Top core IDecode io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBit(c+95,"Top core IDecode io_hdu_pcWrite", false,-1);
        tracep->declBit(c+96,"Top core IDecode io_hdu_if_reg_write", false,-1);
        tracep->declBit(c+941,"Top core IDecode io_pcSrc", false,-1);
        tracep->declBus(c+722,"Top core IDecode io_pcPlusOffset", false,-1, 31,0);
        tracep->declBit(c+723,"Top core IDecode io_ifid_flush", false,-1);
        tracep->declBit(c+97,"Top core IDecode io_stall", false,-1);
        tracep->declBus(c+1088,"Top core IDecode io_csr_i_misa", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode io_csr_i_mhartid", false,-1, 31,0);
        tracep->declBus(c+98,"Top core IDecode io_csr_o_data", false,-1, 31,0);
        tracep->declBit(c+99,"Top core IDecode io_is_csr", false,-1);
        tracep->declBus(c+23,"Top core IDecode io_fscr_o_data", false,-1, 31,0);
        tracep->declBus(c+85,"Top core IDecode io_rs_addr_0", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode io_rs_addr_1", false,-1, 4,0);
        tracep->declBit(c+1072,"Top core IDecode csr_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode csr_reset", false,-1);
        tracep->declBus(c+1088,"Top core IDecode csr_io_i_misa_value", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode csr_io_i_mhartid_value", false,-1, 31,0);
        tracep->declBus(c+1082,"Top core IDecode csr_io_i_data", false,-1, 31,0);
        tracep->declBus(c+85,"Top core IDecode csr_io_i_imm", false,-1, 4,0);
        tracep->declBus(c+98,"Top core IDecode csr_io_o_data", false,-1, 31,0);
        tracep->declBus(c+46,"Top core IDecode csr_io_i_opr", false,-1, 2,0);
        tracep->declBus(c+213,"Top core IDecode csr_io_i_addr", false,-1, 11,0);
        tracep->declBit(c+214,"Top core IDecode csr_io_i_w_en", false,-1);
        tracep->declBus(c+23,"Top core IDecode csr_io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+35,"Top core IDecode csrController_io_regWrExecute", false,-1);
        tracep->declBus(c+29,"Top core IDecode csrController_io_rdSelExecute", false,-1, 4,0);
        tracep->declBit(c+37,"Top core IDecode csrController_io_csrWrExecute", false,-1);
        tracep->declBit(c+36,"Top core IDecode csrController_io_regWrMemory", false,-1);
        tracep->declBus(c+30,"Top core IDecode csrController_io_rdSelMemory", false,-1, 4,0);
        tracep->declBit(c+38,"Top core IDecode csrController_io_csrWrMemory", false,-1);
        tracep->declBit(c+26,"Top core IDecode csrController_io_regWrWriteback", false,-1);
        tracep->declBus(c+20,"Top core IDecode csrController_io_rdSelWriteback", false,-1, 4,0);
        tracep->declBit(c+39,"Top core IDecode csrController_io_csrWrWriteback", false,-1);
        tracep->declBus(c+85,"Top core IDecode csrController_io_rs1SelDecode", false,-1, 4,0);
        tracep->declBit(c+99,"Top core IDecode csrController_io_csrInstDecode", false,-1);
        tracep->declBus(c+215,"Top core IDecode csrController_io_forwardRS1", false,-1, 2,0);
        tracep->declBit(c+27,"Top core IDecode hdu_io_id_ex_memRead", false,-1);
        tracep->declBit(c+28,"Top core IDecode hdu_io_ex_mem_memRead", false,-1);
        tracep->declBit(c+31,"Top core IDecode hdu_io_id_ex_branch", false,-1);
        tracep->declBus(c+29,"Top core IDecode hdu_io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+30,"Top core IDecode hdu_io_ex_mem_rd", false,-1, 4,0);
        tracep->declBus(c+85,"Top core IDecode hdu_io_id_rs1", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode hdu_io_id_rs2", false,-1, 4,0);
        tracep->declBit(c+953,"Top core IDecode hdu_io_taken", false,-1);
        tracep->declBus(c+55,"Top core IDecode hdu_io_jump", false,-1, 1,0);
        tracep->declBit(c+53,"Top core IDecode hdu_io_branch", false,-1);
        tracep->declBit(c+96,"Top core IDecode hdu_io_if_reg_write", false,-1);
        tracep->declBit(c+95,"Top core IDecode hdu_io_pc_write", false,-1);
        tracep->declBit(c+96,"Top core IDecode hdu_io_ctl_mux", false,-1);
        tracep->declBit(c+723,"Top core IDecode hdu_io_ifid_flush", false,-1);
        tracep->declBit(c+95,"Top core IDecode hdu_io_take_branch", false,-1);
        tracep->declBus(c+24,"Top core IDecode control_io_in", false,-1, 31,0);
        tracep->declBit(c+48,"Top core IDecode control_io_aluSrc", false,-1);
        tracep->declBus(c+49,"Top core IDecode control_io_memToReg", false,-1, 1,0);
        tracep->declBit(c+216,"Top core IDecode control_io_regWrite", false,-1);
        tracep->declBit(c+51,"Top core IDecode control_io_memRead", false,-1);
        tracep->declBit(c+217,"Top core IDecode control_io_memWrite", false,-1);
        tracep->declBit(c+53,"Top core IDecode control_io_branch", false,-1);
        tracep->declBus(c+54,"Top core IDecode control_io_aluOp", false,-1, 1,0);
        tracep->declBus(c+55,"Top core IDecode control_io_jump", false,-1, 1,0);
        tracep->declBus(c+94,"Top core IDecode control_io_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+24,"Top core IDecode Vcontrol_io_Instruction", false,-1, 31,0);
        tracep->declBit(c+56,"Top core IDecode Vcontrol_io_RegWrite", false,-1);
        tracep->declBit(c+57,"Top core IDecode Vcontrol_io_opBsel", false,-1);
        tracep->declBus(c+58,"Top core IDecode Vcontrol_io_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+59,"Top core IDecode Vcontrol_io_aluop", false,-1, 4,0);
        tracep->declBit(c+60,"Top core IDecode Vcontrol_io_vset", false,-1);
        tracep->declBit(c+218,"Top core IDecode Vcontrol_io_v_load", false,-1);
        tracep->declBit(c+63,"Top core IDecode Vcontrol_io_v_store", false,-1);
        tracep->declBit(c+62,"Top core IDecode Vcontrol_io_v_ins", false,-1);
        tracep->declBit(c+64,"Top core IDecode Vcontrol_io_RegRead", false,-1);
        tracep->declBit(c+1090,"Top core IDecode Vcontrol_io_V_MemToReg", false,-1);
        tracep->declBit(c+1090,"Top core IDecode Vcontrol_io_V_MemRead", false,-1);
        tracep->declBit(c+63,"Top core IDecode Vcontrol_io_memWrite", false,-1);
        tracep->declBit(c+1072,"Top core IDecode registers_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode registers_reset", false,-1);
        tracep->declBus(c+85,"Top core IDecode registers_io_readAddress_0", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode registers_io_readAddress_1", false,-1, 4,0);
        tracep->declBit(c+219,"Top core IDecode registers_io_writeEnable", false,-1);
        tracep->declBus(c+220,"Top core IDecode registers_io_writeAddress", false,-1, 4,0);
        tracep->declBus(c+954,"Top core IDecode registers_io_writeData", false,-1, 31,0);
        tracep->declBus(c+221,"Top core IDecode registers_io_readData_0", false,-1, 31,0);
        tracep->declBus(c+222,"Top core IDecode registers_io_readData_1", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode v_registers_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode v_registers_reset", false,-1);
        tracep->declBus(c+85,"Top core IDecode v_registers_io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode v_registers_io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+69,"Top core IDecode v_registers_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+71,"Top core IDecode v_registers_io_lmul_count", false,-1, 3,0);
        tracep->declBus(c+72,"Top core IDecode v_registers_io_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+73,"Top core IDecode v_registers_io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+77,"Top core IDecode v_registers_io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+81,"Top core IDecode v_registers_io_vs2_data", false,-1, 127,0);
        tracep->declArray(c+1,"Top core IDecode v_registers_io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+65,"Top core IDecode v_registers_io_vd_data", false,-1, 127,0);
        tracep->declBit(c+70,"Top core IDecode v_registers_io_reg_write", false,-1);
        tracep->declBit(c+64,"Top core IDecode v_registers_io_reg_read", false,-1);
        tracep->declArray(c+65,"Top core IDecode v_registers_io_vd_dataout", false,-1, 127,0);
        tracep->declBus(c+24,"Top core IDecode immediate_io_instruction", false,-1, 31,0);
        tracep->declBus(c+43,"Top core IDecode immediate_io_out", false,-1, 31,0);
        tracep->declBus(c+24,"Top core IDecode v_immediate_io_instruction", false,-1, 31,0);
        tracep->declBus(c+223,"Top core IDecode v_immediate_io_z_imm", false,-1, 31,0);
        tracep->declBus(c+88,"Top core IDecode v_immediate_io_addi_imm", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode vec_csr_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode vec_csr_reset", false,-1);
        tracep->declBus(c+89,"Top core IDecode vec_csr_io_vtypei", false,-1, 10,0);
        tracep->declBus(c+91,"Top core IDecode vec_csr_io_vl", false,-1, 31,0);
        tracep->declBit(c+92,"Top core IDecode vec_csr_io_vset", false,-1);
        tracep->declBus(c+93,"Top core IDecode vec_csr_io_vl_out", false,-1, 31,0);
        tracep->declBus(c+224,"Top core IDecode vec_csr_io_vtype_out", false,-1, 31,0);
        tracep->declBus(c+1092,"Top core IDecode vec_csr_io_vstart_out", false,-1, 31,0);
        tracep->declBit(c+53,"Top core IDecode bu_io_branch", false,-1);
        tracep->declBus(c+46,"Top core IDecode bu_io_funct3", false,-1, 2,0);
        tracep->declBus(c+955,"Top core IDecode bu_io_rd1", false,-1, 31,0);
        tracep->declBus(c+956,"Top core IDecode bu_io_rd2", false,-1, 31,0);
        tracep->declBit(c+95,"Top core IDecode bu_io_take_branch", false,-1);
        tracep->declBit(c+953,"Top core IDecode bu_io_taken", false,-1);
        tracep->declBus(c+730,"Top core IDecode j_offset", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode csr clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode csr reset", false,-1);
        tracep->declBus(c+1088,"Top core IDecode csr io_i_misa_value", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode csr io_i_mhartid_value", false,-1, 31,0);
        tracep->declBus(c+1082,"Top core IDecode csr io_i_data", false,-1, 31,0);
        tracep->declBus(c+85,"Top core IDecode csr io_i_imm", false,-1, 4,0);
        tracep->declBus(c+98,"Top core IDecode csr io_o_data", false,-1, 31,0);
        tracep->declBus(c+46,"Top core IDecode csr io_i_opr", false,-1, 2,0);
        tracep->declBus(c+213,"Top core IDecode csr io_i_addr", false,-1, 11,0);
        tracep->declBit(c+214,"Top core IDecode csr io_i_w_en", false,-1);
        tracep->declBus(c+23,"Top core IDecode csr io_fcsr_o_data", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode csr csrRegFile_clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode csr csrRegFile_reset", false,-1);
        tracep->declBus(c+1088,"Top core IDecode csr csrRegFile_io_MISA_i_value", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode csr csrRegFile_io_MHARTID_i_value", false,-1, 31,0);
        tracep->declBus(c+225,"Top core IDecode csr csrRegFile_io_CSR_i_opr", false,-1, 1,0);
        tracep->declBus(c+98,"Top core IDecode csr csrRegFile_io_CSR_o_data", false,-1, 31,0);
        tracep->declBus(c+957,"Top core IDecode csr csrRegFile_io_CSR_i_data", false,-1, 31,0);
        tracep->declBus(c+213,"Top core IDecode csr csrRegFile_io_CSR_i_addr", false,-1, 11,0);
        tracep->declBit(c+214,"Top core IDecode csr csrRegFile_io_CSR_i_w_en", false,-1);
        tracep->declBit(c+226,"Top core IDecode csr csrRegFile_io_FCSR_nx", false,-1);
        tracep->declBit(c+227,"Top core IDecode csr csrRegFile_io_FCSR_uf", false,-1);
        tracep->declBit(c+228,"Top core IDecode csr csrRegFile_io_FCSR_of", false,-1);
        tracep->declBit(c+229,"Top core IDecode csr csrRegFile_io_FCSR_dz", false,-1);
        tracep->declBit(c+230,"Top core IDecode csr csrRegFile_io_FCSR_nv", false,-1);
        tracep->declBus(c+231,"Top core IDecode csr csrRegFile_io_FCSR_frm", false,-1, 2,0);
        tracep->declBus(c+232,"Top core IDecode csr lo", false,-1, 2,0);
        tracep->declBus(c+233,"Top core IDecode csr hi", false,-1, 28,0);
        tracep->declBit(c+1072,"Top core IDecode csr csrRegFile clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode csr csrRegFile reset", false,-1);
        tracep->declBus(c+1088,"Top core IDecode csr csrRegFile io_MISA_i_value", false,-1, 31,0);
        tracep->declBus(c+1088,"Top core IDecode csr csrRegFile io_MHARTID_i_value", false,-1, 31,0);
        tracep->declBus(c+225,"Top core IDecode csr csrRegFile io_CSR_i_opr", false,-1, 1,0);
        tracep->declBus(c+98,"Top core IDecode csr csrRegFile io_CSR_o_data", false,-1, 31,0);
        tracep->declBus(c+957,"Top core IDecode csr csrRegFile io_CSR_i_data", false,-1, 31,0);
        tracep->declBus(c+213,"Top core IDecode csr csrRegFile io_CSR_i_addr", false,-1, 11,0);
        tracep->declBit(c+214,"Top core IDecode csr csrRegFile io_CSR_i_w_en", false,-1);
        tracep->declBit(c+226,"Top core IDecode csr csrRegFile io_FCSR_nx", false,-1);
        tracep->declBit(c+227,"Top core IDecode csr csrRegFile io_FCSR_uf", false,-1);
        tracep->declBit(c+228,"Top core IDecode csr csrRegFile io_FCSR_of", false,-1);
        tracep->declBit(c+229,"Top core IDecode csr csrRegFile io_FCSR_dz", false,-1);
        tracep->declBit(c+230,"Top core IDecode csr csrRegFile io_FCSR_nv", false,-1);
        tracep->declBus(c+231,"Top core IDecode csr csrRegFile io_FCSR_frm", false,-1, 2,0);
        tracep->declBus(c+234,"Top core IDecode csr csrRegFile MISA_REG", false,-1, 31,0);
        tracep->declBus(c+234,"Top core IDecode csr csrRegFile MHARTID_REG", false,-1, 31,0);
        tracep->declBus(c+235,"Top core IDecode csr csrRegFile MCAUSE_REG", false,-1, 31,0);
        tracep->declBus(c+236,"Top core IDecode csr csrRegFile MTVEC_REG", false,-1, 31,0);
        tracep->declBus(c+237,"Top core IDecode csr csrRegFile MEPC_REG", false,-1, 31,0);
        tracep->declBus(c+238,"Top core IDecode csr csrRegFile MIE_REG", false,-1, 31,0);
        tracep->declBit(c+239,"Top core IDecode csr csrRegFile MSTATUS_TW_REG", false,-1);
        tracep->declBit(c+240,"Top core IDecode csr csrRegFile MSTATUS_MPRV_REG", false,-1);
        tracep->declBus(c+241,"Top core IDecode csr csrRegFile MSTATUS_MPP_REG", false,-1, 1,0);
        tracep->declBit(c+242,"Top core IDecode csr csrRegFile MSTATUS_MPIE_REG", false,-1);
        tracep->declBit(c+243,"Top core IDecode csr csrRegFile MSTATUS_MIE_REG", false,-1);
        tracep->declBit(c+226,"Top core IDecode csr csrRegFile FCSR_NX_REG", false,-1);
        tracep->declBit(c+227,"Top core IDecode csr csrRegFile FCSR_UF_REG", false,-1);
        tracep->declBit(c+228,"Top core IDecode csr csrRegFile FCSR_OF_REG", false,-1);
        tracep->declBit(c+229,"Top core IDecode csr csrRegFile FCSR_DZ_REG", false,-1);
        tracep->declBit(c+230,"Top core IDecode csr csrRegFile FCSR_NV_REG", false,-1);
        tracep->declBus(c+231,"Top core IDecode csr csrRegFile FCSR_FRM_REG", false,-1, 2,0);
        tracep->declBus(c+244,"Top core IDecode csr csrRegFile lo", false,-1, 10,0);
        tracep->declBus(c+245,"Top core IDecode csr csrRegFile MSTATUS_WIRE", false,-1, 31,0);
        tracep->declBus(c+246,"Top core IDecode csr csrRegFile FFLAGS_WIRE", false,-1, 31,0);
        tracep->declBus(c+247,"Top core IDecode csr csrRegFile FRM_WIRE", false,-1, 31,0);
        tracep->declBus(c+248,"Top core IDecode csr csrRegFile FCSR_WIRE", false,-1, 31,0);
        tracep->declBus(c+249,"Top core IDecode csr csrRegFile r_data", false,-1, 31,0);
        tracep->declBus(c+731,"Top core IDecode csr csrRegFile set_data", false,-1, 31,0);
        tracep->declBus(c+732,"Top core IDecode csr csrRegFile clear_data", false,-1, 31,0);
        tracep->declBus(c+958,"Top core IDecode csr csrRegFile w_data", false,-1, 31,0);
        tracep->declBit(c+35,"Top core IDecode csrController io_regWrExecute", false,-1);
        tracep->declBus(c+29,"Top core IDecode csrController io_rdSelExecute", false,-1, 4,0);
        tracep->declBit(c+37,"Top core IDecode csrController io_csrWrExecute", false,-1);
        tracep->declBit(c+36,"Top core IDecode csrController io_regWrMemory", false,-1);
        tracep->declBus(c+30,"Top core IDecode csrController io_rdSelMemory", false,-1, 4,0);
        tracep->declBit(c+38,"Top core IDecode csrController io_csrWrMemory", false,-1);
        tracep->declBit(c+26,"Top core IDecode csrController io_regWrWriteback", false,-1);
        tracep->declBus(c+20,"Top core IDecode csrController io_rdSelWriteback", false,-1, 4,0);
        tracep->declBit(c+39,"Top core IDecode csrController io_csrWrWriteback", false,-1);
        tracep->declBus(c+85,"Top core IDecode csrController io_rs1SelDecode", false,-1, 4,0);
        tracep->declBit(c+99,"Top core IDecode csrController io_csrInstDecode", false,-1);
        tracep->declBus(c+215,"Top core IDecode csrController io_forwardRS1", false,-1, 2,0);
        tracep->declBit(c+250,"Top core IDecode csrController hazard_DecEx", false,-1);
        tracep->declBit(c+251,"Top core IDecode csrController hazard_DecMem", false,-1);
        tracep->declBit(c+252,"Top core IDecode csrController hazard_DecWb", false,-1);
        tracep->declBit(c+253,"Top core IDecode csrController csrHazard_DecEx", false,-1);
        tracep->declBit(c+254,"Top core IDecode csrController csrHazard_DecMem", false,-1);
        tracep->declBit(c+255,"Top core IDecode csrController csrHazard_DecWb", false,-1);
        tracep->declBit(c+27,"Top core IDecode hdu io_id_ex_memRead", false,-1);
        tracep->declBit(c+28,"Top core IDecode hdu io_ex_mem_memRead", false,-1);
        tracep->declBit(c+31,"Top core IDecode hdu io_id_ex_branch", false,-1);
        tracep->declBus(c+29,"Top core IDecode hdu io_id_ex_rd", false,-1, 4,0);
        tracep->declBus(c+30,"Top core IDecode hdu io_ex_mem_rd", false,-1, 4,0);
        tracep->declBus(c+85,"Top core IDecode hdu io_id_rs1", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode hdu io_id_rs2", false,-1, 4,0);
        tracep->declBit(c+953,"Top core IDecode hdu io_taken", false,-1);
        tracep->declBus(c+55,"Top core IDecode hdu io_jump", false,-1, 1,0);
        tracep->declBit(c+53,"Top core IDecode hdu io_branch", false,-1);
        tracep->declBit(c+96,"Top core IDecode hdu io_if_reg_write", false,-1);
        tracep->declBit(c+95,"Top core IDecode hdu io_pc_write", false,-1);
        tracep->declBit(c+96,"Top core IDecode hdu io_ctl_mux", false,-1);
        tracep->declBit(c+723,"Top core IDecode hdu io_ifid_flush", false,-1);
        tracep->declBit(c+95,"Top core IDecode hdu io_take_branch", false,-1);
        tracep->declBus(c+24,"Top core IDecode control io_in", false,-1, 31,0);
        tracep->declBit(c+48,"Top core IDecode control io_aluSrc", false,-1);
        tracep->declBus(c+49,"Top core IDecode control io_memToReg", false,-1, 1,0);
        tracep->declBit(c+216,"Top core IDecode control io_regWrite", false,-1);
        tracep->declBit(c+51,"Top core IDecode control io_memRead", false,-1);
        tracep->declBit(c+217,"Top core IDecode control io_memWrite", false,-1);
        tracep->declBit(c+53,"Top core IDecode control io_branch", false,-1);
        tracep->declBus(c+54,"Top core IDecode control io_aluOp", false,-1, 1,0);
        tracep->declBus(c+55,"Top core IDecode control io_jump", false,-1, 1,0);
        tracep->declBus(c+94,"Top core IDecode control io_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+24,"Top core IDecode Vcontrol io_Instruction", false,-1, 31,0);
        tracep->declBit(c+56,"Top core IDecode Vcontrol io_RegWrite", false,-1);
        tracep->declBit(c+57,"Top core IDecode Vcontrol io_opBsel", false,-1);
        tracep->declBus(c+58,"Top core IDecode Vcontrol io_Ex_sel", false,-1, 3,0);
        tracep->declBus(c+59,"Top core IDecode Vcontrol io_aluop", false,-1, 4,0);
        tracep->declBit(c+60,"Top core IDecode Vcontrol io_vset", false,-1);
        tracep->declBit(c+218,"Top core IDecode Vcontrol io_v_load", false,-1);
        tracep->declBit(c+63,"Top core IDecode Vcontrol io_v_store", false,-1);
        tracep->declBit(c+62,"Top core IDecode Vcontrol io_v_ins", false,-1);
        tracep->declBit(c+64,"Top core IDecode Vcontrol io_RegRead", false,-1);
        tracep->declBit(c+1090,"Top core IDecode Vcontrol io_V_MemToReg", false,-1);
        tracep->declBit(c+1090,"Top core IDecode Vcontrol io_V_MemRead", false,-1);
        tracep->declBit(c+63,"Top core IDecode Vcontrol io_memWrite", false,-1);
        tracep->declBus(c+256,"Top core IDecode Vcontrol configtype", false,-1, 1,0);
        tracep->declBus(c+257,"Top core IDecode Vcontrol opcode", false,-1, 6,0);
        tracep->declBus(c+46,"Top core IDecode Vcontrol func3", false,-1, 2,0);
        tracep->declBit(c+1072,"Top core IDecode registers clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode registers reset", false,-1);
        tracep->declBus(c+85,"Top core IDecode registers io_readAddress_0", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode registers io_readAddress_1", false,-1, 4,0);
        tracep->declBit(c+219,"Top core IDecode registers io_writeEnable", false,-1);
        tracep->declBus(c+220,"Top core IDecode registers io_writeAddress", false,-1, 4,0);
        tracep->declBus(c+954,"Top core IDecode registers io_writeData", false,-1, 31,0);
        tracep->declBus(c+221,"Top core IDecode registers io_readData_0", false,-1, 31,0);
        tracep->declBus(c+222,"Top core IDecode registers io_readData_1", false,-1, 31,0);
        tracep->declBus(c+258,"Top core IDecode registers reg_0", false,-1, 31,0);
        tracep->declBus(c+259,"Top core IDecode registers reg_1", false,-1, 31,0);
        tracep->declBus(c+260,"Top core IDecode registers reg_2", false,-1, 31,0);
        tracep->declBus(c+261,"Top core IDecode registers reg_3", false,-1, 31,0);
        tracep->declBus(c+262,"Top core IDecode registers reg_4", false,-1, 31,0);
        tracep->declBus(c+263,"Top core IDecode registers reg_5", false,-1, 31,0);
        tracep->declBus(c+264,"Top core IDecode registers reg_6", false,-1, 31,0);
        tracep->declBus(c+265,"Top core IDecode registers reg_7", false,-1, 31,0);
        tracep->declBus(c+266,"Top core IDecode registers reg_8", false,-1, 31,0);
        tracep->declBus(c+267,"Top core IDecode registers reg_9", false,-1, 31,0);
        tracep->declBus(c+268,"Top core IDecode registers reg_10", false,-1, 31,0);
        tracep->declBus(c+269,"Top core IDecode registers reg_11", false,-1, 31,0);
        tracep->declBus(c+270,"Top core IDecode registers reg_12", false,-1, 31,0);
        tracep->declBus(c+271,"Top core IDecode registers reg_13", false,-1, 31,0);
        tracep->declBus(c+272,"Top core IDecode registers reg_14", false,-1, 31,0);
        tracep->declBus(c+273,"Top core IDecode registers reg_15", false,-1, 31,0);
        tracep->declBus(c+274,"Top core IDecode registers reg_16", false,-1, 31,0);
        tracep->declBus(c+275,"Top core IDecode registers reg_17", false,-1, 31,0);
        tracep->declBus(c+276,"Top core IDecode registers reg_18", false,-1, 31,0);
        tracep->declBus(c+277,"Top core IDecode registers reg_19", false,-1, 31,0);
        tracep->declBus(c+278,"Top core IDecode registers reg_20", false,-1, 31,0);
        tracep->declBus(c+279,"Top core IDecode registers reg_21", false,-1, 31,0);
        tracep->declBus(c+280,"Top core IDecode registers reg_22", false,-1, 31,0);
        tracep->declBus(c+281,"Top core IDecode registers reg_23", false,-1, 31,0);
        tracep->declBus(c+282,"Top core IDecode registers reg_24", false,-1, 31,0);
        tracep->declBus(c+283,"Top core IDecode registers reg_25", false,-1, 31,0);
        tracep->declBus(c+284,"Top core IDecode registers reg_26", false,-1, 31,0);
        tracep->declBus(c+285,"Top core IDecode registers reg_27", false,-1, 31,0);
        tracep->declBus(c+286,"Top core IDecode registers reg_28", false,-1, 31,0);
        tracep->declBus(c+287,"Top core IDecode registers reg_29", false,-1, 31,0);
        tracep->declBus(c+288,"Top core IDecode registers reg_30", false,-1, 31,0);
        tracep->declBus(c+289,"Top core IDecode registers reg_31", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core IDecode v_registers clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode v_registers reset", false,-1);
        tracep->declBus(c+85,"Top core IDecode v_registers io_vs1_addr", false,-1, 4,0);
        tracep->declBus(c+86,"Top core IDecode v_registers io_vs2_addr", false,-1, 4,0);
        tracep->declBus(c+69,"Top core IDecode v_registers io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+71,"Top core IDecode v_registers io_lmul_count", false,-1, 3,0);
        tracep->declBus(c+72,"Top core IDecode v_registers io_lmul_vs1in_vs2in", false,-1, 3,0);
        tracep->declArray(c+73,"Top core IDecode v_registers io_vs0_data", false,-1, 127,0);
        tracep->declArray(c+77,"Top core IDecode v_registers io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+81,"Top core IDecode v_registers io_vs2_data", false,-1, 127,0);
        tracep->declArray(c+1,"Top core IDecode v_registers io_vs3_data", false,-1, 127,0);
        tracep->declArray(c+65,"Top core IDecode v_registers io_vd_data", false,-1, 127,0);
        tracep->declBit(c+70,"Top core IDecode v_registers io_reg_write", false,-1);
        tracep->declBit(c+64,"Top core IDecode v_registers io_reg_read", false,-1);
        tracep->declArray(c+65,"Top core IDecode v_registers io_vd_dataout", false,-1, 127,0);
        tracep->declArray(c+290,"Top core IDecode v_registers register_0", false,-1, 127,0);
        tracep->declArray(c+294,"Top core IDecode v_registers register_1", false,-1, 127,0);
        tracep->declArray(c+298,"Top core IDecode v_registers register_2", false,-1, 127,0);
        tracep->declArray(c+302,"Top core IDecode v_registers register_3", false,-1, 127,0);
        tracep->declArray(c+306,"Top core IDecode v_registers register_4", false,-1, 127,0);
        tracep->declArray(c+310,"Top core IDecode v_registers register_5", false,-1, 127,0);
        tracep->declArray(c+314,"Top core IDecode v_registers register_6", false,-1, 127,0);
        tracep->declArray(c+318,"Top core IDecode v_registers register_7", false,-1, 127,0);
        tracep->declArray(c+322,"Top core IDecode v_registers register_8", false,-1, 127,0);
        tracep->declArray(c+326,"Top core IDecode v_registers register_9", false,-1, 127,0);
        tracep->declArray(c+330,"Top core IDecode v_registers register_10", false,-1, 127,0);
        tracep->declArray(c+334,"Top core IDecode v_registers register_11", false,-1, 127,0);
        tracep->declArray(c+338,"Top core IDecode v_registers register_12", false,-1, 127,0);
        tracep->declArray(c+342,"Top core IDecode v_registers register_13", false,-1, 127,0);
        tracep->declArray(c+346,"Top core IDecode v_registers register_14", false,-1, 127,0);
        tracep->declArray(c+350,"Top core IDecode v_registers register_15", false,-1, 127,0);
        tracep->declArray(c+354,"Top core IDecode v_registers register_16", false,-1, 127,0);
        tracep->declArray(c+358,"Top core IDecode v_registers register_17", false,-1, 127,0);
        tracep->declArray(c+362,"Top core IDecode v_registers register_18", false,-1, 127,0);
        tracep->declArray(c+366,"Top core IDecode v_registers register_19", false,-1, 127,0);
        tracep->declArray(c+370,"Top core IDecode v_registers register_20", false,-1, 127,0);
        tracep->declArray(c+374,"Top core IDecode v_registers register_21", false,-1, 127,0);
        tracep->declArray(c+378,"Top core IDecode v_registers register_22", false,-1, 127,0);
        tracep->declArray(c+382,"Top core IDecode v_registers register_23", false,-1, 127,0);
        tracep->declArray(c+386,"Top core IDecode v_registers register_24", false,-1, 127,0);
        tracep->declArray(c+390,"Top core IDecode v_registers register_25", false,-1, 127,0);
        tracep->declArray(c+394,"Top core IDecode v_registers register_26", false,-1, 127,0);
        tracep->declArray(c+398,"Top core IDecode v_registers register_27", false,-1, 127,0);
        tracep->declArray(c+402,"Top core IDecode v_registers register_28", false,-1, 127,0);
        tracep->declArray(c+406,"Top core IDecode v_registers register_29", false,-1, 127,0);
        tracep->declArray(c+410,"Top core IDecode v_registers register_30", false,-1, 127,0);
        tracep->declArray(c+414,"Top core IDecode v_registers register_31", false,-1, 127,0);
        tracep->declBus(c+418,"Top core IDecode v_registers vs1_in", false,-1, 4,0);
        tracep->declBus(c+419,"Top core IDecode v_registers vs2_in", false,-1, 4,0);
        tracep->declBus(c+420,"Top core IDecode v_registers vs3_in", false,-1, 4,0);
        tracep->declBus(c+421,"Top core IDecode v_registers vsd_in", false,-1, 4,0);
        tracep->declBus(c+24,"Top core IDecode immediate io_instruction", false,-1, 31,0);
        tracep->declBus(c+43,"Top core IDecode immediate io_out", false,-1, 31,0);
        tracep->declBus(c+257,"Top core IDecode immediate opcode", false,-1, 6,0);
        tracep->declBus(c+213,"Top core IDecode immediate lo", false,-1, 11,0);
        tracep->declBus(c+422,"Top core IDecode immediate hi", false,-1, 19,0);
        tracep->declBus(c+423,"Top core IDecode immediate hi_1", false,-1, 19,0);
        tracep->declBus(c+424,"Top core IDecode immediate hi_2", false,-1, 6,0);
        tracep->declBus(c+44,"Top core IDecode immediate lo_2", false,-1, 4,0);
        tracep->declBus(c+425,"Top core IDecode immediate lo_3", false,-1, 11,0);
        tracep->declBus(c+422,"Top core IDecode immediate hi_3", false,-1, 19,0);
        tracep->declBit(c+426,"Top core IDecode immediate hi_hi", false,-1);
        tracep->declBit(c+427,"Top core IDecode immediate hi_lo", false,-1);
        tracep->declBus(c+428,"Top core IDecode immediate lo_hi", false,-1, 5,0);
        tracep->declBus(c+429,"Top core IDecode immediate lo_lo", false,-1, 3,0);
        tracep->declBus(c+430,"Top core IDecode immediate hi_lo_1", false,-1, 11,0);
        tracep->declBus(c+431,"Top core IDecode immediate hi_hi_1", false,-1, 18,0);
        tracep->declBus(c+432,"Top core IDecode immediate hi_lo_2", false,-1, 7,0);
        tracep->declBit(c+433,"Top core IDecode immediate lo_hi_1", false,-1);
        tracep->declBus(c+434,"Top core IDecode immediate lo_lo_1", false,-1, 9,0);
        tracep->declBus(c+435,"Top core IDecode immediate hi_lo_3", false,-1, 19,0);
        tracep->declBus(c+436,"Top core IDecode immediate hi_hi_3", false,-1, 10,0);
        tracep->declBus(c+24,"Top core IDecode v_immediate io_instruction", false,-1, 31,0);
        tracep->declBus(c+223,"Top core IDecode v_immediate io_z_imm", false,-1, 31,0);
        tracep->declBus(c+88,"Top core IDecode v_immediate io_addi_imm", false,-1, 31,0);
        tracep->declBus(c+437,"Top core IDecode v_immediate hi", false,-1, 20,0);
        tracep->declBus(c+438,"Top core IDecode v_immediate lo", false,-1, 10,0);
        tracep->declBus(c+85,"Top core IDecode v_immediate lo_1", false,-1, 4,0);
        tracep->declBit(c+1072,"Top core IDecode vec_csr clock", false,-1);
        tracep->declBit(c+1073,"Top core IDecode vec_csr reset", false,-1);
        tracep->declBus(c+89,"Top core IDecode vec_csr io_vtypei", false,-1, 10,0);
        tracep->declBus(c+91,"Top core IDecode vec_csr io_vl", false,-1, 31,0);
        tracep->declBit(c+92,"Top core IDecode vec_csr io_vset", false,-1);
        tracep->declBus(c+93,"Top core IDecode vec_csr io_vl_out", false,-1, 31,0);
        tracep->declBus(c+224,"Top core IDecode vec_csr io_vtype_out", false,-1, 31,0);
        tracep->declBus(c+1092,"Top core IDecode vec_csr io_vstart_out", false,-1, 31,0);
        tracep->declBus(c+224,"Top core IDecode vec_csr vtypeReg", false,-1, 31,0);
        tracep->declBus(c+93,"Top core IDecode vec_csr vlReg", false,-1, 31,0);
        tracep->declBit(c+53,"Top core IDecode bu io_branch", false,-1);
        tracep->declBus(c+46,"Top core IDecode bu io_funct3", false,-1, 2,0);
        tracep->declBus(c+955,"Top core IDecode bu io_rd1", false,-1, 31,0);
        tracep->declBus(c+956,"Top core IDecode bu io_rd2", false,-1, 31,0);
        tracep->declBit(c+95,"Top core IDecode bu io_take_branch", false,-1);
        tracep->declBit(c+953,"Top core IDecode bu io_taken", false,-1);
        tracep->declBit(c+733,"Top core IDecode bu check", false,-1);
        tracep->declBit(c+1072,"Top core Execute clock", false,-1);
        tracep->declBit(c+1073,"Top core Execute reset", false,-1);
        tracep->declBus(c+100,"Top core Execute io_immediate", false,-1, 31,0);
        tracep->declBus(c+101,"Top core Execute io_readData1", false,-1, 31,0);
        tracep->declBus(c+102,"Top core Execute io_readData2", false,-1, 31,0);
        tracep->declBus(c+103,"Top core Execute io_pcAddress", false,-1, 31,0);
        tracep->declBus(c+104,"Top core Execute io_func7", false,-1, 6,0);
        tracep->declBus(c+105,"Top core Execute io_func3", false,-1, 2,0);
        tracep->declBus(c+34,"Top core Execute io_mem_result", false,-1, 31,0);
        tracep->declBus(c+937,"Top core Execute io_wb_result", false,-1, 31,0);
        tracep->declBit(c+36,"Top core Execute io_ex_mem_regWrite", false,-1);
        tracep->declBit(c+26,"Top core Execute io_mem_wb_regWrite", false,-1);
        tracep->declBus(c+33,"Top core Execute io_id_ex_ins", false,-1, 31,0);
        tracep->declBus(c+32,"Top core Execute io_ex_mem_ins", false,-1, 31,0);
        tracep->declBus(c+14,"Top core Execute io_mem_wb_ins", false,-1, 31,0);
        tracep->declBit(c+106,"Top core Execute io_ctl_aluSrc", false,-1);
        tracep->declBus(c+107,"Top core Execute io_ctl_aluOp", false,-1, 1,0);
        tracep->declBus(c+108,"Top core Execute io_ctl_aluSrc1", false,-1, 1,0);
        tracep->declBus(c+109,"Top core Execute io_func6", false,-1, 5,0);
        tracep->declBus(c+110,"Top core Execute io_v_ctl_aluop", false,-1, 2,0);
        tracep->declBus(c+111,"Top core Execute io_v_ctl_exsel", false,-1, 3,0);
        tracep->declBit(c+112,"Top core Execute io_v_ctl_regwrite", false,-1);
        tracep->declBit(c+113,"Top core Execute io_v_ctl_opBsel", false,-1);
        tracep->declBit(c+114,"Top core Execute io_v_ctl_v_load", false,-1);
        tracep->declBit(c+115,"Top core Execute io_v_ctl_v_ins", false,-1);
        tracep->declBit(c+116,"Top core Execute io_v_ctl_vset", false,-1);
        tracep->declArray(c+117,"Top core Execute io_vs1_data", false,-1, 127,0);
        tracep->declArray(c+121,"Top core Execute io_vs2_data", false,-1, 127,0);
        tracep->declBus(c+125,"Top core Execute io_vl", false,-1, 31,0);
        tracep->declBus(c+126,"Top core Execute io_vstart", false,-1, 31,0);
        tracep->declArray(c+127,"Top core Execute io_vs3_data", false,-1, 127,0);
        tracep->declBit(c+131,"Top core Execute io_vma", false,-1);
        tracep->declBit(c+132,"Top core Execute io_vta", false,-1);
        tracep->declBit(c+133,"Top core Execute io_vm", false,-1);
        tracep->declArray(c+134,"Top core Execute io_vs0", false,-1, 127,0);
        tracep->declBus(c+29,"Top core Execute io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+138,"Top core Execute io_v_sew", false,-1, 2,0);
        tracep->declBus(c+139,"Top core Execute io_zimm", false,-1, 31,0);
        tracep->declBus(c+140,"Top core Execute io_v_addi_imm", false,-1, 31,0);
        tracep->declArray(c+141,"Top core Execute io_vec_mem_res", false,-1, 127,0);
        tracep->declArray(c+65,"Top core Execute io_vec_wb_res", false,-1, 127,0);
        tracep->declArray(c+1,"Top core Execute io_id_reg_vs3data", false,-1, 127,0);
        tracep->declBus(c+145,"Top core Execute io_fu_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+69,"Top core Execute io_fu_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+146,"Top core Execute io_fu_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+147,"Top core Execute io_fu_reg_vs2", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute io_fu_reg_vs3", false,-1, 4,0);
        tracep->declBit(c+149,"Top core Execute io_fu_ex_reg_write", false,-1);
        tracep->declBit(c+70,"Top core Execute io_fu_mem_reg_write", false,-1);
        tracep->declBit(c+150,"Top core Execute io_v_MemWrite", false,-1);
        tracep->declArray(c+724,"Top core Execute io_vec_alu_res", false,-1, 127,0);
        tracep->declBus(c+728,"Top core Execute io_vec_vl", false,-1, 31,0);
        tracep->declBus(c+151,"Top core Execute io_vec_rd_out", false,-1, 4,0);
        tracep->declBus(c+942,"Top core Execute io_vec_avl_o", false,-1, 31,0);
        tracep->declBus(c+152,"Top core Execute io_vec_valmax_o", false,-1, 31,0);
        tracep->declArray(c+153,"Top core Execute io_vs3_data_o", false,-1, 127,0);
        tracep->declBus(c+729,"Top core Execute io_writeData", false,-1, 31,0);
        tracep->declBus(c+938,"Top core Execute io_ALUresult", false,-1, 31,0);
        tracep->declBit(c+157,"Top core Execute io_stall", false,-1);
        tracep->declBus(c+959,"Top core Execute alu_io_input1", false,-1, 31,0);
        tracep->declBus(c+960,"Top core Execute alu_io_input2", false,-1, 31,0);
        tracep->declBus(c+439,"Top core Execute alu_io_aluCtl", false,-1, 3,0);
        tracep->declBus(c+734,"Top core Execute alu_io_result", false,-1, 31,0);
        tracep->declBus(c+107,"Top core Execute aluCtl_io_aluOp", false,-1, 1,0);
        tracep->declBit(c+440,"Top core Execute aluCtl_io_f7", false,-1);
        tracep->declBus(c+105,"Top core Execute aluCtl_io_f3", false,-1, 2,0);
        tracep->declBit(c+106,"Top core Execute aluCtl_io_aluSrc", false,-1);
        tracep->declBus(c+439,"Top core Execute aluCtl_io_out", false,-1, 3,0);
        tracep->declBus(c+30,"Top core Execute ForwardingUnit_io_ex_reg_rd", false,-1, 4,0);
        tracep->declBus(c+441,"Top core Execute ForwardingUnit_io_mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+442,"Top core Execute ForwardingUnit_io_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+443,"Top core Execute ForwardingUnit_io_reg_rs2", false,-1, 4,0);
        tracep->declBit(c+36,"Top core Execute ForwardingUnit_io_ex_regWrite", false,-1);
        tracep->declBit(c+26,"Top core Execute ForwardingUnit_io_mem_regWrite", false,-1);
        tracep->declBus(c+145,"Top core Execute ForwardingUnit_io_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+69,"Top core Execute ForwardingUnit_io_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+146,"Top core Execute ForwardingUnit_io_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+147,"Top core Execute ForwardingUnit_io_reg_vs2", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute ForwardingUnit_io_reg_vs3", false,-1, 4,0);
        tracep->declBit(c+149,"Top core Execute ForwardingUnit_io_ex_reg_write", false,-1);
        tracep->declBit(c+70,"Top core Execute ForwardingUnit_io_mem_reg_write", false,-1);
        tracep->declBus(c+444,"Top core Execute ForwardingUnit_io_forwardA", false,-1, 1,0);
        tracep->declBus(c+445,"Top core Execute ForwardingUnit_io_forwardB", false,-1, 1,0);
        tracep->declBus(c+446,"Top core Execute ForwardingUnit_io_forwardC", false,-1, 1,0);
        tracep->declBus(c+105,"Top core Execute Vec_aluCtl_io_func3", false,-1, 2,0);
        tracep->declBus(c+110,"Top core Execute Vec_aluCtl_io_aluOp", false,-1, 2,0);
        tracep->declBus(c+109,"Top core Execute Vec_aluCtl_io_func6", false,-1, 5,0);
        tracep->declBus(c+447,"Top core Execute Vec_aluCtl_io_aluc", false,-1, 8,0);
        tracep->declBus(c+961,"Top core Execute vec_alu_io_in_A", false,-1, 31,0);
        tracep->declBus(c+962,"Top core Execute vec_alu_io_in_B", false,-1, 31,0);
        tracep->declArray(c+448,"Top core Execute vec_alu_io_vs1", false,-1, 127,0);
        tracep->declArray(c+452,"Top core Execute vec_alu_io_vs2", false,-1, 127,0);
        tracep->declArray(c+134,"Top core Execute vec_alu_io_vs0", false,-1, 127,0);
        tracep->declArray(c+127,"Top core Execute vec_alu_io_vd", false,-1, 127,0);
        tracep->declBus(c+125,"Top core Execute vec_alu_io_vl", false,-1, 31,0);
        tracep->declBus(c+126,"Top core Execute vec_alu_io_vstart", false,-1, 31,0);
        tracep->declBit(c+131,"Top core Execute vec_alu_io_vma", false,-1);
        tracep->declBit(c+132,"Top core Execute vec_alu_io_vta", false,-1);
        tracep->declBit(c+133,"Top core Execute vec_alu_io_vm", false,-1);
        tracep->declBus(c+29,"Top core Execute vec_alu_io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+447,"Top core Execute vec_alu_io_aluc", false,-1, 8,0);
        tracep->declBus(c+138,"Top core Execute vec_alu_io_sew", false,-1, 2,0);
        tracep->declBit(c+115,"Top core Execute vec_alu_io_v_ins", false,-1);
        tracep->declArray(c+724,"Top core Execute vec_alu_io_v_output", false,-1, 127,0);
        tracep->declArray(c+127,"Top core Execute vec_alu_io_vs3", false,-1, 127,0);
        tracep->declBus(c+456,"Top core Execute vec_config_io_zimm", false,-1, 31,0);
        tracep->declBus(c+457,"Top core Execute vec_config_io_rs1", false,-1, 4,0);
        tracep->declBus(c+151,"Top core Execute vec_config_io_rd", false,-1, 4,0);
        tracep->declBus(c+963,"Top core Execute vec_config_io_rs1_readdata", false,-1, 31,0);
        tracep->declBus(c+125,"Top core Execute vec_config_io_current_vl", false,-1, 31,0);
        tracep->declBus(c+458,"Top core Execute vec_config_io_lmul", false,-1, 31,0);
        tracep->declBus(c+728,"Top core Execute vec_config_io_vl", false,-1, 31,0);
        tracep->declBus(c+151,"Top core Execute vec_config_io_rd_out", false,-1, 4,0);
        tracep->declBus(c+942,"Top core Execute vec_config_io_avl_o", false,-1, 31,0);
        tracep->declBus(c+152,"Top core Execute vec_config_io_valmax_o", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core Execute MDU_clock", false,-1);
        tracep->declBit(c+1073,"Top core Execute MDU_reset", false,-1);
        tracep->declBus(c+964,"Top core Execute MDU_io_src_a", false,-1, 31,0);
        tracep->declBus(c+965,"Top core Execute MDU_io_src_b", false,-1, 31,0);
        tracep->declBus(c+459,"Top core Execute MDU_io_op", false,-1, 4,0);
        tracep->declBit(c+460,"Top core Execute MDU_io_valid", false,-1);
        tracep->declBit(c+461,"Top core Execute MDU_io_ready", false,-1);
        tracep->declBit(c+462,"Top core Execute MDU_io_output_valid", false,-1);
        tracep->declBus(c+735,"Top core Execute MDU_io_output_bits", false,-1, 31,0);
        tracep->declBus(c+966,"Top core Execute inputMux1", false,-1, 31,0);
        tracep->declBus(c+967,"Top core Execute inputMux2", false,-1, 31,0);
        tracep->declBus(c+736,"Top core Execute aluIn1", false,-1, 31,0);
        tracep->declBus(c+737,"Top core Execute aluIn2", false,-1, 31,0);
        tracep->declBus(c+463,"Top core Execute REG", false,-1, 31,0);
        tracep->declBus(c+464,"Top core Execute REG_1", false,-1, 31,0);
        tracep->declBus(c+465,"Top core Execute REG_2", false,-1, 2,0);
        tracep->declBit(c+466,"Top core Execute REG_3", false,-1);
        tracep->declBus(c+467,"Top core Execute REG_4", false,-1, 5,0);
        tracep->declBus(c+468,"Top core Execute REG_5", false,-1, 5,0);
        tracep->declBus(c+959,"Top core Execute alu io_input1", false,-1, 31,0);
        tracep->declBus(c+960,"Top core Execute alu io_input2", false,-1, 31,0);
        tracep->declBus(c+439,"Top core Execute alu io_aluCtl", false,-1, 3,0);
        tracep->declBus(c+734,"Top core Execute alu io_result", false,-1, 31,0);
        tracep->declBus(c+107,"Top core Execute aluCtl io_aluOp", false,-1, 1,0);
        tracep->declBit(c+440,"Top core Execute aluCtl io_f7", false,-1);
        tracep->declBus(c+105,"Top core Execute aluCtl io_f3", false,-1, 2,0);
        tracep->declBit(c+106,"Top core Execute aluCtl io_aluSrc", false,-1);
        tracep->declBus(c+439,"Top core Execute aluCtl io_out", false,-1, 3,0);
        tracep->declBus(c+30,"Top core Execute ForwardingUnit io_ex_reg_rd", false,-1, 4,0);
        tracep->declBus(c+441,"Top core Execute ForwardingUnit io_mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+442,"Top core Execute ForwardingUnit io_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+443,"Top core Execute ForwardingUnit io_reg_rs2", false,-1, 4,0);
        tracep->declBit(c+36,"Top core Execute ForwardingUnit io_ex_regWrite", false,-1);
        tracep->declBit(c+26,"Top core Execute ForwardingUnit io_mem_regWrite", false,-1);
        tracep->declBus(c+145,"Top core Execute ForwardingUnit io_ex_reg_vd", false,-1, 4,0);
        tracep->declBus(c+69,"Top core Execute ForwardingUnit io_mem_reg_vd", false,-1, 4,0);
        tracep->declBus(c+146,"Top core Execute ForwardingUnit io_reg_vs1", false,-1, 4,0);
        tracep->declBus(c+147,"Top core Execute ForwardingUnit io_reg_vs2", false,-1, 4,0);
        tracep->declBus(c+148,"Top core Execute ForwardingUnit io_reg_vs3", false,-1, 4,0);
        tracep->declBit(c+149,"Top core Execute ForwardingUnit io_ex_reg_write", false,-1);
        tracep->declBit(c+70,"Top core Execute ForwardingUnit io_mem_reg_write", false,-1);
        tracep->declBus(c+444,"Top core Execute ForwardingUnit io_forwardA", false,-1, 1,0);
        tracep->declBus(c+445,"Top core Execute ForwardingUnit io_forwardB", false,-1, 1,0);
        tracep->declBus(c+446,"Top core Execute ForwardingUnit io_forwardC", false,-1, 1,0);
        tracep->declBus(c+105,"Top core Execute Vec_aluCtl io_func3", false,-1, 2,0);
        tracep->declBus(c+110,"Top core Execute Vec_aluCtl io_aluOp", false,-1, 2,0);
        tracep->declBus(c+109,"Top core Execute Vec_aluCtl io_func6", false,-1, 5,0);
        tracep->declBus(c+447,"Top core Execute Vec_aluCtl io_aluc", false,-1, 8,0);
        tracep->declBus(c+961,"Top core Execute vec_alu io_in_A", false,-1, 31,0);
        tracep->declBus(c+962,"Top core Execute vec_alu io_in_B", false,-1, 31,0);
        tracep->declArray(c+448,"Top core Execute vec_alu io_vs1", false,-1, 127,0);
        tracep->declArray(c+452,"Top core Execute vec_alu io_vs2", false,-1, 127,0);
        tracep->declArray(c+134,"Top core Execute vec_alu io_vs0", false,-1, 127,0);
        tracep->declArray(c+127,"Top core Execute vec_alu io_vd", false,-1, 127,0);
        tracep->declBus(c+125,"Top core Execute vec_alu io_vl", false,-1, 31,0);
        tracep->declBus(c+126,"Top core Execute vec_alu io_vstart", false,-1, 31,0);
        tracep->declBit(c+131,"Top core Execute vec_alu io_vma", false,-1);
        tracep->declBit(c+132,"Top core Execute vec_alu io_vta", false,-1);
        tracep->declBit(c+133,"Top core Execute vec_alu io_vm", false,-1);
        tracep->declBus(c+29,"Top core Execute vec_alu io_vd_addr", false,-1, 4,0);
        tracep->declBus(c+447,"Top core Execute vec_alu io_aluc", false,-1, 8,0);
        tracep->declBus(c+138,"Top core Execute vec_alu io_sew", false,-1, 2,0);
        tracep->declBit(c+115,"Top core Execute vec_alu io_v_ins", false,-1);
        tracep->declArray(c+724,"Top core Execute vec_alu io_v_output", false,-1, 127,0);
        tracep->declArray(c+127,"Top core Execute vec_alu io_vs3", false,-1, 127,0);
        tracep->declBus(c+469,"Top core Execute vec_alu sew_8_a_0", false,-1, 7,0);
        tracep->declBus(c+470,"Top core Execute vec_alu sew_8_a_1", false,-1, 7,0);
        tracep->declBus(c+471,"Top core Execute vec_alu sew_8_a_2", false,-1, 7,0);
        tracep->declBus(c+472,"Top core Execute vec_alu sew_8_a_3", false,-1, 7,0);
        tracep->declBus(c+473,"Top core Execute vec_alu sew_8_a_4", false,-1, 7,0);
        tracep->declBus(c+474,"Top core Execute vec_alu sew_8_a_5", false,-1, 7,0);
        tracep->declBus(c+475,"Top core Execute vec_alu sew_8_a_6", false,-1, 7,0);
        tracep->declBus(c+476,"Top core Execute vec_alu sew_8_a_7", false,-1, 7,0);
        tracep->declBus(c+477,"Top core Execute vec_alu sew_8_a_8", false,-1, 7,0);
        tracep->declBus(c+478,"Top core Execute vec_alu sew_8_a_9", false,-1, 7,0);
        tracep->declBus(c+479,"Top core Execute vec_alu sew_8_a_10", false,-1, 7,0);
        tracep->declBus(c+480,"Top core Execute vec_alu sew_8_a_11", false,-1, 7,0);
        tracep->declBus(c+481,"Top core Execute vec_alu sew_8_a_12", false,-1, 7,0);
        tracep->declBus(c+482,"Top core Execute vec_alu sew_8_a_13", false,-1, 7,0);
        tracep->declBus(c+483,"Top core Execute vec_alu sew_8_a_14", false,-1, 7,0);
        tracep->declBus(c+484,"Top core Execute vec_alu sew_8_a_15", false,-1, 7,0);
        tracep->declBus(c+485,"Top core Execute vec_alu sew_8_b_0", false,-1, 7,0);
        tracep->declBus(c+486,"Top core Execute vec_alu sew_8_b_1", false,-1, 7,0);
        tracep->declBus(c+487,"Top core Execute vec_alu sew_8_b_2", false,-1, 7,0);
        tracep->declBus(c+488,"Top core Execute vec_alu sew_8_b_3", false,-1, 7,0);
        tracep->declBus(c+489,"Top core Execute vec_alu sew_8_b_4", false,-1, 7,0);
        tracep->declBus(c+490,"Top core Execute vec_alu sew_8_b_5", false,-1, 7,0);
        tracep->declBus(c+491,"Top core Execute vec_alu sew_8_b_6", false,-1, 7,0);
        tracep->declBus(c+492,"Top core Execute vec_alu sew_8_b_7", false,-1, 7,0);
        tracep->declBus(c+493,"Top core Execute vec_alu sew_8_b_8", false,-1, 7,0);
        tracep->declBus(c+494,"Top core Execute vec_alu sew_8_b_9", false,-1, 7,0);
        tracep->declBus(c+495,"Top core Execute vec_alu sew_8_b_10", false,-1, 7,0);
        tracep->declBus(c+496,"Top core Execute vec_alu sew_8_b_11", false,-1, 7,0);
        tracep->declBus(c+497,"Top core Execute vec_alu sew_8_b_12", false,-1, 7,0);
        tracep->declBus(c+498,"Top core Execute vec_alu sew_8_b_13", false,-1, 7,0);
        tracep->declBus(c+499,"Top core Execute vec_alu sew_8_b_14", false,-1, 7,0);
        tracep->declBus(c+500,"Top core Execute vec_alu sew_8_b_15", false,-1, 7,0);
        tracep->declBus(c+501,"Top core Execute vec_alu sew_16_a_0", false,-1, 15,0);
        tracep->declBus(c+502,"Top core Execute vec_alu sew_16_a_1", false,-1, 15,0);
        tracep->declBus(c+503,"Top core Execute vec_alu sew_16_a_2", false,-1, 15,0);
        tracep->declBus(c+504,"Top core Execute vec_alu sew_16_a_3", false,-1, 15,0);
        tracep->declBus(c+505,"Top core Execute vec_alu sew_16_a_4", false,-1, 15,0);
        tracep->declBus(c+506,"Top core Execute vec_alu sew_16_a_5", false,-1, 15,0);
        tracep->declBus(c+507,"Top core Execute vec_alu sew_16_a_6", false,-1, 15,0);
        tracep->declBus(c+508,"Top core Execute vec_alu sew_16_a_7", false,-1, 15,0);
        tracep->declBus(c+509,"Top core Execute vec_alu sew_16_b_0", false,-1, 15,0);
        tracep->declBus(c+510,"Top core Execute vec_alu sew_16_b_1", false,-1, 15,0);
        tracep->declBus(c+511,"Top core Execute vec_alu sew_16_b_2", false,-1, 15,0);
        tracep->declBus(c+512,"Top core Execute vec_alu sew_16_b_3", false,-1, 15,0);
        tracep->declBus(c+513,"Top core Execute vec_alu sew_16_b_4", false,-1, 15,0);
        tracep->declBus(c+514,"Top core Execute vec_alu sew_16_b_5", false,-1, 15,0);
        tracep->declBus(c+515,"Top core Execute vec_alu sew_16_b_6", false,-1, 15,0);
        tracep->declBus(c+516,"Top core Execute vec_alu sew_16_b_7", false,-1, 15,0);
        tracep->declBus(c+517,"Top core Execute vec_alu sew_32_a_0", false,-1, 31,0);
        tracep->declBus(c+518,"Top core Execute vec_alu sew_32_a_1", false,-1, 31,0);
        tracep->declBus(c+519,"Top core Execute vec_alu sew_32_a_2", false,-1, 31,0);
        tracep->declBus(c+520,"Top core Execute vec_alu sew_32_a_3", false,-1, 31,0);
        tracep->declBus(c+521,"Top core Execute vec_alu sew_32_b_0", false,-1, 31,0);
        tracep->declBus(c+522,"Top core Execute vec_alu sew_32_b_1", false,-1, 31,0);
        tracep->declBus(c+523,"Top core Execute vec_alu sew_32_b_2", false,-1, 31,0);
        tracep->declBus(c+524,"Top core Execute vec_alu sew_32_b_3", false,-1, 31,0);
        tracep->declQuad(c+525,"Top core Execute vec_alu sew_64_a_0", false,-1, 63,0);
        tracep->declQuad(c+527,"Top core Execute vec_alu sew_64_a_1", false,-1, 63,0);
        tracep->declQuad(c+529,"Top core Execute vec_alu sew_64_b_0", false,-1, 63,0);
        tracep->declQuad(c+531,"Top core Execute vec_alu sew_64_b_1", false,-1, 63,0);
        tracep->declBus(c+533,"Top core Execute vec_alu sew_8_vd_0", false,-1, 7,0);
        tracep->declBus(c+534,"Top core Execute vec_alu sew_8_vd_1", false,-1, 7,0);
        tracep->declBus(c+535,"Top core Execute vec_alu sew_8_vd_2", false,-1, 7,0);
        tracep->declBus(c+536,"Top core Execute vec_alu sew_8_vd_3", false,-1, 7,0);
        tracep->declBus(c+537,"Top core Execute vec_alu sew_8_vd_4", false,-1, 7,0);
        tracep->declBus(c+538,"Top core Execute vec_alu sew_8_vd_5", false,-1, 7,0);
        tracep->declBus(c+539,"Top core Execute vec_alu sew_8_vd_6", false,-1, 7,0);
        tracep->declBus(c+540,"Top core Execute vec_alu sew_8_vd_7", false,-1, 7,0);
        tracep->declBus(c+541,"Top core Execute vec_alu sew_8_vd_8", false,-1, 7,0);
        tracep->declBus(c+542,"Top core Execute vec_alu sew_8_vd_9", false,-1, 7,0);
        tracep->declBus(c+543,"Top core Execute vec_alu sew_8_vd_10", false,-1, 7,0);
        tracep->declBus(c+544,"Top core Execute vec_alu sew_8_vd_11", false,-1, 7,0);
        tracep->declBus(c+545,"Top core Execute vec_alu sew_8_vd_12", false,-1, 7,0);
        tracep->declBus(c+546,"Top core Execute vec_alu sew_8_vd_13", false,-1, 7,0);
        tracep->declBus(c+547,"Top core Execute vec_alu sew_8_vd_14", false,-1, 7,0);
        tracep->declBus(c+548,"Top core Execute vec_alu sew_8_vd_15", false,-1, 7,0);
        tracep->declBus(c+549,"Top core Execute vec_alu sew_16_vd_0", false,-1, 15,0);
        tracep->declBus(c+550,"Top core Execute vec_alu sew_16_vd_1", false,-1, 15,0);
        tracep->declBus(c+551,"Top core Execute vec_alu sew_16_vd_2", false,-1, 15,0);
        tracep->declBus(c+552,"Top core Execute vec_alu sew_16_vd_3", false,-1, 15,0);
        tracep->declBus(c+553,"Top core Execute vec_alu sew_16_vd_4", false,-1, 15,0);
        tracep->declBus(c+554,"Top core Execute vec_alu sew_16_vd_5", false,-1, 15,0);
        tracep->declBus(c+555,"Top core Execute vec_alu sew_16_vd_6", false,-1, 15,0);
        tracep->declBus(c+556,"Top core Execute vec_alu sew_16_vd_7", false,-1, 15,0);
        tracep->declBus(c+557,"Top core Execute vec_alu sew_32_vd_0", false,-1, 31,0);
        tracep->declBus(c+558,"Top core Execute vec_alu sew_32_vd_1", false,-1, 31,0);
        tracep->declBus(c+559,"Top core Execute vec_alu sew_32_vd_2", false,-1, 31,0);
        tracep->declBus(c+560,"Top core Execute vec_alu sew_32_vd_3", false,-1, 31,0);
        tracep->declQuad(c+561,"Top core Execute vec_alu sew_64_vd_0", false,-1, 63,0);
        tracep->declQuad(c+563,"Top core Execute vec_alu sew_64_vd_1", false,-1, 63,0);
        tracep->declQuad(c+565,"Top core Execute vec_alu lo", false,-1, 63,0);
        tracep->declQuad(c+567,"Top core Execute vec_alu hi", false,-1, 63,0);
        tracep->declBus(c+569,"Top core Execute vec_alu lo_lo", false,-1, 31,0);
        tracep->declBus(c+570,"Top core Execute vec_alu lo_hi", false,-1, 31,0);
        tracep->declBus(c+571,"Top core Execute vec_alu hi_lo", false,-1, 31,0);
        tracep->declBus(c+572,"Top core Execute vec_alu hi_hi", false,-1, 31,0);
        tracep->declBus(c+573,"Top core Execute vec_alu lo_lo_lo", false,-1, 15,0);
        tracep->declBus(c+574,"Top core Execute vec_alu lo_lo_hi", false,-1, 15,0);
        tracep->declBus(c+575,"Top core Execute vec_alu lo_hi_lo", false,-1, 15,0);
        tracep->declBus(c+576,"Top core Execute vec_alu lo_hi_hi", false,-1, 15,0);
        tracep->declBus(c+577,"Top core Execute vec_alu hi_lo_lo", false,-1, 15,0);
        tracep->declBus(c+578,"Top core Execute vec_alu hi_lo_hi", false,-1, 15,0);
        tracep->declBus(c+579,"Top core Execute vec_alu hi_hi_lo", false,-1, 15,0);
        tracep->declBus(c+580,"Top core Execute vec_alu hi_hi_hi", false,-1, 15,0);
        tracep->declBus(c+581,"Top core Execute vec_alu lo_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+582,"Top core Execute vec_alu lo_lo_lo_hi", false,-1, 7,0);
        tracep->declBus(c+583,"Top core Execute vec_alu lo_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+584,"Top core Execute vec_alu lo_lo_hi_hi", false,-1, 7,0);
        tracep->declBus(c+585,"Top core Execute vec_alu lo_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+586,"Top core Execute vec_alu lo_hi_lo_hi", false,-1, 7,0);
        tracep->declBus(c+587,"Top core Execute vec_alu lo_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+588,"Top core Execute vec_alu lo_hi_hi_hi", false,-1, 7,0);
        tracep->declQuad(c+589,"Top core Execute vec_alu lo_3", false,-1, 63,0);
        tracep->declBus(c+591,"Top core Execute vec_alu hi_lo_lo_lo", false,-1, 7,0);
        tracep->declBus(c+592,"Top core Execute vec_alu hi_lo_lo_hi", false,-1, 7,0);
        tracep->declBus(c+593,"Top core Execute vec_alu hi_lo_hi_lo", false,-1, 7,0);
        tracep->declBus(c+594,"Top core Execute vec_alu hi_lo_hi_hi", false,-1, 7,0);
        tracep->declBus(c+595,"Top core Execute vec_alu hi_hi_lo_lo", false,-1, 7,0);
        tracep->declBus(c+596,"Top core Execute vec_alu hi_hi_lo_hi", false,-1, 7,0);
        tracep->declBus(c+597,"Top core Execute vec_alu hi_hi_hi_lo", false,-1, 7,0);
        tracep->declBus(c+598,"Top core Execute vec_alu hi_hi_hi_hi", false,-1, 7,0);
        tracep->declQuad(c+738,"Top core Execute vec_alu lo_5", false,-1, 63,0);
        tracep->declQuad(c+740,"Top core Execute vec_alu hi_5", false,-1, 63,0);
        tracep->declBus(c+742,"Top core Execute vec_alu lo_lo_3", false,-1, 31,0);
        tracep->declBus(c+743,"Top core Execute vec_alu lo_hi_3", false,-1, 31,0);
        tracep->declBus(c+744,"Top core Execute vec_alu hi_lo_3", false,-1, 31,0);
        tracep->declBus(c+745,"Top core Execute vec_alu hi_hi_3", false,-1, 31,0);
        tracep->declBus(c+746,"Top core Execute vec_alu lo_lo_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+747,"Top core Execute vec_alu lo_lo_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+748,"Top core Execute vec_alu lo_lo_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+749,"Top core Execute vec_alu lo_lo_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+750,"Top core Execute vec_alu lo_hi_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+751,"Top core Execute vec_alu lo_hi_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+752,"Top core Execute vec_alu lo_hi_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+753,"Top core Execute vec_alu lo_hi_hi_hi_1", false,-1, 7,0);
        tracep->declQuad(c+968,"Top core Execute vec_alu lo_7", false,-1, 63,0);
        tracep->declBus(c+754,"Top core Execute vec_alu hi_lo_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+755,"Top core Execute vec_alu hi_lo_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+756,"Top core Execute vec_alu hi_lo_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+757,"Top core Execute vec_alu hi_lo_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+758,"Top core Execute vec_alu hi_hi_lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+759,"Top core Execute vec_alu hi_hi_lo_hi_1", false,-1, 7,0);
        tracep->declBus(c+760,"Top core Execute vec_alu hi_hi_hi_lo_1", false,-1, 7,0);
        tracep->declBus(c+761,"Top core Execute vec_alu hi_hi_hi_hi_1", false,-1, 7,0);
        tracep->declBus(c+762,"Top core Execute vec_alu lo_lo_lo_3", false,-1, 15,0);
        tracep->declBus(c+763,"Top core Execute vec_alu lo_lo_hi_3", false,-1, 15,0);
        tracep->declBus(c+764,"Top core Execute vec_alu lo_hi_lo_3", false,-1, 15,0);
        tracep->declBus(c+765,"Top core Execute vec_alu lo_hi_hi_3", false,-1, 15,0);
        tracep->declBus(c+766,"Top core Execute vec_alu hi_lo_lo_3", false,-1, 15,0);
        tracep->declBus(c+767,"Top core Execute vec_alu hi_lo_hi_3", false,-1, 15,0);
        tracep->declBus(c+768,"Top core Execute vec_alu hi_hi_lo_3", false,-1, 15,0);
        tracep->declBus(c+769,"Top core Execute vec_alu hi_hi_hi_3", false,-1, 15,0);
        tracep->declQuad(c+770,"Top core Execute vec_alu lo_10", false,-1, 63,0);
        tracep->declQuad(c+772,"Top core Execute vec_alu hi_10", false,-1, 63,0);
        tracep->declBus(c+774,"Top core Execute vec_alu lo_lo_6", false,-1, 31,0);
        tracep->declBus(c+775,"Top core Execute vec_alu lo_hi_6", false,-1, 31,0);
        tracep->declBus(c+776,"Top core Execute vec_alu hi_lo_6", false,-1, 31,0);
        tracep->declBus(c+777,"Top core Execute vec_alu hi_hi_6", false,-1, 31,0);
        tracep->declBus(c+778,"Top core Execute vec_alu lo_lo_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+779,"Top core Execute vec_alu lo_lo_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+780,"Top core Execute vec_alu lo_lo_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+781,"Top core Execute vec_alu lo_lo_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+782,"Top core Execute vec_alu lo_hi_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+783,"Top core Execute vec_alu lo_hi_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+784,"Top core Execute vec_alu lo_hi_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+785,"Top core Execute vec_alu lo_hi_hi_hi_2", false,-1, 7,0);
        tracep->declQuad(c+970,"Top core Execute vec_alu lo_12", false,-1, 63,0);
        tracep->declBus(c+786,"Top core Execute vec_alu hi_lo_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+787,"Top core Execute vec_alu hi_lo_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+788,"Top core Execute vec_alu hi_lo_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+789,"Top core Execute vec_alu hi_lo_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+790,"Top core Execute vec_alu hi_hi_lo_lo_2", false,-1, 7,0);
        tracep->declBus(c+791,"Top core Execute vec_alu hi_hi_lo_hi_2", false,-1, 7,0);
        tracep->declBus(c+792,"Top core Execute vec_alu hi_hi_hi_lo_2", false,-1, 7,0);
        tracep->declBus(c+793,"Top core Execute vec_alu hi_hi_hi_hi_2", false,-1, 7,0);
        tracep->declBus(c+794,"Top core Execute vec_alu lo_lo_lo_5", false,-1, 15,0);
        tracep->declBus(c+795,"Top core Execute vec_alu lo_lo_hi_5", false,-1, 15,0);
        tracep->declBus(c+796,"Top core Execute vec_alu lo_hi_lo_5", false,-1, 15,0);
        tracep->declBus(c+797,"Top core Execute vec_alu lo_hi_hi_5", false,-1, 15,0);
        tracep->declBus(c+798,"Top core Execute vec_alu hi_lo_lo_5", false,-1, 15,0);
        tracep->declBus(c+799,"Top core Execute vec_alu hi_lo_hi_5", false,-1, 15,0);
        tracep->declBus(c+800,"Top core Execute vec_alu hi_hi_lo_5", false,-1, 15,0);
        tracep->declBus(c+801,"Top core Execute vec_alu hi_hi_hi_5", false,-1, 15,0);
        tracep->declQuad(c+802,"Top core Execute vec_alu lo_16", false,-1, 63,0);
        tracep->declQuad(c+804,"Top core Execute vec_alu hi_16", false,-1, 63,0);
        tracep->declQuad(c+806,"Top core Execute vec_alu lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+808,"Top core Execute vec_alu lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+810,"Top core Execute vec_alu hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+812,"Top core Execute vec_alu hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+814,"Top core Execute vec_alu lo_lo_lo_6", false,-1, 63,0);
        tracep->declQuad(c+816,"Top core Execute vec_alu lo_lo_hi_6", false,-1, 63,0);
        tracep->declQuad(c+818,"Top core Execute vec_alu lo_hi_lo_6", false,-1, 63,0);
        tracep->declQuad(c+820,"Top core Execute vec_alu lo_hi_hi_6", false,-1, 63,0);
        tracep->declQuad(c+822,"Top core Execute vec_alu hi_lo_lo_6", false,-1, 63,0);
        tracep->declQuad(c+824,"Top core Execute vec_alu hi_lo_hi_6", false,-1, 63,0);
        tracep->declQuad(c+826,"Top core Execute vec_alu hi_hi_lo_6", false,-1, 63,0);
        tracep->declQuad(c+828,"Top core Execute vec_alu hi_hi_hi_6", false,-1, 63,0);
        tracep->declQuad(c+830,"Top core Execute vec_alu lo_lo_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+832,"Top core Execute vec_alu lo_lo_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+834,"Top core Execute vec_alu lo_lo_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+836,"Top core Execute vec_alu lo_lo_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+838,"Top core Execute vec_alu lo_hi_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+840,"Top core Execute vec_alu lo_hi_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+842,"Top core Execute vec_alu lo_hi_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+844,"Top core Execute vec_alu lo_hi_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+846,"Top core Execute vec_alu hi_lo_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+848,"Top core Execute vec_alu hi_lo_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+850,"Top core Execute vec_alu hi_lo_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+852,"Top core Execute vec_alu hi_lo_hi_hi_3", false,-1, 63,0);
        tracep->declQuad(c+854,"Top core Execute vec_alu hi_hi_lo_lo_3", false,-1, 63,0);
        tracep->declQuad(c+856,"Top core Execute vec_alu hi_hi_lo_hi_3", false,-1, 63,0);
        tracep->declQuad(c+858,"Top core Execute vec_alu hi_hi_hi_lo_3", false,-1, 63,0);
        tracep->declQuad(c+860,"Top core Execute vec_alu hi_hi_hi_hi_3", false,-1, 63,0);
        tracep->declArray(c+972,"Top core Execute vec_alu lo_19", false,-1, 511,0);
        tracep->declQuad(c+862,"Top core Execute vec_alu lo_22", false,-1, 63,0);
        tracep->declQuad(c+864,"Top core Execute vec_alu hi_22", false,-1, 63,0);
        tracep->declQuad(c+866,"Top core Execute vec_alu lo_lo_12", false,-1, 63,0);
        tracep->declQuad(c+868,"Top core Execute vec_alu lo_hi_12", false,-1, 63,0);
        tracep->declQuad(c+870,"Top core Execute vec_alu hi_lo_12", false,-1, 63,0);
        tracep->declQuad(c+872,"Top core Execute vec_alu hi_hi_12", false,-1, 63,0);
        tracep->declQuad(c+874,"Top core Execute vec_alu lo_lo_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+876,"Top core Execute vec_alu lo_lo_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+878,"Top core Execute vec_alu lo_lo_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+880,"Top core Execute vec_alu lo_lo_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+882,"Top core Execute vec_alu lo_hi_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+884,"Top core Execute vec_alu lo_hi_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+886,"Top core Execute vec_alu lo_hi_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+888,"Top core Execute vec_alu lo_hi_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+890,"Top core Execute vec_alu hi_lo_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+892,"Top core Execute vec_alu hi_lo_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+894,"Top core Execute vec_alu hi_lo_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+896,"Top core Execute vec_alu hi_lo_hi_hi_4", false,-1, 63,0);
        tracep->declQuad(c+898,"Top core Execute vec_alu hi_hi_lo_lo_4", false,-1, 63,0);
        tracep->declQuad(c+900,"Top core Execute vec_alu hi_hi_lo_hi_4", false,-1, 63,0);
        tracep->declQuad(c+902,"Top core Execute vec_alu hi_hi_hi_lo_4", false,-1, 63,0);
        tracep->declQuad(c+904,"Top core Execute vec_alu hi_hi_hi_hi_4", false,-1, 63,0);
        tracep->declArray(c+988,"Top core Execute vec_alu lo_24", false,-1, 511,0);
        tracep->declQuad(c+906,"Top core Execute vec_alu lo_lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+908,"Top core Execute vec_alu lo_lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+910,"Top core Execute vec_alu lo_hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+912,"Top core Execute vec_alu lo_hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+914,"Top core Execute vec_alu hi_lo_lo_9", false,-1, 63,0);
        tracep->declQuad(c+916,"Top core Execute vec_alu hi_lo_hi_9", false,-1, 63,0);
        tracep->declQuad(c+918,"Top core Execute vec_alu hi_hi_lo_9", false,-1, 63,0);
        tracep->declQuad(c+920,"Top core Execute vec_alu hi_hi_hi_9", false,-1, 63,0);
        tracep->declQuad(c+599,"Top core Execute vec_alu lo_26", false,-1, 63,0);
        tracep->declQuad(c+601,"Top core Execute vec_alu hi_26", false,-1, 63,0);
        tracep->declQuad(c+603,"Top core Execute vec_alu lo_lo_15", false,-1, 63,0);
        tracep->declQuad(c+605,"Top core Execute vec_alu lo_hi_15", false,-1, 63,0);
        tracep->declQuad(c+607,"Top core Execute vec_alu hi_lo_15", false,-1, 63,0);
        tracep->declQuad(c+609,"Top core Execute vec_alu hi_hi_15", false,-1, 63,0);
        tracep->declQuad(c+611,"Top core Execute vec_alu lo_lo_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+613,"Top core Execute vec_alu lo_lo_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+615,"Top core Execute vec_alu lo_lo_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+617,"Top core Execute vec_alu lo_lo_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+619,"Top core Execute vec_alu lo_hi_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+621,"Top core Execute vec_alu lo_hi_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+623,"Top core Execute vec_alu lo_hi_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+625,"Top core Execute vec_alu lo_hi_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+627,"Top core Execute vec_alu hi_lo_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+629,"Top core Execute vec_alu hi_lo_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+631,"Top core Execute vec_alu hi_lo_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+633,"Top core Execute vec_alu hi_lo_hi_hi_5", false,-1, 63,0);
        tracep->declQuad(c+635,"Top core Execute vec_alu hi_hi_lo_lo_5", false,-1, 63,0);
        tracep->declQuad(c+637,"Top core Execute vec_alu hi_hi_lo_hi_5", false,-1, 63,0);
        tracep->declQuad(c+639,"Top core Execute vec_alu hi_hi_hi_lo_5", false,-1, 63,0);
        tracep->declQuad(c+641,"Top core Execute vec_alu hi_hi_hi_hi_5", false,-1, 63,0);
        tracep->declArray(c+643,"Top core Execute vec_alu lo_28", false,-1, 511,0);
        tracep->declQuad(c+659,"Top core Execute vec_alu lo_lo_lo_11", false,-1, 63,0);
        tracep->declQuad(c+661,"Top core Execute vec_alu lo_lo_hi_11", false,-1, 63,0);
        tracep->declQuad(c+663,"Top core Execute vec_alu lo_hi_lo_11", false,-1, 63,0);
        tracep->declQuad(c+665,"Top core Execute vec_alu lo_hi_hi_11", false,-1, 63,0);
        tracep->declQuad(c+667,"Top core Execute vec_alu hi_lo_lo_11", false,-1, 63,0);
        tracep->declQuad(c+669,"Top core Execute vec_alu hi_lo_hi_11", false,-1, 63,0);
        tracep->declQuad(c+671,"Top core Execute vec_alu hi_hi_lo_11", false,-1, 63,0);
        tracep->declQuad(c+673,"Top core Execute vec_alu hi_hi_hi_11", false,-1, 63,0);
        tracep->declBus(c+456,"Top core Execute vec_config io_zimm", false,-1, 31,0);
        tracep->declBus(c+457,"Top core Execute vec_config io_rs1", false,-1, 4,0);
        tracep->declBus(c+151,"Top core Execute vec_config io_rd", false,-1, 4,0);
        tracep->declBus(c+963,"Top core Execute vec_config io_rs1_readdata", false,-1, 31,0);
        tracep->declBus(c+125,"Top core Execute vec_config io_current_vl", false,-1, 31,0);
        tracep->declBus(c+458,"Top core Execute vec_config io_lmul", false,-1, 31,0);
        tracep->declBus(c+728,"Top core Execute vec_config io_vl", false,-1, 31,0);
        tracep->declBus(c+151,"Top core Execute vec_config io_rd_out", false,-1, 4,0);
        tracep->declBus(c+942,"Top core Execute vec_config io_avl_o", false,-1, 31,0);
        tracep->declBus(c+152,"Top core Execute vec_config io_valmax_o", false,-1, 31,0);
        tracep->declBus(c+675,"Top core Execute vec_config vlmul", false,-1, 2,0);
        tracep->declBus(c+676,"Top core Execute vec_config vsew", false,-1, 2,0);
        tracep->declBit(c+677,"Top core Execute vec_config lo_lo", false,-1);
        tracep->declBit(c+678,"Top core Execute vec_config lo_hi", false,-1);
        tracep->declBit(c+679,"Top core Execute vec_config hi_lo", false,-1);
        tracep->declBit(c+680,"Top core Execute vec_config hi_hi", false,-1);
        tracep->declQuad(c+681,"Top core Execute vec_config valmax", false,-1, 35,0);
        tracep->declQuad(c+1004,"Top core Execute vec_config avl", false,-1, 35,0);
        tracep->declBit(c+1072,"Top core Execute MDU clock", false,-1);
        tracep->declBit(c+1073,"Top core Execute MDU reset", false,-1);
        tracep->declBus(c+964,"Top core Execute MDU io_src_a", false,-1, 31,0);
        tracep->declBus(c+965,"Top core Execute MDU io_src_b", false,-1, 31,0);
        tracep->declBus(c+459,"Top core Execute MDU io_op", false,-1, 4,0);
        tracep->declBit(c+460,"Top core Execute MDU io_valid", false,-1);
        tracep->declBit(c+461,"Top core Execute MDU io_ready", false,-1);
        tracep->declBit(c+462,"Top core Execute MDU io_output_valid", false,-1);
        tracep->declBus(c+735,"Top core Execute MDU io_output_bits", false,-1, 31,0);
        tracep->declQuad(c+1006,"Top core Execute MDU result", false,-1, 63,0);
        tracep->declBit(c+461,"Top core Execute MDU r_ready", false,-1);
        tracep->declBus(c+683,"Top core Execute MDU r_counter", false,-1, 5,0);
        tracep->declBus(c+684,"Top core Execute MDU r_dividend", false,-1, 31,0);
        tracep->declBus(c+685,"Top core Execute MDU r_quotient", false,-1, 31,0);
        tracep->declBit(c+686,"Top core Execute MDU is_div_rem_u", false,-1);
        tracep->declBit(c+687,"Top core Execute MDU is_div_rem_s", false,-1);
        tracep->declBit(c+1072,"Top core MEM clock", false,-1);
        tracep->declBit(c+1073,"Top core MEM reset", false,-1);
        tracep->declBus(c+34,"Top core MEM io_aluResultIn", false,-1, 31,0);
        tracep->declBus(c+158,"Top core MEM io_v_addr", false,-1, 31,0);
        tracep->declBit(c+159,"Top core MEM io_v_ins", false,-1);
        tracep->declBus(c+160,"Top core MEM io_writeData", false,-1, 31,0);
        tracep->declBus(c+161,"Top core MEM io_v_writeData", false,-1, 31,0);
        tracep->declBit(c+9,"Top core MEM io_writeEnable", false,-1);
        tracep->declBit(c+162,"Top core MEM io_readEnable", false,-1);
        tracep->declBus(c+935,"Top core MEM io_readData", false,-1, 31,0);
        tracep->declBus(c+163,"Top core MEM io_f3", false,-1, 2,0);
        tracep->declBit(c+5,"Top core MEM io_dccmReq_valid", false,-1);
        tracep->declBus(c+6,"Top core MEM io_dccmReq_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top core MEM io_dccmReq_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top core MEM io_dccmReq_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top core MEM io_dccmReq_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top core MEM io_dccmRsp_valid", false,-1);
        tracep->declBus(c+923,"Top core MEM io_dccmRsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBus(c+688,"Top core MEM offset", false,-1, 1,0);
        tracep->declBus(c+689,"Top core MEM funct3", false,-1, 2,0);
        tracep->declBus(c+690,"Top core MEM offsetSW", false,-1, 1,0);
        tracep->declBus(c+691,"Top core MEM wdata_0", false,-1, 7,0);
        tracep->declBus(c+692,"Top core MEM wdata_1", false,-1, 7,0);
        tracep->declBus(c+693,"Top core MEM wdata_2", false,-1, 7,0);
        tracep->declBus(c+694,"Top core MEM wdata_3", false,-1, 7,0);
        tracep->declBus(c+695,"Top core MEM lo", false,-1, 15,0);
        tracep->declBus(c+696,"Top core MEM hi", false,-1, 15,0);
        tracep->declBus(c+1008,"Top core MEM rdata", false,-1, 31,0);
        tracep->declBus(c+1009,"Top core MEM hi_1", false,-1, 23,0);
        tracep->declBus(c+1010,"Top core MEM lo_1", false,-1, 7,0);
        tracep->declBus(c+1011,"Top core MEM hi_2", false,-1, 23,0);
        tracep->declBus(c+1012,"Top core MEM lo_2", false,-1, 7,0);
        tracep->declBus(c+1013,"Top core MEM hi_3", false,-1, 23,0);
        tracep->declBus(c+1014,"Top core MEM lo_3", false,-1, 7,0);
        tracep->declBus(c+1015,"Top core MEM hi_4", false,-1, 23,0);
        tracep->declBus(c+1016,"Top core MEM lo_4", false,-1, 7,0);
        tracep->declBus(c+1017,"Top core MEM lo_9", false,-1, 15,0);
        tracep->declBus(c+1018,"Top core MEM lo_10", false,-1, 15,0);
        tracep->declBus(c+1019,"Top core MEM lo_11", false,-1, 15,0);
        tracep->declBus(c+1020,"Top core MEM hi_12", false,-1, 15,0);
        tracep->declBus(c+1021,"Top core MEM hi_13", false,-1, 15,0);
        tracep->declBus(c+1022,"Top core MEM hi_14", false,-1, 15,0);
        tracep->declBus(c+697,"Top core MEM addr", false,-1, 31,0);
        tracep->declBus(c+698,"Top core MEM data", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core pc clock", false,-1);
        tracep->declBit(c+1073,"Top core pc reset", false,-1);
        tracep->declBus(c+1065,"Top core pc io_in", false,-1, 31,0);
        tracep->declBit(c+1066,"Top core pc io_halt", false,-1);
        tracep->declBus(c+164,"Top core pc io_out", false,-1, 31,0);
        tracep->declBus(c+1080,"Top core pc io_pc4", false,-1, 31,0);
        tracep->declBus(c+1081,"Top core pc io_pc2", false,-1, 31,0);
        tracep->declBus(c+164,"Top core pc pc_reg", false,-1, 31,0);
        tracep->declBit(c+1072,"Top core vlsu clock", false,-1);
        tracep->declBit(c+1073,"Top core vlsu reset", false,-1);
        tracep->declBus(c+943,"Top core vlsu io_instr", false,-1, 31,0);
        tracep->declBus(c+165,"Top core vlsu io_vtype", false,-1, 31,0);
        tracep->declBus(c+944,"Top core vlsu io_UnitStride", false,-1, 1,0);
        tracep->declBus(c+1093,"Top core vlsu io_evl", false,-1, 7,0);
        tracep->declBus(c+1094,"Top core vlsu io_vs3_Addr", false,-1, 4,0);
        tracep->declBus(c+945,"Top core vlsu io_lsuType", false,-1, 3,0);
        tracep->declBus(c+946,"Top core vlsu io_eew", false,-1, 9,0);
        tracep->declBus(c+1095,"Top core vlsu io_nf", false,-1, 3,0);
        tracep->declBus(c+166,"Top core vlsu io_emmul", false,-1, 5,0);
        tracep->declBus(c+167,"Top core vlsu io_emul", false,-1, 3,0);
        tracep->declBus(c+1023,"Top core vlsu mop", false,-1, 1,0);
        tracep->declBus(c+1024,"Top core vlsu lsumop", false,-1, 4,0);
        tracep->declBus(c+1025,"Top core vlsu width", false,-1, 2,0);
        tracep->declBus(c+699,"Top core vlsu vlmul", false,-1, 2,0);
        tracep->declBus(c+700,"Top core vlsu vsew", false,-1, 2,0);
        tracep->declBus(c+701,"Top core vlsu sew", false,-1, 6,0);
        tracep->declBus(c+702,"Top core vlsu lmul", false,-1, 3,0);
        tracep->declBus(c+1026,"Top core vlsu eew", false,-1, 6,0);
        tracep->declBus(c+167,"Top core vlsu emul", false,-1, 3,0);
        tracep->declBus(c+1027,"Top core vlsu lsuType", false,-1, 2,0);
        tracep->declBit(c+1072,"Top core Realigner clock", false,-1);
        tracep->declBit(c+1073,"Top core Realigner reset", false,-1);
        tracep->declBus(c+1065,"Top core Realigner io_ral_address_i", false,-1, 31,0);
        tracep->declBus(c+936,"Top core Realigner io_ral_instruction_i", false,-1, 31,0);
        tracep->declBit(c+941,"Top core Realigner io_ral_jmp", false,-1);
        tracep->declBus(c+1064,"Top core Realigner io_ral_address_o", false,-1, 31,0);
        tracep->declBus(c+947,"Top core Realigner io_ral_instruction_o", false,-1, 31,0);
        tracep->declBit(c+168,"Top core Realigner io_ral_halt_o", false,-1);
        tracep->declBit(c+1067,"Top core Realigner addri", false,-1);
        tracep->declBus(c+703,"Top core Realigner lhw_reg", false,-1, 15,0);
        tracep->declBus(c+1028,"Top core Realigner hi", false,-1, 15,0);
        tracep->declBus(c+922,"Top core Realigner conc_instr", false,-1, 31,0);
        tracep->declBus(c+704,"Top core Realigner stateReg", false,-1, 1,0);
        tracep->declBit(c+1083,"Top core Realigner pc4_sel", false,-1);
        tracep->declBit(c+705,"Top core Realigner conc_sel", false,-1);
        tracep->declBus(c+947,"Top core CompressedDecoder io_instruction_i", false,-1, 31,0);
        tracep->declBit(c+948,"Top core CompressedDecoder io_is_comp", false,-1);
        tracep->declBus(c+943,"Top core CompressedDecoder io_instruction_o", false,-1, 31,0);
        tracep->declBus(c+1029,"Top core CompressedDecoder hi_hi_hi_lo", false,-1, 3,0);
        tracep->declBus(c+1030,"Top core CompressedDecoder hi_hi_lo", false,-1, 1,0);
        tracep->declBit(c+1031,"Top core CompressedDecoder hi_lo_hi_hi", false,-1);
        tracep->declBit(c+1032,"Top core CompressedDecoder hi_lo_hi_lo", false,-1);
        tracep->declBus(c+1033,"Top core CompressedDecoder lo_lo_hi", false,-1, 2,0);
        tracep->declBus(c+1034,"Top core CompressedDecoder hi_hi_lo_1", false,-1, 2,0);
        tracep->declBus(c+1035,"Top core CompressedDecoder lo_hi_hi_hi", false,-1, 2,0);
        tracep->declBit(c+1036,"Top core CompressedDecoder hi_hi_lo_2", false,-1);
        tracep->declBus(c+1037,"Top core CompressedDecoder lo_hi_lo", false,-1, 1,0);
        tracep->declBus(c+1038,"Top core CompressedDecoder lo_2", false,-1, 17,0);
        tracep->declBus(c+1039,"Top core CompressedDecoder hi_hi_hi_3", false,-1, 5,0);
        tracep->declBus(c+1040,"Top core CompressedDecoder hi_lo_hi_3", false,-1, 4,0);
        tracep->declBus(c+1041,"Top core CompressedDecoder hi_lo_lo", false,-1, 4,0);
        tracep->declBit(c+1042,"Top core CompressedDecoder hi_hi_hi_lo_3", false,-1);
        tracep->declBus(c+1043,"Top core CompressedDecoder hi_hi_lo_4", false,-1, 1,0);
        tracep->declBit(c+1044,"Top core CompressedDecoder hi_lo_hi_lo_2", false,-1);
        tracep->declBit(c+1045,"Top core CompressedDecoder hi_lo_lo_1", false,-1);
        tracep->declBit(c+1046,"Top core CompressedDecoder lo_hi_hi_hi_2", false,-1);
        tracep->declBus(c+1047,"Top core CompressedDecoder lo_hi_hi_lo", false,-1, 2,0);
        tracep->declBus(c+1048,"Top core CompressedDecoder lo_hi_lo_2", false,-1, 8,0);
        tracep->declBit(c+1049,"Top core CompressedDecoder lo_lo_hi_lo", false,-1);
        tracep->declBus(c+1050,"Top core CompressedDecoder lo_4", false,-1, 24,0);
        tracep->declBus(c+1051,"Top core CompressedDecoder hi_hi_7", false,-1, 14,0);
        tracep->declBus(c+1052,"Top core CompressedDecoder hi_hi_hi_hi_4", false,-1, 2,0);
        tracep->declBus(c+1053,"Top core CompressedDecoder hi_hi_hi_lo_5", false,-1, 1,0);
        tracep->declBit(c+1054,"Top core CompressedDecoder hi_hi_hi_lo_6", false,-1);
        tracep->declBus(c+1055,"Top core CompressedDecoder hi_hi_hi_hi_9", false,-1, 3,0);
        tracep->declBit(c+1056,"Top core CompressedDecoder lo_hi_hi_lo_2", false,-1);
        tracep->declBus(c+1057,"Top core CompressedDecoder lo_16", false,-1, 14,0);
        tracep->declBus(c+1058,"Top core CompressedDecoder hi_hi_hi_lo_11", false,-1, 1,0);
        tracep->declBus(c+1059,"Top core CompressedDecoder hi_lo_hi_13", false,-1, 2,0);
        tracep->declBus(c+1060,"Top core CompressedDecoder hi_hi_hi_lo_12", false,-1, 1,0);
        tracep->declBus(c+1061,"Top core CompressedDecoder lo_hi_lo_9", false,-1, 2,0);
        tracep->declBit(c+1072,"Top dmem clock", false,-1);
        tracep->declBit(c+1073,"Top dmem reset", false,-1);
        tracep->declBit(c+5,"Top dmem io_req_valid", false,-1);
        tracep->declBus(c+6,"Top dmem io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+7,"Top dmem io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+8,"Top dmem io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+9,"Top dmem io_req_bits_isWrite", false,-1);
        tracep->declBit(c+10,"Top dmem io_rsp_valid", false,-1);
        tracep->declBus(c+923,"Top dmem io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top dmem sram_clk_i", false,-1);
        tracep->declBit(c+1073,"Top dmem sram_rst_i", false,-1);
        tracep->declBit(c+1084,"Top dmem sram_csb_i", false,-1);
        tracep->declBit(c+1085,"Top dmem sram_we_i", false,-1);
        tracep->declBus(c+8,"Top dmem sram_wmask_i", false,-1, 3,0);
        tracep->declBus(c+706,"Top dmem sram_addr_i", false,-1, 12,0);
        tracep->declBus(c+7,"Top dmem sram_wdata_i", false,-1, 31,0);
        tracep->declBus(c+923,"Top dmem sram_rdata_o", false,-1, 31,0);
        tracep->declBit(c+10,"Top dmem validReg", false,-1);
        tracep->declBus(c+1096,"Top dmem sram IFILE_IN", false,-1, 0,0);
        tracep->declBit(c+1072,"Top dmem sram clk_i", false,-1);
        tracep->declBit(c+1073,"Top dmem sram rst_i", false,-1);
        tracep->declBit(c+1084,"Top dmem sram csb_i", false,-1);
        tracep->declBus(c+707,"Top dmem sram addr_i", false,-1, 11,0);
        tracep->declBus(c+7,"Top dmem sram wdata_i", false,-1, 31,0);
        tracep->declBus(c+8,"Top dmem sram wmask_i", false,-1, 3,0);
        tracep->declBit(c+1085,"Top dmem sram we_i", false,-1);
        tracep->declBus(c+923,"Top dmem sram rdata_o", false,-1, 31,0);
        tracep->declBit(c+925,"Top dmem sram csb", false,-1);
        tracep->declBus(c+926,"Top dmem sram addr_o", false,-1, 11,0);
        tracep->declBus(c+927,"Top dmem sram wdata_o", false,-1, 31,0);
        tracep->declBus(c+928,"Top dmem sram wmask_o", false,-1, 3,0);
        tracep->declBit(c+929,"Top dmem sram we_o", false,-1);
        tracep->declBus(c+1097,"Top dmem sram rdata_i", false,-1, 31,0);
        tracep->declBit(c+1086,"Top dmem sram rvalid", false,-1);
        tracep->declBus(c+1098,"Top dmem sram memory NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+1099,"Top dmem sram memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"Top dmem sram memory ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1101,"Top dmem sram memory RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1102,"Top dmem sram memory DELAY", false,-1, 31,0);
        tracep->declBus(c+1092,"Top dmem sram memory IZERO", false,-1, 31,0);
        tracep->declBus(c+1096,"Top dmem sram memory IFILE", false,-1, 0,0);
        tracep->declBit(c+1072,"Top dmem sram memory clk0", false,-1);
        tracep->declBit(c+1084,"Top dmem sram memory csb0", false,-1);
        tracep->declBit(c+1085,"Top dmem sram memory web0", false,-1);
        tracep->declBus(c+8,"Top dmem sram memory wmask0", false,-1, 3,0);
        tracep->declBus(c+708,"Top dmem sram memory addr0", false,-1, 12,0);
        tracep->declBus(c+7,"Top dmem sram memory din0", false,-1, 31,0);
        tracep->declBus(c+923,"Top dmem sram memory dout0", false,-1, 31,0);
        tracep->declBit(c+1090,"Top dmem sram memory clk1", false,-1);
        tracep->declBit(c+1091,"Top dmem sram memory csb1", false,-1);
        tracep->declBus(c+1103,"Top dmem sram memory addr1", false,-1, 12,0);
        tracep->declBus(c+1104,"Top dmem sram memory dout1", false,-1, 31,0);
        tracep->declBit(c+709,"Top dmem sram memory csb0_reg", false,-1);
        tracep->declBit(c+710,"Top dmem sram memory web0_reg", false,-1);
        tracep->declBus(c+711,"Top dmem sram memory wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+712,"Top dmem sram memory addr0_reg", false,-1, 12,0);
        tracep->declBus(c+713,"Top dmem sram memory din0_reg", false,-1, 31,0);
        tracep->declBit(c+1105,"Top dmem sram memory csb1_reg", false,-1);
        tracep->declBus(c+1106,"Top dmem sram memory addr1_reg", false,-1, 12,0);
        tracep->declBus(c+1107,"Top dmem sram memory i", false,-1, 31,0);
        tracep->declBit(c+1072,"Top imem clock", false,-1);
        tracep->declBit(c+1073,"Top imem reset", false,-1);
        tracep->declBit(c+1062,"Top imem io_req_valid", false,-1);
        tracep->declBus(c+1063,"Top imem io_req_bits_addrRequest", false,-1, 31,0);
        tracep->declBus(c+1088,"Top imem io_req_bits_dataRequest", false,-1, 31,0);
        tracep->declBus(c+1089,"Top imem io_req_bits_activeByteLane", false,-1, 3,0);
        tracep->declBit(c+1090,"Top imem io_req_bits_isWrite", false,-1);
        tracep->declBit(c+11,"Top imem io_rsp_valid", false,-1);
        tracep->declBus(c+924,"Top imem io_rsp_bits_dataResponse", false,-1, 31,0);
        tracep->declBit(c+1072,"Top imem sram_clk_i", false,-1);
        tracep->declBit(c+1073,"Top imem sram_rst_i", false,-1);
        tracep->declBit(c+1068,"Top imem sram_csb_i", false,-1);
        tracep->declBit(c+1062,"Top imem sram_we_i", false,-1);
        tracep->declBus(c+1089,"Top imem sram_wmask_i", false,-1, 3,0);
        tracep->declBus(c+1069,"Top imem sram_addr_i", false,-1, 12,0);
        tracep->declBus(c+1088,"Top imem sram_wdata_i", false,-1, 31,0);
        tracep->declBus(c+924,"Top imem sram_rdata_o", false,-1, 31,0);
        tracep->declBit(c+11,"Top imem validReg", false,-1);
        tracep->declArray(c+1108,"Top imem sram IFILE_IN", false,-1, 215,0);
        tracep->declBit(c+1072,"Top imem sram clk_i", false,-1);
        tracep->declBit(c+1073,"Top imem sram rst_i", false,-1);
        tracep->declBit(c+1068,"Top imem sram csb_i", false,-1);
        tracep->declBus(c+1070,"Top imem sram addr_i", false,-1, 11,0);
        tracep->declBus(c+1088,"Top imem sram wdata_i", false,-1, 31,0);
        tracep->declBus(c+1089,"Top imem sram wmask_i", false,-1, 3,0);
        tracep->declBit(c+1062,"Top imem sram we_i", false,-1);
        tracep->declBus(c+924,"Top imem sram rdata_o", false,-1, 31,0);
        tracep->declBit(c+930,"Top imem sram csb", false,-1);
        tracep->declBus(c+931,"Top imem sram addr_o", false,-1, 11,0);
        tracep->declBus(c+932,"Top imem sram wdata_o", false,-1, 31,0);
        tracep->declBus(c+933,"Top imem sram wmask_o", false,-1, 3,0);
        tracep->declBit(c+934,"Top imem sram we_o", false,-1);
        tracep->declBus(c+1115,"Top imem sram rdata_i", false,-1, 31,0);
        tracep->declBit(c+1087,"Top imem sram rvalid", false,-1);
        tracep->declBus(c+1098,"Top imem sram memory NUM_WMASKS", false,-1, 31,0);
        tracep->declBus(c+1099,"Top imem sram memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1100,"Top imem sram memory ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1101,"Top imem sram memory RAM_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1102,"Top imem sram memory DELAY", false,-1, 31,0);
        tracep->declBus(c+1092,"Top imem sram memory IZERO", false,-1, 31,0);
        tracep->declArray(c+1108,"Top imem sram memory IFILE", false,-1, 215,0);
        tracep->declBit(c+1072,"Top imem sram memory clk0", false,-1);
        tracep->declBit(c+1068,"Top imem sram memory csb0", false,-1);
        tracep->declBit(c+1062,"Top imem sram memory web0", false,-1);
        tracep->declBus(c+1089,"Top imem sram memory wmask0", false,-1, 3,0);
        tracep->declBus(c+1071,"Top imem sram memory addr0", false,-1, 12,0);
        tracep->declBus(c+1088,"Top imem sram memory din0", false,-1, 31,0);
        tracep->declBus(c+924,"Top imem sram memory dout0", false,-1, 31,0);
        tracep->declBit(c+1090,"Top imem sram memory clk1", false,-1);
        tracep->declBit(c+1091,"Top imem sram memory csb1", false,-1);
        tracep->declBus(c+1103,"Top imem sram memory addr1", false,-1, 12,0);
        tracep->declBus(c+1116,"Top imem sram memory dout1", false,-1, 31,0);
        tracep->declBit(c+714,"Top imem sram memory csb0_reg", false,-1);
        tracep->declBit(c+715,"Top imem sram memory web0_reg", false,-1);
        tracep->declBus(c+716,"Top imem sram memory wmask0_reg", false,-1, 3,0);
        tracep->declBus(c+717,"Top imem sram memory addr0_reg", false,-1, 12,0);
        tracep->declBus(c+718,"Top imem sram memory din0_reg", false,-1, 31,0);
        tracep->declBit(c+1117,"Top imem sram memory csb1_reg", false,-1);
        tracep->declBus(c+1118,"Top imem sram memory addr1_reg", false,-1, 12,0);
        tracep->declBus(c+1119,"Top imem sram memory i", false,-1, 31,0);
        tracep->declBit(c+1072,"Top Tracer clock", false,-1);
        tracep->declBit(c+1073,"Top Tracer reset", false,-1);
        tracep->declBus(c+12,"Top Tracer io_rvfiUInt_0", false,-1, 31,0);
        tracep->declBus(c+13,"Top Tracer io_rvfiUInt_1", false,-1, 31,0);
        tracep->declBus(c+14,"Top Tracer io_rvfiUInt_2", false,-1, 31,0);
        tracep->declBus(c+15,"Top Tracer io_rvfiUInt_3", false,-1, 31,0);
        tracep->declBus(c+720,"Top Tracer io_rvfiSInt_0", false,-1, 31,0);
        tracep->declBus(c+16,"Top Tracer io_rvfiSInt_1", false,-1, 31,0);
        tracep->declBus(c+17,"Top Tracer io_rvfiSInt_2", false,-1, 31,0);
        tracep->declBus(c+935,"Top Tracer io_rvfiSInt_3", false,-1, 31,0);
        tracep->declBus(c+18,"Top Tracer io_rvfiSInt_4", false,-1, 31,0);
        tracep->declBit(c+19,"Top Tracer io_rvfiBool_0", false,-1);
        tracep->declBus(c+20,"Top Tracer io_rvfiRegAddr_0", false,-1, 4,0);
        tracep->declBus(c+21,"Top Tracer io_rvfiRegAddr_1", false,-1, 4,0);
        tracep->declBus(c+22,"Top Tracer io_rvfiRegAddr_2", false,-1, 4,0);
        tracep->declBus(c+719,"Top Tracer clkCycle", false,-1, 31,0);
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
    WData/*127:0*/ __Vtemp1048[4];
    WData/*127:0*/ __Vtemp1056[4];
    WData/*127:0*/ __Vtemp1064[4];
    WData/*127:0*/ __Vtemp1068[4];
    WData/*1023:0*/ __Vtemp1092[32];
    WData/*127:0*/ __Vtemp1093[4];
    WData/*223:0*/ __Vtemp1094[7];
    // Body
    {
        tracep->fullWData(oldp+1,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
        tracep->fullBit(oldp+5,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        tracep->fullIData(oldp+6,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                             >> 2U))),32);
        tracep->fullIData(oldp+7,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        tracep->fullCData(oldp+8,(vlTOPp->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        tracep->fullBit(oldp+9,(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable));
        tracep->fullBit(oldp+10,(vlTOPp->Top__DOT__dmem__DOT__validReg));
        tracep->fullBit(oldp+11,(vlTOPp->Top__DOT__imem__DOT__validReg));
        tracep->fullIData(oldp+12,(vlTOPp->Top__DOT__core__DOT__mem_reg_pc),32);
        tracep->fullIData(oldp+13,(vlTOPp->Top__DOT__core__DOT__REG___05F3),32);
        tracep->fullIData(oldp+14,(vlTOPp->Top__DOT__core__DOT__mem_reg_ins),32);
        tracep->fullIData(oldp+15,(vlTOPp->Top__DOT__core__DOT__REG_5),32);
        tracep->fullIData(oldp+16,(vlTOPp->Top__DOT__core__DOT__REG_3_1),32);
        tracep->fullIData(oldp+17,(vlTOPp->Top__DOT__core__DOT__REG_4_1),32);
        tracep->fullIData(oldp+18,(vlTOPp->Top__DOT__core__DOT__REG_6),32);
        tracep->fullBit(oldp+19,(vlTOPp->Top__DOT__core__DOT__REG_7_3));
        tracep->fullCData(oldp+20,(vlTOPp->Top__DOT__core__DOT__mem_reg_wra),5);
        tracep->fullCData(oldp+21,(vlTOPp->Top__DOT__core__DOT__REG_1_2),5);
        tracep->fullCData(oldp+22,(vlTOPp->Top__DOT__core__DOT__REG_2_2),5);
        tracep->fullIData(oldp+23,(((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                      << 5U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                 << 4U) 
                                                | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                   << 3U))) 
                                    | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                        << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
        tracep->fullIData(oldp+24,(vlTOPp->Top__DOT__core__DOT__if_reg_ins),32);
        tracep->fullIData(oldp+25,(vlTOPp->Top__DOT__core__DOT__if_reg_pc),32);
        tracep->fullBit(oldp+26,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
        tracep->fullBit(oldp+27,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memRead));
        tracep->fullBit(oldp+28,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead));
        tracep->fullCData(oldp+29,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                             >> 7U))),5);
        tracep->fullCData(oldp+30,((0x1fU & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U))),5);
        tracep->fullBit(oldp+31,((0x63U == (0x7fU & vlTOPp->Top__DOT__core__DOT__id_reg_ins))));
        tracep->fullIData(oldp+32,(vlTOPp->Top__DOT__core__DOT__ex_reg_ins),32);
        tracep->fullIData(oldp+33,(vlTOPp->Top__DOT__core__DOT__id_reg_ins),32);
        tracep->fullIData(oldp+34,(vlTOPp->Top__DOT__core__DOT__ex_reg_result),32);
        tracep->fullBit(oldp+35,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_regWrite));
        tracep->fullBit(oldp+36,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
        tracep->fullBit(oldp+37,(vlTOPp->Top__DOT__core__DOT__id_reg_is_csr));
        tracep->fullBit(oldp+38,(vlTOPp->Top__DOT__core__DOT__ex_reg_is_csr));
        tracep->fullBit(oldp+39,(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr));
        tracep->fullIData(oldp+40,(vlTOPp->Top__DOT__core__DOT__id_reg_csr_data),32);
        tracep->fullIData(oldp+41,(vlTOPp->Top__DOT__core__DOT__ex_reg_csr_data),32);
        tracep->fullIData(oldp+42,(vlTOPp->Top__DOT__core__DOT__mem_reg_csr_data),32);
        tracep->fullIData(oldp+43,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
        tracep->fullCData(oldp+44,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 7U))),5);
        tracep->fullCData(oldp+45,(vlTOPp->Top__DOT__core__DOT__IDecode_io_func7),7);
        tracep->fullCData(oldp+46,((7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+47,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x1aU))),6);
        tracep->fullBit(oldp+48,(((0x33U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control__DOT___T_28))));
        tracep->fullCData(oldp+49,(((0x33U == (0x7fU 
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
        tracep->fullBit(oldp+50,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
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
        tracep->fullBit(oldp+51,(((0x33U != (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                        & (3U == (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))))));
        tracep->fullBit(oldp+52,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
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
        tracep->fullBit(oldp+53,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
        tracep->fullCData(oldp+54,(((0x33U == (0x7fU 
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
        tracep->fullCData(oldp+55,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
        tracep->fullBit(oldp+56,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
        tracep->fullBit(oldp+57,(((0x57U == (0x7fU 
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
        tracep->fullCData(oldp+58,(((0x57U == (0x7fU 
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
        tracep->fullCData(oldp+59,(((0x57U == (0x7fU 
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
        tracep->fullBit(oldp+60,(((0x57U == (0x7fU 
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
        tracep->fullCData(oldp+61,(((0x57U != (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                    & ((0x27U != (0x7fU 
                                                  & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                       & (7U == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))),4);
        tracep->fullBit(oldp+62,(((0x57U == (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (0x27U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
        tracep->fullBit(oldp+63,(((0x57U != (0x7fU 
                                             & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                  & (0x27U == (0x7fU 
                                               & vlTOPp->Top__DOT__core__DOT__if_reg_ins)))));
        tracep->fullBit(oldp+64,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
        tracep->fullWData(oldp+65,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
        tracep->fullCData(oldp+69,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
        tracep->fullBit(oldp+70,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write));
        tracep->fullCData(oldp+71,(vlTOPp->Top__DOT__core__DOT__mem_reg_lmul_v),4);
        tracep->fullCData(oldp+72,(vlTOPp->Top__DOT__core__DOT__if_reg_lmul_v),4);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1048[0U] = 0U;
            __Vtemp1048[1U] = 0U;
            __Vtemp1048[2U] = 0U;
            __Vtemp1048[3U] = 0U;
        } else {
            __Vtemp1048[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[0U]
                                    : 0U));
            __Vtemp1048[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[1U]
                                    : 0U));
            __Vtemp1048[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[2U]
                                    : 0U));
            __Vtemp1048[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+73,(__Vtemp1048),128);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1056[0U] = 0U;
            __Vtemp1056[1U] = 0U;
            __Vtemp1056[2U] = 0U;
            __Vtemp1056[3U] = 0U;
        } else {
            __Vtemp1056[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[0U]
                                    : 0U));
            __Vtemp1056[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[1U]
                                    : 0U));
            __Vtemp1056[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[2U]
                                    : 0U));
            __Vtemp1056[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_31[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+77,(__Vtemp1056),128);
        if (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
             & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead)))) {
            __Vtemp1064[0U] = 0U;
            __Vtemp1064[1U] = 0U;
            __Vtemp1064[2U] = 0U;
            __Vtemp1064[3U] = 0U;
        } else {
            __Vtemp1064[0U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[0U]
                                    : 0U));
            __Vtemp1064[1U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[1U]
                                    : 0U));
            __Vtemp1064[2U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[2U]
                                    : 0U));
            __Vtemp1064[3U] = (((~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write)) 
                                & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                : (((IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_reg_write) 
                                    & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead))
                                    ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT___GEN_63[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+81,(__Vtemp1064),128);
        tracep->fullCData(oldp+85,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+86,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+87,(((0xfffff800U & 
                                     ((- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1eU)))) 
                                      << 0xbU)) | (0x7ffU 
                                                   & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))),32);
        tracep->fullIData(oldp+88,((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU))),32);
        tracep->fullSData(oldp+89,(vlTOPp->Top__DOT__core__DOT__mem_reg_vtype),11);
        tracep->fullSData(oldp+90,((0x7ffU & vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
        tracep->fullIData(oldp+91,(vlTOPp->Top__DOT__core__DOT__mem_reg_vec_vl),32);
        tracep->fullBit(oldp+92,(vlTOPp->Top__DOT__core__DOT__mem_reg_vset));
        tracep->fullIData(oldp+93,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
        tracep->fullCData(oldp+94,(((0x33U == (0x7fU 
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
        tracep->fullBit(oldp+95,((1U & ((~ (((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
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
        tracep->fullBit(oldp+96,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
        tracep->fullBit(oldp+97,(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall));
        tracep->fullIData(oldp+98,(((3U == (0xfffU 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                                     ? vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                     : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___T_25)),32);
        tracep->fullBit(oldp+99,((0x73U == (0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins))));
        tracep->fullIData(oldp+100,(vlTOPp->Top__DOT__core__DOT__id_reg_imm),32);
        tracep->fullIData(oldp+101,(vlTOPp->Top__DOT__core__DOT__id_reg_rd1),32);
        tracep->fullIData(oldp+102,(vlTOPp->Top__DOT__core__DOT__id_reg_rd2),32);
        tracep->fullIData(oldp+103,(vlTOPp->Top__DOT__core__DOT__id_reg_pc),32);
        tracep->fullCData(oldp+104,(vlTOPp->Top__DOT__core__DOT__id_reg_f7),7);
        tracep->fullCData(oldp+105,(vlTOPp->Top__DOT__core__DOT__id_reg_f3),3);
        tracep->fullBit(oldp+106,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        tracep->fullCData(oldp+107,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        tracep->fullCData(oldp+108,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        tracep->fullCData(oldp+109,((0x3fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0x1aU))),6);
        tracep->fullCData(oldp+110,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
        tracep->fullCData(oldp+111,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
        tracep->fullBit(oldp+112,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
        tracep->fullBit(oldp+113,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_opBsel));
        tracep->fullBit(oldp+114,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_load));
        tracep->fullBit(oldp+115,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_ins));
        tracep->fullBit(oldp+116,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_vset));
        tracep->fullWData(oldp+117,(vlTOPp->Top__DOT__core__DOT__id_reg_v1_data),128);
        tracep->fullWData(oldp+121,(vlTOPp->Top__DOT__core__DOT__id_reg_v2_data),128);
        tracep->fullIData(oldp+125,(vlTOPp->Top__DOT__core__DOT__Execute_io_vl),32);
        tracep->fullIData(oldp+126,(vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out),32);
        tracep->fullWData(oldp+127,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data),128);
        tracep->fullBit(oldp+131,(vlTOPp->Top__DOT__core__DOT__Execute_io_vma));
        tracep->fullBit(oldp+132,(vlTOPp->Top__DOT__core__DOT__Execute_io_vta));
        tracep->fullBit(oldp+133,((1U & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                         >> 0x19U))));
        tracep->fullWData(oldp+134,(vlTOPp->Top__DOT__core__DOT__id_reg_v0_data),128);
        tracep->fullCData(oldp+138,(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew),3);
        tracep->fullIData(oldp+139,(vlTOPp->Top__DOT__core__DOT__id_reg_vtype),32);
        tracep->fullIData(oldp+140,(vlTOPp->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
        tracep->fullWData(oldp+141,(vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
        tracep->fullCData(oldp+145,(vlTOPp->Top__DOT__core__DOT__ex_reg_vd_addr),5);
        tracep->fullCData(oldp+146,(vlTOPp->Top__DOT__core__DOT__id_reg_vs1_addr),5);
        tracep->fullCData(oldp+147,(vlTOPp->Top__DOT__core__DOT__id_reg_vs2_addr),5);
        tracep->fullCData(oldp+148,(vlTOPp->Top__DOT__core__DOT__id_reg_vd_addr),5);
        tracep->fullBit(oldp+149,(vlTOPp->Top__DOT__core__DOT__ex_reg_reg_write));
        tracep->fullBit(oldp+150,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite));
        tracep->fullCData(oldp+151,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
        tracep->fullIData(oldp+152,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
        if ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))) {
            __Vtemp1068[0U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U];
            __Vtemp1068[1U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U];
            __Vtemp1068[2U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U];
            __Vtemp1068[3U] = vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U];
        } else {
            __Vtemp1068[0U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[0U]);
            __Vtemp1068[1U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[1U]);
            __Vtemp1068[2U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[2U]);
            __Vtemp1068[3U] = ((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                : vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[3U]);
        }
        tracep->fullWData(oldp+153,(__Vtemp1068),128);
        tracep->fullBit(oldp+157,(vlTOPp->Top__DOT__core__DOT__Execute_io_stall));
        tracep->fullIData(oldp+158,((((vlTOPp->Top__DOT__core__DOT__vlcount 
                                       != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                      & (0x27U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                      ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                          ? (vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1 
                                             + vlTOPp->Top__DOT__core__DOT__addrcount)
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+159,(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins));
        tracep->fullIData(oldp+160,(vlTOPp->Top__DOT__core__DOT__ex_reg_wd),32);
        tracep->fullIData(oldp+161,((((vlTOPp->Top__DOT__core__DOT__vlcount 
                                       != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                      & (0x27U == (0x7fU 
                                                   & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                      ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                          ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                              ? vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U]
                                              : ((2U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                                  : 
                                                 vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[3U]))
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+162,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                    ? (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead)
                                    : (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memRead))));
        tracep->fullCData(oldp+163,((7U & (vlTOPp->Top__DOT__core__DOT__ex_reg_ins 
                                           >> 0xcU))),3);
        tracep->fullIData(oldp+164,(vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        tracep->fullIData(oldp+165,(vlTOPp->Top__DOT__core__DOT__vtype),32);
        tracep->fullCData(oldp+166,(((0x30U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul) 
                                                              >> 3U)))) 
                                               << 4U)) 
                                     | (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul))),6);
        tracep->fullCData(oldp+167,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul),4);
        tracep->fullBit(oldp+168,((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        tracep->fullSData(oldp+169,(vlTOPp->Top__DOT__core__DOT__if_reg_eew),10);
        tracep->fullCData(oldp+170,(vlTOPp->Top__DOT__core__DOT__if_reg_lsuType),4);
        tracep->fullCData(oldp+171,(vlTOPp->Top__DOT__core__DOT__id_reg_wra),5);
        tracep->fullCData(oldp+172,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        tracep->fullBit(oldp+173,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_memWrite));
        tracep->fullSData(oldp+174,(vlTOPp->Top__DOT__core__DOT__id_reg_z_imm),11);
        tracep->fullCData(oldp+175,(vlTOPp->Top__DOT__core__DOT__id_reg_lmul_v),4);
        tracep->fullSData(oldp+176,(vlTOPp->Top__DOT__core__DOT__id_reg_eew),10);
        tracep->fullCData(oldp+177,(vlTOPp->Top__DOT__core__DOT__id_reg_lsuType),4);
        tracep->fullCData(oldp+178,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
        tracep->fullBit(oldp+179,(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_v_memRead));
        tracep->fullCData(oldp+180,(vlTOPp->Top__DOT__core__DOT__ex_reg_wra),5);
        tracep->fullCData(oldp+181,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        tracep->fullBit(oldp+182,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        tracep->fullIData(oldp+183,(vlTOPp->Top__DOT__core__DOT__ex_reg_pc),32);
        tracep->fullIData(oldp+184,(vlTOPp->Top__DOT__core__DOT__ex_reg_vl),32);
        tracep->fullCData(oldp+185,(vlTOPp->Top__DOT__core__DOT__ex_reg_lmul_v),4);
        tracep->fullBit(oldp+186,(vlTOPp->Top__DOT__core__DOT__ex_reg_vset));
        tracep->fullBit(oldp+187,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_memRead));
        tracep->fullBit(oldp+188,(vlTOPp->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite));
        tracep->fullSData(oldp+189,(vlTOPp->Top__DOT__core__DOT__ex_reg_vtype),11);
        tracep->fullSData(oldp+190,(vlTOPp->Top__DOT__core__DOT__ex_reg_eew),10);
        tracep->fullCData(oldp+191,(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType),4);
        tracep->fullIData(oldp+192,(vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1),32);
        tracep->fullIData(oldp+193,(vlTOPp->Top__DOT__core__DOT__mem_reg_result),32);
        tracep->fullCData(oldp+194,(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        tracep->fullCData(oldp+195,(vlTOPp->Top__DOT__core__DOT__lmul),3);
        tracep->fullIData(oldp+196,(vlTOPp->Top__DOT__core__DOT__lmul_reg),32);
        tracep->fullIData(oldp+197,((((0U == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                      | (1U == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                      ? 0U : (((1U 
                                                == (IData)(vlTOPp->Top__DOT__core__DOT__lmul)) 
                                               | (2U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__emul)))
                                               ? 1U
                                               : ((
                                                   (2U 
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
                                                    : 0U))))),32);
        tracep->fullIData(oldp+198,(vlTOPp->Top__DOT__core__DOT__delays),32);
        tracep->fullIData(oldp+199,(vlTOPp->Top__DOT__core__DOT__addrcount),32);
        tracep->fullIData(oldp+200,(vlTOPp->Top__DOT__core__DOT__vlcount),32);
        tracep->fullIData(oldp+201,(vlTOPp->Top__DOT__core__DOT__REG___05F0),32);
        tracep->fullIData(oldp+202,(vlTOPp->Top__DOT__core__DOT__REG___05F1),32);
        tracep->fullIData(oldp+203,(vlTOPp->Top__DOT__core__DOT__REG___05F2),32);
        tracep->fullCData(oldp+204,(vlTOPp->Top__DOT__core__DOT__REG_1_0),5);
        tracep->fullCData(oldp+205,(vlTOPp->Top__DOT__core__DOT__REG_1_1),5);
        tracep->fullCData(oldp+206,(vlTOPp->Top__DOT__core__DOT__REG_2_0),5);
        tracep->fullCData(oldp+207,(vlTOPp->Top__DOT__core__DOT__REG_2_1),5);
        tracep->fullIData(oldp+208,(vlTOPp->Top__DOT__core__DOT__REG_3_0),32);
        tracep->fullIData(oldp+209,(vlTOPp->Top__DOT__core__DOT__REG_4_0),32);
        tracep->fullBit(oldp+210,(vlTOPp->Top__DOT__core__DOT__REG_7_0));
        tracep->fullBit(oldp+211,(vlTOPp->Top__DOT__core__DOT__REG_7_1));
        tracep->fullBit(oldp+212,(vlTOPp->Top__DOT__core__DOT__REG_7_2));
        tracep->fullSData(oldp+213,((0xfffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))),12);
        tracep->fullBit(oldp+214,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
        tracep->fullCData(oldp+215,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
        tracep->fullBit(oldp+216,(((0x33U == (0x7fU 
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
        tracep->fullBit(oldp+217,(((0x33U != (0x7fU 
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
        tracep->fullBit(oldp+218,(((0x57U != (0x7fU 
                                              & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x27U != (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__if_reg_ins)) 
                                      & (7U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__if_reg_ins))))));
        tracep->fullBit(oldp+219,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
        tracep->fullCData(oldp+220,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
        tracep->fullIData(oldp+221,(((0U == (0x1fU 
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
        tracep->fullIData(oldp+222,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
        tracep->fullIData(oldp+223,(((((0x40000000U 
                                        & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                        ? 0x1fffffU
                                        : 0U) << 0xbU) 
                                     | (0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+224,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
        tracep->fullCData(oldp+225,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+226,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        tracep->fullBit(oldp+227,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        tracep->fullBit(oldp+228,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        tracep->fullBit(oldp+229,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        tracep->fullBit(oldp+230,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        tracep->fullCData(oldp+231,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        tracep->fullCData(oldp+232,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                      << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
        tracep->fullIData(oldp+233,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                      << 2U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        tracep->fullIData(oldp+234,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        tracep->fullIData(oldp+235,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        tracep->fullIData(oldp+236,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        tracep->fullIData(oldp+237,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        tracep->fullIData(oldp+238,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        tracep->fullBit(oldp+239,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        tracep->fullBit(oldp+240,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        tracep->fullCData(oldp+241,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        tracep->fullBit(oldp+242,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        tracep->fullBit(oldp+243,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        tracep->fullSData(oldp+244,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                      << 7U) | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                << 3U))),11);
        tracep->fullIData(oldp+245,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                      << 0x15U) | (
                                                   ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                    << 0x11U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                       << 0xbU) 
                                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                          << 7U) 
                                                         | ((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                            << 3U)))))),32);
        tracep->fullIData(oldp+246,((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                      << 4U) | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                 << 3U) 
                                                | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
        tracep->fullIData(oldp+247,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        tracep->fullIData(oldp+248,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
        tracep->fullIData(oldp+249,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        tracep->fullBit(oldp+250,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
        tracep->fullBit(oldp+251,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
        tracep->fullBit(oldp+252,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                      & (~ (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                   & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
        tracep->fullBit(oldp+253,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
        tracep->fullBit(oldp+254,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
        tracep->fullBit(oldp+255,((((((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_24) 
                                      & (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                     & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___T_27)) 
                                    & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                   & (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        tracep->fullCData(oldp+256,((3U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x1eU))),2);
        tracep->fullCData(oldp+257,((0x7fU & vlTOPp->Top__DOT__core__DOT__if_reg_ins)),7);
        tracep->fullIData(oldp+258,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
        tracep->fullIData(oldp+259,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
        tracep->fullIData(oldp+260,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
        tracep->fullIData(oldp+261,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
        tracep->fullIData(oldp+262,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
        tracep->fullIData(oldp+263,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
        tracep->fullIData(oldp+264,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
        tracep->fullIData(oldp+265,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
        tracep->fullIData(oldp+266,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
        tracep->fullIData(oldp+267,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
        tracep->fullIData(oldp+268,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
        tracep->fullIData(oldp+269,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
        tracep->fullIData(oldp+270,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
        tracep->fullIData(oldp+271,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
        tracep->fullIData(oldp+272,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
        tracep->fullIData(oldp+273,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
        tracep->fullIData(oldp+274,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
        tracep->fullIData(oldp+275,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
        tracep->fullIData(oldp+276,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
        tracep->fullIData(oldp+277,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
        tracep->fullIData(oldp+278,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
        tracep->fullIData(oldp+279,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
        tracep->fullIData(oldp+280,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
        tracep->fullIData(oldp+281,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
        tracep->fullIData(oldp+282,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
        tracep->fullIData(oldp+283,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
        tracep->fullIData(oldp+284,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
        tracep->fullIData(oldp+285,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
        tracep->fullIData(oldp+286,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
        tracep->fullIData(oldp+287,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
        tracep->fullIData(oldp+288,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
        tracep->fullIData(oldp+289,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
        tracep->fullWData(oldp+290,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
        tracep->fullWData(oldp+294,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
        tracep->fullWData(oldp+298,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
        tracep->fullWData(oldp+302,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
        tracep->fullWData(oldp+306,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
        tracep->fullWData(oldp+310,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
        tracep->fullWData(oldp+314,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
        tracep->fullWData(oldp+318,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
        tracep->fullWData(oldp+322,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
        tracep->fullWData(oldp+326,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
        tracep->fullWData(oldp+330,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
        tracep->fullWData(oldp+334,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
        tracep->fullWData(oldp+338,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
        tracep->fullWData(oldp+342,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
        tracep->fullWData(oldp+346,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
        tracep->fullWData(oldp+350,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
        tracep->fullWData(oldp+354,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
        tracep->fullWData(oldp+358,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
        tracep->fullWData(oldp+362,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
        tracep->fullWData(oldp+366,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
        tracep->fullWData(oldp+370,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
        tracep->fullWData(oldp+374,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
        tracep->fullWData(oldp+378,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
        tracep->fullWData(oldp+382,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
        tracep->fullWData(oldp+386,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
        tracep->fullWData(oldp+390,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
        tracep->fullWData(oldp+394,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
        tracep->fullWData(oldp+398,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
        tracep->fullWData(oldp+402,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
        tracep->fullWData(oldp+406,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
        tracep->fullWData(oldp+410,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
        tracep->fullWData(oldp+414,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
        tracep->fullCData(oldp+418,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
        tracep->fullCData(oldp+419,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
        tracep->fullCData(oldp+420,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
        tracep->fullCData(oldp+421,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
        tracep->fullIData(oldp+422,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0xfffffU : 0U)),20);
        tracep->fullIData(oldp+423,((0xfffffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))),20);
        tracep->fullCData(oldp+424,((0x7fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x19U))),7);
        tracep->fullSData(oldp+425,(((0xfe0U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U)))),12);
        tracep->fullBit(oldp+426,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+427,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 7U))));
        tracep->fullCData(oldp+428,((0x3fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x19U))),6);
        tracep->fullCData(oldp+429,((0xfU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                             >> 8U))),4);
        tracep->fullSData(oldp+430,(((0x800U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 8U)))))),12);
        tracep->fullIData(oldp+431,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x7ffffU : 0U)),19);
        tracep->fullCData(oldp+432,((0xffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+433,((1U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))));
        tracep->fullSData(oldp+434,((0x3ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+435,(((0x80000U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
        tracep->fullSData(oldp+436,(((0x80000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x7ffU : 0U)),11);
        tracep->fullIData(oldp+437,(((0x40000000U & vlTOPp->Top__DOT__core__DOT__if_reg_ins)
                                      ? 0x1fffffU : 0U)),21);
        tracep->fullSData(oldp+438,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))),11);
        tracep->fullCData(oldp+439,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
        tracep->fullBit(oldp+440,((1U & ((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_f7) 
                                         >> 5U))));
        tracep->fullCData(oldp+441,((0x1fU & (vlTOPp->Top__DOT__core__DOT__mem_reg_ins 
                                              >> 7U))),5);
        tracep->fullCData(oldp+442,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+443,((0x1fU & (vlTOPp->Top__DOT__core__DOT__id_reg_ins 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+444,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        tracep->fullCData(oldp+445,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        tracep->fullCData(oldp+446,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
        tracep->fullSData(oldp+447,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
        tracep->fullWData(oldp+448,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
        tracep->fullWData(oldp+452,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
        tracep->fullIData(oldp+456,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16),32);
        tracep->fullCData(oldp+457,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
        tracep->fullIData(oldp+458,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
        tracep->fullCData(oldp+459,(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39),5);
        tracep->fullBit(oldp+460,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid));
        tracep->fullBit(oldp+461,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_ready));
        tracep->fullBit(oldp+462,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
                                   | ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
                                        | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
                                       | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
                                      | (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s) 
                                          | (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u)) 
                                         & ((~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_valid)) 
                                            & (0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter))))))));
        tracep->fullIData(oldp+463,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG),32);
        tracep->fullIData(oldp+464,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_1),32);
        tracep->fullCData(oldp+465,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_2),3);
        tracep->fullBit(oldp+466,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_3));
        tracep->fullCData(oldp+467,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_4),6);
        tracep->fullCData(oldp+468,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__REG_5),6);
        tracep->fullCData(oldp+469,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
        tracep->fullCData(oldp+470,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+471,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+472,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+473,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
        tracep->fullCData(oldp+474,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+475,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+476,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+477,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
        tracep->fullCData(oldp+478,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+479,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+480,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+481,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
        tracep->fullCData(oldp+482,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+483,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+484,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                              >> 0x18U))),8);
        tracep->fullCData(oldp+485,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
        tracep->fullCData(oldp+486,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+487,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+488,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+489,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
        tracep->fullCData(oldp+490,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+491,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+492,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+493,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
        tracep->fullCData(oldp+494,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+495,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+496,((0xffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+497,((0xffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
        tracep->fullCData(oldp+498,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+499,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+500,((0xffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+501,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
        tracep->fullSData(oldp+502,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+503,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
        tracep->fullSData(oldp+504,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+505,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
        tracep->fullSData(oldp+506,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+507,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
        tracep->fullSData(oldp+508,((0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+509,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
        tracep->fullSData(oldp+510,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+511,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
        tracep->fullSData(oldp+512,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+513,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
        tracep->fullSData(oldp+514,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+515,((0xffffU & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
        tracep->fullSData(oldp+516,((0xffffU & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+517,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
        tracep->fullIData(oldp+518,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
        tracep->fullIData(oldp+519,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
        tracep->fullIData(oldp+520,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
        tracep->fullIData(oldp+521,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
        tracep->fullIData(oldp+522,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
        tracep->fullIData(oldp+523,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
        tracep->fullIData(oldp+524,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
        tracep->fullQData(oldp+525,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
        tracep->fullQData(oldp+527,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
        tracep->fullQData(oldp+529,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
        tracep->fullQData(oldp+531,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
        tracep->fullCData(oldp+533,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
        tracep->fullCData(oldp+534,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+535,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+536,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+537,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
        tracep->fullCData(oldp+538,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+539,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+540,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+541,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
        tracep->fullCData(oldp+542,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x18U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 8U)))),8);
        tracep->fullCData(oldp+543,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x10U)))),8);
        tracep->fullCData(oldp+544,((0xffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 8U) 
                                              | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x18U)))),8);
        tracep->fullCData(oldp+545,((0xffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
        tracep->fullCData(oldp+546,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+547,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+548,((0xffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+549,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
        tracep->fullSData(oldp+550,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+551,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
        tracep->fullSData(oldp+552,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+553,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
        tracep->fullSData(oldp+554,((0xffffU & ((vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   >> 0x10U)))),16);
        tracep->fullSData(oldp+555,((0xffffU & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
        tracep->fullSData(oldp+556,((0xffffU & (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+557,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
        tracep->fullIData(oldp+558,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
        tracep->fullIData(oldp+559,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
        tracep->fullIData(oldp+560,(vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
        tracep->fullQData(oldp+561,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
        tracep->fullQData(oldp+563,((((QData)((IData)(
                                                      vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
        tracep->fullQData(oldp+565,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_231))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_239))),64);
        tracep->fullQData(oldp+567,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffffffffffULL
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_289))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_297))),64);
        tracep->fullIData(oldp+569,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_353))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_361))),32);
        tracep->fullIData(oldp+570,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_411))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_419))),32);
        tracep->fullIData(oldp+571,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_469))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_477))),32);
        tracep->fullIData(oldp+572,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_487) 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                  ? 0xffffffffU
                                                  : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_527))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_535))),32);
        tracep->fullSData(oldp+573,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+574,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+575,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+576,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+577,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+578,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+579,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+580,((0xffffU & ((7U 
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
        tracep->fullCData(oldp+581,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_191) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1061)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1069))))),8);
        tracep->fullCData(oldp+582,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_249) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1119)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1127))))),8);
        tracep->fullCData(oldp+583,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_429) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1177)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1185))))),8);
        tracep->fullCData(oldp+584,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1243))))),8);
        tracep->fullCData(oldp+585,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_783) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1293)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1301))))),8);
        tracep->fullCData(oldp+586,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_841) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1351)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1359))))),8);
        tracep->fullCData(oldp+587,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_899) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1409)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1417))))),8);
        tracep->fullCData(oldp+588,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1475))))),8);
        tracep->fullQData(oldp+589,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_3),64);
        tracep->fullCData(oldp+591,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1485) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1525)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1533))))),8);
        tracep->fullCData(oldp+592,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1543) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1583)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1591))))),8);
        tracep->fullCData(oldp+593,((0xffU & ((0xaU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1601) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1641)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1649))))),8);
        tracep->fullCData(oldp+594,((0xffU & ((0xbU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1659) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1699)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1707))))),8);
        tracep->fullCData(oldp+595,((0xffU & ((0xcU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1717) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1757)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1765))))),8);
        tracep->fullCData(oldp+596,((0xffU & ((0xdU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1775) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1815)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1823))))),8);
        tracep->fullCData(oldp+597,((0xffU & ((0xeU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1833) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1873)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1881))))),8);
        tracep->fullCData(oldp+598,((0xffU & ((0xfU 
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
                                                   (((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1891) 
                                                     & (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_vma))
                                                     ? 0xffU
                                                     : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1931)))
                                                   : (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1939))))),8);
        tracep->fullQData(oldp+599,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+601,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
        tracep->fullQData(oldp+603,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+605,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
        tracep->fullQData(oldp+607,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
        tracep->fullQData(oldp+609,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
        tracep->fullQData(oldp+611,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+613,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
        tracep->fullQData(oldp+615,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
        tracep->fullQData(oldp+617,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
        tracep->fullQData(oldp+619,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
        tracep->fullQData(oldp+621,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
        tracep->fullQData(oldp+623,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
        tracep->fullQData(oldp+625,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
        tracep->fullQData(oldp+627,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
        tracep->fullQData(oldp+629,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 8U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
        tracep->fullQData(oldp+631,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
        tracep->fullQData(oldp+633,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x18U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
        tracep->fullQData(oldp+635,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
        tracep->fullQData(oldp+637,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 8U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
        tracep->fullQData(oldp+639,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
        tracep->fullQData(oldp+641,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x18U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
        tracep->fullWData(oldp+643,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_28),512);
        tracep->fullQData(oldp+659,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+661,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
        tracep->fullQData(oldp+663,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
        tracep->fullQData(oldp+665,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
        tracep->fullQData(oldp+667,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
        tracep->fullQData(oldp+669,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                         << 0x10U) 
                                                                        | (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                                                           >> 0x10U)))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
        tracep->fullQData(oldp+671,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
        tracep->fullQData(oldp+673,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                                                        >> 0x10U))))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
        tracep->fullCData(oldp+675,((7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16))),3);
        tracep->fullCData(oldp+676,((7U & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+677,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                              >> 1U)) 
                                          & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16))) 
                                         | ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                            >> 2U)))));
        tracep->fullBit(oldp+678,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                              >> 2U)) 
                                          & (~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                                >> 1U))) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16)))));
        tracep->fullBit(oldp+679,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                              >> 2U)) 
                                          & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16))))));
        tracep->fullBit(oldp+680,((1U & (((~ ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                              >> 2U)) 
                                          & ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16) 
                                             >> 1U)) 
                                         & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_16)))));
        tracep->fullQData(oldp+681,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
        tracep->fullCData(oldp+683,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_counter),6);
        tracep->fullIData(oldp+684,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_dividend),32);
        tracep->fullIData(oldp+685,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__r_quotient),32);
        tracep->fullBit(oldp+686,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_u));
        tracep->fullBit(oldp+687,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__is_div_rem_s));
        tracep->fullCData(oldp+688,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__offset),2);
        tracep->fullCData(oldp+689,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__funct3),3);
        tracep->fullCData(oldp+690,((3U & vlTOPp->Top__DOT__core__DOT__ex_reg_result)),2);
        tracep->fullCData(oldp+691,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
        tracep->fullCData(oldp+692,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
        tracep->fullCData(oldp+693,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
        tracep->fullCData(oldp+694,((0xffU & (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
                                               : (((IData)(vlTOPp->Top__DOT__core__DOT__MEM_io_writeEnable) 
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
        tracep->fullSData(oldp+695,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__lo),16);
        tracep->fullSData(oldp+696,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__hi),16);
        tracep->fullIData(oldp+697,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                      ? (((vlTOPp->Top__DOT__core__DOT__vlcount 
                                           != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                          & (0x27U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                          ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                              ? (vlTOPp->Top__DOT__core__DOT__ex_reg_read_data1 
                                                 + vlTOPp->Top__DOT__core__DOT__addrcount)
                                              : 0U)
                                          : 0U) : vlTOPp->Top__DOT__core__DOT__ex_reg_result)),32);
        tracep->fullIData(oldp+698,(((IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_v_ins)
                                      ? (((vlTOPp->Top__DOT__core__DOT__vlcount 
                                           != vlTOPp->Top__DOT__core__DOT__ex_reg_vl) 
                                          & (0x27U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__core__DOT__ex_reg_ins)))
                                          ? ((1U == (IData)(vlTOPp->Top__DOT__core__DOT__ex_reg_lsuType))
                                              ? ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                  ? 
                                                 vlTOPp->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                   ? 
                                                  vlTOPp->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                                   : 
                                                  vlTOPp->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data[3U]))
                                              : 0U)
                                          : 0U) : vlTOPp->Top__DOT__core__DOT__ex_reg_wd)),32);
        tracep->fullCData(oldp+699,((7U & vlTOPp->Top__DOT__core__DOT__vtype)),3);
        tracep->fullCData(oldp+700,((7U & (vlTOPp->Top__DOT__core__DOT__vtype 
                                           >> 3U))),3);
        tracep->fullCData(oldp+701,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__sew),7);
        tracep->fullCData(oldp+702,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__lmul),4);
        tracep->fullSData(oldp+703,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
        tracep->fullCData(oldp+704,(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
        tracep->fullBit(oldp+705,((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        tracep->fullSData(oldp+706,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),13);
        tracep->fullSData(oldp+707,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),12);
        tracep->fullSData(oldp+708,((0x7ffU & (vlTOPp->Top__DOT__core__DOT__ex_reg_result 
                                               >> 2U))),13);
        tracep->fullBit(oldp+709,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        tracep->fullBit(oldp+710,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        tracep->fullCData(oldp+711,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        tracep->fullSData(oldp+712,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        tracep->fullIData(oldp+713,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        tracep->fullBit(oldp+714,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        tracep->fullBit(oldp+715,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        tracep->fullCData(oldp+716,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        tracep->fullSData(oldp+717,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
        tracep->fullIData(oldp+718,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        tracep->fullIData(oldp+719,(vlTOPp->Top__DOT__Tracer__DOT__clkCycle),32);
        tracep->fullIData(oldp+720,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                      ? vlTOPp->Top__DOT__core__DOT__MEM_io_readData
                                      : vlTOPp->Top__DOT__core__DOT___GEN_29)),32);
        tracep->fullBit(oldp+721,((((IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_stall) 
                                    | (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_stall)) 
                                   | (IData)(vlTOPp->Top__DOT__core__DOT__IF_stall))));
        tracep->fullIData(oldp+722,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
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
        tracep->fullBit(oldp+723,(((IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
                                   | (0U != (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__control_io_jump)))));
        if (((3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
             & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))) {
            __Vtemp1092[4U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[5U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[6U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[7U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[8U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[9U] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                >> 0x1fU))));
            __Vtemp1092[0xaU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0xbU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0xcU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0xdU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0xeU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0xfU] = (- (IData)((1U & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                  >> 0x1fU))));
            __Vtemp1092[0x10U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x11U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x12U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x13U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x14U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x15U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x16U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x17U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x18U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x19U] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1aU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1bU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1cU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1dU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1eU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1092[0x1fU] = (- (IData)((1U & (
                                                   vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U] 
                                                   >> 0x1fU))));
            __Vtemp1093[0U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[0U];
            __Vtemp1093[1U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[1U];
            __Vtemp1093[2U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[2U];
            __Vtemp1093[3U] = vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_301[3U];
        } else {
            __Vtemp1092[4U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[4U])));
            __Vtemp1092[5U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[5U])));
            __Vtemp1092[6U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[6U])));
            __Vtemp1092[7U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[7U])));
            __Vtemp1092[8U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[8U])));
            __Vtemp1092[9U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? (- (IData)((1U & 
                                              (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U] 
                                               >> 0x1fU))))
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? (- (IData)((1U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U] 
                                                     >> 0x1fU))))
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                         >> 0x1fU))))
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[9U])));
            __Vtemp1092[0xaU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xaU])));
            __Vtemp1092[0xbU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xbU])));
            __Vtemp1092[0xcU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xcU])));
            __Vtemp1092[0xdU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xdU])));
            __Vtemp1092[0xeU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xeU])));
            __Vtemp1092[0xfU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                             (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                          ? (- (IData)(
                                                       (1U 
                                                        & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                           >> 0x1fU))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0xfU])));
            __Vtemp1092[0x10U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x10U])));
            __Vtemp1092[0x11U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x11U])));
            __Vtemp1092[0x12U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x12U])));
            __Vtemp1092[0x13U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x13U])));
            __Vtemp1092[0x14U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x14U])));
            __Vtemp1092[0x15U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x15U])));
            __Vtemp1092[0x16U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x16U])));
            __Vtemp1092[0x17U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x17U])));
            __Vtemp1092[0x18U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x18U])));
            __Vtemp1092[0x19U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x19U])));
            __Vtemp1092[0x1aU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1aU])));
            __Vtemp1092[0x1bU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1bU])));
            __Vtemp1092[0x1cU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1cU])));
            __Vtemp1092[0x1dU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1dU])));
            __Vtemp1092[0x1eU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1eU])));
            __Vtemp1092[0x1fU] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
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
                                              (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U] 
                                                            >> 0x1fU))))
                                           : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0x1fU])));
            __Vtemp1093[0U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[0U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[0U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[0U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[0U])));
            __Vtemp1093[1U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[1U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[1U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[1U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[1U])));
            __Vtemp1093[2U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[2U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[2U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[2U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[2U])));
            __Vtemp1093[3U] = (((2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_539[3U]
                                : (((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                    & (0U == (7U & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                    ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1009[3U]
                                    : (((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute_io_v_sew)) 
                                        & (0U == (7U 
                                                  & (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))))
                                        ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1943[3U]
                                        : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___GEN_25[3U])));
        }
        tracep->fullWData(oldp+724,(__Vtemp1093),128);
        tracep->fullIData(oldp+728,((IData)((VL_LTES_IQQ(1,36,36, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                              ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                              : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
        tracep->fullIData(oldp+729,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_rd2
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_13)),32);
        tracep->fullIData(oldp+730,((((0x1fU & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
        tracep->fullIData(oldp+731,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                     | vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        tracep->fullIData(oldp+732,((vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                     & (~ vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
        tracep->fullBit(oldp+733,(((0U == (7U & (vlTOPp->Top__DOT__core__DOT__if_reg_ins 
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
        tracep->fullIData(oldp+734,((IData)((0x7fffffffffffffffULL 
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
        tracep->fullIData(oldp+735,(((0U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
                                      ? (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result)
                                      : ((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)) 
                                           | (3U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))) 
                                          | (2U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39)))
                                          ? (IData)(
                                                    (vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result 
                                                     >> 0x20U))
                                          : ((4U == (IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT___GEN_39))
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
                                                    : 0U))))))),32);
        tracep->fullIData(oldp+736,(((1U == (IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_pc
                                      : vlTOPp->Top__DOT__core__DOT__Execute__DOT___T_16)),32);
        tracep->fullIData(oldp+737,(((IData)(vlTOPp->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                      ? vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                      : vlTOPp->Top__DOT__core__DOT__id_reg_imm)),32);
        tracep->fullQData(oldp+738,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
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
        tracep->fullQData(oldp+740,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
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
        tracep->fullIData(oldp+742,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
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
        tracep->fullIData(oldp+743,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
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
        tracep->fullIData(oldp+744,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
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
        tracep->fullIData(oldp+745,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
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
        tracep->fullCData(oldp+746,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
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
        tracep->fullCData(oldp+747,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
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
        tracep->fullCData(oldp+748,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
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
        tracep->fullCData(oldp+749,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+750,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+751,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
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
        tracep->fullCData(oldp+752,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
        tracep->fullCData(oldp+753,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
        tracep->fullCData(oldp+754,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
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
        tracep->fullCData(oldp+755,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
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
        tracep->fullCData(oldp+756,((0xffU & ((0xaU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
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
        tracep->fullCData(oldp+757,((0xffU & ((0xbU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
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
        tracep->fullCData(oldp+758,((0xffU & ((0xcU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
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
        tracep->fullCData(oldp+759,((0xffU & ((0xdU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
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
        tracep->fullCData(oldp+760,((0xffU & ((0xeU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
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
        tracep->fullCData(oldp+761,((0xffU & ((0xfU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
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
        tracep->fullSData(oldp+762,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+763,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+764,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+765,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+766,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+767,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+768,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+769,((0xffffU & ((7U 
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
        tracep->fullQData(oldp+770,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
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
        tracep->fullQData(oldp+772,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
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
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : 0xffffffffffffffffULL)))),64);
        tracep->fullIData(oldp+774,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
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
        tracep->fullIData(oldp+775,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                              : 0xffffffffU)))),32);
        tracep->fullIData(oldp+776,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                              : 0xffffffffU)))),32);
        tracep->fullIData(oldp+777,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
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
                                              ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                              : 0xffffffffU)))),32);
        tracep->fullCData(oldp+778,((0xffU & ((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
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
        tracep->fullCData(oldp+779,((0xffU & ((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
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
        tracep->fullCData(oldp+780,((0xffU & ((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
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
        tracep->fullCData(oldp+781,((0xffU & ((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+782,((0xffU & ((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+783,((0xffU & ((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_837)
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
        tracep->fullCData(oldp+784,((0xffU & ((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+785,((0xffU & ((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                    : 0xffU))))),8);
        tracep->fullCData(oldp+786,((0xffU & ((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
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
        tracep->fullCData(oldp+787,((0xffU & ((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 8U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1539)
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
        tracep->fullCData(oldp+788,((0xffU & ((0xaU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x10U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1597)
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
        tracep->fullCData(oldp+789,((0xffU & ((0xbU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? ((
                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                     >> 0x18U))
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1655)
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
        tracep->fullCData(oldp+790,((0xffU & ((0xcU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
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
        tracep->fullCData(oldp+791,((0xffU & ((0xdU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 8U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1771)
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
        tracep->fullCData(oldp+792,((0xffU & ((0xeU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x10U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1829)
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
        tracep->fullCData(oldp+793,((0xffU & ((0xfU 
                                               < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                               ? (vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  >> 0x18U)
                                               : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1887)
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
        tracep->fullSData(oldp+794,((0xffffU & ((0U 
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
        tracep->fullSData(oldp+795,((0xffffU & ((1U 
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
        tracep->fullSData(oldp+796,((0xffffU & ((2U 
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
        tracep->fullSData(oldp+797,((0xffffU & ((3U 
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
        tracep->fullSData(oldp+798,((0xffffU & ((4U 
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
        tracep->fullSData(oldp+799,((0xffffU & ((5U 
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
        tracep->fullSData(oldp+800,((0xffffU & ((6U 
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
        tracep->fullSData(oldp+801,((0xffffU & ((7U 
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
        tracep->fullQData(oldp+802,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+804,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
        tracep->fullQData(oldp+806,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+808,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
        tracep->fullQData(oldp+810,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
        tracep->fullQData(oldp+812,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
        tracep->fullQData(oldp+814,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+816,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
        tracep->fullQData(oldp+818,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
        tracep->fullQData(oldp+820,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
        tracep->fullQData(oldp+822,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
        tracep->fullQData(oldp+824,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
        tracep->fullQData(oldp+826,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
        tracep->fullQData(oldp+828,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
        tracep->fullQData(oldp+830,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+832,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
        tracep->fullQData(oldp+834,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
        tracep->fullQData(oldp+836,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
        tracep->fullQData(oldp+838,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
        tracep->fullQData(oldp+840,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
        tracep->fullQData(oldp+842,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
        tracep->fullQData(oldp+844,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
        tracep->fullQData(oldp+846,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
        tracep->fullQData(oldp+848,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
        tracep->fullQData(oldp+850,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
        tracep->fullQData(oldp+852,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
        tracep->fullQData(oldp+854,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
        tracep->fullQData(oldp+856,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
        tracep->fullQData(oldp+858,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
        tracep->fullQData(oldp+860,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
        tracep->fullQData(oldp+862,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+864,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (((QData)((IData)(
                                                          vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (((QData)((IData)(
                                                                  vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5701))),64);
        tracep->fullQData(oldp+866,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+868,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_245)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_251)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5764))),64);
        tracep->fullQData(oldp+870,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5793))),64);
        tracep->fullQData(oldp+872,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_483)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_489)
                                              ? (QData)((IData)(
                                                                vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5822))),64);
        tracep->fullQData(oldp+874,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+876,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6122))),64);
        tracep->fullQData(oldp+878,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6151))),64);
        tracep->fullQData(oldp+880,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6180))),64);
        tracep->fullQData(oldp+882,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6209))),64);
        tracep->fullQData(oldp+884,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6238))),64);
        tracep->fullQData(oldp+886,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6267))),64);
        tracep->fullQData(oldp+888,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6296))),64);
        tracep->fullQData(oldp+890,(((8U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1481)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1487)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1493)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6325))),64);
        tracep->fullQData(oldp+892,(((9U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1551)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6354))),64);
        tracep->fullQData(oldp+894,(((0xaU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1609)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6383))),64);
        tracep->fullQData(oldp+896,(((0xbU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1667)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6412))),64);
        tracep->fullQData(oldp+898,(((0xcU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1713)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1719)
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1725)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6441))),64);
        tracep->fullQData(oldp+900,(((0xdU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1783)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6470))),64);
        tracep->fullQData(oldp+902,(((0xeU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1841)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6499))),64);
        tracep->fullQData(oldp+904,(((0xfU < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_1899)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6528))),64);
        tracep->fullQData(oldp+906,(((0U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_187)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_193)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_199)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : 0xffffffffffffffffULL))),64);
        tracep->fullQData(oldp+908,(((1U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_257)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5885))),64);
        tracep->fullQData(oldp+910,(((2U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_425)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_431)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[1U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_437)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5914))),64);
        tracep->fullQData(oldp+912,(((3U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_495)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5943))),64);
        tracep->fullQData(oldp+914,(((4U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_779)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_785)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_791)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_5972))),64);
        tracep->fullQData(oldp+916,(((5U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_849)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6001))),64);
        tracep->fullQData(oldp+918,(((6U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                      : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_895)
                                          ? ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_901)
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlTOPp->Top__DOT__core__DOT__id_reg_vs3_data[3U])))
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_907)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6030))),64);
        tracep->fullQData(oldp+920,(((7U < vlTOPp->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                              : ((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_965)
                                                  ? 0xffffffffffffffffULL
                                                  : (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))))
                                          : vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___T_6059))),64);
        tracep->fullIData(oldp+922,(((0xffff0000U & 
                                      (vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                       << 0x10U)) | (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        tracep->fullIData(oldp+923,(vlTOPp->Top__DOT__dmem__DOT__sram_rdata_o),32);
        tracep->fullIData(oldp+924,(vlTOPp->Top__DOT__imem__DOT__sram_rdata_o),32);
        tracep->fullBit(oldp+925,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__csb));
        tracep->fullSData(oldp+926,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
        tracep->fullIData(oldp+927,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        tracep->fullCData(oldp+928,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        tracep->fullBit(oldp+929,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__we_o));
        tracep->fullBit(oldp+930,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__csb));
        tracep->fullSData(oldp+931,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
        tracep->fullIData(oldp+932,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        tracep->fullCData(oldp+933,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        tracep->fullBit(oldp+934,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__we_o));
        tracep->fullIData(oldp+935,(vlTOPp->Top__DOT__core__DOT__MEM_io_readData),32);
        tracep->fullIData(oldp+936,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
        tracep->fullIData(oldp+937,(vlTOPp->Top__DOT__core__DOT__IDecode_io_writeData),32);
        tracep->fullIData(oldp+938,(vlTOPp->Top__DOT__core__DOT__Execute_io_ALUresult),32);
        tracep->fullIData(oldp+939,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData1),32);
        tracep->fullIData(oldp+940,(vlTOPp->Top__DOT__core__DOT__IDecode_io_readData2),32);
        tracep->fullBit(oldp+941,(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc));
        tracep->fullIData(oldp+942,((IData)(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
        tracep->fullIData(oldp+943,(vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
        tracep->fullCData(oldp+944,(((0xbU == (0x1fU 
                                               & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                  >> 0x14U)))
                                      ? 3U : ((8U == 
                                               (0x1fU 
                                                & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x14U)))
                                               ? 2U
                                               : (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x14U)))))),2);
        tracep->fullCData(oldp+945,(((3U == (3U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x1aU)))
                                      ? 4U : ((2U == 
                                               (3U 
                                                & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x1aU)))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                       >> 0x1aU)))
                                                   ? 2U
                                                   : 1U)))),4);
        tracep->fullSData(oldp+946,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew),10);
        tracep->fullIData(oldp+947,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
        tracep->fullBit(oldp+948,(((0U != vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
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
        tracep->fullIData(oldp+949,(vlTOPp->Top__DOT__core__DOT__vlcount1),32);
        tracep->fullCData(oldp+950,(((0x33U == (0x7fU 
                                                & vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                      ? (0x3fU & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                  >> 0x19U))
                                      : 0U)),6);
        tracep->fullBit(oldp+951,(vlTOPp->Top__DOT__core__DOT__IF_stall));
        tracep->fullIData(oldp+952,(vlTOPp->Top__DOT__core__DOT___T_64),32);
        tracep->fullBit(oldp+953,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
        tracep->fullIData(oldp+954,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
        tracep->fullIData(oldp+955,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
        tracep->fullIData(oldp+956,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
        tracep->fullIData(oldp+957,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        tracep->fullIData(oldp+958,(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        tracep->fullIData(oldp+959,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        tracep->fullIData(oldp+960,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        tracep->fullIData(oldp+961,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
        tracep->fullIData(oldp+962,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
        tracep->fullIData(oldp+963,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
        tracep->fullIData(oldp+964,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_a),32);
        tracep->fullIData(oldp+965,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU_io_src_b),32);
        tracep->fullIData(oldp+966,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
        tracep->fullIData(oldp+967,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
        tracep->fullQData(oldp+968,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_7),64);
        tracep->fullQData(oldp+970,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_12),64);
        tracep->fullWData(oldp+972,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_19),512);
        tracep->fullWData(oldp+988,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__lo_24),512);
        tracep->fullQData(oldp+1004,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
        tracep->fullQData(oldp+1006,(vlTOPp->Top__DOT__core__DOT__Execute__DOT__MDU__DOT__result),64);
        tracep->fullIData(oldp+1008,(vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata),32);
        tracep->fullIData(oldp+1009,(((0x80U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+1010,((0xffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),8);
        tracep->fullIData(oldp+1011,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+1012,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                               >> 8U))),8);
        tracep->fullIData(oldp+1013,(((0x800000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+1014,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                               >> 0x10U))),8);
        tracep->fullIData(oldp+1015,(((0x80000000U 
                                       & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffffU : 0U)),24);
        tracep->fullCData(oldp+1016,((0xffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                               >> 0x18U))),8);
        tracep->fullSData(oldp+1017,((0xffffU & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)),16);
        tracep->fullSData(oldp+1018,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 8U))),16);
        tracep->fullSData(oldp+1019,((0xffffU & (vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                 >> 0x10U))),16);
        tracep->fullSData(oldp+1020,(((0x8000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffU : 0U)),16);
        tracep->fullSData(oldp+1021,(((0x800000U & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffU : 0U)),16);
        tracep->fullSData(oldp+1022,(((0x80000000U 
                                       & vlTOPp->Top__DOT__core__DOT__MEM__DOT__rdata)
                                       ? 0xffffU : 0U)),16);
        tracep->fullCData(oldp+1023,((3U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                            >> 0x1aU))),2);
        tracep->fullCData(oldp+1024,((0x1fU & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1025,((7U & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1026,(vlTOPp->Top__DOT__core__DOT__vlsu__DOT__eew),7);
        tracep->fullCData(oldp+1027,(((3U == (3U & 
                                              (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                               >> 0x1aU)))
                                       ? 4U : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x1aU)))
                                                ? 3U
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                        >> 0x1aU)))
                                                    ? 2U
                                                    : 1U)))),3);
        tracep->fullSData(oldp+1028,((0xffffU & vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_instruction)),16);
        tracep->fullCData(oldp+1029,((0xfU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              >> 7U))),4);
        tracep->fullCData(oldp+1030,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+1031,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 5U))));
        tracep->fullBit(oldp+1032,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 6U))));
        tracep->fullCData(oldp+1033,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 2U))),3);
        tracep->fullCData(oldp+1034,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 0xaU))),3);
        tracep->fullCData(oldp+1035,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 7U))),3);
        tracep->fullBit(oldp+1036,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xcU))));
        tracep->fullCData(oldp+1037,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 0xaU))),2);
        tracep->fullIData(oldp+1038,((0x2023U | ((0x38000U 
                                                  & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 8U)) 
                                                 | ((0xc00U 
                                                     & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                    | (0x200U 
                                                       & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                          << 3U)))))),18);
        tracep->fullCData(oldp+1039,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0x3fU : 0U)),6);
        tracep->fullCData(oldp+1040,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 2U))),5);
        tracep->fullCData(oldp+1041,((0x1fU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 7U))),5);
        tracep->fullBit(oldp+1042,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 8U))));
        tracep->fullCData(oldp+1043,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 9U))),2);
        tracep->fullBit(oldp+1044,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 7U))));
        tracep->fullBit(oldp+1045,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 2U))));
        tracep->fullBit(oldp+1046,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1047,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 3U))),3);
        tracep->fullSData(oldp+1048,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0x1ffU : 0U)),9);
        tracep->fullBit(oldp+1049,((1U & (~ (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 0xfU)))));
        tracep->fullIData(oldp+1050,((0x6fU | ((0x1000000U 
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
        tracep->fullSData(oldp+1051,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0x7fffU : 0U)),15);
        tracep->fullCData(oldp+1052,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 7U : 0U)),3);
        tracep->fullCData(oldp+1053,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 3U))),2);
        tracep->fullBit(oldp+1054,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xaU))));
        tracep->fullCData(oldp+1055,(((0x1000U & vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                       ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+1056,((1U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 0xdU))));
        tracep->fullSData(oldp+1057,((0x63U | ((0x1000U 
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
        tracep->fullCData(oldp+1058,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 2U))),2);
        tracep->fullCData(oldp+1059,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 4U))),3);
        tracep->fullCData(oldp+1060,((3U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 7U))),2);
        tracep->fullCData(oldp+1061,((7U & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            >> 9U))),3);
        tracep->fullBit(oldp+1062,(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        tracep->fullIData(oldp+1063,((0x3fffffffU & 
                                      (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                       >> 2U))),32);
        tracep->fullIData(oldp+1064,(vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
        tracep->fullIData(oldp+1065,(vlTOPp->Top__DOT__core__DOT__pc_io_in),32);
        tracep->fullBit(oldp+1066,(vlTOPp->Top__DOT__core__DOT__pc_io_halt));
        tracep->fullBit(oldp+1067,((1U & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                          >> 1U))));
        tracep->fullBit(oldp+1068,((1U & (~ (IData)(vlTOPp->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
        tracep->fullSData(oldp+1069,((0x1fffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                 >> 2U))),13);
        tracep->fullSData(oldp+1070,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                >> 2U))),12);
        tracep->fullSData(oldp+1071,((0xfffU & (vlTOPp->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                                >> 2U))),13);
        tracep->fullBit(oldp+1072,(vlTOPp->clock));
        tracep->fullBit(oldp+1073,(vlTOPp->reset));
        tracep->fullIData(oldp+1074,(vlTOPp->io_pin),32);
        tracep->fullWData(oldp+1075,(vlTOPp->io_v_pin),128);
        tracep->fullIData(oldp+1079,(vlTOPp->io_fcsr),32);
        tracep->fullIData(oldp+1080,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                       ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                       : ((IData)(4U) 
                                          + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->fullIData(oldp+1081,(((IData)(vlTOPp->Top__DOT__core__DOT__pc_io_halt)
                                       ? vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg
                                       : ((IData)(2U) 
                                          + vlTOPp->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        tracep->fullIData(oldp+1082,(((6U == (IData)(vlTOPp->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
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
        tracep->fullBit(oldp+1083,((((1U == (IData)(vlTOPp->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                     & (vlTOPp->Top__DOT__core__DOT__pc_io_in 
                                        >> 1U)) & (~ (IData)(vlTOPp->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
        tracep->fullBit(oldp+1084,(vlTOPp->Top__DOT__dmem__DOT__sram_csb_i));
        tracep->fullBit(oldp+1085,(vlTOPp->Top__DOT__dmem__DOT__sram_we_i));
        tracep->fullBit(oldp+1086,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rvalid));
        tracep->fullBit(oldp+1087,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rvalid));
        tracep->fullIData(oldp+1088,(0U),32);
        tracep->fullCData(oldp+1089,(0xfU),4);
        tracep->fullBit(oldp+1090,(0U));
        tracep->fullBit(oldp+1091,(1U));
        tracep->fullIData(oldp+1092,(0U),32);
        tracep->fullCData(oldp+1093,(0x10U),8);
        tracep->fullCData(oldp+1094,(0U),5);
        tracep->fullCData(oldp+1095,(0U),4);
        tracep->fullBit(oldp+1096,(0U));
        tracep->fullIData(oldp+1097,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__rdata_i),32);
        tracep->fullIData(oldp+1098,(4U),32);
        tracep->fullIData(oldp+1099,(0x20U),32);
        tracep->fullIData(oldp+1100,(0xdU),32);
        tracep->fullIData(oldp+1101,(0x2000U),32);
        tracep->fullIData(oldp+1102,(3U),32);
        tracep->fullSData(oldp+1103,(0U),13);
        tracep->fullIData(oldp+1104,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1),32);
        tracep->fullBit(oldp+1105,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg));
        tracep->fullSData(oldp+1106,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
        tracep->fullIData(oldp+1107,(vlTOPp->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i),32);
        __Vtemp1094[0U] = 0x2e747874U;
        __Vtemp1094[1U] = 0x2f61736dU;
        __Vtemp1094[2U] = 0x75697461U;
        __Vtemp1094[3U] = 0x2f766171U;
        __Vtemp1094[4U] = 0x61697261U;
        __Vtemp1094[5U] = 0x6d652f6dU;
        __Vtemp1094[6U] = 0x2f686fU;
        tracep->fullWData(oldp+1108,(__Vtemp1094),216);
        tracep->fullIData(oldp+1115,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
        tracep->fullIData(oldp+1116,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
        tracep->fullBit(oldp+1117,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
        tracep->fullSData(oldp+1118,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
        tracep->fullIData(oldp+1119,(vlTOPp->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
    }
}
