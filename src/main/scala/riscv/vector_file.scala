package riscv
import chisel3 . _
import chisel3 . util . _
class vector_file extends Module {
    val io = IO(new Bundle{
        // val instr = Input(UInt(32.W))
        val vs1_in = Input(UInt(5.W))
        val vs2_in = Input(UInt(5.W))
        val vd = Input(UInt(5.W))
        val vec_enable = Input(Bool())
        val vec_store = Input(Bool())
        val vec_data = Input(UInt(128.W))
        val vs1_out = Output(UInt(128.W))
        val vs2_out = Output(UInt(128.W))
    })
    val regs = RegInit(VecInit(Seq.fill(32)(0.U(128.W))))
    when (io.vec_store===1.B){
        io.vs1_out := Mux((io.vd.orR),regs(io.vd),0.U)
    }.otherwise{
        io.vs1_out := Mux((io.vs1_in.orR),regs(io.vs1_in),0.U)
    }
    
    io.vs2_out := Mux((io.vs2_in.orR),regs(io.vs2_in),0.U)
    when (io.vec_enable & io.vd.orR){
        regs(io.vd):= io.vec_data
    }
}