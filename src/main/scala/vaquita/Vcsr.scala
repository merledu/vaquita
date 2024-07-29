package vaquita
import chisel3._
import chisel3.util._

class Vcsr extends Module {
    val io = IO (new Bundle{
        val vtype_input = Input (UInt (11.W ))            
        // val vl = Input(SInt(32.W))
        val vec_config = Input(Bool())
        // val vl_out = Output(SInt(32.W))
        val vtype_out = Output(UInt(32.W))
        // val vstart_out =Output(SInt(32.W))
})
val vtypeReg = RegInit(16.U(32.W))
val vlReg = RegInit(0.S(32.W))
val vstart = RegInit(0.S(32.W))

when (io.vec_config === 1.B) {         
    vtypeReg := Cat(Fill(20, 0.U), io.vtype_input)   //update 'vtype csr' with  vtype encoding, only when there is configuration setting instruction.
    // vlReg := io.vl           //update 'vlReg' with 'io.vl_writeback', only when there is vsetvli instruction.
}

// io.vl_out := vlReg
io.vtype_out := vtypeReg
// io.vstart_out := vstart
}