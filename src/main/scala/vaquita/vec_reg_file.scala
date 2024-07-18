package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vregfile(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val vs1_addr = Input(UInt(5.W))
    val vs2_addr = Input(UInt(5.W))
    val vd_addr = Input(UInt(5.W))
    val vd_data = Input(SInt(config.vlen.W))
    val reg_write = Input(Bool())
    val vs1_data = Output(SInt(config.vlen.W))
    val vs2_data = Output(SInt(config.vlen.W))
    val vs0_data = Output (SInt(config.vlen.W))

  })

  val register = RegInit(VecInit(Seq.fill(config.reg_count)(0.S(config.vlen.W))))

io.vs1_data := register(io.vs1_addr)
io.vs2_data := register(io.vs2_addr)
io.vs0_data := register(0.U)

  when (io.reg_write) {
      register(io.vd_addr) := io.vd_data
  }
}