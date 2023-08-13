package riscv
import chisel3 . _
import chisel3 . util . _
class immediate_instruction extends Module {
    val io = IO(new Bundle{
        val i_instruction = Input(UInt(32.W))
        val out = Output(SInt(32.W))
        val pc_in = Input(UInt(32.W))
        val out_j_b = Output(SInt(32.W))
        // val u_out = Output(SInt(32.W))
        // val j_out = Output(SInt(32.W))
    })
    val op_code = io.i_instruction(6,0)


    // i type                           jalr                         lw
    when (op_code==="b0010011".U || op_code==="b1100111".U || op_code==="b0000011".U){
        io.out := io.i_instruction(31,20).asSInt
        io.out_j_b := 0.S
    }
    //s type
    .elsewhen(op_code==="b0100011".U){
        io.out := (Cat(io.i_instruction(31,25),io.i_instruction(11,7))).asSInt
        io.out_j_b := 0.S
    }
    //b type
    .elsewhen(op_code==="b1100011".U){
        val b = Cat(io.i_instruction(31),io.i_instruction(7),io.i_instruction(30,25),io.i_instruction(11,8),"b0".U).asSInt
        io.out_j_b := b + io.pc_in.asSInt
        io.out := 0.S
    }
    //u type
    .elsewhen(op_code==="b0110111".U){
        io.out := (Cat(io.i_instruction(31,12),"b00000000000".U)).asSInt
        io.out_j_b := 0.S
    }
    //j type
    .elsewhen(op_code==="b1101111".U){
        val a = Cat(io.i_instruction(31),io.i_instruction(19,12),io.i_instruction(20),io.i_instruction(30,21),0.U)
        io.out_j_b := a.asSInt + io.pc_in.asSInt
        io.out := 0.S
    }
    .otherwise{
        io.out := 0.S
        io.out_j_b := 0.S
    }
    // io.u_out := Cat(io.i_instruction(31,12),"b00000000000".U)
    // io.j_out := (Cat(io.i_instruction(31),io.i_instruction(19,12),io.i_instruction(20),io.i_instruction(30,21)))
}