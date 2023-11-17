// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+1041,"io_pin", false,-1, 31,0);
    tracep->declArray(c+1042,"io_v_pin", false,-1, 127,0);
    tracep->declBus(c+1046,"io_fcsr", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+1041,"io_pin", false,-1, 31,0);
    tracep->declArray(c+1042,"io_v_pin", false,-1, 127,0);
    tracep->declBus(c+1046,"io_fcsr", false,-1, 31,0);
    tracep->declBit(c+1039,"core_clock", false,-1);
    tracep->declBit(c+1040,"core_reset", false,-1);
    tracep->declBus(c+721,"core_io_pin", false,-1, 31,0);
    tracep->declArray(c+1,"core_io_Vpin", false,-1, 127,0);
    tracep->declBit(c+5,"core_io_dmemReq_valid", false,-1);
    tracep->declBus(c+6,"core_io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"core_io_dmemReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"core_io_dmemReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"core_io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+10,"core_io_dmemRsp_valid", false,-1);
    tracep->declBus(c+926,"core_io_dmemRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+938,"core_io_imemReq_valid", false,-1);
    tracep->declBus(c+939,"core_io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"core_io_imemReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"core_io_imemReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"core_io_imemReq_bits_isWrite", false,-1);
    tracep->declBit(c+11,"core_io_imemRsp_valid", false,-1);
    tracep->declBus(c+927,"core_io_imemRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBus(c+12,"core_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"core_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"core_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+15,"core_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+721,"core_io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+16,"core_io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+17,"core_io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+948,"core_io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+18,"core_io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+19,"core_io_rvfiBool_0", false,-1);
    tracep->declBus(c+20,"core_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+21,"core_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+22,"core_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+23,"core_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+1039,"dmem_clock", false,-1);
    tracep->declBit(c+1040,"dmem_reset", false,-1);
    tracep->declBit(c+5,"dmem_io_req_valid", false,-1);
    tracep->declBus(c+6,"dmem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"dmem_io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"dmem_io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"dmem_io_req_bits_isWrite", false,-1);
    tracep->declBit(c+10,"dmem_io_rsp_valid", false,-1);
    tracep->declBus(c+926,"dmem_io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"imem_clock", false,-1);
    tracep->declBit(c+1040,"imem_reset", false,-1);
    tracep->declBit(c+938,"imem_io_req_valid", false,-1);
    tracep->declBus(c+939,"imem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"imem_io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"imem_io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"imem_io_req_bits_isWrite", false,-1);
    tracep->declBit(c+11,"imem_io_rsp_valid", false,-1);
    tracep->declBus(c+927,"imem_io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"tracer_clock", false,-1);
    tracep->declBit(c+1040,"tracer_reset", false,-1);
    tracep->declBus(c+12,"tracer_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"tracer_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"tracer_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+15,"tracer_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+721,"tracer_io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+16,"tracer_io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+17,"tracer_io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+948,"tracer_io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+18,"tracer_io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+19,"tracer_io_rvfiBool_0", false,-1);
    tracep->declBus(c+20,"tracer_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+21,"tracer_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+22,"tracer_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+721,"io_pin", false,-1, 31,0);
    tracep->declArray(c+1,"io_Vpin", false,-1, 127,0);
    tracep->declBit(c+5,"io_dmemReq_valid", false,-1);
    tracep->declBus(c+6,"io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"io_dmemReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"io_dmemReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+10,"io_dmemRsp_valid", false,-1);
    tracep->declBus(c+926,"io_dmemRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+938,"io_imemReq_valid", false,-1);
    tracep->declBus(c+939,"io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"io_imemReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"io_imemReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"io_imemReq_bits_isWrite", false,-1);
    tracep->declBit(c+11,"io_imemRsp_valid", false,-1);
    tracep->declBus(c+927,"io_imemRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBus(c+12,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+15,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+721,"io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+16,"io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+17,"io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+948,"io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+18,"io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+19,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+20,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+21,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+22,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+23,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+1040,"InstructionFetch_reset", false,-1);
    tracep->declBus(c+940,"InstructionFetch_io_address", false,-1, 31,0);
    tracep->declBus(c+949,"InstructionFetch_io_instruction", false,-1, 31,0);
    tracep->declBit(c+722,"InstructionFetch_io_stall", false,-1);
    tracep->declBit(c+1058,"InstructionFetch_io_coreInstrReq_ready", false,-1);
    tracep->declBit(c+938,"InstructionFetch_io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+939,"InstructionFetch_io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"InstructionFetch_io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"InstructionFetch_io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"InstructionFetch_io_coreInstrReq_bits_isWrite", false,-1);
    tracep->declBit(c+1058,"InstructionFetch_io_coreInstrResp_ready", false,-1);
    tracep->declBit(c+11,"InstructionFetch_io_coreInstrResp_valid", false,-1);
    tracep->declBus(c+927,"InstructionFetch_io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"IDecode_clock", false,-1);
    tracep->declBit(c+1040,"IDecode_reset", false,-1);
    tracep->declBus(c+24,"IDecode_io_id_instruction", false,-1, 31,0);
    tracep->declBus(c+950,"IDecode_io_writeData", false,-1, 31,0);
    tracep->declBus(c+20,"IDecode_io_writeReg", false,-1, 4,0);
    tracep->declBus(c+25,"IDecode_io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+26,"IDecode_io_ctl_writeEnable", false,-1);
    tracep->declBit(c+27,"IDecode_io_id_ex_mem_read", false,-1);
    tracep->declBit(c+28,"IDecode_io_ex_mem_mem_read", false,-1);
    tracep->declBit(c+10,"IDecode_io_dmem_resp_valid", false,-1);
    tracep->declBus(c+29,"IDecode_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+30,"IDecode_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+31,"IDecode_io_id_ex_branch", false,-1);
    tracep->declBus(c+32,"IDecode_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+14,"IDecode_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+33,"IDecode_io_ex_ins", false,-1, 31,0);
    tracep->declBus(c+951,"IDecode_io_ex_result", false,-1, 31,0);
    tracep->declBus(c+34,"IDecode_io_ex_mem_result", false,-1, 31,0);
    tracep->declBus(c+950,"IDecode_io_mem_wb_result", false,-1, 31,0);
    tracep->declBit(c+35,"IDecode_io_id_ex_regWr", false,-1);
    tracep->declBit(c+36,"IDecode_io_ex_mem_regWr", false,-1);
    tracep->declBit(c+37,"IDecode_io_csr_Ex", false,-1);
    tracep->declBit(c+38,"IDecode_io_csr_Mem", false,-1);
    tracep->declBit(c+39,"IDecode_io_csr_Wb", false,-1);
    tracep->declBus(c+40,"IDecode_io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+41,"IDecode_io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+42,"IDecode_io_csr_Wb_data", false,-1, 31,0);
    tracep->declBus(c+926,"IDecode_io_dmem_data", false,-1, 31,0);
    tracep->declBus(c+43,"IDecode_io_immediate", false,-1, 31,0);
    tracep->declBus(c+44,"IDecode_io_writeRegAddress", false,-1, 4,0);
    tracep->declBus(c+952,"IDecode_io_readData1", false,-1, 31,0);
    tracep->declBus(c+953,"IDecode_io_readData2", false,-1, 31,0);
    tracep->declBus(c+45,"IDecode_io_func7", false,-1, 6,0);
    tracep->declBus(c+46,"IDecode_io_func3", false,-1, 2,0);
    tracep->declBus(c+47,"IDecode_io_func6", false,-1, 5,0);
    tracep->declBit(c+48,"IDecode_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+49,"IDecode_io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+50,"IDecode_io_ctl_regWrite", false,-1);
    tracep->declBit(c+51,"IDecode_io_ctl_memRead", false,-1);
    tracep->declBit(c+52,"IDecode_io_ctl_memWrite", false,-1);
    tracep->declBit(c+53,"IDecode_io_ctl_branch", false,-1);
    tracep->declBus(c+54,"IDecode_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+55,"IDecode_io_ctl_jump", false,-1, 1,0);
    tracep->declBit(c+56,"IDecode_io_ctl_v_RegWrite", false,-1);
    tracep->declBit(c+57,"IDecode_io_ctl_v_opBsel", false,-1);
    tracep->declBus(c+58,"IDecode_io_ctl_v_Ex_sel", false,-1, 3,0);
    tracep->declBus(c+59,"IDecode_io_ctl_v_aluop", false,-1, 4,0);
    tracep->declBit(c+60,"IDecode_io_ctl_v_vset", false,-1);
    tracep->declBus(c+61,"IDecode_io_ctl_v_load", false,-1, 3,0);
    tracep->declBit(c+62,"IDecode_io_ctl_v_ins", false,-1);
    tracep->declBit(c+1057,"IDecode_io_ctl_v_memRead", false,-1);
    tracep->declBit(c+63,"IDecode_io_ctl_v_memWrite", false,-1);
    tracep->declBit(c+64,"IDecode_io_ctl_v_reg_read", false,-1);
    tracep->declArray(c+65,"IDecode_io_write_data", false,-1, 127,0);
    tracep->declBus(c+69,"IDecode_io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+70,"IDecode_io_wb_RegWrite", false,-1);
    tracep->declBus(c+71,"IDecode_io_id_lmul_count", false,-1, 3,0);
    tracep->declBus(c+72,"IDecode_io_id_lmul_vs1in_vs2in", false,-1, 3,0);
    tracep->declBus(c+73,"IDecode_io_id_vc3", false,-1, 4,0);
    tracep->declArray(c+74,"IDecode_io_vs0_data", false,-1, 127,0);
    tracep->declArray(c+78,"IDecode_io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+82,"IDecode_io_vs2_data", false,-1, 127,0);
    tracep->declBit(c+56,"IDecode_io_reg_write", false,-1);
    tracep->declBus(c+86,"IDecode_io_vs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"IDecode_io_vs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"IDecode_io_vd_addr", false,-1, 4,0);
    tracep->declArray(c+1,"IDecode_io_vs3_data", false,-1, 127,0);
    tracep->declBus(c+88,"IDecode_io_v_z_imm", false,-1, 31,0);
    tracep->declBus(c+89,"IDecode_io_v_addi_imm", false,-1, 31,0);
    tracep->declBus(c+90,"IDecode_io_vtypei", false,-1, 10,0);
    tracep->declBus(c+91,"IDecode_io_vtypei_out", false,-1, 10,0);
    tracep->declBus(c+92,"IDecode_io_vl", false,-1, 31,0);
    tracep->declBit(c+93,"IDecode_io_ctl_vset", false,-1);
    tracep->declBus(c+94,"IDecode_io_vl_out", false,-1, 31,0);
    tracep->declBus(c+1059,"IDecode_io_vstart_out", false,-1, 31,0);
    tracep->declBus(c+95,"IDecode_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+96,"IDecode_io_hdu_pcWrite", false,-1);
    tracep->declBit(c+97,"IDecode_io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+954,"IDecode_io_pcSrc", false,-1);
    tracep->declBus(c+723,"IDecode_io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+724,"IDecode_io_ifid_flush", false,-1);
    tracep->declBit(c+98,"IDecode_io_stall", false,-1);
    tracep->declBus(c+1055,"IDecode_io_csr_i_misa", false,-1, 31,0);
    tracep->declBus(c+1055,"IDecode_io_csr_i_mhartid", false,-1, 31,0);
    tracep->declBus(c+99,"IDecode_io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+100,"IDecode_io_is_csr", false,-1);
    tracep->declBus(c+23,"IDecode_io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+86,"IDecode_io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+87,"IDecode_io_rs_addr_1", false,-1, 4,0);
    tracep->declBit(c+1039,"Execute_clock", false,-1);
    tracep->declBit(c+1040,"Execute_reset", false,-1);
    tracep->declBus(c+101,"Execute_io_immediate", false,-1, 31,0);
    tracep->declBus(c+102,"Execute_io_readData1", false,-1, 31,0);
    tracep->declBus(c+103,"Execute_io_readData2", false,-1, 31,0);
    tracep->declBus(c+104,"Execute_io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+105,"Execute_io_func7", false,-1, 6,0);
    tracep->declBus(c+106,"Execute_io_func3", false,-1, 2,0);
    tracep->declBus(c+34,"Execute_io_mem_result", false,-1, 31,0);
    tracep->declBus(c+950,"Execute_io_wb_result", false,-1, 31,0);
    tracep->declBit(c+36,"Execute_io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+26,"Execute_io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+33,"Execute_io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+32,"Execute_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+14,"Execute_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+107,"Execute_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+108,"Execute_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+109,"Execute_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+110,"Execute_io_func6", false,-1, 5,0);
    tracep->declBus(c+111,"Execute_io_v_ctl_aluop", false,-1, 2,0);
    tracep->declBus(c+112,"Execute_io_v_ctl_exsel", false,-1, 3,0);
    tracep->declBit(c+113,"Execute_io_v_ctl_regwrite", false,-1);
    tracep->declBit(c+114,"Execute_io_v_ctl_opBsel", false,-1);
    tracep->declBit(c+115,"Execute_io_v_ctl_v_load", false,-1);
    tracep->declBit(c+116,"Execute_io_v_ctl_v_ins", false,-1);
    tracep->declBit(c+117,"Execute_io_v_ctl_vset", false,-1);
    tracep->declArray(c+118,"Execute_io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+122,"Execute_io_vs2_data", false,-1, 127,0);
    tracep->declBus(c+126,"Execute_io_vl", false,-1, 31,0);
    tracep->declBus(c+127,"Execute_io_vstart", false,-1, 31,0);
    tracep->declArray(c+128,"Execute_io_vs3_data", false,-1, 127,0);
    tracep->declBit(c+132,"Execute_io_vma", false,-1);
    tracep->declBit(c+133,"Execute_io_vta", false,-1);
    tracep->declBit(c+134,"Execute_io_vm", false,-1);
    tracep->declArray(c+135,"Execute_io_vs0", false,-1, 127,0);
    tracep->declBus(c+29,"Execute_io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+139,"Execute_io_v_sew", false,-1, 2,0);
    tracep->declBus(c+140,"Execute_io_zimm", false,-1, 31,0);
    tracep->declBus(c+141,"Execute_io_v_addi_imm", false,-1, 31,0);
    tracep->declArray(c+142,"Execute_io_vec_mem_res", false,-1, 127,0);
    tracep->declArray(c+65,"Execute_io_vec_wb_res", false,-1, 127,0);
    tracep->declBus(c+146,"Execute_io_fu_ex_reg_vd", false,-1, 4,0);
    tracep->declBus(c+69,"Execute_io_fu_mem_reg_vd", false,-1, 4,0);
    tracep->declBus(c+147,"Execute_io_fu_reg_vs1", false,-1, 4,0);
    tracep->declBus(c+148,"Execute_io_fu_reg_vs2", false,-1, 4,0);
    tracep->declBus(c+149,"Execute_io_fu_reg_vs3", false,-1, 4,0);
    tracep->declBit(c+150,"Execute_io_fu_ex_reg_write", false,-1);
    tracep->declBit(c+70,"Execute_io_fu_mem_reg_write", false,-1);
    tracep->declBit(c+151,"Execute_io_v_MemWrite", false,-1);
    tracep->declArray(c+725,"Execute_io_vec_alu_res", false,-1, 127,0);
    tracep->declBus(c+729,"Execute_io_vec_vl", false,-1, 31,0);
    tracep->declBus(c+152,"Execute_io_vec_rd_out", false,-1, 4,0);
    tracep->declBus(c+955,"Execute_io_vec_avl_o", false,-1, 31,0);
    tracep->declBus(c+153,"Execute_io_vec_valmax_o", false,-1, 31,0);
    tracep->declArray(c+154,"Execute_io_vs3_data_o", false,-1, 127,0);
    tracep->declBus(c+730,"Execute_io_writeData", false,-1, 31,0);
    tracep->declBus(c+951,"Execute_io_ALUresult", false,-1, 31,0);
    tracep->declArray(c+135,"Execute_io_vs0_o", false,-1, 127,0);
    tracep->declBit(c+158,"Execute_io_stall", false,-1);
    tracep->declBit(c+1039,"MEM_clock", false,-1);
    tracep->declBit(c+1040,"MEM_reset", false,-1);
    tracep->declBus(c+34,"MEM_io_aluResultIn", false,-1, 31,0);
    tracep->declBus(c+159,"MEM_io_v_addr", false,-1, 31,0);
    tracep->declBit(c+160,"MEM_io_v_ins", false,-1);
    tracep->declBus(c+161,"MEM_io_writeData", false,-1, 31,0);
    tracep->declBus(c+162,"MEM_io_v_writeData", false,-1, 31,0);
    tracep->declBit(c+9,"MEM_io_writeEnable", false,-1);
    tracep->declBit(c+163,"MEM_io_readEnable", false,-1);
    tracep->declBus(c+948,"MEM_io_readData", false,-1, 31,0);
    tracep->declBus(c+164,"MEM_io_f3", false,-1, 2,0);
    tracep->declBit(c+5,"MEM_io_dccmReq_valid", false,-1);
    tracep->declBus(c+6,"MEM_io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"MEM_io_dccmReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"MEM_io_dccmReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"MEM_io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+10,"MEM_io_dccmRsp_valid", false,-1);
    tracep->declBus(c+926,"MEM_io_dccmRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"pc_clock", false,-1);
    tracep->declBit(c+1040,"pc_reset", false,-1);
    tracep->declBus(c+941,"pc_io_in", false,-1, 31,0);
    tracep->declBit(c+942,"pc_io_halt", false,-1);
    tracep->declBus(c+165,"pc_io_out", false,-1, 31,0);
    tracep->declBus(c+1047,"pc_io_pc4", false,-1, 31,0);
    tracep->declBus(c+1048,"pc_io_pc2", false,-1, 31,0);
    tracep->declBit(c+1039,"vlsu_clock", false,-1);
    tracep->declBit(c+1040,"vlsu_reset", false,-1);
    tracep->declBus(c+956,"vlsu_io_instr", false,-1, 31,0);
    tracep->declBus(c+166,"vlsu_io_vtype", false,-1, 31,0);
    tracep->declBus(c+957,"vlsu_io_UnitStride", false,-1, 1,0);
    tracep->declBus(c+1060,"vlsu_io_evl", false,-1, 7,0);
    tracep->declBus(c+1061,"vlsu_io_vs3_Addr", false,-1, 4,0);
    tracep->declBus(c+958,"vlsu_io_lsuType", false,-1, 3,0);
    tracep->declBus(c+959,"vlsu_io_eew", false,-1, 9,0);
    tracep->declBus(c+1062,"vlsu_io_nf", false,-1, 3,0);
    tracep->declBus(c+167,"vlsu_io_emmul", false,-1, 5,0);
    tracep->declBus(c+168,"vlsu_io_emul", false,-1, 3,0);
    tracep->declBit(c+1039,"Realigner_clock", false,-1);
    tracep->declBit(c+1040,"Realigner_reset", false,-1);
    tracep->declBus(c+941,"Realigner_io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+949,"Realigner_io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+954,"Realigner_io_ral_jmp", false,-1);
    tracep->declBus(c+940,"Realigner_io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+960,"Realigner_io_ral_instruction_o", false,-1, 31,0);
    tracep->declBit(c+169,"Realigner_io_ral_halt_o", false,-1);
    tracep->declBus(c+960,"CompressedDecoder_io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+961,"CompressedDecoder_io_is_comp", false,-1);
    tracep->declBus(c+956,"CompressedDecoder_io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+25,"if_reg_pc", false,-1, 31,0);
    tracep->declBus(c+24,"if_reg_ins", false,-1, 31,0);
    tracep->declBus(c+72,"if_reg_lmul_v", false,-1, 3,0);
    tracep->declBus(c+170,"if_vc3", false,-1, 3,0);
    tracep->declBus(c+171,"if_reg_eew", false,-1, 9,0);
    tracep->declBus(c+172,"if_reg_lsuType", false,-1, 3,0);
    tracep->declBus(c+104,"id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+102,"id_reg_rd1", false,-1, 31,0);
    tracep->declBus(c+103,"id_reg_rd2", false,-1, 31,0);
    tracep->declBus(c+101,"id_reg_imm", false,-1, 31,0);
    tracep->declBus(c+173,"id_reg_wra", false,-1, 4,0);
    tracep->declBus(c+105,"id_reg_f7", false,-1, 6,0);
    tracep->declBus(c+106,"id_reg_f3", false,-1, 2,0);
    tracep->declBus(c+33,"id_reg_ins", false,-1, 31,0);
    tracep->declBit(c+107,"id_reg_ctl_aluSrc", false,-1);
    tracep->declBus(c+109,"id_reg_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+174,"id_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+35,"id_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+27,"id_reg_ctl_memRead", false,-1);
    tracep->declBit(c+175,"id_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+108,"id_reg_ctl_aluOp", false,-1, 1,0);
    tracep->declBit(c+37,"id_reg_is_csr", false,-1);
    tracep->declBus(c+40,"id_reg_csr_data", false,-1, 31,0);
    tracep->declBus(c+176,"id_reg_z_imm", false,-1, 10,0);
    tracep->declBus(c+127,"id_reg_vstart_out", false,-1, 31,0);
    tracep->declBus(c+140,"id_reg_vtype", false,-1, 31,0);
    tracep->declBus(c+141,"id_reg_v_addi_imm", false,-1, 31,0);
    tracep->declArray(c+135,"id_reg_v0_data", false,-1, 127,0);
    tracep->declArray(c+118,"id_reg_v1_data", false,-1, 127,0);
    tracep->declArray(c+122,"id_reg_v2_data", false,-1, 127,0);
    tracep->declArray(c+128,"id_reg_vs3_data", false,-1, 127,0);
    tracep->declBus(c+147,"id_reg_vs1_addr", false,-1, 4,0);
    tracep->declBus(c+148,"id_reg_vs2_addr", false,-1, 4,0);
    tracep->declBus(c+149,"id_reg_vd_addr", false,-1, 4,0);
    tracep->declBus(c+177,"id_reg_lmul_v", false,-1, 3,0);
    tracep->declBus(c+178,"id_reg_eew", false,-1, 9,0);
    tracep->declBus(c+179,"id_reg_lsuType", false,-1, 3,0);
    tracep->declBit(c+113,"id_reg_ctl_RegWrite", false,-1);
    tracep->declBit(c+114,"id_reg_ctl_opBsel", false,-1);
    tracep->declBus(c+112,"id_reg_ctl_Ex_sel", false,-1, 3,0);
    tracep->declBus(c+180,"id_reg_ctl_aluop", false,-1, 4,0);
    tracep->declBit(c+117,"id_reg_ctl_vset", false,-1);
    tracep->declBit(c+115,"id_reg_ctl_v_load", false,-1);
    tracep->declBit(c+116,"id_reg_ctl_v_ins", false,-1);
    tracep->declBit(c+181,"id_reg_ctl_v_memRead", false,-1);
    tracep->declBit(c+151,"id_reg_ctl_v_MemWrite", false,-1);
    tracep->declBus(c+34,"ex_reg_result", false,-1, 31,0);
    tracep->declBus(c+161,"ex_reg_wd", false,-1, 31,0);
    tracep->declBus(c+182,"ex_reg_wra", false,-1, 4,0);
    tracep->declBus(c+32,"ex_reg_ins", false,-1, 31,0);
    tracep->declBus(c+183,"ex_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+36,"ex_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+28,"ex_reg_ctl_memRead", false,-1);
    tracep->declBit(c+184,"ex_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+185,"ex_reg_pc", false,-1, 31,0);
    tracep->declBit(c+38,"ex_reg_is_csr", false,-1);
    tracep->declBus(c+41,"ex_reg_csr_data", false,-1, 31,0);
    tracep->declArray(c+142,"ex_reg_vec_alu_res", false,-1, 127,0);
    tracep->declBus(c+186,"ex_reg_vl", false,-1, 31,0);
    tracep->declBus(c+146,"ex_reg_vd_addr", false,-1, 4,0);
    tracep->declBus(c+187,"ex_reg_lmul_v", false,-1, 3,0);
    tracep->declBit(c+188,"ex_reg_vset", false,-1);
    tracep->declBit(c+189,"ex_reg_ctl_v_memRead", false,-1);
    tracep->declBit(c+190,"ex_reg_ctl_v_MemWrite", false,-1);
    tracep->declBit(c+150,"ex_reg_reg_write", false,-1);
    tracep->declBus(c+191,"ex_reg_vtype", false,-1, 10,0);
    tracep->declBus(c+192,"ex_reg_eew", false,-1, 9,0);
    tracep->declBus(c+193,"ex_reg_lsuType", false,-1, 3,0);
    tracep->declBus(c+194,"ex_reg_read_data1", false,-1, 31,0);
    tracep->declBit(c+160,"ex_reg_v_ins", false,-1);
    tracep->declBus(c+14,"mem_reg_ins", false,-1, 31,0);
    tracep->declBus(c+195,"mem_reg_result", false,-1, 31,0);
    tracep->declBus(c+20,"mem_reg_wra", false,-1, 4,0);
    tracep->declBus(c+196,"mem_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+26,"mem_reg_ctl_regWrite", false,-1);
    tracep->declBus(c+12,"mem_reg_pc", false,-1, 31,0);
    tracep->declBit(c+39,"mem_reg_is_csr", false,-1);
    tracep->declBus(c+42,"mem_reg_csr_data", false,-1, 31,0);
    tracep->declArray(c+65,"mem_reg_vec_alu_out", false,-1, 127,0);
    tracep->declBus(c+92,"mem_reg_vec_vl", false,-1, 31,0);
    tracep->declBus(c+90,"mem_reg_vtype", false,-1, 10,0);
    tracep->declBus(c+69,"mem_reg_vec_vd_addr", false,-1, 4,0);
    tracep->declBus(c+71,"mem_reg_lmul_v", false,-1, 3,0);
    tracep->declBit(c+93,"mem_reg_vset", false,-1);
    tracep->declBit(c+70,"mem_reg_vec_reg_write", false,-1);
    tracep->declBus(c+197,"lmul", false,-1, 2,0);
    tracep->declBus(c+166,"vtype", false,-1, 31,0);
    tracep->declBus(c+956,"instruction", false,-1, 31,0);
    tracep->declBus(c+962,"vlcount1", false,-1, 31,0);
    tracep->declBus(c+963,"emul_count", false,-1, 31,0);
    tracep->declBus(c+198,"lmul_reg", false,-1, 31,0);
    tracep->declBus(c+199,"vc3", false,-1, 4,0);
    tracep->declBus(c+200,"vlmul_count", false,-1, 31,0);
    tracep->declBus(c+201,"emul_reg", false,-1, 31,0);
    tracep->declBus(c+202,"delays", false,-1, 31,0);
    tracep->declBus(c+203,"addrcount", false,-1, 31,0);
    tracep->declBus(c+204,"vlcount", false,-1, 31,0);
    tracep->declBus(c+205,"eew_32_vs3_data_0", false,-1, 31,0);
    tracep->declBus(c+206,"eew_32_vs3_data_1", false,-1, 31,0);
    tracep->declBus(c+207,"eew_32_vs3_data_2", false,-1, 31,0);
    tracep->declBus(c+964,"func7", false,-1, 5,0);
    tracep->declBit(c+965,"IF_stall", false,-1);
    tracep->declBit(c+169,"ral_halt_o", false,-1);
    tracep->declBus(c+966,"next_pc_selector", false,-1, 31,0);
    tracep->declBit(c+961,"is_comp", false,-1);
    tracep->declBus(c+208,"npcDelay_0", false,-1, 31,0);
    tracep->declBus(c+209,"npcDelay_1", false,-1, 31,0);
    tracep->declBus(c+210,"npcDelay_2", false,-1, 31,0);
    tracep->declBus(c+13,"npcDelay_3", false,-1, 31,0);
    tracep->declBus(c+211,"rsAddrDelay_0_0", false,-1, 4,0);
    tracep->declBus(c+212,"rsAddrDelay_0_1", false,-1, 4,0);
    tracep->declBus(c+21,"rsAddrDelay_0_2", false,-1, 4,0);
    tracep->declBus(c+213,"rsAddrDelay_1_0", false,-1, 4,0);
    tracep->declBus(c+214,"rsAddrDelay_1_1", false,-1, 4,0);
    tracep->declBus(c+22,"rsAddrDelay_1_2", false,-1, 4,0);
    tracep->declBus(c+215,"rsDataDelay_0_0", false,-1, 31,0);
    tracep->declBus(c+16,"rsDataDelay_0_1", false,-1, 31,0);
    tracep->declBus(c+216,"rsDataDelay_1_0", false,-1, 31,0);
    tracep->declBus(c+17,"rsDataDelay_1_1", false,-1, 31,0);
    tracep->declBus(c+15,"memAddrDelay", false,-1, 31,0);
    tracep->declBus(c+18,"memWdataDelay", false,-1, 31,0);
    tracep->declBit(c+217,"stallDelay_0", false,-1);
    tracep->declBit(c+218,"stallDelay_1", false,-1);
    tracep->declBit(c+219,"stallDelay_2", false,-1);
    tracep->declBit(c+19,"stallDelay_3", false,-1);
    tracep->declBus(c+1059,"data", false,-1, 31,0);
    tracep->declBus(c+1055,"next_pc_sel", false,-1, 31,0);
    tracep->declBus(c+220,"eew_32_vs3_data_3", false,-1, 31,0);
    tracep->pushNamePrefix("CompressedDecoder ");
    tracep->declBus(c+960,"io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+961,"io_is_comp", false,-1);
    tracep->declBus(c+956,"io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+967,"io_instruction_o_lo_2", false,-1, 17,0);
    tracep->declBus(c+968,"io_instruction_o_lo_4", false,-1, 24,0);
    tracep->declBus(c+969,"io_instruction_o_lo_16", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+101,"io_immediate", false,-1, 31,0);
    tracep->declBus(c+102,"io_readData1", false,-1, 31,0);
    tracep->declBus(c+103,"io_readData2", false,-1, 31,0);
    tracep->declBus(c+104,"io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+105,"io_func7", false,-1, 6,0);
    tracep->declBus(c+106,"io_func3", false,-1, 2,0);
    tracep->declBus(c+34,"io_mem_result", false,-1, 31,0);
    tracep->declBus(c+950,"io_wb_result", false,-1, 31,0);
    tracep->declBit(c+36,"io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+26,"io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+33,"io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+32,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+14,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+107,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+108,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+109,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+110,"io_func6", false,-1, 5,0);
    tracep->declBus(c+111,"io_v_ctl_aluop", false,-1, 2,0);
    tracep->declBus(c+112,"io_v_ctl_exsel", false,-1, 3,0);
    tracep->declBit(c+113,"io_v_ctl_regwrite", false,-1);
    tracep->declBit(c+114,"io_v_ctl_opBsel", false,-1);
    tracep->declBit(c+115,"io_v_ctl_v_load", false,-1);
    tracep->declBit(c+116,"io_v_ctl_v_ins", false,-1);
    tracep->declBit(c+117,"io_v_ctl_vset", false,-1);
    tracep->declArray(c+118,"io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+122,"io_vs2_data", false,-1, 127,0);
    tracep->declBus(c+126,"io_vl", false,-1, 31,0);
    tracep->declBus(c+127,"io_vstart", false,-1, 31,0);
    tracep->declArray(c+128,"io_vs3_data", false,-1, 127,0);
    tracep->declBit(c+132,"io_vma", false,-1);
    tracep->declBit(c+133,"io_vta", false,-1);
    tracep->declBit(c+134,"io_vm", false,-1);
    tracep->declArray(c+135,"io_vs0", false,-1, 127,0);
    tracep->declBus(c+29,"io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+139,"io_v_sew", false,-1, 2,0);
    tracep->declBus(c+140,"io_zimm", false,-1, 31,0);
    tracep->declBus(c+141,"io_v_addi_imm", false,-1, 31,0);
    tracep->declArray(c+142,"io_vec_mem_res", false,-1, 127,0);
    tracep->declArray(c+65,"io_vec_wb_res", false,-1, 127,0);
    tracep->declBus(c+146,"io_fu_ex_reg_vd", false,-1, 4,0);
    tracep->declBus(c+69,"io_fu_mem_reg_vd", false,-1, 4,0);
    tracep->declBus(c+147,"io_fu_reg_vs1", false,-1, 4,0);
    tracep->declBus(c+148,"io_fu_reg_vs2", false,-1, 4,0);
    tracep->declBus(c+149,"io_fu_reg_vs3", false,-1, 4,0);
    tracep->declBit(c+150,"io_fu_ex_reg_write", false,-1);
    tracep->declBit(c+70,"io_fu_mem_reg_write", false,-1);
    tracep->declBit(c+151,"io_v_MemWrite", false,-1);
    tracep->declArray(c+725,"io_vec_alu_res", false,-1, 127,0);
    tracep->declBus(c+729,"io_vec_vl", false,-1, 31,0);
    tracep->declBus(c+152,"io_vec_rd_out", false,-1, 4,0);
    tracep->declBus(c+955,"io_vec_avl_o", false,-1, 31,0);
    tracep->declBus(c+153,"io_vec_valmax_o", false,-1, 31,0);
    tracep->declArray(c+154,"io_vs3_data_o", false,-1, 127,0);
    tracep->declBus(c+730,"io_writeData", false,-1, 31,0);
    tracep->declBus(c+951,"io_ALUresult", false,-1, 31,0);
    tracep->declArray(c+135,"io_vs0_o", false,-1, 127,0);
    tracep->declBit(c+158,"io_stall", false,-1);
    tracep->declBus(c+970,"alu_io_input1", false,-1, 31,0);
    tracep->declBus(c+971,"alu_io_input2", false,-1, 31,0);
    tracep->declBus(c+221,"alu_io_aluCtl", false,-1, 3,0);
    tracep->declBus(c+731,"alu_io_result", false,-1, 31,0);
    tracep->declBus(c+108,"aluCtl_io_aluOp", false,-1, 1,0);
    tracep->declBit(c+222,"aluCtl_io_f7", false,-1);
    tracep->declBus(c+106,"aluCtl_io_f3", false,-1, 2,0);
    tracep->declBit(c+107,"aluCtl_io_aluSrc", false,-1);
    tracep->declBus(c+221,"aluCtl_io_out", false,-1, 3,0);
    tracep->declBus(c+30,"ForwardingUnit_io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+223,"ForwardingUnit_io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+224,"ForwardingUnit_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+225,"ForwardingUnit_io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+36,"ForwardingUnit_io_ex_regWrite", false,-1);
    tracep->declBit(c+26,"ForwardingUnit_io_mem_regWrite", false,-1);
    tracep->declBus(c+146,"ForwardingUnit_io_ex_reg_vd", false,-1, 4,0);
    tracep->declBus(c+69,"ForwardingUnit_io_mem_reg_vd", false,-1, 4,0);
    tracep->declBus(c+147,"ForwardingUnit_io_reg_vs1", false,-1, 4,0);
    tracep->declBus(c+148,"ForwardingUnit_io_reg_vs2", false,-1, 4,0);
    tracep->declBus(c+149,"ForwardingUnit_io_reg_vs3", false,-1, 4,0);
    tracep->declBit(c+150,"ForwardingUnit_io_ex_reg_write", false,-1);
    tracep->declBit(c+70,"ForwardingUnit_io_mem_reg_write", false,-1);
    tracep->declBus(c+226,"ForwardingUnit_io_forwardA", false,-1, 1,0);
    tracep->declBus(c+227,"ForwardingUnit_io_forwardB", false,-1, 1,0);
    tracep->declBus(c+228,"ForwardingUnit_io_forwardC", false,-1, 1,0);
    tracep->declBus(c+106,"Vec_aluCtl_io_func3", false,-1, 2,0);
    tracep->declBus(c+111,"Vec_aluCtl_io_aluOp", false,-1, 2,0);
    tracep->declBus(c+110,"Vec_aluCtl_io_func6", false,-1, 5,0);
    tracep->declBus(c+229,"Vec_aluCtl_io_aluc", false,-1, 8,0);
    tracep->declBus(c+972,"vec_alu_io_in_A", false,-1, 31,0);
    tracep->declBus(c+973,"vec_alu_io_in_B", false,-1, 31,0);
    tracep->declArray(c+230,"vec_alu_io_vs1", false,-1, 127,0);
    tracep->declArray(c+234,"vec_alu_io_vs2", false,-1, 127,0);
    tracep->declArray(c+135,"vec_alu_io_vs0", false,-1, 127,0);
    tracep->declArray(c+128,"vec_alu_io_vd", false,-1, 127,0);
    tracep->declBus(c+126,"vec_alu_io_vl", false,-1, 31,0);
    tracep->declBus(c+127,"vec_alu_io_vstart", false,-1, 31,0);
    tracep->declBit(c+132,"vec_alu_io_vma", false,-1);
    tracep->declBit(c+133,"vec_alu_io_vta", false,-1);
    tracep->declBit(c+134,"vec_alu_io_vm", false,-1);
    tracep->declBus(c+29,"vec_alu_io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+229,"vec_alu_io_aluc", false,-1, 8,0);
    tracep->declBus(c+139,"vec_alu_io_sew", false,-1, 2,0);
    tracep->declBit(c+116,"vec_alu_io_v_ins", false,-1);
    tracep->declArray(c+725,"vec_alu_io_v_output", false,-1, 127,0);
    tracep->declArray(c+135,"vec_alu_io_vs0_o", false,-1, 127,0);
    tracep->declArray(c+128,"vec_alu_io_vs3", false,-1, 127,0);
    tracep->declBus(c+238,"vec_config_io_zimm", false,-1, 31,0);
    tracep->declBus(c+239,"vec_config_io_rs1", false,-1, 4,0);
    tracep->declBus(c+152,"vec_config_io_rd", false,-1, 4,0);
    tracep->declBus(c+974,"vec_config_io_rs1_readdata", false,-1, 31,0);
    tracep->declBus(c+126,"vec_config_io_current_vl", false,-1, 31,0);
    tracep->declBus(c+240,"vec_config_io_lmul", false,-1, 31,0);
    tracep->declBus(c+729,"vec_config_io_vl", false,-1, 31,0);
    tracep->declBus(c+152,"vec_config_io_rd_out", false,-1, 4,0);
    tracep->declBus(c+955,"vec_config_io_avl_o", false,-1, 31,0);
    tracep->declBus(c+153,"vec_config_io_valmax_o", false,-1, 31,0);
    tracep->declBit(c+1039,"mdu_clock", false,-1);
    tracep->declBit(c+1040,"mdu_reset", false,-1);
    tracep->declBus(c+975,"mdu_io_src_a", false,-1, 31,0);
    tracep->declBus(c+976,"mdu_io_src_b", false,-1, 31,0);
    tracep->declBus(c+241,"mdu_io_op", false,-1, 4,0);
    tracep->declBit(c+242,"mdu_io_valid", false,-1);
    tracep->declBit(c+243,"mdu_io_ready", false,-1);
    tracep->declBit(c+244,"mdu_io_output_valid", false,-1);
    tracep->declBus(c+732,"mdu_io_output_bits", false,-1, 31,0);
    tracep->declBus(c+977,"inputMux1", false,-1, 31,0);
    tracep->declBus(c+978,"inputMux2", false,-1, 31,0);
    tracep->declBus(c+733,"aluIn1", false,-1, 31,0);
    tracep->declBus(c+734,"aluIn2", false,-1, 31,0);
    tracep->declBus(c+245,"src_a_reg", false,-1, 31,0);
    tracep->declBus(c+246,"src_b_reg", false,-1, 31,0);
    tracep->declBus(c+247,"op_reg", false,-1, 2,0);
    tracep->declBit(c+248,"div_en", false,-1);
    tracep->declBus(c+249,"f7_reg", false,-1, 5,0);
    tracep->declBus(c+250,"counter", false,-1, 5,0);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBus(c+30,"io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+223,"io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+224,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+225,"io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+36,"io_ex_regWrite", false,-1);
    tracep->declBit(c+26,"io_mem_regWrite", false,-1);
    tracep->declBus(c+146,"io_ex_reg_vd", false,-1, 4,0);
    tracep->declBus(c+69,"io_mem_reg_vd", false,-1, 4,0);
    tracep->declBus(c+147,"io_reg_vs1", false,-1, 4,0);
    tracep->declBus(c+148,"io_reg_vs2", false,-1, 4,0);
    tracep->declBus(c+149,"io_reg_vs3", false,-1, 4,0);
    tracep->declBit(c+150,"io_ex_reg_write", false,-1);
    tracep->declBit(c+70,"io_mem_reg_write", false,-1);
    tracep->declBus(c+226,"io_forwardA", false,-1, 1,0);
    tracep->declBus(c+227,"io_forwardB", false,-1, 1,0);
    tracep->declBus(c+228,"io_forwardC", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Vec_aluCtl ");
    tracep->declBus(c+106,"io_func3", false,-1, 2,0);
    tracep->declBus(c+111,"io_aluOp", false,-1, 2,0);
    tracep->declBus(c+110,"io_func6", false,-1, 5,0);
    tracep->declBus(c+229,"io_aluc", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+970,"io_input1", false,-1, 31,0);
    tracep->declBus(c+971,"io_input2", false,-1, 31,0);
    tracep->declBus(c+221,"io_aluCtl", false,-1, 3,0);
    tracep->declBus(c+731,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluCtl ");
    tracep->declBus(c+108,"io_aluOp", false,-1, 1,0);
    tracep->declBit(c+222,"io_f7", false,-1);
    tracep->declBus(c+106,"io_f3", false,-1, 2,0);
    tracep->declBit(c+107,"io_aluSrc", false,-1);
    tracep->declBus(c+221,"io_out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mdu ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+975,"io_src_a", false,-1, 31,0);
    tracep->declBus(c+976,"io_src_b", false,-1, 31,0);
    tracep->declBus(c+241,"io_op", false,-1, 4,0);
    tracep->declBit(c+242,"io_valid", false,-1);
    tracep->declBit(c+243,"io_ready", false,-1);
    tracep->declBit(c+244,"io_output_valid", false,-1);
    tracep->declBus(c+732,"io_output_bits", false,-1, 31,0);
    tracep->declQuad(c+979,"result", false,-1, 63,0);
    tracep->declBit(c+243,"r_ready", false,-1);
    tracep->declBus(c+251,"r_counter", false,-1, 5,0);
    tracep->declBus(c+252,"r_dividend", false,-1, 31,0);
    tracep->declBus(c+253,"r_quotient", false,-1, 31,0);
    tracep->declBit(c+254,"is_div_rem_u", false,-1);
    tracep->declBit(c+255,"is_div_rem_s", false,-1);
    tracep->declBus(c+735,"dividend", false,-1, 31,0);
    tracep->declBus(c+736,"divisor", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vec_alu ");
    tracep->declBus(c+972,"io_in_A", false,-1, 31,0);
    tracep->declBus(c+973,"io_in_B", false,-1, 31,0);
    tracep->declArray(c+230,"io_vs1", false,-1, 127,0);
    tracep->declArray(c+234,"io_vs2", false,-1, 127,0);
    tracep->declArray(c+135,"io_vs0", false,-1, 127,0);
    tracep->declArray(c+128,"io_vd", false,-1, 127,0);
    tracep->declBus(c+126,"io_vl", false,-1, 31,0);
    tracep->declBus(c+127,"io_vstart", false,-1, 31,0);
    tracep->declBit(c+132,"io_vma", false,-1);
    tracep->declBit(c+133,"io_vta", false,-1);
    tracep->declBit(c+134,"io_vm", false,-1);
    tracep->declBus(c+29,"io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+229,"io_aluc", false,-1, 8,0);
    tracep->declBus(c+139,"io_sew", false,-1, 2,0);
    tracep->declBit(c+116,"io_v_ins", false,-1);
    tracep->declArray(c+725,"io_v_output", false,-1, 127,0);
    tracep->declArray(c+135,"io_vs0_o", false,-1, 127,0);
    tracep->declArray(c+128,"io_vs3", false,-1, 127,0);
    tracep->declBus(c+256,"sew_8_a_0", false,-1, 7,0);
    tracep->declBus(c+257,"sew_8_a_1", false,-1, 7,0);
    tracep->declBus(c+258,"sew_8_a_2", false,-1, 7,0);
    tracep->declBus(c+259,"sew_8_a_3", false,-1, 7,0);
    tracep->declBus(c+260,"sew_8_a_4", false,-1, 7,0);
    tracep->declBus(c+261,"sew_8_a_5", false,-1, 7,0);
    tracep->declBus(c+262,"sew_8_a_6", false,-1, 7,0);
    tracep->declBus(c+263,"sew_8_a_7", false,-1, 7,0);
    tracep->declBus(c+264,"sew_8_a_8", false,-1, 7,0);
    tracep->declBus(c+265,"sew_8_a_9", false,-1, 7,0);
    tracep->declBus(c+266,"sew_8_a_10", false,-1, 7,0);
    tracep->declBus(c+267,"sew_8_a_11", false,-1, 7,0);
    tracep->declBus(c+268,"sew_8_a_12", false,-1, 7,0);
    tracep->declBus(c+269,"sew_8_a_13", false,-1, 7,0);
    tracep->declBus(c+270,"sew_8_a_14", false,-1, 7,0);
    tracep->declBus(c+271,"sew_8_a_15", false,-1, 7,0);
    tracep->declBus(c+272,"sew_8_b_0", false,-1, 7,0);
    tracep->declBus(c+273,"sew_8_b_1", false,-1, 7,0);
    tracep->declBus(c+274,"sew_8_b_2", false,-1, 7,0);
    tracep->declBus(c+275,"sew_8_b_3", false,-1, 7,0);
    tracep->declBus(c+276,"sew_8_b_4", false,-1, 7,0);
    tracep->declBus(c+277,"sew_8_b_5", false,-1, 7,0);
    tracep->declBus(c+278,"sew_8_b_6", false,-1, 7,0);
    tracep->declBus(c+279,"sew_8_b_7", false,-1, 7,0);
    tracep->declBus(c+280,"sew_8_b_8", false,-1, 7,0);
    tracep->declBus(c+281,"sew_8_b_9", false,-1, 7,0);
    tracep->declBus(c+282,"sew_8_b_10", false,-1, 7,0);
    tracep->declBus(c+283,"sew_8_b_11", false,-1, 7,0);
    tracep->declBus(c+284,"sew_8_b_12", false,-1, 7,0);
    tracep->declBus(c+285,"sew_8_b_13", false,-1, 7,0);
    tracep->declBus(c+286,"sew_8_b_14", false,-1, 7,0);
    tracep->declBus(c+287,"sew_8_b_15", false,-1, 7,0);
    tracep->declBus(c+288,"sew_16_a_0", false,-1, 15,0);
    tracep->declBus(c+289,"sew_16_a_1", false,-1, 15,0);
    tracep->declBus(c+290,"sew_16_a_2", false,-1, 15,0);
    tracep->declBus(c+291,"sew_16_a_3", false,-1, 15,0);
    tracep->declBus(c+292,"sew_16_a_4", false,-1, 15,0);
    tracep->declBus(c+293,"sew_16_a_5", false,-1, 15,0);
    tracep->declBus(c+294,"sew_16_a_6", false,-1, 15,0);
    tracep->declBus(c+295,"sew_16_a_7", false,-1, 15,0);
    tracep->declBus(c+296,"sew_16_b_0", false,-1, 15,0);
    tracep->declBus(c+297,"sew_16_b_1", false,-1, 15,0);
    tracep->declBus(c+298,"sew_16_b_2", false,-1, 15,0);
    tracep->declBus(c+299,"sew_16_b_3", false,-1, 15,0);
    tracep->declBus(c+300,"sew_16_b_4", false,-1, 15,0);
    tracep->declBus(c+301,"sew_16_b_5", false,-1, 15,0);
    tracep->declBus(c+302,"sew_16_b_6", false,-1, 15,0);
    tracep->declBus(c+303,"sew_16_b_7", false,-1, 15,0);
    tracep->declBus(c+304,"sew_32_a_0", false,-1, 31,0);
    tracep->declBus(c+305,"sew_32_a_1", false,-1, 31,0);
    tracep->declBus(c+306,"sew_32_a_2", false,-1, 31,0);
    tracep->declBus(c+307,"sew_32_a_3", false,-1, 31,0);
    tracep->declBus(c+308,"sew_32_b_0", false,-1, 31,0);
    tracep->declBus(c+309,"sew_32_b_1", false,-1, 31,0);
    tracep->declBus(c+310,"sew_32_b_2", false,-1, 31,0);
    tracep->declBus(c+311,"sew_32_b_3", false,-1, 31,0);
    tracep->declQuad(c+312,"sew_64_a_0", false,-1, 63,0);
    tracep->declQuad(c+314,"sew_64_a_1", false,-1, 63,0);
    tracep->declQuad(c+316,"sew_64_b_0", false,-1, 63,0);
    tracep->declQuad(c+318,"sew_64_b_1", false,-1, 63,0);
    tracep->declBus(c+320,"sew_8_vd_0", false,-1, 7,0);
    tracep->declBus(c+321,"sew_8_vd_1", false,-1, 7,0);
    tracep->declBus(c+322,"sew_8_vd_2", false,-1, 7,0);
    tracep->declBus(c+323,"sew_8_vd_3", false,-1, 7,0);
    tracep->declBus(c+324,"sew_8_vd_4", false,-1, 7,0);
    tracep->declBus(c+325,"sew_8_vd_5", false,-1, 7,0);
    tracep->declBus(c+326,"sew_8_vd_6", false,-1, 7,0);
    tracep->declBus(c+327,"sew_8_vd_7", false,-1, 7,0);
    tracep->declBus(c+328,"sew_8_vd_8", false,-1, 7,0);
    tracep->declBus(c+329,"sew_8_vd_9", false,-1, 7,0);
    tracep->declBus(c+330,"sew_8_vd_10", false,-1, 7,0);
    tracep->declBus(c+331,"sew_8_vd_11", false,-1, 7,0);
    tracep->declBus(c+332,"sew_8_vd_12", false,-1, 7,0);
    tracep->declBus(c+333,"sew_8_vd_13", false,-1, 7,0);
    tracep->declBus(c+334,"sew_8_vd_14", false,-1, 7,0);
    tracep->declBus(c+335,"sew_8_vd_15", false,-1, 7,0);
    tracep->declBus(c+336,"sew_16_vd_0", false,-1, 15,0);
    tracep->declBus(c+337,"sew_16_vd_1", false,-1, 15,0);
    tracep->declBus(c+338,"sew_16_vd_2", false,-1, 15,0);
    tracep->declBus(c+339,"sew_16_vd_3", false,-1, 15,0);
    tracep->declBus(c+340,"sew_16_vd_4", false,-1, 15,0);
    tracep->declBus(c+341,"sew_16_vd_5", false,-1, 15,0);
    tracep->declBus(c+342,"sew_16_vd_6", false,-1, 15,0);
    tracep->declBus(c+343,"sew_16_vd_7", false,-1, 15,0);
    tracep->declBus(c+344,"sew_32_vd_0", false,-1, 31,0);
    tracep->declBus(c+345,"sew_32_vd_1", false,-1, 31,0);
    tracep->declBus(c+346,"sew_32_vd_2", false,-1, 31,0);
    tracep->declBus(c+347,"sew_32_vd_3", false,-1, 31,0);
    tracep->declQuad(c+348,"sew_64_vd_0", false,-1, 63,0);
    tracep->declQuad(c+350,"sew_64_vd_1", false,-1, 63,0);
    tracep->declQuad(c+352,"io_v_output_lo", false,-1, 63,0);
    tracep->declQuad(c+354,"io_v_output_hi", false,-1, 63,0);
    tracep->declBus(c+356,"io_v_output_lo_lo", false,-1, 31,0);
    tracep->declBus(c+357,"io_v_output_lo_hi", false,-1, 31,0);
    tracep->declBus(c+358,"io_v_output_hi_lo", false,-1, 31,0);
    tracep->declBus(c+359,"io_v_output_hi_hi", false,-1, 31,0);
    tracep->declBus(c+360,"io_v_output_lo_lo_lo", false,-1, 15,0);
    tracep->declBus(c+361,"io_v_output_lo_lo_hi", false,-1, 15,0);
    tracep->declBus(c+362,"io_v_output_lo_hi_lo", false,-1, 15,0);
    tracep->declBus(c+363,"io_v_output_lo_hi_hi", false,-1, 15,0);
    tracep->declBus(c+364,"io_v_output_hi_lo_lo", false,-1, 15,0);
    tracep->declBus(c+365,"io_v_output_hi_lo_hi", false,-1, 15,0);
    tracep->declBus(c+366,"io_v_output_hi_hi_lo", false,-1, 15,0);
    tracep->declBus(c+367,"io_v_output_hi_hi_hi", false,-1, 15,0);
    tracep->declBus(c+368,"io_v_output_lo_lo_lo_lo", false,-1, 7,0);
    tracep->declBus(c+369,"io_v_output_lo_lo_lo_hi", false,-1, 7,0);
    tracep->declBus(c+370,"io_v_output_lo_lo_hi_lo", false,-1, 7,0);
    tracep->declBus(c+371,"io_v_output_lo_lo_hi_hi", false,-1, 7,0);
    tracep->declBus(c+372,"io_v_output_lo_hi_lo_lo", false,-1, 7,0);
    tracep->declBus(c+373,"io_v_output_lo_hi_lo_hi", false,-1, 7,0);
    tracep->declBus(c+374,"io_v_output_lo_hi_hi_lo", false,-1, 7,0);
    tracep->declBus(c+375,"io_v_output_lo_hi_hi_hi", false,-1, 7,0);
    tracep->declQuad(c+376,"io_v_output_lo_3", false,-1, 63,0);
    tracep->declBus(c+378,"io_v_output_hi_lo_lo_lo", false,-1, 7,0);
    tracep->declBus(c+379,"io_v_output_hi_lo_lo_hi", false,-1, 7,0);
    tracep->declBus(c+380,"io_v_output_hi_lo_hi_lo", false,-1, 7,0);
    tracep->declBus(c+381,"io_v_output_hi_lo_hi_hi", false,-1, 7,0);
    tracep->declBus(c+382,"io_v_output_hi_hi_lo_lo", false,-1, 7,0);
    tracep->declBus(c+383,"io_v_output_hi_hi_lo_hi", false,-1, 7,0);
    tracep->declBus(c+384,"io_v_output_hi_hi_hi_lo", false,-1, 7,0);
    tracep->declBus(c+385,"io_v_output_hi_hi_hi_hi", false,-1, 7,0);
    tracep->declQuad(c+981,"imm", false,-1, 63,0);
    tracep->declQuad(c+737,"io_v_output_lo_4", false,-1, 63,0);
    tracep->declQuad(c+739,"io_v_output_hi_4", false,-1, 63,0);
    tracep->declBus(c+741,"io_v_output_lo_lo_3", false,-1, 31,0);
    tracep->declBus(c+742,"io_v_output_lo_hi_3", false,-1, 31,0);
    tracep->declBus(c+743,"io_v_output_hi_lo_3", false,-1, 31,0);
    tracep->declBus(c+744,"io_v_output_hi_hi_3", false,-1, 31,0);
    tracep->declBus(c+983,"imm_2", false,-1, 7,0);
    tracep->declBus(c+745,"io_v_output_lo_lo_lo_lo_1", false,-1, 7,0);
    tracep->declBus(c+746,"io_v_output_lo_lo_lo_hi_1", false,-1, 7,0);
    tracep->declBus(c+747,"io_v_output_lo_lo_hi_lo_1", false,-1, 7,0);
    tracep->declBus(c+748,"io_v_output_lo_lo_hi_hi_1", false,-1, 7,0);
    tracep->declBus(c+749,"io_v_output_lo_hi_lo_lo_1", false,-1, 7,0);
    tracep->declBus(c+750,"io_v_output_lo_hi_lo_hi_1", false,-1, 7,0);
    tracep->declBus(c+751,"io_v_output_lo_hi_hi_lo_1", false,-1, 7,0);
    tracep->declBus(c+752,"io_v_output_lo_hi_hi_hi_1", false,-1, 7,0);
    tracep->declQuad(c+984,"io_v_output_lo_6", false,-1, 63,0);
    tracep->declBus(c+753,"io_v_output_hi_lo_lo_lo_1", false,-1, 7,0);
    tracep->declBus(c+754,"io_v_output_hi_lo_lo_hi_1", false,-1, 7,0);
    tracep->declBus(c+755,"io_v_output_hi_lo_hi_lo_1", false,-1, 7,0);
    tracep->declBus(c+756,"io_v_output_hi_lo_hi_hi_1", false,-1, 7,0);
    tracep->declBus(c+757,"io_v_output_hi_hi_lo_lo_1", false,-1, 7,0);
    tracep->declBus(c+758,"io_v_output_hi_hi_lo_hi_1", false,-1, 7,0);
    tracep->declBus(c+759,"io_v_output_hi_hi_hi_lo_1", false,-1, 7,0);
    tracep->declBus(c+760,"io_v_output_hi_hi_hi_hi_1", false,-1, 7,0);
    tracep->declBus(c+986,"imm_3", false,-1, 15,0);
    tracep->declBus(c+761,"io_v_output_lo_lo_lo_3", false,-1, 15,0);
    tracep->declBus(c+762,"io_v_output_lo_lo_hi_3", false,-1, 15,0);
    tracep->declBus(c+763,"io_v_output_lo_hi_lo_3", false,-1, 15,0);
    tracep->declBus(c+764,"io_v_output_lo_hi_hi_3", false,-1, 15,0);
    tracep->declBus(c+765,"io_v_output_hi_lo_lo_3", false,-1, 15,0);
    tracep->declBus(c+766,"io_v_output_hi_lo_hi_3", false,-1, 15,0);
    tracep->declBus(c+767,"io_v_output_hi_hi_lo_3", false,-1, 15,0);
    tracep->declBus(c+768,"io_v_output_hi_hi_hi_3", false,-1, 15,0);
    tracep->declQuad(c+987,"imm_4", false,-1, 63,0);
    tracep->declQuad(c+769,"io_v_output_lo_8", false,-1, 63,0);
    tracep->declQuad(c+771,"io_v_output_hi_8", false,-1, 63,0);
    tracep->declBus(c+773,"io_v_output_lo_lo_6", false,-1, 31,0);
    tracep->declBus(c+774,"io_v_output_lo_hi_6", false,-1, 31,0);
    tracep->declBus(c+775,"io_v_output_hi_lo_6", false,-1, 31,0);
    tracep->declBus(c+776,"io_v_output_hi_hi_6", false,-1, 31,0);
    tracep->declBus(c+989,"imm_6", false,-1, 7,0);
    tracep->declBus(c+777,"io_v_output_lo_lo_lo_lo_2", false,-1, 7,0);
    tracep->declBus(c+778,"io_v_output_lo_lo_lo_hi_2", false,-1, 7,0);
    tracep->declBus(c+779,"io_v_output_lo_lo_hi_lo_2", false,-1, 7,0);
    tracep->declBus(c+780,"io_v_output_lo_lo_hi_hi_2", false,-1, 7,0);
    tracep->declBus(c+781,"io_v_output_lo_hi_lo_lo_2", false,-1, 7,0);
    tracep->declBus(c+782,"io_v_output_lo_hi_lo_hi_2", false,-1, 7,0);
    tracep->declBus(c+783,"io_v_output_lo_hi_hi_lo_2", false,-1, 7,0);
    tracep->declBus(c+784,"io_v_output_lo_hi_hi_hi_2", false,-1, 7,0);
    tracep->declQuad(c+990,"io_v_output_lo_10", false,-1, 63,0);
    tracep->declBus(c+785,"io_v_output_hi_lo_lo_lo_2", false,-1, 7,0);
    tracep->declBus(c+786,"io_v_output_hi_lo_lo_hi_2", false,-1, 7,0);
    tracep->declBus(c+787,"io_v_output_hi_lo_hi_lo_2", false,-1, 7,0);
    tracep->declBus(c+788,"io_v_output_hi_lo_hi_hi_2", false,-1, 7,0);
    tracep->declBus(c+789,"io_v_output_hi_hi_lo_lo_2", false,-1, 7,0);
    tracep->declBus(c+790,"io_v_output_hi_hi_lo_hi_2", false,-1, 7,0);
    tracep->declBus(c+791,"io_v_output_hi_hi_hi_lo_2", false,-1, 7,0);
    tracep->declBus(c+792,"io_v_output_hi_hi_hi_hi_2", false,-1, 7,0);
    tracep->declBus(c+992,"imm_7", false,-1, 15,0);
    tracep->declBus(c+793,"io_v_output_lo_lo_lo_5", false,-1, 15,0);
    tracep->declBus(c+794,"io_v_output_lo_lo_hi_5", false,-1, 15,0);
    tracep->declBus(c+795,"io_v_output_lo_hi_lo_5", false,-1, 15,0);
    tracep->declBus(c+796,"io_v_output_lo_hi_hi_5", false,-1, 15,0);
    tracep->declBus(c+797,"io_v_output_hi_lo_lo_5", false,-1, 15,0);
    tracep->declBus(c+798,"io_v_output_hi_lo_hi_5", false,-1, 15,0);
    tracep->declBus(c+799,"io_v_output_hi_hi_lo_5", false,-1, 15,0);
    tracep->declBus(c+800,"io_v_output_hi_hi_hi_5", false,-1, 15,0);
    tracep->declQuad(c+801,"io_v_output_out_0_12", false,-1, 63,0);
    tracep->declQuad(c+803,"io_v_output_out_1_12", false,-1, 63,0);
    tracep->declQuad(c+805,"io_v_output_out_0_13", false,-1, 63,0);
    tracep->declQuad(c+807,"io_v_output_out_1_13", false,-1, 63,0);
    tracep->declQuad(c+809,"io_v_output_out_2_9", false,-1, 63,0);
    tracep->declQuad(c+811,"io_v_output_out_3_9", false,-1, 63,0);
    tracep->declQuad(c+813,"io_v_output_out_0_14", false,-1, 63,0);
    tracep->declQuad(c+815,"io_v_output_out_1_14", false,-1, 63,0);
    tracep->declQuad(c+817,"io_v_output_out_2_10", false,-1, 63,0);
    tracep->declQuad(c+819,"io_v_output_out_3_10", false,-1, 63,0);
    tracep->declQuad(c+821,"io_v_output_out_4_6", false,-1, 63,0);
    tracep->declQuad(c+823,"io_v_output_out_5_6", false,-1, 63,0);
    tracep->declQuad(c+825,"io_v_output_out_6_6", false,-1, 63,0);
    tracep->declQuad(c+827,"io_v_output_out_7_6", false,-1, 63,0);
    tracep->declQuad(c+829,"io_v_output_out_0_15", false,-1, 63,0);
    tracep->declQuad(c+831,"io_v_output_out_1_15", false,-1, 63,0);
    tracep->declQuad(c+833,"io_v_output_out_2_11", false,-1, 63,0);
    tracep->declQuad(c+835,"io_v_output_out_3_11", false,-1, 63,0);
    tracep->declQuad(c+837,"io_v_output_out_4_7", false,-1, 63,0);
    tracep->declQuad(c+839,"io_v_output_out_5_7", false,-1, 63,0);
    tracep->declQuad(c+841,"io_v_output_out_6_7", false,-1, 63,0);
    tracep->declQuad(c+843,"io_v_output_out_7_7", false,-1, 63,0);
    tracep->declQuad(c+845,"io_v_output_out_8_3", false,-1, 63,0);
    tracep->declQuad(c+847,"io_v_output_out_9_3", false,-1, 63,0);
    tracep->declQuad(c+849,"io_v_output_out_10_3", false,-1, 63,0);
    tracep->declQuad(c+851,"io_v_output_out_11_3", false,-1, 63,0);
    tracep->declQuad(c+853,"io_v_output_out_12_3", false,-1, 63,0);
    tracep->declQuad(c+855,"io_v_output_out_13_3", false,-1, 63,0);
    tracep->declQuad(c+857,"io_v_output_out_14_3", false,-1, 63,0);
    tracep->declQuad(c+859,"io_v_output_out_15_3", false,-1, 63,0);
    tracep->declArray(c+993,"io_v_output_lo_15", false,-1, 511,0);
    tracep->declQuad(c+861,"io_v_output_out_0_16", false,-1, 63,0);
    tracep->declQuad(c+863,"io_v_output_out_1_16", false,-1, 63,0);
    tracep->declQuad(c+865,"io_v_output_out_0_17", false,-1, 63,0);
    tracep->declQuad(c+867,"io_v_output_out_1_17", false,-1, 63,0);
    tracep->declQuad(c+869,"io_v_output_out_2_12", false,-1, 63,0);
    tracep->declQuad(c+871,"io_v_output_out_3_12", false,-1, 63,0);
    tracep->declQuad(c+873,"io_v_output_out_0_18", false,-1, 63,0);
    tracep->declQuad(c+875,"io_v_output_out_1_18", false,-1, 63,0);
    tracep->declQuad(c+877,"io_v_output_out_2_13", false,-1, 63,0);
    tracep->declQuad(c+879,"io_v_output_out_3_13", false,-1, 63,0);
    tracep->declQuad(c+881,"io_v_output_out_4_8", false,-1, 63,0);
    tracep->declQuad(c+883,"io_v_output_out_5_8", false,-1, 63,0);
    tracep->declQuad(c+885,"io_v_output_out_6_8", false,-1, 63,0);
    tracep->declQuad(c+887,"io_v_output_out_7_8", false,-1, 63,0);
    tracep->declQuad(c+889,"io_v_output_out_8_4", false,-1, 63,0);
    tracep->declQuad(c+891,"io_v_output_out_9_4", false,-1, 63,0);
    tracep->declQuad(c+893,"io_v_output_out_10_4", false,-1, 63,0);
    tracep->declQuad(c+895,"io_v_output_out_11_4", false,-1, 63,0);
    tracep->declQuad(c+897,"io_v_output_out_12_4", false,-1, 63,0);
    tracep->declQuad(c+899,"io_v_output_out_13_4", false,-1, 63,0);
    tracep->declQuad(c+901,"io_v_output_out_14_4", false,-1, 63,0);
    tracep->declQuad(c+903,"io_v_output_out_15_4", false,-1, 63,0);
    tracep->declArray(c+1009,"io_v_output_lo_18", false,-1, 511,0);
    tracep->declQuad(c+905,"io_v_output_out_0_19", false,-1, 63,0);
    tracep->declQuad(c+907,"io_v_output_out_1_19", false,-1, 63,0);
    tracep->declQuad(c+909,"io_v_output_out_2_14", false,-1, 63,0);
    tracep->declQuad(c+911,"io_v_output_out_3_14", false,-1, 63,0);
    tracep->declQuad(c+913,"io_v_output_out_4_9", false,-1, 63,0);
    tracep->declQuad(c+915,"io_v_output_out_5_9", false,-1, 63,0);
    tracep->declQuad(c+917,"io_v_output_out_6_9", false,-1, 63,0);
    tracep->declQuad(c+919,"io_v_output_out_7_9", false,-1, 63,0);
    tracep->declQuad(c+386,"io_v_output_out_0_20", false,-1, 63,0);
    tracep->declQuad(c+388,"io_v_output_out_1_20", false,-1, 63,0);
    tracep->declQuad(c+390,"io_v_output_out_0_21", false,-1, 63,0);
    tracep->declQuad(c+392,"io_v_output_out_1_21", false,-1, 63,0);
    tracep->declQuad(c+394,"io_v_output_out_2_15", false,-1, 63,0);
    tracep->declQuad(c+396,"io_v_output_out_3_15", false,-1, 63,0);
    tracep->declQuad(c+398,"io_v_output_out_0_22", false,-1, 63,0);
    tracep->declQuad(c+400,"io_v_output_out_1_22", false,-1, 63,0);
    tracep->declQuad(c+402,"io_v_output_out_2_16", false,-1, 63,0);
    tracep->declQuad(c+404,"io_v_output_out_3_16", false,-1, 63,0);
    tracep->declQuad(c+406,"io_v_output_out_4_10", false,-1, 63,0);
    tracep->declQuad(c+408,"io_v_output_out_5_10", false,-1, 63,0);
    tracep->declQuad(c+410,"io_v_output_out_6_10", false,-1, 63,0);
    tracep->declQuad(c+412,"io_v_output_out_7_10", false,-1, 63,0);
    tracep->declQuad(c+414,"io_v_output_out_8_5", false,-1, 63,0);
    tracep->declQuad(c+416,"io_v_output_out_9_5", false,-1, 63,0);
    tracep->declQuad(c+418,"io_v_output_out_10_5", false,-1, 63,0);
    tracep->declQuad(c+420,"io_v_output_out_11_5", false,-1, 63,0);
    tracep->declQuad(c+422,"io_v_output_out_12_5", false,-1, 63,0);
    tracep->declQuad(c+424,"io_v_output_out_13_5", false,-1, 63,0);
    tracep->declQuad(c+426,"io_v_output_out_14_5", false,-1, 63,0);
    tracep->declQuad(c+428,"io_v_output_out_15_5", false,-1, 63,0);
    tracep->declArray(c+430,"io_v_output_lo_21", false,-1, 511,0);
    tracep->declQuad(c+446,"io_v_output_out_0_23", false,-1, 63,0);
    tracep->declQuad(c+448,"io_v_output_out_1_23", false,-1, 63,0);
    tracep->declQuad(c+450,"io_v_output_out_2_17", false,-1, 63,0);
    tracep->declQuad(c+452,"io_v_output_out_3_17", false,-1, 63,0);
    tracep->declQuad(c+454,"io_v_output_out_4_11", false,-1, 63,0);
    tracep->declQuad(c+456,"io_v_output_out_5_11", false,-1, 63,0);
    tracep->declQuad(c+458,"io_v_output_out_6_11", false,-1, 63,0);
    tracep->declQuad(c+460,"io_v_output_out_7_11", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vec_config ");
    tracep->declBus(c+238,"io_zimm", false,-1, 31,0);
    tracep->declBus(c+239,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+152,"io_rd", false,-1, 4,0);
    tracep->declBus(c+974,"io_rs1_readdata", false,-1, 31,0);
    tracep->declBus(c+126,"io_current_vl", false,-1, 31,0);
    tracep->declBus(c+240,"io_lmul", false,-1, 31,0);
    tracep->declBus(c+729,"io_vl", false,-1, 31,0);
    tracep->declBus(c+152,"io_rd_out", false,-1, 4,0);
    tracep->declBus(c+955,"io_avl_o", false,-1, 31,0);
    tracep->declBus(c+153,"io_valmax_o", false,-1, 31,0);
    tracep->declBus(c+462,"vlmul", false,-1, 2,0);
    tracep->declBus(c+463,"vsew", false,-1, 2,0);
    tracep->declBit(c+464,"y0", false,-1);
    tracep->declBit(c+465,"y1", false,-1);
    tracep->declBit(c+466,"y2", false,-1);
    tracep->declBit(c+467,"y3", false,-1);
    tracep->declQuad(c+468,"valmax", false,-1, 35,0);
    tracep->declQuad(c+1025,"avl", false,-1, 35,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDecode ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+24,"io_id_instruction", false,-1, 31,0);
    tracep->declBus(c+950,"io_writeData", false,-1, 31,0);
    tracep->declBus(c+20,"io_writeReg", false,-1, 4,0);
    tracep->declBus(c+25,"io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+26,"io_ctl_writeEnable", false,-1);
    tracep->declBit(c+27,"io_id_ex_mem_read", false,-1);
    tracep->declBit(c+28,"io_ex_mem_mem_read", false,-1);
    tracep->declBit(c+10,"io_dmem_resp_valid", false,-1);
    tracep->declBus(c+29,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+30,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+31,"io_id_ex_branch", false,-1);
    tracep->declBus(c+32,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+14,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+33,"io_ex_ins", false,-1, 31,0);
    tracep->declBus(c+951,"io_ex_result", false,-1, 31,0);
    tracep->declBus(c+34,"io_ex_mem_result", false,-1, 31,0);
    tracep->declBus(c+950,"io_mem_wb_result", false,-1, 31,0);
    tracep->declBit(c+35,"io_id_ex_regWr", false,-1);
    tracep->declBit(c+36,"io_ex_mem_regWr", false,-1);
    tracep->declBit(c+37,"io_csr_Ex", false,-1);
    tracep->declBit(c+38,"io_csr_Mem", false,-1);
    tracep->declBit(c+39,"io_csr_Wb", false,-1);
    tracep->declBus(c+40,"io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+41,"io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+42,"io_csr_Wb_data", false,-1, 31,0);
    tracep->declBus(c+926,"io_dmem_data", false,-1, 31,0);
    tracep->declBus(c+43,"io_immediate", false,-1, 31,0);
    tracep->declBus(c+44,"io_writeRegAddress", false,-1, 4,0);
    tracep->declBus(c+952,"io_readData1", false,-1, 31,0);
    tracep->declBus(c+953,"io_readData2", false,-1, 31,0);
    tracep->declBus(c+45,"io_func7", false,-1, 6,0);
    tracep->declBus(c+46,"io_func3", false,-1, 2,0);
    tracep->declBus(c+47,"io_func6", false,-1, 5,0);
    tracep->declBit(c+48,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+49,"io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+50,"io_ctl_regWrite", false,-1);
    tracep->declBit(c+51,"io_ctl_memRead", false,-1);
    tracep->declBit(c+52,"io_ctl_memWrite", false,-1);
    tracep->declBit(c+53,"io_ctl_branch", false,-1);
    tracep->declBus(c+54,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+55,"io_ctl_jump", false,-1, 1,0);
    tracep->declBit(c+56,"io_ctl_v_RegWrite", false,-1);
    tracep->declBit(c+57,"io_ctl_v_opBsel", false,-1);
    tracep->declBus(c+58,"io_ctl_v_Ex_sel", false,-1, 3,0);
    tracep->declBus(c+59,"io_ctl_v_aluop", false,-1, 4,0);
    tracep->declBit(c+60,"io_ctl_v_vset", false,-1);
    tracep->declBus(c+61,"io_ctl_v_load", false,-1, 3,0);
    tracep->declBit(c+62,"io_ctl_v_ins", false,-1);
    tracep->declBit(c+1057,"io_ctl_v_memRead", false,-1);
    tracep->declBit(c+63,"io_ctl_v_memWrite", false,-1);
    tracep->declBit(c+64,"io_ctl_v_reg_read", false,-1);
    tracep->declArray(c+65,"io_write_data", false,-1, 127,0);
    tracep->declBus(c+69,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+70,"io_wb_RegWrite", false,-1);
    tracep->declBus(c+71,"io_id_lmul_count", false,-1, 3,0);
    tracep->declBus(c+72,"io_id_lmul_vs1in_vs2in", false,-1, 3,0);
    tracep->declBus(c+73,"io_id_vc3", false,-1, 4,0);
    tracep->declArray(c+74,"io_vs0_data", false,-1, 127,0);
    tracep->declArray(c+78,"io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+82,"io_vs2_data", false,-1, 127,0);
    tracep->declBit(c+56,"io_reg_write", false,-1);
    tracep->declBus(c+86,"io_vs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"io_vs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"io_vd_addr", false,-1, 4,0);
    tracep->declArray(c+1,"io_vs3_data", false,-1, 127,0);
    tracep->declBus(c+88,"io_v_z_imm", false,-1, 31,0);
    tracep->declBus(c+89,"io_v_addi_imm", false,-1, 31,0);
    tracep->declBus(c+90,"io_vtypei", false,-1, 10,0);
    tracep->declBus(c+91,"io_vtypei_out", false,-1, 10,0);
    tracep->declBus(c+92,"io_vl", false,-1, 31,0);
    tracep->declBit(c+93,"io_ctl_vset", false,-1);
    tracep->declBus(c+94,"io_vl_out", false,-1, 31,0);
    tracep->declBus(c+1059,"io_vstart_out", false,-1, 31,0);
    tracep->declBus(c+95,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+96,"io_hdu_pcWrite", false,-1);
    tracep->declBit(c+97,"io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+954,"io_pcSrc", false,-1);
    tracep->declBus(c+723,"io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+724,"io_ifid_flush", false,-1);
    tracep->declBit(c+98,"io_stall", false,-1);
    tracep->declBus(c+1055,"io_csr_i_misa", false,-1, 31,0);
    tracep->declBus(c+1055,"io_csr_i_mhartid", false,-1, 31,0);
    tracep->declBus(c+99,"io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+100,"io_is_csr", false,-1);
    tracep->declBus(c+23,"io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+86,"io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+87,"io_rs_addr_1", false,-1, 4,0);
    tracep->declBit(c+1039,"csr_clock", false,-1);
    tracep->declBit(c+1040,"csr_reset", false,-1);
    tracep->declBus(c+1055,"csr_io_i_misa_value", false,-1, 31,0);
    tracep->declBus(c+1055,"csr_io_i_mhartid_value", false,-1, 31,0);
    tracep->declBus(c+1049,"csr_io_i_data", false,-1, 31,0);
    tracep->declBus(c+86,"csr_io_i_imm", false,-1, 4,0);
    tracep->declBus(c+99,"csr_io_o_data", false,-1, 31,0);
    tracep->declBus(c+46,"csr_io_i_opr", false,-1, 2,0);
    tracep->declBus(c+470,"csr_io_i_addr", false,-1, 11,0);
    tracep->declBit(c+471,"csr_io_i_w_en", false,-1);
    tracep->declBus(c+23,"csr_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+35,"csrController_io_regWrExecute", false,-1);
    tracep->declBus(c+29,"csrController_io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+37,"csrController_io_csrWrExecute", false,-1);
    tracep->declBit(c+36,"csrController_io_regWrMemory", false,-1);
    tracep->declBus(c+30,"csrController_io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+38,"csrController_io_csrWrMemory", false,-1);
    tracep->declBit(c+26,"csrController_io_regWrWriteback", false,-1);
    tracep->declBus(c+20,"csrController_io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+39,"csrController_io_csrWrWriteback", false,-1);
    tracep->declBus(c+86,"csrController_io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+100,"csrController_io_csrInstDecode", false,-1);
    tracep->declBus(c+472,"csrController_io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+27,"hdu_io_id_ex_memRead", false,-1);
    tracep->declBit(c+28,"hdu_io_ex_mem_memRead", false,-1);
    tracep->declBit(c+31,"hdu_io_id_ex_branch", false,-1);
    tracep->declBus(c+29,"hdu_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+30,"hdu_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+86,"hdu_io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+87,"hdu_io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+1027,"hdu_io_taken", false,-1);
    tracep->declBus(c+55,"hdu_io_jump", false,-1, 1,0);
    tracep->declBit(c+53,"hdu_io_branch", false,-1);
    tracep->declBit(c+97,"hdu_io_if_reg_write", false,-1);
    tracep->declBit(c+96,"hdu_io_pc_write", false,-1);
    tracep->declBit(c+97,"hdu_io_ctl_mux", false,-1);
    tracep->declBit(c+724,"hdu_io_ifid_flush", false,-1);
    tracep->declBit(c+96,"hdu_io_take_branch", false,-1);
    tracep->declBus(c+24,"control_io_in", false,-1, 31,0);
    tracep->declBit(c+48,"control_io_aluSrc", false,-1);
    tracep->declBus(c+49,"control_io_memToReg", false,-1, 1,0);
    tracep->declBit(c+473,"control_io_regWrite", false,-1);
    tracep->declBit(c+51,"control_io_memRead", false,-1);
    tracep->declBit(c+474,"control_io_memWrite", false,-1);
    tracep->declBit(c+53,"control_io_branch", false,-1);
    tracep->declBus(c+54,"control_io_aluOp", false,-1, 1,0);
    tracep->declBus(c+55,"control_io_jump", false,-1, 1,0);
    tracep->declBus(c+95,"control_io_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+24,"Vcontrol_io_Instruction", false,-1, 31,0);
    tracep->declBit(c+56,"Vcontrol_io_RegWrite", false,-1);
    tracep->declBit(c+57,"Vcontrol_io_opBsel", false,-1);
    tracep->declBus(c+58,"Vcontrol_io_Ex_sel", false,-1, 3,0);
    tracep->declBus(c+59,"Vcontrol_io_aluop", false,-1, 4,0);
    tracep->declBit(c+60,"Vcontrol_io_vset", false,-1);
    tracep->declBit(c+475,"Vcontrol_io_v_load", false,-1);
    tracep->declBit(c+63,"Vcontrol_io_v_store", false,-1);
    tracep->declBit(c+62,"Vcontrol_io_v_ins", false,-1);
    tracep->declBit(c+64,"Vcontrol_io_RegRead", false,-1);
    tracep->declBit(c+1057,"Vcontrol_io_V_MemToReg", false,-1);
    tracep->declBit(c+1057,"Vcontrol_io_V_MemRead", false,-1);
    tracep->declBit(c+63,"Vcontrol_io_memWrite", false,-1);
    tracep->declBit(c+1039,"registers_clock", false,-1);
    tracep->declBit(c+1040,"registers_reset", false,-1);
    tracep->declBus(c+86,"registers_io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+87,"registers_io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+476,"registers_io_writeEnable", false,-1);
    tracep->declBus(c+477,"registers_io_writeAddress", false,-1, 4,0);
    tracep->declBus(c+1028,"registers_io_writeData", false,-1, 31,0);
    tracep->declBus(c+478,"registers_io_readData_0", false,-1, 31,0);
    tracep->declBus(c+479,"registers_io_readData_1", false,-1, 31,0);
    tracep->declBit(c+1039,"v_registers_clock", false,-1);
    tracep->declBit(c+1040,"v_registers_reset", false,-1);
    tracep->declBus(c+24,"v_registers_io_ins", false,-1, 31,0);
    tracep->declBus(c+86,"v_registers_io_vs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"v_registers_io_vs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"v_registers_io_vs3_addr", false,-1, 4,0);
    tracep->declBus(c+69,"v_registers_io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+71,"v_registers_io_lmul_count", false,-1, 3,0);
    tracep->declBus(c+72,"v_registers_io_lmul_vs1in_vs2in", false,-1, 3,0);
    tracep->declBus(c+73,"v_registers_io_id_vc3", false,-1, 4,0);
    tracep->declArray(c+74,"v_registers_io_vs0_data", false,-1, 127,0);
    tracep->declArray(c+78,"v_registers_io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+82,"v_registers_io_vs2_data", false,-1, 127,0);
    tracep->declArray(c+1,"v_registers_io_vs3_data", false,-1, 127,0);
    tracep->declArray(c+65,"v_registers_io_vd_data", false,-1, 127,0);
    tracep->declBit(c+70,"v_registers_io_reg_write", false,-1);
    tracep->declBit(c+64,"v_registers_io_reg_read", false,-1);
    tracep->declBus(c+24,"immediate_io_instruction", false,-1, 31,0);
    tracep->declBus(c+43,"immediate_io_out", false,-1, 31,0);
    tracep->declBus(c+24,"v_immediate_io_instruction", false,-1, 31,0);
    tracep->declBus(c+480,"v_immediate_io_z_imm", false,-1, 31,0);
    tracep->declBus(c+89,"v_immediate_io_addi_imm", false,-1, 31,0);
    tracep->declBit(c+1039,"vec_csr_clock", false,-1);
    tracep->declBit(c+1040,"vec_csr_reset", false,-1);
    tracep->declBus(c+90,"vec_csr_io_vtypei", false,-1, 10,0);
    tracep->declBus(c+92,"vec_csr_io_vl", false,-1, 31,0);
    tracep->declBit(c+93,"vec_csr_io_vset", false,-1);
    tracep->declBus(c+94,"vec_csr_io_vl_out", false,-1, 31,0);
    tracep->declBus(c+481,"vec_csr_io_vtype_out", false,-1, 31,0);
    tracep->declBus(c+1059,"vec_csr_io_vstart_out", false,-1, 31,0);
    tracep->declBit(c+53,"bu_io_branch", false,-1);
    tracep->declBus(c+46,"bu_io_funct3", false,-1, 2,0);
    tracep->declBus(c+1029,"bu_io_rd1", false,-1, 31,0);
    tracep->declBus(c+1030,"bu_io_rd2", false,-1, 31,0);
    tracep->declBit(c+96,"bu_io_take_branch", false,-1);
    tracep->declBit(c+1027,"bu_io_taken", false,-1);
    tracep->declBus(c+921,"j_offset", false,-1, 31,0);
    tracep->pushNamePrefix("Vcontrol ");
    tracep->declBus(c+24,"io_Instruction", false,-1, 31,0);
    tracep->declBit(c+56,"io_RegWrite", false,-1);
    tracep->declBit(c+57,"io_opBsel", false,-1);
    tracep->declBus(c+58,"io_Ex_sel", false,-1, 3,0);
    tracep->declBus(c+59,"io_aluop", false,-1, 4,0);
    tracep->declBit(c+60,"io_vset", false,-1);
    tracep->declBit(c+475,"io_v_load", false,-1);
    tracep->declBit(c+63,"io_v_store", false,-1);
    tracep->declBit(c+62,"io_v_ins", false,-1);
    tracep->declBit(c+64,"io_RegRead", false,-1);
    tracep->declBit(c+1057,"io_V_MemToReg", false,-1);
    tracep->declBit(c+1057,"io_V_MemRead", false,-1);
    tracep->declBit(c+63,"io_memWrite", false,-1);
    tracep->declBus(c+482,"configtype", false,-1, 1,0);
    tracep->declBus(c+483,"opcode", false,-1, 6,0);
    tracep->declBus(c+46,"func3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bu ");
    tracep->declBit(c+53,"io_branch", false,-1);
    tracep->declBus(c+46,"io_funct3", false,-1, 2,0);
    tracep->declBus(c+1029,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+1030,"io_rd2", false,-1, 31,0);
    tracep->declBit(c+96,"io_take_branch", false,-1);
    tracep->declBit(c+1027,"io_taken", false,-1);
    tracep->declBit(c+922,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+24,"io_in", false,-1, 31,0);
    tracep->declBit(c+48,"io_aluSrc", false,-1);
    tracep->declBus(c+49,"io_memToReg", false,-1, 1,0);
    tracep->declBit(c+473,"io_regWrite", false,-1);
    tracep->declBit(c+51,"io_memRead", false,-1);
    tracep->declBit(c+474,"io_memWrite", false,-1);
    tracep->declBit(c+53,"io_branch", false,-1);
    tracep->declBus(c+54,"io_aluOp", false,-1, 1,0);
    tracep->declBus(c+55,"io_jump", false,-1, 1,0);
    tracep->declBus(c+95,"io_aluSrc1", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+1055,"io_i_misa_value", false,-1, 31,0);
    tracep->declBus(c+1055,"io_i_mhartid_value", false,-1, 31,0);
    tracep->declBus(c+1049,"io_i_data", false,-1, 31,0);
    tracep->declBus(c+86,"io_i_imm", false,-1, 4,0);
    tracep->declBus(c+99,"io_o_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_i_opr", false,-1, 2,0);
    tracep->declBus(c+470,"io_i_addr", false,-1, 11,0);
    tracep->declBit(c+471,"io_i_w_en", false,-1);
    tracep->declBus(c+23,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+1039,"csrRegFile_clock", false,-1);
    tracep->declBit(c+1040,"csrRegFile_reset", false,-1);
    tracep->declBus(c+1055,"csrRegFile_io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+1055,"csrRegFile_io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+484,"csrRegFile_io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+99,"csrRegFile_io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+1031,"csrRegFile_io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+470,"csrRegFile_io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+471,"csrRegFile_io_CSR_i_w_en", false,-1);
    tracep->declBit(c+485,"csrRegFile_io_FCSR_nx", false,-1);
    tracep->declBit(c+486,"csrRegFile_io_FCSR_uf", false,-1);
    tracep->declBit(c+487,"csrRegFile_io_FCSR_of", false,-1);
    tracep->declBit(c+488,"csrRegFile_io_FCSR_dz", false,-1);
    tracep->declBit(c+489,"csrRegFile_io_FCSR_nv", false,-1);
    tracep->declBus(c+490,"csrRegFile_io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+491,"io_fcsr_o_data_lo", false,-1, 2,0);
    tracep->declBus(c+492,"io_fcsr_o_data_hi", false,-1, 28,0);
    tracep->pushNamePrefix("csrRegFile ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+1055,"io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+1055,"io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+484,"io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+99,"io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+1031,"io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+470,"io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+471,"io_CSR_i_w_en", false,-1);
    tracep->declBit(c+485,"io_FCSR_nx", false,-1);
    tracep->declBit(c+486,"io_FCSR_uf", false,-1);
    tracep->declBit(c+487,"io_FCSR_of", false,-1);
    tracep->declBit(c+488,"io_FCSR_dz", false,-1);
    tracep->declBit(c+489,"io_FCSR_nv", false,-1);
    tracep->declBus(c+490,"io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+493,"MISA_REG", false,-1, 31,0);
    tracep->declBus(c+493,"MHARTID_REG", false,-1, 31,0);
    tracep->declBus(c+494,"MCAUSE_REG", false,-1, 31,0);
    tracep->declBus(c+495,"MTVEC_REG", false,-1, 31,0);
    tracep->declBus(c+496,"MEPC_REG", false,-1, 31,0);
    tracep->declBus(c+497,"MIE_REG", false,-1, 31,0);
    tracep->declBit(c+498,"MSTATUS_TW_REG", false,-1);
    tracep->declBit(c+499,"MSTATUS_MPRV_REG", false,-1);
    tracep->declBus(c+500,"MSTATUS_MPP_REG", false,-1, 1,0);
    tracep->declBit(c+501,"MSTATUS_MPIE_REG", false,-1);
    tracep->declBit(c+502,"MSTATUS_MIE_REG", false,-1);
    tracep->declBit(c+485,"FCSR_NX_REG", false,-1);
    tracep->declBit(c+486,"FCSR_UF_REG", false,-1);
    tracep->declBit(c+487,"FCSR_OF_REG", false,-1);
    tracep->declBit(c+488,"FCSR_DZ_REG", false,-1);
    tracep->declBit(c+489,"FCSR_NV_REG", false,-1);
    tracep->declBus(c+490,"FCSR_FRM_REG", false,-1, 2,0);
    tracep->declBus(c+503,"MSTATUS_WIRE_lo", false,-1, 10,0);
    tracep->declBus(c+504,"MSTATUS_WIRE", false,-1, 31,0);
    tracep->declBus(c+505,"FFLAGS_WIRE", false,-1, 31,0);
    tracep->declBus(c+506,"FRM_WIRE", false,-1, 31,0);
    tracep->declBus(c+507,"FCSR_WIRE", false,-1, 31,0);
    tracep->declBus(c+508,"r_data", false,-1, 31,0);
    tracep->declBus(c+923,"set_data", false,-1, 31,0);
    tracep->declBus(c+924,"clear_data", false,-1, 31,0);
    tracep->declBus(c+1032,"w_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrController ");
    tracep->declBit(c+35,"io_regWrExecute", false,-1);
    tracep->declBus(c+29,"io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+37,"io_csrWrExecute", false,-1);
    tracep->declBit(c+36,"io_regWrMemory", false,-1);
    tracep->declBus(c+30,"io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+38,"io_csrWrMemory", false,-1);
    tracep->declBit(c+26,"io_regWrWriteback", false,-1);
    tracep->declBus(c+20,"io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+39,"io_csrWrWriteback", false,-1);
    tracep->declBus(c+86,"io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+100,"io_csrInstDecode", false,-1);
    tracep->declBus(c+472,"io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+509,"hazard_DecEx", false,-1);
    tracep->declBit(c+510,"hazard_DecMem", false,-1);
    tracep->declBit(c+511,"hazard_DecWb", false,-1);
    tracep->declBit(c+512,"csrHazard_DecEx", false,-1);
    tracep->declBit(c+513,"csrHazard_DecMem", false,-1);
    tracep->declBit(c+514,"csrHazard_DecWb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hdu ");
    tracep->declBit(c+27,"io_id_ex_memRead", false,-1);
    tracep->declBit(c+28,"io_ex_mem_memRead", false,-1);
    tracep->declBit(c+31,"io_id_ex_branch", false,-1);
    tracep->declBus(c+29,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+30,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+86,"io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+87,"io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+1027,"io_taken", false,-1);
    tracep->declBus(c+55,"io_jump", false,-1, 1,0);
    tracep->declBit(c+53,"io_branch", false,-1);
    tracep->declBit(c+97,"io_if_reg_write", false,-1);
    tracep->declBit(c+96,"io_pc_write", false,-1);
    tracep->declBit(c+97,"io_ctl_mux", false,-1);
    tracep->declBit(c+724,"io_ifid_flush", false,-1);
    tracep->declBit(c+96,"io_take_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immediate ");
    tracep->declBus(c+24,"io_instruction", false,-1, 31,0);
    tracep->declBus(c+43,"io_out", false,-1, 31,0);
    tracep->declBus(c+483,"opcode", false,-1, 6,0);
    tracep->declBus(c+470,"imm_i", false,-1, 11,0);
    tracep->declBus(c+515,"ext_i", false,-1, 31,0);
    tracep->declBus(c+516,"imm_u", false,-1, 19,0);
    tracep->declBus(c+517,"ext_u", false,-1, 31,0);
    tracep->declBus(c+518,"imm_s", false,-1, 11,0);
    tracep->declBus(c+519,"ext_s", false,-1, 31,0);
    tracep->declBus(c+520,"imm_sb", false,-1, 11,0);
    tracep->declBus(c+521,"ext_sb", false,-1, 31,0);
    tracep->declBus(c+522,"imm_uj", false,-1, 19,0);
    tracep->declBus(c+523,"ext_uj", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+86,"io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+87,"io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+476,"io_writeEnable", false,-1);
    tracep->declBus(c+477,"io_writeAddress", false,-1, 4,0);
    tracep->declBus(c+1028,"io_writeData", false,-1, 31,0);
    tracep->declBus(c+478,"io_readData_0", false,-1, 31,0);
    tracep->declBus(c+479,"io_readData_1", false,-1, 31,0);
    tracep->declBus(c+524,"reg_0", false,-1, 31,0);
    tracep->declBus(c+525,"reg_1", false,-1, 31,0);
    tracep->declBus(c+526,"reg_2", false,-1, 31,0);
    tracep->declBus(c+527,"reg_3", false,-1, 31,0);
    tracep->declBus(c+528,"reg_4", false,-1, 31,0);
    tracep->declBus(c+529,"reg_5", false,-1, 31,0);
    tracep->declBus(c+530,"reg_6", false,-1, 31,0);
    tracep->declBus(c+531,"reg_7", false,-1, 31,0);
    tracep->declBus(c+532,"reg_8", false,-1, 31,0);
    tracep->declBus(c+533,"reg_9", false,-1, 31,0);
    tracep->declBus(c+534,"reg_10", false,-1, 31,0);
    tracep->declBus(c+535,"reg_11", false,-1, 31,0);
    tracep->declBus(c+536,"reg_12", false,-1, 31,0);
    tracep->declBus(c+537,"reg_13", false,-1, 31,0);
    tracep->declBus(c+538,"reg_14", false,-1, 31,0);
    tracep->declBus(c+539,"reg_15", false,-1, 31,0);
    tracep->declBus(c+540,"reg_16", false,-1, 31,0);
    tracep->declBus(c+541,"reg_17", false,-1, 31,0);
    tracep->declBus(c+542,"reg_18", false,-1, 31,0);
    tracep->declBus(c+543,"reg_19", false,-1, 31,0);
    tracep->declBus(c+544,"reg_20", false,-1, 31,0);
    tracep->declBus(c+545,"reg_21", false,-1, 31,0);
    tracep->declBus(c+546,"reg_22", false,-1, 31,0);
    tracep->declBus(c+547,"reg_23", false,-1, 31,0);
    tracep->declBus(c+548,"reg_24", false,-1, 31,0);
    tracep->declBus(c+549,"reg_25", false,-1, 31,0);
    tracep->declBus(c+550,"reg_26", false,-1, 31,0);
    tracep->declBus(c+551,"reg_27", false,-1, 31,0);
    tracep->declBus(c+552,"reg_28", false,-1, 31,0);
    tracep->declBus(c+553,"reg_29", false,-1, 31,0);
    tracep->declBus(c+554,"reg_30", false,-1, 31,0);
    tracep->declBus(c+555,"reg_31", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("v_immediate ");
    tracep->declBus(c+24,"io_instruction", false,-1, 31,0);
    tracep->declBus(c+480,"io_z_imm", false,-1, 31,0);
    tracep->declBus(c+89,"io_addi_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("v_registers ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+24,"io_ins", false,-1, 31,0);
    tracep->declBus(c+86,"io_vs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"io_vs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"io_vs3_addr", false,-1, 4,0);
    tracep->declBus(c+69,"io_vd_addr", false,-1, 4,0);
    tracep->declBus(c+71,"io_lmul_count", false,-1, 3,0);
    tracep->declBus(c+72,"io_lmul_vs1in_vs2in", false,-1, 3,0);
    tracep->declBus(c+73,"io_id_vc3", false,-1, 4,0);
    tracep->declArray(c+74,"io_vs0_data", false,-1, 127,0);
    tracep->declArray(c+78,"io_vs1_data", false,-1, 127,0);
    tracep->declArray(c+82,"io_vs2_data", false,-1, 127,0);
    tracep->declArray(c+1,"io_vs3_data", false,-1, 127,0);
    tracep->declArray(c+65,"io_vd_data", false,-1, 127,0);
    tracep->declBit(c+70,"io_reg_write", false,-1);
    tracep->declBit(c+64,"io_reg_read", false,-1);
    tracep->declArray(c+556,"register_0", false,-1, 127,0);
    tracep->declArray(c+560,"register_1", false,-1, 127,0);
    tracep->declArray(c+564,"register_2", false,-1, 127,0);
    tracep->declArray(c+568,"register_3", false,-1, 127,0);
    tracep->declArray(c+572,"register_4", false,-1, 127,0);
    tracep->declArray(c+576,"register_5", false,-1, 127,0);
    tracep->declArray(c+580,"register_6", false,-1, 127,0);
    tracep->declArray(c+584,"register_7", false,-1, 127,0);
    tracep->declArray(c+588,"register_8", false,-1, 127,0);
    tracep->declArray(c+592,"register_9", false,-1, 127,0);
    tracep->declArray(c+596,"register_10", false,-1, 127,0);
    tracep->declArray(c+600,"register_11", false,-1, 127,0);
    tracep->declArray(c+604,"register_12", false,-1, 127,0);
    tracep->declArray(c+608,"register_13", false,-1, 127,0);
    tracep->declArray(c+612,"register_14", false,-1, 127,0);
    tracep->declArray(c+616,"register_15", false,-1, 127,0);
    tracep->declArray(c+620,"register_16", false,-1, 127,0);
    tracep->declArray(c+624,"register_17", false,-1, 127,0);
    tracep->declArray(c+628,"register_18", false,-1, 127,0);
    tracep->declArray(c+632,"register_19", false,-1, 127,0);
    tracep->declArray(c+636,"register_20", false,-1, 127,0);
    tracep->declArray(c+640,"register_21", false,-1, 127,0);
    tracep->declArray(c+644,"register_22", false,-1, 127,0);
    tracep->declArray(c+648,"register_23", false,-1, 127,0);
    tracep->declArray(c+652,"register_24", false,-1, 127,0);
    tracep->declArray(c+656,"register_25", false,-1, 127,0);
    tracep->declArray(c+660,"register_26", false,-1, 127,0);
    tracep->declArray(c+664,"register_27", false,-1, 127,0);
    tracep->declArray(c+668,"register_28", false,-1, 127,0);
    tracep->declArray(c+672,"register_29", false,-1, 127,0);
    tracep->declArray(c+676,"register_30", false,-1, 127,0);
    tracep->declArray(c+680,"register_31", false,-1, 127,0);
    tracep->declBus(c+684,"vs1_in", false,-1, 4,0);
    tracep->declBus(c+685,"vs2_in", false,-1, 4,0);
    tracep->declBus(c+686,"vs3_in", false,-1, 4,0);
    tracep->declBus(c+687,"vsd_in", false,-1, 4,0);
    tracep->declBus(c+688,"vs3_in_1", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vec_csr ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+90,"io_vtypei", false,-1, 10,0);
    tracep->declBus(c+92,"io_vl", false,-1, 31,0);
    tracep->declBit(c+93,"io_vset", false,-1);
    tracep->declBus(c+94,"io_vl_out", false,-1, 31,0);
    tracep->declBus(c+481,"io_vtype_out", false,-1, 31,0);
    tracep->declBus(c+1059,"io_vstart_out", false,-1, 31,0);
    tracep->declBus(c+481,"vtypeReg", false,-1, 31,0);
    tracep->declBus(c+94,"vlReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionFetch ");
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+940,"io_address", false,-1, 31,0);
    tracep->declBus(c+949,"io_instruction", false,-1, 31,0);
    tracep->declBit(c+722,"io_stall", false,-1);
    tracep->declBit(c+1058,"io_coreInstrReq_ready", false,-1);
    tracep->declBit(c+938,"io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+939,"io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"io_coreInstrReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"io_coreInstrReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"io_coreInstrReq_bits_isWrite", false,-1);
    tracep->declBit(c+1058,"io_coreInstrResp_ready", false,-1);
    tracep->declBit(c+11,"io_coreInstrResp_valid", false,-1);
    tracep->declBus(c+927,"io_coreInstrResp_bits_dataResponse", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+34,"io_aluResultIn", false,-1, 31,0);
    tracep->declBus(c+159,"io_v_addr", false,-1, 31,0);
    tracep->declBit(c+160,"io_v_ins", false,-1);
    tracep->declBus(c+161,"io_writeData", false,-1, 31,0);
    tracep->declBus(c+162,"io_v_writeData", false,-1, 31,0);
    tracep->declBit(c+9,"io_writeEnable", false,-1);
    tracep->declBit(c+163,"io_readEnable", false,-1);
    tracep->declBus(c+948,"io_readData", false,-1, 31,0);
    tracep->declBus(c+164,"io_f3", false,-1, 2,0);
    tracep->declBit(c+5,"io_dccmReq_valid", false,-1);
    tracep->declBus(c+6,"io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"io_dccmReq_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"io_dccmReq_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+10,"io_dccmRsp_valid", false,-1);
    tracep->declBus(c+926,"io_dccmRsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBus(c+689,"offset", false,-1, 1,0);
    tracep->declBus(c+690,"funct3", false,-1, 2,0);
    tracep->declBus(c+691,"offsetSW", false,-1, 1,0);
    tracep->declBus(c+692,"wdata_0", false,-1, 7,0);
    tracep->declBus(c+693,"wdata_1", false,-1, 7,0);
    tracep->declBus(c+694,"wdata_2", false,-1, 7,0);
    tracep->declBus(c+695,"wdata_3", false,-1, 7,0);
    tracep->declBus(c+696,"io_dccmReq_bits_dataRequest_lo", false,-1, 15,0);
    tracep->declBus(c+697,"io_dccmReq_bits_dataRequest_hi", false,-1, 15,0);
    tracep->declBus(c+1033,"rdata", false,-1, 31,0);
    tracep->declBus(c+698,"addr", false,-1, 31,0);
    tracep->declBus(c+699,"data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Realigner ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+941,"io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+949,"io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+954,"io_ral_jmp", false,-1);
    tracep->declBus(c+940,"io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+960,"io_ral_instruction_o", false,-1, 31,0);
    tracep->declBit(c+169,"io_ral_halt_o", false,-1);
    tracep->declBit(c+943,"addri", false,-1);
    tracep->declBus(c+700,"lhw_reg", false,-1, 15,0);
    tracep->declBus(c+925,"conc_instr", false,-1, 31,0);
    tracep->declBus(c+701,"stateReg", false,-1, 1,0);
    tracep->declBit(c+1050,"pc4_sel", false,-1);
    tracep->declBit(c+702,"conc_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+941,"io_in", false,-1, 31,0);
    tracep->declBit(c+942,"io_halt", false,-1);
    tracep->declBus(c+165,"io_out", false,-1, 31,0);
    tracep->declBus(c+1047,"io_pc4", false,-1, 31,0);
    tracep->declBus(c+1048,"io_pc2", false,-1, 31,0);
    tracep->declBus(c+165,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vlsu ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+956,"io_instr", false,-1, 31,0);
    tracep->declBus(c+166,"io_vtype", false,-1, 31,0);
    tracep->declBus(c+957,"io_UnitStride", false,-1, 1,0);
    tracep->declBus(c+1060,"io_evl", false,-1, 7,0);
    tracep->declBus(c+1061,"io_vs3_Addr", false,-1, 4,0);
    tracep->declBus(c+958,"io_lsuType", false,-1, 3,0);
    tracep->declBus(c+959,"io_eew", false,-1, 9,0);
    tracep->declBus(c+1062,"io_nf", false,-1, 3,0);
    tracep->declBus(c+167,"io_emmul", false,-1, 5,0);
    tracep->declBus(c+168,"io_emul", false,-1, 3,0);
    tracep->declBus(c+1034,"mop", false,-1, 1,0);
    tracep->declBus(c+1035,"lsumop", false,-1, 4,0);
    tracep->declBus(c+1036,"width", false,-1, 2,0);
    tracep->declBus(c+703,"vlmul", false,-1, 2,0);
    tracep->declBus(c+704,"vsew", false,-1, 2,0);
    tracep->declBus(c+705,"sew", false,-1, 6,0);
    tracep->declBus(c+706,"lmul", false,-1, 3,0);
    tracep->declBus(c+1037,"eew", false,-1, 6,0);
    tracep->declBus(c+168,"emul", false,-1, 3,0);
    tracep->declBus(c+1038,"lsuType", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBit(c+5,"io_req_valid", false,-1);
    tracep->declBus(c+6,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+7,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+8,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+9,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+10,"io_rsp_valid", false,-1);
    tracep->declBus(c+926,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"sram_clk_i", false,-1);
    tracep->declBit(c+1040,"sram_rst_i", false,-1);
    tracep->declBit(c+1051,"sram_csb_i", false,-1);
    tracep->declBit(c+1052,"sram_we_i", false,-1);
    tracep->declBus(c+8,"sram_wmask_i", false,-1, 3,0);
    tracep->declBus(c+707,"sram_addr_i", false,-1, 12,0);
    tracep->declBus(c+7,"sram_wdata_i", false,-1, 31,0);
    tracep->declBus(c+926,"sram_rdata_o", false,-1, 31,0);
    tracep->declBit(c+10,"validReg", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+1063,"IFILE_IN", false,-1, 7,0);
    tracep->declBit(c+1039,"clk_i", false,-1);
    tracep->declBit(c+1040,"rst_i", false,-1);
    tracep->declBit(c+1051,"csb_i", false,-1);
    tracep->declBus(c+708,"addr_i", false,-1, 11,0);
    tracep->declBus(c+7,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+8,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+1052,"we_i", false,-1);
    tracep->declBus(c+926,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+928,"csb", false,-1);
    tracep->declBus(c+929,"addr_o", false,-1, 11,0);
    tracep->declBus(c+930,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+931,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+932,"we_o", false,-1);
    tracep->declBus(c+1064,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+1053,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+1065,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1066,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1067,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1068,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1069,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1059,"IZERO", false,-1, 31,0);
    tracep->declBus(c+1063,"IFILE", false,-1, 7,0);
    tracep->declBit(c+1039,"clk0", false,-1);
    tracep->declBit(c+1051,"csb0", false,-1);
    tracep->declBit(c+1052,"web0", false,-1);
    tracep->declBus(c+8,"wmask0", false,-1, 3,0);
    tracep->declBus(c+709,"addr0", false,-1, 12,0);
    tracep->declBus(c+7,"din0", false,-1, 31,0);
    tracep->declBus(c+926,"dout0", false,-1, 31,0);
    tracep->declBit(c+1057,"clk1", false,-1);
    tracep->declBit(c+1058,"csb1", false,-1);
    tracep->declBus(c+1070,"addr1", false,-1, 12,0);
    tracep->declBus(c+1071,"dout1", false,-1, 31,0);
    tracep->declBit(c+710,"csb0_reg", false,-1);
    tracep->declBit(c+711,"web0_reg", false,-1);
    tracep->declBus(c+712,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+713,"addr0_reg", false,-1, 12,0);
    tracep->declBus(c+714,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1072,"csb1_reg", false,-1);
    tracep->declBus(c+1073,"addr1_reg", false,-1, 12,0);
    tracep->declBus(c+1074,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBit(c+938,"io_req_valid", false,-1);
    tracep->declBus(c+939,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+1055,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+1056,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+1057,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+11,"io_rsp_valid", false,-1);
    tracep->declBus(c+927,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+1039,"sram_clk_i", false,-1);
    tracep->declBit(c+1040,"sram_rst_i", false,-1);
    tracep->declBit(c+944,"sram_csb_i", false,-1);
    tracep->declBit(c+938,"sram_we_i", false,-1);
    tracep->declBus(c+1056,"sram_wmask_i", false,-1, 3,0);
    tracep->declBus(c+945,"sram_addr_i", false,-1, 12,0);
    tracep->declBus(c+1055,"sram_wdata_i", false,-1, 31,0);
    tracep->declBus(c+927,"sram_rdata_o", false,-1, 31,0);
    tracep->declBit(c+11,"validReg", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declArray(c+1075,"IFILE_IN", false,-1, 215,0);
    tracep->declBit(c+1039,"clk_i", false,-1);
    tracep->declBit(c+1040,"rst_i", false,-1);
    tracep->declBit(c+944,"csb_i", false,-1);
    tracep->declBus(c+946,"addr_i", false,-1, 11,0);
    tracep->declBus(c+1055,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1056,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+938,"we_i", false,-1);
    tracep->declBus(c+927,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+933,"csb", false,-1);
    tracep->declBus(c+934,"addr_o", false,-1, 11,0);
    tracep->declBus(c+935,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+936,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+937,"we_o", false,-1);
    tracep->declBus(c+1082,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+1054,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+1065,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1066,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1067,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1068,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1069,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1059,"IZERO", false,-1, 31,0);
    tracep->declArray(c+1075,"IFILE", false,-1, 215,0);
    tracep->declBit(c+1039,"clk0", false,-1);
    tracep->declBit(c+944,"csb0", false,-1);
    tracep->declBit(c+938,"web0", false,-1);
    tracep->declBus(c+1056,"wmask0", false,-1, 3,0);
    tracep->declBus(c+947,"addr0", false,-1, 12,0);
    tracep->declBus(c+1055,"din0", false,-1, 31,0);
    tracep->declBus(c+927,"dout0", false,-1, 31,0);
    tracep->declBit(c+1057,"clk1", false,-1);
    tracep->declBit(c+1058,"csb1", false,-1);
    tracep->declBus(c+1070,"addr1", false,-1, 12,0);
    tracep->declBus(c+1083,"dout1", false,-1, 31,0);
    tracep->declBit(c+715,"csb0_reg", false,-1);
    tracep->declBit(c+716,"web0_reg", false,-1);
    tracep->declBus(c+717,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+718,"addr0_reg", false,-1, 12,0);
    tracep->declBus(c+719,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1084,"csb1_reg", false,-1);
    tracep->declBus(c+1085,"addr1_reg", false,-1, 12,0);
    tracep->declBus(c+1086,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("tracer ");
    tracep->declBit(c+1039,"clock", false,-1);
    tracep->declBit(c+1040,"reset", false,-1);
    tracep->declBus(c+12,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+15,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+721,"io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+16,"io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+17,"io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+948,"io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+18,"io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+19,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+20,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+21,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+22,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+720,"clkCycle", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hcfb5676e__0;
    VlWide<4>/*127:0*/ __Vtemp_h183fa316__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7afd02b__0;
    VlWide<4>/*127:0*/ __Vtemp_he40aaf0c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha96fd0ad__0;
    VlWide<7>/*223:0*/ __Vtemp_h0a562b7e__0;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers_io_vs3_data),128);
    bufp->fullBit(oldp+5,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    bufp->fullIData(oldp+6,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                       >> 2U))),32);
    bufp->fullIData(oldp+7,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
    bufp->fullCData(oldp+8,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
    bufp->fullBit(oldp+9,(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable));
    bufp->fullBit(oldp+10,(vlSelf->Top__DOT__dmem__DOT__validReg));
    bufp->fullBit(oldp+11,(vlSelf->Top__DOT__imem__DOT__validReg));
    bufp->fullIData(oldp+12,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
    bufp->fullIData(oldp+13,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
    bufp->fullIData(oldp+15,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
    bufp->fullIData(oldp+16,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
    bufp->fullIData(oldp+17,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
    bufp->fullIData(oldp+18,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
    bufp->fullBit(oldp+19,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
    bufp->fullCData(oldp+20,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
    bufp->fullCData(oldp+21,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
    bufp->fullCData(oldp+22,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
    bufp->fullIData(oldp+23,(((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 4U) | 
                                          ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U))) 
                              | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                  << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                             << 1U) 
                                            | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
    bufp->fullIData(oldp+24,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
    bufp->fullIData(oldp+25,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
    bufp->fullBit(oldp+26,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
    bufp->fullBit(oldp+27,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
    bufp->fullBit(oldp+28,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                       >> 7U))),5);
    bufp->fullBit(oldp+31,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
    bufp->fullIData(oldp+32,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
    bufp->fullIData(oldp+33,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
    bufp->fullIData(oldp+34,(vlSelf->Top__DOT__core__DOT__ex_reg_result),32);
    bufp->fullBit(oldp+35,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
    bufp->fullBit(oldp+36,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
    bufp->fullBit(oldp+37,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
    bufp->fullBit(oldp+38,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
    bufp->fullBit(oldp+39,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
    bufp->fullIData(oldp+42,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out),32);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,(vlSelf->Top__DOT__core__DOT__IDecode_io_func7),7);
    bufp->fullCData(oldp+46,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+47,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+48,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control__DOT___signals_T_28))));
    bufp->fullCData(oldp+49,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x73U 
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
    bufp->fullBit(oldp+50,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x73U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x23U != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x63U 
                                               != (0x7fU 
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
    bufp->fullBit(oldp+51,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x13U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x73U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & (3U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))));
    bufp->fullBit(oldp+52,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((3U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & (0x23U == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))));
    bufp->fullBit(oldp+53,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_branch));
    bufp->fullCData(oldp+54,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 2U : ((0x13U == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 2U : ((0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+55,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump),2);
    bufp->fullBit(oldp+56,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegWrite));
    bufp->fullBit(oldp+57,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((IData)(((0x7000U == 
                                         (0x7000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU)) 
                                           | (1U == 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1eU))))) 
                               | ((IData)((0x80007000U 
                                           == (0xc0007000U 
                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                  | ((~ (IData)((0xc0007000U 
                                                 == 
                                                 (0xc0007000U 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins)))) 
                                     & ((0U != (7U 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                        & (IData)((
                                                   (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                   & (4U 
                                                      != 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xcU))))))))))));
    bufp->fullCData(oldp+58,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? ((IData)(((0x7000U 
                                            == (0x7000U 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0U == 
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
                                            ? 3U : 
                                           ((IData)(
                                                    (0xc0007000U 
                                                     == 
                                                     (0xc0007000U 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins)))
                                             ? 3U : 
                                            ((0U == 
                                              (7U & 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? 4U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU)))
                                                   ? 4U
                                                   : 0U))))))
                               : 0U)),4);
    bufp->fullCData(oldp+59,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                              & ((~ (IData)(((0x7000U 
                                              == (0x7000U 
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
                                             == (0xc0007000U 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                    | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol__DOT___GEN_14))))),5);
    bufp->fullBit(oldp+60,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((IData)(((0x7000U == 
                                         (0x7000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x1eU)) 
                                           | (1U == 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1eU))))) 
                               | ((IData)((0x80007000U 
                                           == (0xc0007000U 
                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
                                  | (IData)((0xc0007000U 
                                             == (0xc0007000U 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))));
    bufp->fullCData(oldp+61,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                              & ((0x27U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                 & (7U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))))),4);
    bufp->fullBit(oldp+62,(((0x57U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            | (0x27U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))));
    bufp->fullBit(oldp+63,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & (0x27U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))));
    bufp->fullBit(oldp+64,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__Vcontrol_io_RegRead));
    bufp->fullWData(oldp+65,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out),128);
    bufp->fullCData(oldp+69,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_vd_addr),5);
    bufp->fullBit(oldp+70,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_reg_write));
    bufp->fullCData(oldp+71,(vlSelf->Top__DOT__core__DOT__mem_reg_lmul_v),4);
    bufp->fullCData(oldp+72,(vlSelf->Top__DOT__core__DOT__if_reg_lmul_v),4);
    bufp->fullCData(oldp+73,(vlSelf->Top__DOT__core__DOT__if_vc3),5);
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
    bufp->fullWData(oldp+74,(__Vtemp_hcfb5676e__0),128);
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
    bufp->fullWData(oldp+78,(__Vtemp_h183fa316__0),128);
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
    bufp->fullWData(oldp+82,(__Vtemp_hb7afd02b__0),128);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+88,((((- (IData)((1U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x1eU)))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+89,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))),32);
    bufp->fullSData(oldp+90,(vlSelf->Top__DOT__core__DOT__mem_reg_vtype),11);
    bufp->fullSData(oldp+91,((0x7ffU & vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg)),11);
    bufp->fullIData(oldp+92,(vlSelf->Top__DOT__core__DOT__mem_reg_vec_vl),32);
    bufp->fullBit(oldp+93,(vlSelf->Top__DOT__core__DOT__mem_reg_vset));
    bufp->fullIData(oldp+94,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vlReg),32);
    bufp->fullCData(oldp+95,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x73U 
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
    bufp->fullBit(oldp+96,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                       & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_branch)) 
                                      & (((0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
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
    bufp->fullBit(oldp+97,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__hdu_io_if_reg_write));
    bufp->fullBit(oldp+98,(vlSelf->Top__DOT__core__DOT__IDecode_io_stall));
    bufp->fullIData(oldp+99,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                               : vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
    bufp->fullBit(oldp+100,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
    bufp->fullIData(oldp+101,(vlSelf->Top__DOT__core__DOT__id_reg_imm),32);
    bufp->fullIData(oldp+102,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),32);
    bufp->fullIData(oldp+103,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),32);
    bufp->fullIData(oldp+104,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
    bufp->fullCData(oldp+105,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
    bufp->fullCData(oldp+106,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
    bufp->fullBit(oldp+107,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
    bufp->fullCData(oldp+108,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
    bufp->fullCData(oldp+109,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
    bufp->fullCData(oldp+110,((vlSelf->Top__DOT__core__DOT__id_reg_ins 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+111,((7U & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluop))),3);
    bufp->fullCData(oldp+112,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_Ex_sel),4);
    bufp->fullBit(oldp+113,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_RegWrite));
    bufp->fullBit(oldp+114,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_opBsel));
    bufp->fullBit(oldp+115,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_load));
    bufp->fullBit(oldp+116,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_ins));
    bufp->fullBit(oldp+117,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_vset));
    bufp->fullWData(oldp+118,(vlSelf->Top__DOT__core__DOT__id_reg_v1_data),128);
    bufp->fullWData(oldp+122,(vlSelf->Top__DOT__core__DOT__id_reg_v2_data),128);
    bufp->fullIData(oldp+126,(vlSelf->Top__DOT__core__DOT__Execute_io_vl),32);
    bufp->fullIData(oldp+127,(vlSelf->Top__DOT__core__DOT__id_reg_vstart_out),32);
    bufp->fullWData(oldp+128,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data),128);
    bufp->fullBit(oldp+132,(vlSelf->Top__DOT__core__DOT__Execute_io_vma));
    bufp->fullBit(oldp+133,(vlSelf->Top__DOT__core__DOT__Execute_io_vta));
    bufp->fullBit(oldp+134,((1U & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                   >> 0x19U))));
    bufp->fullWData(oldp+135,(vlSelf->Top__DOT__core__DOT__id_reg_v0_data),128);
    bufp->fullCData(oldp+139,(vlSelf->Top__DOT__core__DOT__Execute_io_v_sew),3);
    bufp->fullIData(oldp+140,(vlSelf->Top__DOT__core__DOT__id_reg_vtype),32);
    bufp->fullIData(oldp+141,(vlSelf->Top__DOT__core__DOT__id_reg_v_addi_imm),32);
    bufp->fullWData(oldp+142,(vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res),128);
    bufp->fullCData(oldp+146,(vlSelf->Top__DOT__core__DOT__ex_reg_vd_addr),5);
    bufp->fullCData(oldp+147,(vlSelf->Top__DOT__core__DOT__id_reg_vs1_addr),5);
    bufp->fullCData(oldp+148,(vlSelf->Top__DOT__core__DOT__id_reg_vs2_addr),5);
    bufp->fullCData(oldp+149,(vlSelf->Top__DOT__core__DOT__id_reg_vd_addr),5);
    bufp->fullBit(oldp+150,(vlSelf->Top__DOT__core__DOT__ex_reg_reg_write));
    bufp->fullBit(oldp+151,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_MemWrite));
    bufp->fullCData(oldp+152,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rd),5);
    bufp->fullIData(oldp+153,((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)),32);
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
    bufp->fullWData(oldp+154,(__Vtemp_he40aaf0c__0),128);
    bufp->fullBit(oldp+158,(vlSelf->Top__DOT__core__DOT__Execute_io_stall));
    bufp->fullIData(oldp+159,((((vlSelf->Top__DOT__core__DOT__vlcount 
                                 != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                & (0x27U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                    ? (vlSelf->Top__DOT__core__DOT__ex_reg_read_data1 
                                       + vlSelf->Top__DOT__core__DOT__addrcount)
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+160,(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins));
    bufp->fullIData(oldp+161,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),32);
    bufp->fullIData(oldp+162,((((vlSelf->Top__DOT__core__DOT__vlcount 
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
    bufp->fullBit(oldp+163,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                              ? (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_memRead)
                              : (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead))));
    bufp->fullCData(oldp+164,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+165,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
    bufp->fullIData(oldp+166,(vlSelf->Top__DOT__core__DOT__vtype),32);
    bufp->fullCData(oldp+167,(((0x30U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul) 
                                                        >> 3U)))) 
                                         << 4U)) | (IData)(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul))),6);
    bufp->fullCData(oldp+168,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__emul),4);
    bufp->fullBit(oldp+169,((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    bufp->fullCData(oldp+170,(vlSelf->Top__DOT__core__DOT__if_vc3),4);
    bufp->fullSData(oldp+171,(vlSelf->Top__DOT__core__DOT__if_reg_eew),10);
    bufp->fullCData(oldp+172,(vlSelf->Top__DOT__core__DOT__if_reg_lsuType),4);
    bufp->fullCData(oldp+173,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
    bufp->fullCData(oldp+174,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
    bufp->fullBit(oldp+175,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
    bufp->fullSData(oldp+176,(vlSelf->Top__DOT__core__DOT__id_reg_z_imm),11);
    bufp->fullCData(oldp+177,(vlSelf->Top__DOT__core__DOT__id_reg_lmul_v),4);
    bufp->fullSData(oldp+178,(vlSelf->Top__DOT__core__DOT__id_reg_eew),10);
    bufp->fullCData(oldp+179,(vlSelf->Top__DOT__core__DOT__id_reg_lsuType),4);
    bufp->fullCData(oldp+180,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluop),5);
    bufp->fullBit(oldp+181,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_v_memRead));
    bufp->fullCData(oldp+182,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
    bufp->fullCData(oldp+183,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
    bufp->fullBit(oldp+184,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    bufp->fullIData(oldp+185,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
    bufp->fullIData(oldp+186,(vlSelf->Top__DOT__core__DOT__ex_reg_vl),32);
    bufp->fullCData(oldp+187,(vlSelf->Top__DOT__core__DOT__ex_reg_lmul_v),4);
    bufp->fullBit(oldp+188,(vlSelf->Top__DOT__core__DOT__ex_reg_vset));
    bufp->fullBit(oldp+189,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_memRead));
    bufp->fullBit(oldp+190,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_v_MemWrite));
    bufp->fullSData(oldp+191,(vlSelf->Top__DOT__core__DOT__ex_reg_vtype),11);
    bufp->fullSData(oldp+192,(vlSelf->Top__DOT__core__DOT__ex_reg_eew),10);
    bufp->fullCData(oldp+193,(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType),4);
    bufp->fullIData(oldp+194,(vlSelf->Top__DOT__core__DOT__ex_reg_read_data1),32);
    bufp->fullIData(oldp+195,(vlSelf->Top__DOT__core__DOT__mem_reg_result),32);
    bufp->fullCData(oldp+196,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
    bufp->fullCData(oldp+197,(vlSelf->Top__DOT__core__DOT__lmul),3);
    bufp->fullIData(oldp+198,(vlSelf->Top__DOT__core__DOT__lmul_reg),32);
    bufp->fullCData(oldp+199,(vlSelf->Top__DOT__core__DOT__vc3),5);
    bufp->fullIData(oldp+200,(vlSelf->Top__DOT__core__DOT__vlmul_count),32);
    bufp->fullIData(oldp+201,(vlSelf->Top__DOT__core__DOT__emul_reg),32);
    bufp->fullIData(oldp+202,(vlSelf->Top__DOT__core__DOT__delays),32);
    bufp->fullIData(oldp+203,(vlSelf->Top__DOT__core__DOT__addrcount),32);
    bufp->fullIData(oldp+204,(vlSelf->Top__DOT__core__DOT__vlcount),32);
    bufp->fullIData(oldp+205,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[0U]
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[0U]
                                    : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))),32);
    bufp->fullIData(oldp+206,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[1U]
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[1U]
                                    : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))),32);
    bufp->fullIData(oldp+207,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                    : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))),32);
    bufp->fullIData(oldp+208,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
    bufp->fullIData(oldp+209,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
    bufp->fullIData(oldp+210,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
    bufp->fullCData(oldp+211,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
    bufp->fullCData(oldp+212,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
    bufp->fullCData(oldp+213,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
    bufp->fullCData(oldp+214,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
    bufp->fullIData(oldp+215,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
    bufp->fullIData(oldp+216,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
    bufp->fullBit(oldp+217,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
    bufp->fullBit(oldp+218,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
    bufp->fullBit(oldp+219,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
    bufp->fullIData(oldp+220,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[3U]
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                    ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[3U]
                                    : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))),32);
    bufp->fullCData(oldp+221,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
    bufp->fullBit(oldp+222,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                   >> 5U))));
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+224,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+225,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+226,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
    bufp->fullCData(oldp+227,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
    bufp->fullCData(oldp+228,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
    bufp->fullSData(oldp+229,(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc),9);
    bufp->fullWData(oldp+230,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1),128);
    bufp->fullWData(oldp+234,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2),128);
    bufp->fullIData(oldp+238,(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14),32);
    bufp->fullCData(oldp+239,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1),5);
    bufp->fullIData(oldp+240,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT___GEN_19),32);
    bufp->fullCData(oldp+241,(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37),5);
    bufp->fullBit(oldp+242,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_valid));
    bufp->fullBit(oldp+243,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
    bufp->fullBit(oldp+244,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                             | ((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                  | (3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                 | (2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                    | (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u)) 
                                   & ((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                      & (0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
    bufp->fullIData(oldp+245,(vlSelf->Top__DOT__core__DOT__Execute__DOT__src_a_reg),32);
    bufp->fullIData(oldp+246,(vlSelf->Top__DOT__core__DOT__Execute__DOT__src_b_reg),32);
    bufp->fullCData(oldp+247,(vlSelf->Top__DOT__core__DOT__Execute__DOT__op_reg),3);
    bufp->fullBit(oldp+248,(vlSelf->Top__DOT__core__DOT__Execute__DOT__div_en));
    bufp->fullCData(oldp+249,(vlSelf->Top__DOT__core__DOT__Execute__DOT__f7_reg),6);
    bufp->fullCData(oldp+250,(vlSelf->Top__DOT__core__DOT__Execute__DOT__counter),6);
    bufp->fullCData(oldp+251,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
    bufp->fullIData(oldp+252,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
    bufp->fullIData(oldp+253,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
    bufp->fullBit(oldp+254,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
    bufp->fullBit(oldp+255,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
    bufp->fullCData(oldp+256,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),8);
    bufp->fullCData(oldp+257,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+258,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+259,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+260,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),8);
    bufp->fullCData(oldp+261,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+262,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+263,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+264,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),8);
    bufp->fullCData(oldp+265,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+266,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+267,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+268,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),8);
    bufp->fullCData(oldp+269,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+270,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+271,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+272,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),8);
    bufp->fullCData(oldp+273,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+274,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+275,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+276,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),8);
    bufp->fullCData(oldp+277,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+278,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+279,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+280,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),8);
    bufp->fullCData(oldp+281,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+282,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+283,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+284,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),8);
    bufp->fullCData(oldp+285,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+286,((0xffU & (vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+287,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                               >> 0x18U)),8);
    bufp->fullSData(oldp+288,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])),16);
    bufp->fullSData(oldp+289,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+290,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])),16);
    bufp->fullSData(oldp+291,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+292,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])),16);
    bufp->fullSData(oldp+293,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+294,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])),16);
    bufp->fullSData(oldp+295,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+296,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])),16);
    bufp->fullSData(oldp+297,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+298,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])),16);
    bufp->fullSData(oldp+299,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+300,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])),16);
    bufp->fullSData(oldp+301,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+302,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])),16);
    bufp->fullSData(oldp+303,((vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+304,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]),32);
    bufp->fullIData(oldp+305,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]),32);
    bufp->fullIData(oldp+306,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]),32);
    bufp->fullIData(oldp+307,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]),32);
    bufp->fullIData(oldp+308,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]),32);
    bufp->fullIData(oldp+309,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U]),32);
    bufp->fullIData(oldp+310,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]),32);
    bufp->fullIData(oldp+311,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U]),32);
    bufp->fullQData(oldp+312,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U])))),64);
    bufp->fullQData(oldp+314,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U])))),64);
    bufp->fullQData(oldp+316,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])))),64);
    bufp->fullQData(oldp+318,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])))),64);
    bufp->fullCData(oldp+320,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])),8);
    bufp->fullCData(oldp+321,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+322,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+323,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+324,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])),8);
    bufp->fullCData(oldp+325,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+326,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+327,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+328,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])),8);
    bufp->fullCData(oldp+329,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+330,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+331,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+332,((0xffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])),8);
    bufp->fullCData(oldp+333,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+334,((0xffU & (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+335,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                               >> 0x18U)),8);
    bufp->fullSData(oldp+336,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])),16);
    bufp->fullSData(oldp+337,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+338,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])),16);
    bufp->fullSData(oldp+339,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+340,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])),16);
    bufp->fullSData(oldp+341,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+342,((0xffffU & vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])),16);
    bufp->fullSData(oldp+343,((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+344,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]),32);
    bufp->fullIData(oldp+345,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]),32);
    bufp->fullIData(oldp+346,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]),32);
    bufp->fullIData(oldp+347,(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]),32);
    bufp->fullQData(oldp+348,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))),64);
    bufp->fullQData(oldp+350,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))),64);
    bufp->fullQData(oldp+352,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (((QData)((IData)(
                                                    vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U])))
                                : (((0U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (0U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullQData(oldp+354,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (((QData)((IData)(
                                                    vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U])))
                                : (((1U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (1U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullIData(oldp+356,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                : (((0U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (0U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullIData(oldp+357,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                : (((1U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (1U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullIData(oldp+358,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                : (((2U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (2U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullIData(oldp+359,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                : (((3U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                    & (3U < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                    ? ((1U & (((~ (vlSelf->Top__DOT__core__DOT__id_reg_ins 
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
    bufp->fullSData(oldp+360,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : (((0U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (0U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+361,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x10U))
                                           : (((1U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (1U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+362,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : (((2U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (2U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+363,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x10U))
                                           : (((3U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (3U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+364,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : (((4U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (4U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+365,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x10U))
                                           : (((5U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (5U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+366,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : (((6U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (6U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullSData(oldp+367,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))
                                           : (((7U 
                                                >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                               & (7U 
                                                  < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                               ? ((1U 
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
    bufp->fullCData(oldp+368,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                         : (((0U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+369,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               >> 8U))
                                         : (((1U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (1U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+370,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               >> 0x10U))
                                         : (((2U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (2U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+371,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                             << 8U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               >> 0x18U))
                                         : (((3U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (3U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+372,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                         : (((4U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (4U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+373,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               >> 8U))
                                         : (((5U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (5U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+374,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               >> 0x10U))
                                         : (((6U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (6U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+375,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                             << 8U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               >> 0x18U))
                                         : (((7U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (7U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullQData(oldp+376,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_3),64);
    bufp->fullCData(oldp+378,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                         : (((8U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (8U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+379,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               >> 8U))
                                         : (((9U >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (9U 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+380,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               >> 0x10U))
                                         : (((0xaU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xaU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+381,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                             << 8U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               >> 0x18U))
                                         : (((0xbU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xbU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+382,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                         : (((0xcU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xcU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+383,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               >> 8U))
                                         : (((0xdU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xdU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+384,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               >> 0x10U))
                                         : (((0xeU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xeU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullCData(oldp+385,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                         ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                             << 8U) 
                                            | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               >> 0x18U))
                                         : (((0xfU 
                                              >= vlSelf->Top__DOT__core__DOT__id_reg_vstart_out) 
                                             & (0xfU 
                                                < vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                             ? ((1U 
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
    bufp->fullQData(oldp+386,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+388,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+390,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(
                                                              vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[0U]))))
                                    : 0xffffffffffffffffULL))),64);
    bufp->fullQData(oldp+392,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(
                                                              vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[1U]))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
    bufp->fullQData(oldp+394,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(
                                                              vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[2U]))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
    bufp->fullQData(oldp+396,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(
                                                              vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs1[3U]))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
    bufp->fullQData(oldp+398,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+400,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+402,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+404,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+406,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+408,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+410,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+412,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+414,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+416,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+418,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+420,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+422,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+424,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+426,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+428,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullWData(oldp+430,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_21),512);
    bufp->fullQData(oldp+446,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+448,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+450,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+452,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+454,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+456,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+458,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+460,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullCData(oldp+462,((7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))),3);
    bufp->fullCData(oldp+463,((7U & ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+464,((1U & ((IData)((0U == (3U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14)))) 
                                   | ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14) 
                                      >> 2U)))));
    bufp->fullBit(oldp+465,((IData)((1U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
    bufp->fullBit(oldp+466,((IData)((2U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
    bufp->fullBit(oldp+467,((IData)((3U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_14))))));
    bufp->fullQData(oldp+468,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax),36);
    bufp->fullSData(oldp+470,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+471,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr_io_i_w_en));
    bufp->fullCData(oldp+472,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1),3);
    bufp->fullBit(oldp+473,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x13U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x73U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((3U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x23U != 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x63U 
                                             != (0x7fU 
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
    bufp->fullBit(oldp+474,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             & ((0x13U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x73U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((3U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & (0x23U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))));
    bufp->fullBit(oldp+475,(((0x57U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             & ((0x27U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & (7U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))))));
    bufp->fullBit(oldp+476,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeEnable));
    bufp->fullCData(oldp+477,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeAddress),5);
    bufp->fullIData(oldp+478,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                ? 0U : ((0x1fU == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                         ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                             ? vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30
                                             : ((0x1dU 
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
    bufp->fullIData(oldp+479,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1),32);
    bufp->fullIData(oldp+480,(((((0x40000000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)
                                  ? 0x1fffffU : 0U) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))),32);
    bufp->fullIData(oldp+481,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__vec_csr__DOT__vtypeReg),32);
    bufp->fullCData(oldp+482,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x1eU)),2);
    bufp->fullCData(oldp+483,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
    bufp->fullCData(oldp+484,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+485,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
    bufp->fullBit(oldp+486,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
    bufp->fullBit(oldp+487,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
    bufp->fullBit(oldp+488,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
    bufp->fullBit(oldp+489,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
    bufp->fullCData(oldp+490,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
    bufp->fullCData(oldp+491,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
    bufp->fullIData(oldp+492,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
    bufp->fullIData(oldp+493,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
    bufp->fullIData(oldp+494,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
    bufp->fullIData(oldp+495,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
    bufp->fullIData(oldp+496,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
    bufp->fullIData(oldp+497,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
    bufp->fullBit(oldp+498,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
    bufp->fullBit(oldp+499,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
    bufp->fullCData(oldp+500,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
    bufp->fullBit(oldp+501,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
    bufp->fullBit(oldp+502,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
    bufp->fullSData(oldp+503,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                          << 3U))),11);
    bufp->fullIData(oldp+504,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                              << 0x11U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                    << 7U) 
                                                   | ((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                      << 3U)))))),32);
    bufp->fullIData(oldp+505,((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U) | 
                                          (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                            << 2U) 
                                           | (((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                               << 1U) 
                                              | (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
    bufp->fullIData(oldp+506,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
    bufp->fullIData(oldp+507,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
    bufp->fullIData(oldp+508,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
    bufp->fullBit(oldp+509,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx));
    bufp->fullBit(oldp+510,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem));
    bufp->fullBit(oldp+511,((((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__hazard_DecMem))));
    bufp->fullBit(oldp+512,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx));
    bufp->fullBit(oldp+513,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem));
    bufp->fullBit(oldp+514,((((((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController__DOT__csrHazard_DecMem))));
    bufp->fullIData(oldp+515,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))),32);
    bufp->fullIData(oldp+516,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+517,((0xfffff000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)),32);
    bufp->fullSData(oldp+518,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+519,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U))))),32);
    bufp->fullSData(oldp+520,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+521,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x7ffffU
                                  : 0U) << 0xdU) | 
                               ((0x1000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x13U)) 
                                | ((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              << 4U)) 
                                   | ((0x7e0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 7U))))))),32);
    bufp->fullIData(oldp+522,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+523,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x7ffU
                                  : 0U) << 0x15U) | 
                               ((0x100000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xbU)) 
                                | ((0xff000U & vlSelf->Top__DOT__core__DOT__if_reg_ins) 
                                   | ((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 9U)) 
                                      | (0x7feU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U))))))),32);
    bufp->fullIData(oldp+524,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_0),32);
    bufp->fullIData(oldp+525,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_1),32);
    bufp->fullIData(oldp+526,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_2),32);
    bufp->fullIData(oldp+527,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_3),32);
    bufp->fullIData(oldp+528,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_4),32);
    bufp->fullIData(oldp+529,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_5),32);
    bufp->fullIData(oldp+530,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_6),32);
    bufp->fullIData(oldp+531,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_7),32);
    bufp->fullIData(oldp+532,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_8),32);
    bufp->fullIData(oldp+533,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_9),32);
    bufp->fullIData(oldp+534,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_10),32);
    bufp->fullIData(oldp+535,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_11),32);
    bufp->fullIData(oldp+536,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_12),32);
    bufp->fullIData(oldp+537,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_13),32);
    bufp->fullIData(oldp+538,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_14),32);
    bufp->fullIData(oldp+539,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_15),32);
    bufp->fullIData(oldp+540,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_16),32);
    bufp->fullIData(oldp+541,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_17),32);
    bufp->fullIData(oldp+542,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_18),32);
    bufp->fullIData(oldp+543,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_19),32);
    bufp->fullIData(oldp+544,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_20),32);
    bufp->fullIData(oldp+545,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_21),32);
    bufp->fullIData(oldp+546,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_22),32);
    bufp->fullIData(oldp+547,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_23),32);
    bufp->fullIData(oldp+548,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_24),32);
    bufp->fullIData(oldp+549,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_25),32);
    bufp->fullIData(oldp+550,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_26),32);
    bufp->fullIData(oldp+551,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_27),32);
    bufp->fullIData(oldp+552,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_28),32);
    bufp->fullIData(oldp+553,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_29),32);
    bufp->fullIData(oldp+554,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_30),32);
    bufp->fullIData(oldp+555,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers__DOT__reg_31),32);
    bufp->fullWData(oldp+556,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_0),128);
    bufp->fullWData(oldp+560,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_1),128);
    bufp->fullWData(oldp+564,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_2),128);
    bufp->fullWData(oldp+568,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_3),128);
    bufp->fullWData(oldp+572,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_4),128);
    bufp->fullWData(oldp+576,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_5),128);
    bufp->fullWData(oldp+580,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_6),128);
    bufp->fullWData(oldp+584,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_7),128);
    bufp->fullWData(oldp+588,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_8),128);
    bufp->fullWData(oldp+592,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_9),128);
    bufp->fullWData(oldp+596,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_10),128);
    bufp->fullWData(oldp+600,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_11),128);
    bufp->fullWData(oldp+604,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_12),128);
    bufp->fullWData(oldp+608,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_13),128);
    bufp->fullWData(oldp+612,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_14),128);
    bufp->fullWData(oldp+616,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_15),128);
    bufp->fullWData(oldp+620,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_16),128);
    bufp->fullWData(oldp+624,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_17),128);
    bufp->fullWData(oldp+628,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_18),128);
    bufp->fullWData(oldp+632,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_19),128);
    bufp->fullWData(oldp+636,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_20),128);
    bufp->fullWData(oldp+640,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_21),128);
    bufp->fullWData(oldp+644,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_22),128);
    bufp->fullWData(oldp+648,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_23),128);
    bufp->fullWData(oldp+652,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_24),128);
    bufp->fullWData(oldp+656,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_25),128);
    bufp->fullWData(oldp+660,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_26),128);
    bufp->fullWData(oldp+664,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_27),128);
    bufp->fullWData(oldp+668,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_28),128);
    bufp->fullWData(oldp+672,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_29),128);
    bufp->fullWData(oldp+676,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_30),128);
    bufp->fullWData(oldp+680,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__register_31),128);
    bufp->fullCData(oldp+684,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs1_in),5);
    bufp->fullCData(oldp+685,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs2_in),5);
    bufp->fullCData(oldp+686,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in),5);
    bufp->fullCData(oldp+687,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vsd_in),5);
    bufp->fullCData(oldp+688,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__v_registers__DOT__vs3_in_1),5);
    bufp->fullCData(oldp+689,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),2);
    bufp->fullCData(oldp+690,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
    bufp->fullCData(oldp+691,((3U & vlSelf->Top__DOT__core__DOT__ex_reg_result)),2);
    bufp->fullCData(oldp+692,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                         & (0U == (0x7000U 
                                                   & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((0U == 
                                             (3U & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                             ? vlSelf->Top__DOT__core__DOT__ex_reg_wd
                                             : ((1U 
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
                                             ? ((0U 
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
    bufp->fullCData(oldp+693,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                         & (0U == (0x7000U 
                                                   & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((0U == 
                                             (3U & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)
                                             : ((1U 
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
                                             ? ((0U 
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
    bufp->fullCData(oldp+694,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                         & (0U == (0x7000U 
                                                   & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((0U == 
                                             (3U & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U)
                                             : ((1U 
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
                                             ? ((0U 
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
    bufp->fullCData(oldp+695,((0xffU & (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_writeEnable) 
                                         & (0U == (0x7000U 
                                                   & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                         ? ((0U == 
                                             (3U & vlSelf->Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)
                                             : ((1U 
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
                                             ? ((0U 
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
    bufp->fullSData(oldp+696,(vlSelf->Top__DOT__core__DOT__MEM__DOT__io_dccmReq_bits_dataRequest_lo),16);
    bufp->fullSData(oldp+697,(vlSelf->Top__DOT__core__DOT__MEM__DOT__io_dccmReq_bits_dataRequest_hi),16);
    bufp->fullIData(oldp+698,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                                ? (((vlSelf->Top__DOT__core__DOT__vlcount 
                                     != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                    & (0x27U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                    ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                        ? (vlSelf->Top__DOT__core__DOT__ex_reg_read_data1 
                                           + vlSelf->Top__DOT__core__DOT__addrcount)
                                        : 0U) : 0U)
                                : vlSelf->Top__DOT__core__DOT__ex_reg_result)),32);
    bufp->fullIData(oldp+699,(((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_v_ins)
                                ? (((vlSelf->Top__DOT__core__DOT__vlcount 
                                     != vlSelf->Top__DOT__core__DOT__ex_reg_vl) 
                                    & (0x27U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))
                                    ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_lsuType))
                                        ? ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                            ? vlSelf->Top__DOT__core__DOT__ex_reg_vec_alu_res[2U]
                                            : ((2U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                                ? vlSelf->Top__DOT__core__DOT__mem_reg_vec_alu_out[2U]
                                                : vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                        : 0U) : 0U)
                                : vlSelf->Top__DOT__core__DOT__ex_reg_wd)),32);
    bufp->fullSData(oldp+700,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
    bufp->fullCData(oldp+701,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
    bufp->fullBit(oldp+702,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    bufp->fullCData(oldp+703,((7U & vlSelf->Top__DOT__core__DOT__vtype)),3);
    bufp->fullCData(oldp+704,((7U & (vlSelf->Top__DOT__core__DOT__vtype 
                                     >> 3U))),3);
    bufp->fullCData(oldp+705,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__sew),7);
    bufp->fullCData(oldp+706,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__lmul),4);
    bufp->fullSData(oldp+707,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                         >> 2U))),13);
    bufp->fullSData(oldp+708,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                         >> 2U))),12);
    bufp->fullSData(oldp+709,((0x7ffU & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                         >> 2U))),13);
    bufp->fullBit(oldp+710,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+711,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+712,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullSData(oldp+713,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
    bufp->fullIData(oldp+714,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullBit(oldp+715,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+716,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+717,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullSData(oldp+718,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),13);
    bufp->fullIData(oldp+719,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullIData(oldp+720,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    bufp->fullIData(oldp+721,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                : vlSelf->Top__DOT__core__DOT___GEN_58)),32);
    bufp->fullBit(oldp+722,((((IData)(vlSelf->Top__DOT__core__DOT__Execute_io_stall) 
                              | (IData)(vlSelf->Top__DOT__core__DOT__IDecode_io_stall)) 
                             | (IData)(vlSelf->Top__DOT__core__DOT__IF_stall))));
    bufp->fullIData(oldp+723,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                   + vlSelf->Top__DOT__core__DOT__IDecode__DOT__immediate_io_out)
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__control_io_jump))
                                    ? ((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                         == (0x1fU 
                                             & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U)))
                                         ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                         : (((0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)) 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                    >> 7U)))
                                             ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                             : (((0x1fU 
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
    bufp->fullBit(oldp+724,(((IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken) 
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
    bufp->fullWData(oldp+725,(__Vtemp_ha96fd0ad__0),128);
    bufp->fullIData(oldp+729,((IData)((VL_LTES_IQQ(36, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax)
                                        ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl
                                        : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__valmax))),32);
    bufp->fullIData(oldp+730,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),32);
    bufp->fullIData(oldp+731,((IData)((0x7fffffffffffffffULL 
                                       & ((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                           ? (QData)((IData)(
                                                             (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                              & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                           : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                               ? (QData)((IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                  | vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                               : ((2U 
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
    bufp->fullIData(oldp+732,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                ? (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                                : ((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)) 
                                     | (3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))) 
                                    | (2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37)))
                                    ? (IData)((vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                                               >> 0x20U))
                                    : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                        ? ((((vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                              >> 0x1fU) 
                                             != (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                 >> 0x1fU)) 
                                            & (0U != vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                            ? (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                            : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                        : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                            ? vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                            : ((6U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                ? (
                                                   (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_37))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend
                                                    : 0U))))))),32);
    bufp->fullIData(oldp+733,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_pc
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT___aluIn1_T_2)),32);
    bufp->fullIData(oldp+734,(((IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
                                ? vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux2
                                : vlSelf->Top__DOT__core__DOT__id_reg_imm)),32);
    bufp->fullIData(oldp+735,((((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                & (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                   >> 0x1fU)) ? (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
    bufp->fullIData(oldp+736,((((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                & (vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                   >> 0x1fU)) ? (- vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
    bufp->fullQData(oldp+737,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                ? (
                                                   (((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U]))) 
                                                   ^ (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                : (
                                                   (0x2bU 
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
    bufp->fullQData(oldp+739,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                ? (
                                                   (((QData)((IData)(
                                                                     vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U]))) 
                                                   ^ (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)))
                                                : (
                                                   (0x2bU 
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
    bufp->fullIData(oldp+741,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                            ? 0xffffffffU
                                            : ((0x5bU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                : (
                                                   (0x2bU 
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
    bufp->fullIData(oldp+742,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                            ? 0xffffffffU
                                            : ((0x5bU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                : (
                                                   (0x2bU 
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
    bufp->fullIData(oldp+743,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                            ? 0xffffffffU
                                            : ((0x5bU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                : (
                                                   (0x2bU 
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
    bufp->fullIData(oldp+744,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                            ? 0xffffffffU
                                            : ((0x5bU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U] 
                                                   ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)
                                                : (
                                                   (0x2bU 
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
    bufp->fullCData(oldp+745,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+746,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+747,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+748,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+749,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+750,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+751,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+752,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+753,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+754,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+755,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+756,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+757,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+758,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+759,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+760,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullSData(oldp+761,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
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
    bufp->fullSData(oldp+762,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
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
    bufp->fullSData(oldp+763,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
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
    bufp->fullSData(oldp+764,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
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
    bufp->fullSData(oldp+765,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
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
    bufp->fullSData(oldp+766,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
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
    bufp->fullSData(oldp+767,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
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
    bufp->fullSData(oldp+768,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
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
    bufp->fullQData(oldp+769,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                ? (
                                                   VL_GTES_IQQ(64, (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
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
                                                : (
                                                   (0x34U 
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
    bufp->fullQData(oldp+771,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                                ? (
                                                   VL_GTES_IQQ(64, (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)), 
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
                                                : (
                                                   (0x34U 
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
    bufp->fullIData(oldp+773,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                            ? 0xffffffffU
                                            : ((0x3cU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[0U])
                                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3324)))
                                    : 0xffffffffU))),32);
    bufp->fullIData(oldp+774,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                            ? 0xffffffffU
                                            : ((0x3cU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[1U])
                                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3396)))
                                    : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                        & (1U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                        : 0xffffffffU)))),32);
    bufp->fullIData(oldp+775,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                            ? 0xffffffffU
                                            : ((0x3cU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[2U])
                                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3468)))
                                    : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                        & (2U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                        : 0xffffffffU)))),32);
    bufp->fullIData(oldp+776,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                            ? 0xffffffffU
                                            : ((0x3cU 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__Vec_aluCtl_io_aluc))
                                                ? (
                                                   VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A, 
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                    ? vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A
                                                    : 
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_vs2[3U])
                                                : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3540)))
                                    : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                        & (3U > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                        ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                        : 0xffffffffU)))),32);
    bufp->fullCData(oldp+777,((0xffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullCData(oldp+778,((0xffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (1U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 0x18U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 8U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+779,((0xffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (2U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x10U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+780,((0xffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (3U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                  << 8U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    >> 0x18U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+781,((0xffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (4U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+782,((0xffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (5U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x18U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 8U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+783,((0xffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (6U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x10U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+784,((0xffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (7U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                  << 8U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    >> 0x18U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+785,((0xffU & ((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (8U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+786,((0xffU & ((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (9U 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 8U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+787,((0xffU & ((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xaU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x10U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+788,((0xffU & ((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xbU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                  << 8U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    >> 0x18U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+789,((0xffU & ((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xcU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+790,((0xffU & ((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xdU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x18U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 8U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+791,((0xffU & ((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xeU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x10U))
                                                 : 0xffU))))),8);
    bufp->fullCData(oldp+792,((0xffU & ((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
                                             : (((~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                 & (0xfU 
                                                    > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                 ? 
                                                ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                  << 8U) 
                                                 | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    >> 0x18U))
                                                 : 0xffU))))),8);
    bufp->fullSData(oldp+793,((0xffffU & ((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
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
    bufp->fullSData(oldp+794,((0xffffU & ((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (1U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+795,((0xffffU & ((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (2U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+796,((0xffffU & ((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (3U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+797,((0xffffU & ((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_573)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_579)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (4U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+798,((0xffffU & ((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_630)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_636)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (5U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+799,((0xffffU & ((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_687)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_693)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (6U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]
                                                   : 0xffffU))))),16);
    bufp->fullSData(oldp+800,((0xffffU & ((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                           ? ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                 >> 0x10U))
                                           : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_744)
                                               ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_750)
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
                                               : ((
                                                   (~ (IData)(vlSelf->Top__DOT__core__DOT__Execute_io_vta)) 
                                                   & (7U 
                                                      > vlSelf->Top__DOT__core__DOT__Execute_io_vl))
                                                   ? 
                                                  ((vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
                                                      >> 0x10U))
                                                   : 0xffffU))))),16);
    bufp->fullQData(oldp+801,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+803,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+805,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                    : 0xffffffffffffffffULL))),64);
    bufp->fullQData(oldp+807,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
    bufp->fullQData(oldp+809,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
    bufp->fullQData(oldp+811,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
    bufp->fullQData(oldp+813,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+815,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+817,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+819,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+821,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+823,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+825,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+827,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullQData(oldp+829,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+831,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+833,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+835,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+837,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+839,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+841,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+843,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+845,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+847,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+849,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+851,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+853,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+855,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+857,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+859,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullQData(oldp+861,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+863,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
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
    bufp->fullQData(oldp+865,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_3)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_9)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_15)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                    : 0xffffffffffffffffULL))),64);
    bufp->fullQData(oldp+867,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_60)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_66)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_72)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5394))),64);
    bufp->fullQData(oldp+869,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_231)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_237)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_243)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5423))),64);
    bufp->fullQData(oldp+871,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_288)
                                    ? ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_294)
                                        ? (QData)((IData)(
                                                          vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U]))
                                        : ((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_300)
                                            ? 0xffffffffffffffffULL
                                            : (QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))))
                                    : vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT___io_v_output_out_T_5452))),64);
    bufp->fullQData(oldp+873,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+875,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+877,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+879,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+881,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+883,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+885,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+887,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+889,(((8U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+891,(((9U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+893,(((0xaU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+895,(((0xbU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+897,(((0xcU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+899,(((0xdU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+901,(((0xeU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffU 
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
    bufp->fullQData(oldp+903,(((0xfU < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullQData(oldp+905,(((0U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+907,(((1U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[0U] 
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
    bufp->fullQData(oldp+909,(((2U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+911,(((3U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[1U] 
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
    bufp->fullQData(oldp+913,(((4U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+915,(((5U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[2U] 
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
    bufp->fullQData(oldp+917,(((6U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((0xffffU 
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
    bufp->fullQData(oldp+919,(((7U < vlSelf->Top__DOT__core__DOT__id_reg_vstart_out)
                                ? (QData)((IData)((
                                                   vlSelf->Top__DOT__core__DOT__id_reg_vs3_data[3U] 
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
    bufp->fullIData(oldp+921,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                             >> 7U)))
                                ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xfU)) 
                                    == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                    : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU)) 
                                        == (0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
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
    bufp->fullBit(oldp+922,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                 == vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                              : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                     != vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                  : ((4U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                      : ((5U == (7U 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2)
                                              : (vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2))))))));
    bufp->fullIData(oldp+923,((vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               | vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
    bufp->fullIData(oldp+924,((vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               & (~ vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
    bufp->fullIData(oldp+925,(((vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
    bufp->fullIData(oldp+926,(vlSelf->Top__DOT__dmem__DOT__sram_rdata_o),32);
    bufp->fullIData(oldp+927,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
    bufp->fullBit(oldp+928,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__csb));
    bufp->fullSData(oldp+929,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__addr_o),12);
    bufp->fullIData(oldp+930,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+931,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+932,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+933,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
    bufp->fullSData(oldp+934,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),12);
    bufp->fullIData(oldp+935,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+936,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+937,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+938,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    bufp->fullIData(oldp+939,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                               >> 2U)),32);
    bufp->fullIData(oldp+940,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
    bufp->fullIData(oldp+941,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
    bufp->fullBit(oldp+942,(vlSelf->Top__DOT__core__DOT__pc_io_halt));
    bufp->fullBit(oldp+943,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                   >> 1U))));
    bufp->fullBit(oldp+944,((1U & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
    bufp->fullSData(oldp+945,((0x1fffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                          >> 2U))),13);
    bufp->fullSData(oldp+946,((0xfffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                         >> 2U))),12);
    bufp->fullSData(oldp+947,((0xfffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                         >> 2U))),13);
    bufp->fullIData(oldp+948,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),32);
    bufp->fullIData(oldp+949,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
    bufp->fullIData(oldp+950,(vlSelf->Top__DOT__core__DOT__IDecode_io_writeData),32);
    bufp->fullIData(oldp+951,(vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult),32);
    bufp->fullIData(oldp+952,(vlSelf->Top__DOT__core__DOT__IDecode_io_readData1),32);
    bufp->fullIData(oldp+953,(vlSelf->Top__DOT__core__DOT__IDecode_io_readData2),32);
    bufp->fullBit(oldp+954,(vlSelf->Top__DOT__core__DOT__IDecode_io_pcSrc));
    bufp->fullIData(oldp+955,((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl)),32);
    bufp->fullIData(oldp+956,(vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o),32);
    bufp->fullCData(oldp+957,(((0xbU == (0x1fU & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                  >> 0x14U)))
                                ? 3U : ((8U == (0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x14U)))
                                         ? 2U : (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                     >> 0x14U)))))),2);
    bufp->fullCData(oldp+958,(((3U == (3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                             >> 0x1aU)))
                                ? 4U : ((2U == (3U 
                                                & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                   >> 0x1aU)))
                                         ? 3U : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                      >> 0x1aU)))
                                                  ? 2U
                                                  : 1U)))),4);
    bufp->fullSData(oldp+959,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__eew),10);
    bufp->fullIData(oldp+960,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
    bufp->fullBit(oldp+961,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                             & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                 ? ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 0xeU))) 
                                    | ((1U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | (3U == (3U 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 0xeU)))))
                                 : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                     ? ((0U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xdU))) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                     : ((2U == (3U 
                                                & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                        & ((0U == (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                           | ((1U == 
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
    bufp->fullIData(oldp+962,(vlSelf->Top__DOT__core__DOT__vlcount1),32);
    bufp->fullIData(oldp+963,(vlSelf->Top__DOT__core__DOT__emul_count),32);
    bufp->fullCData(oldp+964,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o))
                                ? (0x3fU & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                            >> 0x19U))
                                : 0U)),6);
    bufp->fullBit(oldp+965,(vlSelf->Top__DOT__core__DOT__IF_stall));
    bufp->fullIData(oldp+966,(vlSelf->Top__DOT__core__DOT___GEN_42),32);
    bufp->fullIData(oldp+967,((0x2023U | ((0x38000U 
                                           & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              << 8U)) 
                                          | ((0xc00U 
                                              & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                             | (0x200U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 3U)))))),18);
    bufp->fullIData(oldp+968,((0x6fU | ((0x1000000U 
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
    bufp->fullSData(oldp+969,((0x63U | ((0x1000U & 
                                         (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 1U)) | 
                                        ((0xc00U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                         | ((0x300U 
                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                << 5U)) 
                                            | (0x80U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 5U))))))),15);
    bufp->fullIData(oldp+970,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
    bufp->fullIData(oldp+971,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
    bufp->fullIData(oldp+972,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A),32);
    bufp->fullIData(oldp+973,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B),32);
    bufp->fullIData(oldp+974,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config_io_rs1_readdata),32);
    bufp->fullIData(oldp+975,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
    bufp->fullIData(oldp+976,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
    bufp->fullIData(oldp+977,(vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux1),32);
    bufp->fullIData(oldp+978,(vlSelf->Top__DOT__core__DOT__Execute__DOT__inputMux2),32);
    bufp->fullQData(oldp+979,(vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
    bufp->fullQData(oldp+981,((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B))),64);
    bufp->fullCData(oldp+983,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)),8);
    bufp->fullQData(oldp+984,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_6),64);
    bufp->fullSData(oldp+986,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_B)),16);
    bufp->fullQData(oldp+987,((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A))),64);
    bufp->fullCData(oldp+989,((0xffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)),8);
    bufp->fullQData(oldp+990,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_10),64);
    bufp->fullSData(oldp+992,((0xffffU & vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu_io_in_A)),16);
    bufp->fullWData(oldp+993,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_15),512);
    bufp->fullWData(oldp+1009,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_alu__DOT__io_v_output_lo_18),512);
    bufp->fullQData(oldp+1025,(vlSelf->Top__DOT__core__DOT__Execute__DOT__vec_config__DOT__avl),36);
    bufp->fullBit(oldp+1027,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_taken));
    bufp->fullIData(oldp+1028,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_writeData),32);
    bufp->fullIData(oldp+1029,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd1),32);
    bufp->fullIData(oldp+1030,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__bu_io_rd2),32);
    bufp->fullIData(oldp+1031,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
    bufp->fullIData(oldp+1032,(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
    bufp->fullIData(oldp+1033,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),32);
    bufp->fullCData(oldp+1034,((3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                      >> 0x1aU))),2);
    bufp->fullCData(oldp+1035,((0x1fU & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1036,((7U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1037,(vlSelf->Top__DOT__core__DOT__vlsu__DOT__eew),7);
    bufp->fullCData(oldp+1038,(((3U == (3U & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                              >> 0x1aU)))
                                 ? 4U : ((2U == (3U 
                                                 & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                    >> 0x1aU)))
                                          ? 3U : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->Top__DOT__core__DOT__CompressedDecoder_io_instruction_o 
                                                       >> 0x1aU)))
                                                   ? 2U
                                                   : 1U)))),3);
    bufp->fullBit(oldp+1039,(vlSelf->clock));
    bufp->fullBit(oldp+1040,(vlSelf->reset));
    bufp->fullIData(oldp+1041,(vlSelf->io_pin),32);
    bufp->fullWData(oldp+1042,(vlSelf->io_v_pin),128);
    bufp->fullIData(oldp+1046,(vlSelf->io_fcsr),32);
    bufp->fullIData(oldp+1047,(((IData)(vlSelf->Top__DOT__core__DOT__pc_io_halt)
                                 ? vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg
                                 : ((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->fullIData(oldp+1048,(((IData)(vlSelf->Top__DOT__core__DOT__pc_io_halt)
                                 ? vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg
                                 : ((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->fullIData(oldp+1049,(((6U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                 ? vlSelf->Top__DOT__core__DOT__mem_reg_csr_data
                                 : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                     ? vlSelf->Top__DOT__core__DOT__ex_reg_csr_data
                                     : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                         ? vlSelf->Top__DOT__core__DOT__id_reg_csr_data
                                         : ((3U == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                             ? vlSelf->Top__DOT__core__DOT__IDecode_io_writeData
                                             : ((2U 
                                                 == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                 ? 
                                                ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                  ? vlSelf->Top__DOT__dmem__DOT__sram_rdata_o
                                                  : vlSelf->Top__DOT__core__DOT__ex_reg_result)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__IDecode__DOT__csrController_io_forwardRS1))
                                                  ? vlSelf->Top__DOT__core__DOT__Execute_io_ALUresult
                                                  : vlSelf->Top__DOT__core__DOT__IDecode__DOT__registers_io_readData_1))))))),32);
    bufp->fullBit(oldp+1050,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                               & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                  >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__IDecode_io_pcSrc)))));
    bufp->fullBit(oldp+1051,(vlSelf->Top__DOT__dmem__DOT__sram_csb_i));
    bufp->fullBit(oldp+1052,(vlSelf->Top__DOT__dmem__DOT__sram_we_i));
    bufp->fullBit(oldp+1053,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->fullBit(oldp+1054,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
    bufp->fullIData(oldp+1055,(0U),32);
    bufp->fullCData(oldp+1056,(0xfU),4);
    bufp->fullBit(oldp+1057,(0U));
    bufp->fullBit(oldp+1058,(1U));
    bufp->fullIData(oldp+1059,(0U),32);
    bufp->fullCData(oldp+1060,(0x10U),8);
    bufp->fullCData(oldp+1061,(0U),5);
    bufp->fullCData(oldp+1062,(0U),4);
    bufp->fullCData(oldp+1063,(0U),8);
    bufp->fullIData(oldp+1064,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+1065,(4U),32);
    bufp->fullIData(oldp+1066,(0x20U),32);
    bufp->fullIData(oldp+1067,(0xdU),32);
    bufp->fullIData(oldp+1068,(0x2000U),32);
    bufp->fullIData(oldp+1069,(3U),32);
    bufp->fullSData(oldp+1070,(0U),13);
    bufp->fullIData(oldp+1071,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+1072,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullSData(oldp+1073,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
    bufp->fullIData(oldp+1074,(vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i),32);
    __Vtemp_h0a562b7e__0[0U] = 0x2e747874U;
    __Vtemp_h0a562b7e__0[1U] = 0x2f61736dU;
    __Vtemp_h0a562b7e__0[2U] = 0x75697461U;
    __Vtemp_h0a562b7e__0[3U] = 0x2f766171U;
    __Vtemp_h0a562b7e__0[4U] = 0x61697261U;
    __Vtemp_h0a562b7e__0[5U] = 0x6d652f6dU;
    __Vtemp_h0a562b7e__0[6U] = 0x2f686fU;
    bufp->fullWData(oldp+1075,(__Vtemp_h0a562b7e__0),216);
    bufp->fullIData(oldp+1082,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+1083,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+1084,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullSData(oldp+1085,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),13);
    bufp->fullIData(oldp+1086,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
}
