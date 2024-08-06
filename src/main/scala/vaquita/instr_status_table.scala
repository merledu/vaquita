package vaquita
import chisel3._
import chisel3.util._

class PriorityQueue extends Module {
  val io = IO(new Bundle {
    val enq = Flipped(Decoupled(UInt(32.W))) // Enqueue interface
    val deq = Decoupled(UInt(32.W))          // Dequeue interface
  })

  // Define the size of the queue
  val queueSize = 16
  val queue = Reg(Vec(queueSize, UInt(32.W))) // Queue storage
  val insertPos = RegInit(0.U(log2Ceil(queueSize).W)) // Position to insert next element
  val deqPos = RegInit(0.U(log2Ceil(queueSize).W))    // Position to dequeue next element

  // Enqueue logic
  when(io.enq.fire()) {
    queue(insertPos) := io.enq.bits
    insertPos := Mux(insertPos === (queueSize - 1).U, 0.U, insertPos + 1.U)
  }

  // Dequeue logic
  val isEmpty = insertPos === deqPos
  io.deq.valid := !isEmpty
  io.deq.bits := queue(deqPos)

  when(io.deq.fire() && !isEmpty) {
    deqPos := Mux(deqPos === (queueSize - 1).U, 0.U, deqPos + 1.U)
  }

  // Handshaking signals
  io.enq.ready := insertPos =/= deqPos || !io.deq.valid // Ensure queue is not full
}