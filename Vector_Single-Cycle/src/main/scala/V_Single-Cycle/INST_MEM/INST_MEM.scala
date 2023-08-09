package Vpractice

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile
import scala.io.Source

trait Config{
    val WLEN = 32
    val INST_MEM_LEN = 1024
}
class InstMem1 ( initFile : String ) extends Module with Config {
    val io = IO (new Bundle {
        val addr = Input ( UInt ( WLEN.W ) )
        val data = Output ( UInt ( WLEN.W ) )
})
val imem = Mem ( INST_MEM_LEN , UInt ( WLEN.W ) )

loadMemoryFromFile ( imem , initFile )
io.data := imem ( io.addr )
}
