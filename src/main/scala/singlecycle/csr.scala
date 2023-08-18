package singlecycle
import chisel3._
import chisel3.util._

class v_csr extends Module {
    val io = IO (new Bundle{
        val zimm = Input(UInt(11.W))                //In vtype 9 bits, but 2 reserved.
        // val vl_writeback = Input(UInt(32.W))
        // val vl = Input(UInt(32.W))
        val vl_out = Output(UInt(32.W))
    })                                    
    val vtype_encod = Cat(Fill(20, 0.U), io.zimm)

    val vtypeReg = RegInit(vtype_encod)
    val vlReg = RegInit(1.U(32.W))

// vlReg := io.vl 

    io.vl_out := vlReg
}