package Vpractice

import chisel3._
import chisel3.util._

class DataMem ( ) extends Module {
    val io = IO (new Bundle {
        val addr = Input ( UInt (32.W ) )
        val dataIn = Input ( SInt (32.W ) )
        val mem_read = Input ( Bool () )
        val mem_write = Input ( Bool () )
        val dataOut = Output ( SInt ( 32.W ) )
})
val imem1 = Mem ( 1024 , SInt ( 32.W ) )

io.dataOut := 0.S

when ( io.mem_write === 1.B) {
    imem1.write ( io.addr , io.dataIn )

}
when ( io.mem_read === 1.B ) {
    io.dataOut := imem1.read ( io.addr )

}
}

