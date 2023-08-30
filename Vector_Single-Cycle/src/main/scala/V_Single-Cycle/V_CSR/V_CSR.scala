package Vpractice

import chisel3._
import chisel3.util._

class V_Csr extends Module {
    val io = IO (new Bundle{
        val Vtype_inst = Input ( UInt (11.W ) )                //In vtype 9 bits, but 2 reserved.
        val vl_writeback = Input ( UInt (32.W) )
        val csr_regWrite = Input ( Bool() )
        val vl_out = Output ( UInt(32.W) )
        val vtype_out = Output ( UInt(32.W) )

})
                                 
val vtype_encod = Cat(Fill(21, 0.U), io.Vtype_inst)       

val vtypeReg = RegInit(0.U(32.W))

when (io.csr_regWrite === 1.B) {
    vtypeReg := vtype_encod
}

val vlReg = RegInit(0.U(32.W))
vlReg := io.vl_writeback

io.vl_out := vlReg
io.vtype_out := vtypeReg
}