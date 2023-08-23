package singlecycle
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum
class Vect_load extends Module {
    val io = IO (new Bundle {
        val Instruction= Input ( UInt (32. W ) )
        val rs1 = Output( UInt (4. W ))
        val rs2 = Output( UInt (4. W ))
        val vs2 = Output( UInt (4. W ))
        val vs3 = Output( UInt (4. W ))
        val vm = Output( UInt (1. W ))
        val width = Output( UInt (2. W ))
        val mew = Output( UInt (1. W ))
        val mop = Output( UInt (2. W ))
        val nf = Output( UInt (2. W ))
        val lumop = Output( UInt (4. W ))
    
    })
    
    
}