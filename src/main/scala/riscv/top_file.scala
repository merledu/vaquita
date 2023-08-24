package riscv
import chisel3 . _
import chisel3 . util . _
class top_file extends Module {
    val io = IO(new Bundle{
    //val out =Output(UInt(32.W))
    })
    val pc_module = Module(new pc_counter_plus_4)
    dontTouch(pc_module.io)
    val alu_control_module = Module(new alu_control)
    dontTouch(alu_control_module.io)
    val alu_module = Module(new alu)
    dontTouch(alu_module.io)
    val control_unit_module = Module(new control_unit)
    dontTouch(control_unit_module.io)
    val immediate_module = Module(new immediate_instruction)
    dontTouch(immediate_module.io)
    val instr_module = Module(new instr_memory)
    dontTouch(instr_module.io)
    val register_file_module = Module(new register_file)
    dontTouch(register_file_module.io)
    val s_memory_module = Module(new s_memory)
    dontTouch(s_memory_module.io)
    val vlsu_module = Module(new vlsu)
    dontTouch(vlsu_module.io)
    val vector_file_module = Module(new vector_file)
    dontTouch(vector_file_module.io)
    val vec_csr_module = Module(new vec_csr)
    dontTouch(vec_csr_module.io)

    
    instr_module.io.address := pc_module.io.out >> 2.U
    control_unit_module.io.op_code := instr_module.io.r_data(7,0)
    control_unit_module.io.rs1 := instr_module.io.r_data(19,15)
    control_unit_module.io.rd := instr_module.io.r_data(11,7)
    control_unit_module.io.fn3 := instr_module.io.r_data(14,12)

    vec_csr_module.io.instr := instr_module.io.r_data


    register_file_module.io.rs1_in := instr_module.io.r_data(19,15)
    register_file_module.io.rs2_in := instr_module.io.r_data(24,20)

    vector_file_module.io.vs1_in := instr_module.io.r_data(19,15)
    vector_file_module.io.vs2_in := instr_module.io.r_data(24,20)

    vlsu_module.io.vlmul := vec_csr_module.io.vlmul
    vlsu_module.io.vsew := vec_csr_module.io.vsew

    vlsu_module.io.opcode := instr_module.io.r_data(7,0)
    vlsu_module.io.mew := instr_module.io.r_data(28)
    vlsu_module.io.width_lw := instr_module.io.r_data(14,12)

    immediate_module.io.i_instruction := instr_module.io.r_data

    alu_control_module.io.op_code := instr_module.io.r_data(7,0)
    alu_control_module.io.fn3 := instr_module.io.r_data(14,12)
    alu_control_module.io.fn7 := instr_module.io.r_data(30)
    alu_control_module.io.lumop := instr_module.io.r_data(24,20)

    immediate_module.io.pc_in := pc_module.io.out

    alu_module.io.a := MuxLookup(control_unit_module.io.operand_a,0.S,Array(
        (0.U) -> register_file_module.io.rs1_out.asSInt,
        (1.U) -> pc_module.io.out4.asSInt,
        (2.U) -> pc_module.io.out.asSInt,
        (3.U) -> register_file_module.io.rs1_out.asSInt
        // (4.U) -> vector_file_module.io.vs1_out.asSInt
        )
    )

       //Mux(control_unit_module.io.operand_a,immediate_module.io.out,register_file_module.io.rs2_out.asSInt)
    alu_module.io.b := MuxLookup(control_unit_module.io.operand_b,0.S,Array(
        (0.U) -> register_file_module.io.rs2_out.asSInt,
        (1.U) -> immediate_module.io.out,
        (2.U) -> vlsu_module.io.out.asSInt
        // (4.U) -> vector_file_module.io.vs2_out.asSInt)
        )
    )

    alu_module.io.vs1 := MuxLookup(control_unit_module.io.vec_operand_a,0.U,Array(
        (1.U) -> vector_file_module.io.vs1_out,
        (0.U) -> 0.U)
    )

