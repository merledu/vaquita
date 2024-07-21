package vaquita
import chisel3._
import chisel3.util._

class instr_status_table(width: Int, depth: Int) extends Module {
  val io = IO(new Bundle {
    val writeEn = Input(Bool())
    val writeData = Input(UInt(width.W))
    val readEn = Input(Bool())
    val readData = Output(UInt(width.W))
    val empty = Output(Bool())
    val full = Output(Bool())
  })

  val buffer = Reg(Vec(depth, UInt(width.W)))
  val writePtr = RegInit(0.U(log2Ceil(depth).W))
  val readPtr = RegInit(0.U(log2Ceil(depth).W))
  val count = RegInit(0.U(log2Ceil(depth + 1).W))

  io.empty := (count === 0.U)
  io.full := (count === depth.U)
  io.readData := 0.U

  when(io.writeEn && !io.full) {
    buffer(writePtr) := io.writeData
    writePtr := writePtr + 1.U 
    count := count + 1.U
  }
  when(io.readEn && !io.empty) {
    io.readData := buffer(readPtr)
    readPtr := readPtr + 1.U
    count := count - 1.U
  }
}