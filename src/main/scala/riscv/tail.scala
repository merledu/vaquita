package riscv
import chisel3 . _
import chisel3 . util . _
import chisel3.util.experimental.loadMemoryFromFile
class tail extends Module {
    val io = IO(new Bundle{
        val vd_in =Input(UInt(128.W)) //use for tail undisturbed
        val sew = Input(UInt(3.W))
        val vec_tail = Input(Bool())
        val vl = Input(UInt(2.W))
        val vd_out = Output(UInt(128.W))
        val comp = Output(UInt(32.W))
    })
    when(io.sew==="b010".U){
        when (io.vec_tail===1.B){ //tail agnostic
            when(io.vl===1.U){
                io.vd_out := Cat(Fill(96,1.U),io.vd_in(31,0))
                io.comp := 1.U
            }
            .elsewhen(io.vl===2.U){
                io.vd_out := Cat(Fill(64,1.U),io.vd_in(63,0))
                io.comp := 2.U
            }
            .elsewhen(io.vl===3.U){
                io.vd_out := Cat(Fill(32,1.U),io.vd_in(95,0))
                io.comp := 3.U
            }
            .otherwise{
                io.vd_out := io.vd_in
                io.comp := 4.U
            }
        }
        .otherwise{
            io.vd_out := 0.U
            io.comp := 0.U
        }
    }
    .otherwise{
        io.vd_out := 0.U
        io.comp := 0.U
    }

}