package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.stage.ChiselStage


class lanes_divider(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val vs1_addr = Input(UInt(5.W))
  })
  def lanesDivider(a:UInt):UInt{
    
  }

}