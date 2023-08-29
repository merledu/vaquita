package singlecycle
import chisel3 . _
import chisel3 . util . _
import chisel3.util.experimental.loadMemoryFromFile
import scala.io.Source
class InstMem extends Module {
  val io = IO (new Bundle {
    val addr = Input ( UInt ( 10 . W ) )
    val inst = Output ( UInt ( 32 . W ) )
    }
  )

val imemm = Mem ( 1024 , UInt ( 32 . W ) )

loadMemoryFromFile (imemm,"/home/hamna/Arsh-SingleCycleCore/src/main/scala/singlecycle/abc.txt")
io.inst := imemm.read(io.addr)
}
