package riscv
import chisel3 . _
import chisel3 . util . _
import chisel3.util.experimental.loadMemoryFromFile
class tail extends Module {
    val io = IO(new Bundle{
        val vd_in =Input(UInt(128.W)) //use for tail undisturbed
        val sew = Input(UInt(3.W))
        val vec_tail = Input(Bool())
        val vl = Input(UInt(32.W))
        val vd_out = Output(UInt(128.W))
        val vec_0_in = Input(UInt(128.W))
        val vec_0_out = Output(UInt(128.W))
        val lmul_count = Input(UInt(32.W))
        val opcode = Input(UInt(7.W))
        val comp = Output(UInt(32.W))
    })
    val tail_count = RegInit(0.S(32.W))
    tail_count := io.vl.asSInt
    

    when(io.sew==="b010".U){
        when (io.vec_tail===1.B && io.opcode==="b1010111".U){ //tail agnostic
         
            when(tail_count===1.S){
                io.vd_out := Cat(Fill(96,1.U),io.vd_in(31,0))
                io.comp := 1.U
                tail_count := io.vl.asSInt
            }
            .elsewhen(tail_count===2.S){
                io.vd_out := Cat(Fill(64,1.U),io.vd_in(63,0))
                io.comp := 2.U
                tail_count := io.vl.asSInt
            }
            .elsewhen(tail_count===3.S){
                io.vd_out := Cat(Fill(32,1.U),io.vd_in(95,0))
                io.comp := 3.U
                tail_count := io.vl.asSInt
            }
            .elsewhen(tail_count%4.S===0.S){ 
                io.vd_out := Mux(io.vl===4.U,Fill(128,1.U),Mux(io.vl===8.U,Fill(128,1.U),Mux(io.vl===12.U,Fill(128,1.U),io.vd_in)))
                io.comp := 0.U
                tail_count :=  io.vl.asSInt
            }
            .elsewhen(tail_count>4.S){
                io.vd_out := io.vd_in
                io.comp := 0.U
                tail_count := Mux(io.vl+4.U<io.lmul_count*4.U,io.vl.asSInt,tail_count -4.S)
            }
            .elsewhen(tail_count < 0.S){
                io.vd_out := Fill(128,1.U)
                io.comp := 7.U // when working on complete vector register is done(according to vl setting) so not perform arithmatic operation on remaining vector register
                tail_count := io.vl.asSInt
            }
            .otherwise{
                io.vd_out :=io.vd_in
                io.comp := io.vl
                tail_count := 0.S
            }
            dontTouch(tail_count)
        }
        .otherwise{
            io.vd_out := io.vd_in
            io.comp := 0.U
        }
    }
    .otherwise{
        io.vd_out := 0.U
        io.comp := io.vl
    }
    //for group masking
    when(io.sew === "b010".U){
        when(io.lmul_count ===1.U){
            io.vec_0_out := io.vec_0_in >> 4.U
        }
        .elsewhen(io.lmul_count ===2.U){
            io.vec_0_out := io.vec_0_in >> 8.U
        }
        .elsewhen(io.lmul_count ===3.U){
            io.vec_0_out := io.vec_0_in >> 12.U
        }
        .elsewhen(io.lmul_count ===4.U){
            io.vec_0_out := io.vec_0_in >> 16.U
        }
        .elsewhen(io.lmul_count ===5.U){
            io.vec_0_out := io.vec_0_in >> 20.U
        }
        .elsewhen(io.lmul_count ===6.U){
            io.vec_0_out := io.vec_0_in >> 24.U
        }
        .elsewhen(io.lmul_count ===7.U){
            io.vec_0_out := io.vec_0_in >> 28.U
        }
        .otherwise{
            io.vec_0_out := io.vec_0_in
        }
    }
    .otherwise{
            io.vec_0_out := io.vec_0_in
        }
}