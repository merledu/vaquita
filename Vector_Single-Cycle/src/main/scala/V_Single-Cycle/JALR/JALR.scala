package Vpractice

import chisel3._
import chisel3.util._

class Jalr ( ) extends Module {
    val io = IO (new Bundle {
        val imme = Input ( UInt (32.W ) )
        val rdata1 = Input ( UInt (32.W ) )
        val out = Output ( UInt ( 32.W ) )
})
val a = io.imme + io.rdata1 
val b = "hFFFFFFFE".U & a       // Apply a bitwise AND operation with 0xFFFFFFFE to 'a' and assign it to 'b'.
io.out := b
}






