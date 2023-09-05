package Vpractice

import chisel3._
import chisel3.util._

class V_Csr extends Module {
    val io = IO (new Bundle{
        val Vtype_inst = Input ( UInt (11.W ) )             //In vtype 9 bits used, but 2 reserved.
        val vl_writeback = Input ( UInt (32.W) )
        val csr_regWrite = Input ( Bool() )
        val vlcsr_regWrite = Input (Bool() )
        val vl_out = Output ( UInt(32.W) )
        val vtype_out = Output ( UInt(32.W) )

})
                                 
val vtype_encod = Cat(Fill(21, 0.U), io.Vtype_inst)      // Concatenate zeros with the input 'Vtype_inst' to extend it to 32 bits.   

val vtypeReg = RegInit(0.U(32.W))       // Initialize a register 'vtypeReg' for storing 'vtype_encod'

when (io.csr_regWrite === 1.B) {        // When 'csr_regWrite' is asserted, update 'vtypeReg' with 'vtype_encod, only when there is vsetvli instruction.
    vtypeReg := vtype_encod
}

val vlReg = RegInit(0.U(32.W))          // Initialize a register 'vlReg' for storing 'io.vl_writeback'.

when (io.vlcsr_regWrite === 1.B) {      // When 'vlcsr_regWrite' is asserted, update 'vlReg' with 'io.vl_writeback', only when there is vsetvli instruction.
    vlReg := io.vl_writeback
}

io.vl_out := vlReg
io.vtype_out := vtypeReg
}