package Vpractice

import chisel3._
import chisel3.util._

class V_Csr extends Module {
    val io = IO (new Bundle{
        val Vtype_inst = Input ( UInt (11.W ) )                //In vtype 9 bits, but 2 reserved.
        val vl_writeback = Input ( UInt (32.W) )
        // val vl = Input (UInt (32.W) )
        val vl_out = Output ( UInt(32.W) )

})

                                    
val vtype_encod = Cat(Fill(20, 0.U), io.Vtype_inst)       

val vtypeReg = RegInit(vtype_encod)
val vlReg = RegInit(io.vl_writeback)

// vlReg := io.vl_writeback 

io.vl_out := vlReg
}