    alu_module.io.vs2 := MuxLookup(control_unit_module.io.vec_operand_b,0.U,Array(
        (1.U) -> vector_file_module.io.vs2_out,
        (0.U) -> 0.U)
    )
    

    alu_module.io.alu := alu_control_module.io.out

    s_memory_module.io.vec_addr := alu_module.io.vec_out
    s_memory_module.io.addr := alu_module.io.out.asUInt

    s_memory_module.io.mem_data := register_file_module.io.rs2_out.asSInt
    s_memory_module.io.vec_datain := vector_file_module.io.vs1_out

    s_memory_module.io.w_enable := control_unit_module.io.mem_write
    s_memory_module.io.vec_en := control_unit_module.io.vector

    s_memory_module.io.r_enable := control_unit_module.io.mem_read
    s_memory_module.io.stall := control_unit_module.io.stall_true


    alu_module.io.sew := vec_csr_module.io.vsew
    alu_module.io.vec := control_unit_module.io.vector

    // register_file_module.io. reg_enable := control_unit_module.io.reg_write
    //val a = Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout,alu_module.io.out)
    // register_file_module.io.reg_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout,alu_module.io.out)).asSInt
    //dontTouch(a)
    //register 
    register_file_module.io.rd := instr_module.io.r_data(11,7)
    register_file_module.io. reg_enable := control_unit_module.io.reg_write
    //vector
    vector_file_module.io.vd := instr_module.io.r_data(11,7)
    vector_file_module.io. vec_enable := control_unit_module.io.vec_write
    vector_file_module.io. vec_store := control_unit_module.io.vec_store


    register_file_module.io.reg_data := MuxLookup(control_unit_module.io.mem_data_sel,0.S,Array(
        (0.U) -> alu_module.io.out,
        (1.U) -> s_memory_module.io.dataout)
        // (2.U) -> Cat(s_memory_module.io.dataout(0),s_memory_module.io.dataout(1)).asSInt)
    )

    vector_file_module.io.vec_data := MuxLookup(control_unit_module.io.mem_data_sel,0.U,Array(
        (3.U) -> alu_module.io.vec_out,
        (2.U) -> s_memory_module.io.vec_dataout)
    )
    // register_file_module.io.reg_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout(0),alu_module.io.out)).asSInt

    // vector_file_module.io.vec_data := (Mux(control_unit_module.io.vec_write,Cat(s_memory_module.io.dataout(0),s_memory_module.io.dataout(1)).asSInt,alu_module.io.out)).asSInt
    // vector_file_module.io.vec_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout(1),alu_module.io.out)).asSInt
    // vector_file_module.io.vec_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout,alu_module.io.out)).asSInt
    // vector_file_module.io.vec_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout,alu_module.io.out)).asSInt


    // vec_ls_count_module.io.pc_in := pc_module.io.out
    // vec_ls_count_module.io.count := immediate_module.io.stall


    immediate_module.io.stall_in := control_unit_module.io.stall_true

    // control_unit_module.io.stall := vec_ls_count_module.io.stall_count

    val logically_end = alu_module.io.branch && control_unit_module.io.branch

    val mux1 = Mux(logically_end,immediate_module.io.out_j_b,pc_module.io.out4.asSInt)
    val plus = immediate_module.io.out + register_file_module.io.rs1_out

    val nextPC = MuxLookup(control_unit_module.io.next_pc_selector,0.U,Array(
        (0.U) -> pc_module.io.out4,
        (1.U) -> mux1.asUInt,
        (2.U) -> immediate_module.io.out_j_b.asUInt,
        (3.U) -> plus.asUInt,
        (4.U) -> (pc_module.io.out))
    )
    pc_module.io.pc := nextPC
    // register_file_module.io.rd := instr_module.io.r_data(11,7)
    // register_file_module.io. reg_enable := control_unit_module.io.reg_write
    // register_file_module.io.reg_data := (Mux(control_unit_module.io.mem_data_sel,s_memory_module.io.dataout,alu_module.io.out)).asSInt
}
