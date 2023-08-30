package rvv

import chisel3._
import chisel3.util._

class top extends Module{
    val io = IO(new Bundle{
        val instruction = Output(UInt(32.W))
        val out = Output(SInt(32.W))
    })
    io.out := 0.S
    val pC_mod = Module(new pC)
    dontTouch(pC_mod.io)
    val dataMem_mod = Module(new dataMemory)
    dontTouch(dataMem_mod.io)
    val instrMem_mod = Module(new instrMem)
    dontTouch(instrMem_mod.io)
    val control_mod = Module(new control)
    dontTouch(control_mod.io)
    val immdGen_mod = Module(new immdValGen)
    dontTouch(immdGen_mod.io)
    val aluControl_mod = Module(new aluControl)
    dontTouch(aluControl_mod.io)
    val alu_mod = Module(new ALU)
    dontTouch(dataMem_mod.io)
    val regFile_mod = Module(new regFile)
    dontTouch(dataMem_mod.io)
    val brControl_mod = Module(new branchControl)
    dontTouch(dataMem_mod.io)
    val jalr_mod = Module(new jalr)
    dontTouch(dataMem_mod.io)
    val vlmax_mod = Module(new Vlmax)
    dontTouch(dataMem_mod.io)
    val csr_mod = Module(new v_csr)
    dontTouch(csr_mod.io)
    val vec_regFile_mod = Module(new vregfile)
    dontTouch(vec_regFile_mod.io)
    
    // PC AND INSTR MEMORY
    instrMem_mod.io.addr := pC_mod.io.out(21, 2).asUInt()
    io.instruction := instrMem_mod.io.instr
    control_mod.io.op_code := io.instruction(6, 0)
    control_mod.io.rs1_addr := io.instruction(19, 15)
    control_mod.io.rd_addr := io.instruction(11, 7)   
    control_mod.io.func3 :=  io.instruction(14, 12)
    
    // IMM GEN
    immdGen_mod.io.instr := io.instruction
    immdGen_mod.io.pc := pC_mod.io.out
    val imm_mux = MuxLookup(control_mod.io.extend_Sel, 0.S, Array(
    ("b00".U) -> immdGen_mod.io.i_imm,
    ("b01".U) -> immdGen_mod.io.s_imm,
    ("b10".U) -> immdGen_mod.io.u_imm,
    ("b11".U) -> immdGen_mod.io.vaddi_imm
    ))

    //CSR
    csr_mod.io.zimm := io.instruction(30, 20)
    csr_mod.io.csr_Write := control_mod.io.csr_write
    
    //VLMAX CALCULATOR
    val lmul = instrMem_mod.io.instr(22, 20)
    val sew = instrMem_mod.io.instr(25, 23)
    vlmax_mod.io.v_lmul := lmul
    vlmax_mod.io.v_sew := sew
    vlmax_mod.io.csr_write := control_mod.io.csr_write
    
    // ALU CONTROL
    aluControl_mod.io.alu_Operation := control_mod.io.alu_Operation
    val func3 = io.instruction(14, 12)
    val func7 = io.instruction(31, 25)
    val func6 = io.instruction(31, 26)
    aluControl_mod.io.func3 := func3
    aluControl_mod.io.func7 := func7
    aluControl_mod.io.func6 := func6
    aluControl_mod.io.is_V := control_mod.io.is_V
    aluControl_mod.io.is_I := control_mod.io.is_I
    
    // REG FILE
    regFile_mod.io.rs1_addr := io.instruction(19, 15)
    regFile_mod.io.rs2_addr := io.instruction(24, 20)
    regFile_mod.io.rd_addr := io.instruction(11, 7)

    // Vector Reg File
    vec_regFile_mod.io.vs1_addr := io.instruction(19, 15)
    vec_regFile_mod.io.vs2_addr := io.instruction(24, 20)
    vec_regFile_mod.io.vd_addr := io.instruction(11, 7)
    // vec_regFile_mod.io.reg_write := control_mod.io.regWrite
    vec_regFile_mod.io.write_data := alu_mod.io.v_out

