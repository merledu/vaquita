package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class instr_status_table_test extends FreeSpec with ChiselScalatestTester {
  "stages test" in {
    test(new PriorityQueue) { c =>
      // Initialize
      c.io.enq.valid.poke(false.B)
      c.io.deq.ready.poke(false.B)
      c.clock.step(1)

      // Enqueue element 1
      c.io.enq.bits.poke(10.U)
      c.io.enq.valid.poke(true.B)
      c.io.deq.ready.poke(false.B)
      c.clock.step(1)
      c.io.enq.valid.poke(false.B)

      // Enqueue element 2
      c.io.enq.bits.poke(20.U)
      c.io.enq.valid.poke(true.B)
      c.clock.step(1)
      c.io.enq.valid.poke(false.B)

      // Dequeue element 1
      c.io.deq.ready.poke(true.B)
      c.clock.step(1)
      // c.io.deq.valid.expect(true.B)
      // c.io.deq.bits.expect(10.U)
      c.io.deq.ready.poke(false.B)

      // Dequeue element 2
      c.clock.step(1)
      // c.io.deq.valid.expect(true.B)
      // c.io.deq.bits.expect(20.U)
      c.io.deq.ready.poke(false.B)
    }
  }

//   it should "handle wrap-around correctly" in {
//     test(new PriorityQueue) { c =>
//       val queueSize = 16

//       // Enqueue elements until the queue is full
//       for (i <- 0 until queueSize) {
//         c.io.enq.bits.poke((i * 10).U)
//         c.io.enq.valid.poke(true.B)
//         c.io.deq.ready.poke(false.B)
//         c.clock.step(1)
//       }

//       // Ensure the queue is full and enqueuing more elements is not allowed
//       c.io.enq.valid.poke(true.B)
//       c.io.enq.ready.expect(false.B)
//       c.io.enq.valid.poke(false.B)

//       // Dequeue all elements
//       for (i <- 0 until queueSize) {
//         c.io.deq.ready.poke(true.B)
//         c.clock.step(1)
//         c.io.deq.valid.expect(true.B)
//         c.io.deq.bits.expect((i * 10).U)
//       }

//       // Ensure the queue is empty and dequeuing more elements is not allowed
//       c.io.deq.ready.poke(true.B)
//       c.io.deq.valid.expect(false.B)
//     }
//   }
}