    // AVL Mux
    val avl_mux = MuxLookup(control_mod.io.avl_sel, 0.U, Array(
    ("b00".U) -> regFile_mod.io.rs1.asUInt(),
    ("b01".U) -> "b11111111111111111111111111111111".U,
    ("b10".U) -> csr_mod.io.vl_out,
    ))

    // REG FILE MUX
    val readData1Mux = MuxLookup(control_mod.io.operand_A, 0.S, Array(
    ("b000".U) -> regFile_mod.io.rs1.asSInt(),
    ("b001".U) -> pC_mod.io.pc4.asSInt(),
    ("b010".U) -> pC_mod.io.out.asSInt(),
    ("b011".U) -> regFile_mod.io.rs1.asSInt(),
    ("b100".U) -> avl_mux.asSInt(),
    ))

    val v_readData1Mux = MuxLookup(control_mod.io.v_operand_A, DontCare, Array(
        ("b00".U) -> vec_regFile_mod.io.vs1_data.asSInt()
    ))

    val readData2Mux = MuxLookup(control_mod.io.operand_B, DontCare, Array(
        ("b00".U) -> regFile_mod.io.rs2,
        ("b01".U) -> imm_mux,
        ("b10".U) -> vlmax_mod.io.vlmax,
        ("b11".U) -> DontCare
    ))

    val v_readData2Mux = MuxLookup(control_mod.io.v_operand_A, DontCare, Array(
        ("b00".U) -> vec_regFile_mod.io.vs2_data.asSInt()
        // ("b01".U) -> imm_mu
    ))
    
    // ALU AND BRANCH
    alu_mod.io.in_A := readData1Mux
    alu_mod.io.in_B := readData2Mux
    alu_mod.io.alu_op := aluControl_mod.io.out
    brControl_mod.io.in_A := readData1Mux
    brControl_mod.io.in_B := readData2Mux
    brControl_mod.io.br_Op := aluControl_mod.io.out
    alu_mod.io.in_V := aluControl_mod.io.out_V
    // alu_mod.io.in_I := aluControl_mod.io.out_I
    alu_mod.io.in_vA := v_readData1Mux
    alu_mod.io.in_vB := v_readData2Mux
    alu_mod.io.sew := csr_mod.io.v_settings(5, 3)
    
    // DATA MEMORY           
    dataMem_mod.io.rdAddr := alu_mod.io.out(11, 2)
    dataMem_mod.io.dataIn := regFile_mod.io.rs2.asSInt()
    dataMem_mod.io.writeData := control_mod.io.memWrite
    dataMem_mod.io.readData := control_mod.io.memRead

    val dataMem_mux = Mux(control_mod.io.memToReg.asBool(), dataMem_mod.io.dataOut, alu_mod.io.out.asSInt())
    regFile_mod.io.writeData := dataMem_mux
    csr_mod.io.vl_writeback := dataMem_mux.asUInt()

    val branch_and = control_mod.io.branch & brControl_mod.io.branch_out.asBool()
    jalr_mod.io.rs1 := regFile_mod.io.rs1.asUInt()
    jalr_mod.io.imm := imm_mux.asUInt()
    val branchMux = Mux(branch_and.asBool(), immdGen_mod.io.sb_imm, pC_mod.io.pc4)
    val pc_mux = MuxLookup(control_mod.io.nextPc_Sel, 0.S, Array(
    ("b00".U) -> pC_mod.io.pc4,
    ("b01".U) -> branchMux,
    ("b10".U) -> immdGen_mod.io.uj_imm,
    ("b11".U) -> jalr_mod.io.pcVal.asSInt()
    ))
    pC_mod.io.in := pc_mux
    io.out := regFile_mod.io.rs1
}