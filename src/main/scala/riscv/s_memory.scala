package riscv
import chisel3 . _
import chisel3 . util . _
class s_memory extends Module {
    val io = IO(new Bundle{
    val addr = Input(UInt(32.W))
    val vec_addr =Input(UInt(128.W))
    val mem_data = Input(SInt(32.W))
    val  w_enable= Input(Bool())
    val r_enable = Input(Bool())
    val dataout = Output(SInt(32.W))
    val stall = Input(UInt(32.W))
    val vec_dataout = Output(UInt(128.W))
    val vec_datain = Input(UInt(128.W))
    val vec_en =Input(Bool())
    val f3 = Input(UInt(3.W))

    })
//     val mem = Mem (1024,Vec(4,SInt(8.W)))
    val memory = Mem(1024,UInt(32.W))
    val rdata = VecInit(Seq.fill(4)(0.U(32.W)))
    val addr32 = VecInit(Seq.fill(4)(0.U(32.W)))
    val vector_data32 = VecInit(Seq.fill(4)(0.U(32.W)))
    addr32(0) := io.vec_addr(31,0)
    addr32(1) := io.vec_addr(63,32)
    addr32(2) := io.vec_addr(95,64)
    addr32(3) := io.vec_addr(127,96)

    vector_data32(0) := io.vec_datain(31,0)
    vector_data32(1) := io.vec_datain(63,32)
    vector_data32(2) := io.vec_datain(95,64)
    vector_data32(3) := io.vec_datain(127,96)
    dontTouch(vector_data32)
    






//     io.vec_dataout := 0.U
//   val wdata = Wire(Vec(4, SInt(8.W)))
//   val rdata = Wire(Vec(4, SInt(8.W)))
//   val mask = Wire(Vec(4,Bool()))
//   val offsetSW = io.addr(1,0)


//   /* Store 1 byte */
//   when(io.w_enable && io.f3 === "b000".U){
//     when(offsetSW === 0.U){
//       wdata(0) := io.mem_data(7,0).asSInt
//       wdata(1) := io.mem_data(15,8).asSInt
//       wdata(2) := io.mem_data(23,16).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 1.B
//       mask(1)  := 0.B
//       mask(2)  := 0.B
//       mask(3)  := 0.B
//     }.elsewhen(offsetSW === 1.U){
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(7,0).asSInt
//       wdata(2) := io.mem_data(23,16).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 0.B
//       mask(1)  := 1.B
//       mask(2)  := 0.B
//       mask(3)  := 0.B
//     }.elsewhen(offsetSW === 2.U){
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(23,16).asSInt
//       wdata(2) := io.mem_data(7,0).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 0.B
//       mask(1)  := 0.B
//       mask(2)  := 1.B
//       mask(3)  := 0.B
//     }.otherwise{
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(23,16).asSInt
//       wdata(2) := io.mem_data(31,24).asSInt
//       wdata(3) := io.mem_data(7,0).asSInt
//       mask(0)  := 0.B
//       mask(1)  := 0.B
//       mask(2)  := 0.B
//       mask(3)  := 1.B
//     }
//   }
//     /* Store Half Word */
//     .elsewhen(io.w_enable && io.f3 === "b001".U){
//     // offset will either be 0 or 2 since address will be 0x0000 or 0x0002
//     when(offsetSW === 0.U){
//       wdata(0) := io.mem_data(7,0).asSInt
//       wdata(1) := io.mem_data(15,8).asSInt
//       wdata(2) := io.mem_data(23,16).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 1.B
//       mask(1)  := 1.B
//       mask(2)  := 0.B
//       mask(3)  := 0.B
//     }.elsewhen(offsetSW === 1.U){
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(7,0).asSInt
//       wdata(2) := io.mem_data(23,16).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 0.B
//       mask(1)  := 1.B
//       mask(2)  := 1.B
//       mask(3)  := 0.B
//     }.elsewhen(offsetSW === 2.U){
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(23,16).asSInt
//       wdata(2) := io.mem_data(7,0).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 0.B
//       mask(1)  := 0.B
//       mask(2)  := 1.B
//       mask(3)  := 1.B
//     }.otherwise{
//       wdata(0) := io.mem_data(15,8).asSInt
//       wdata(1) := io.mem_data(23,16).asSInt
//       wdata(2) := io.mem_data(31,24).asSInt
//       wdata(3) := io.mem_data(7,0).asSInt
//       mask(0)  := 1.B
//       mask(1)  := 0.B
//       mask(2)  := 0.B
//       mask(3)  := 1.B
//     }
//   }
//     /* Store Word */
//     .otherwise{
//       wdata(0) := io.mem_data(7,0).asSInt
//       wdata(1) := io.mem_data(15,8).asSInt
//       wdata(2) := io.mem_data(23,16).asSInt
//       wdata(3) := io.mem_data(31,24).asSInt
//       mask(0)  := 1.B
//       mask(1)  := 0.B
//       mask(2)  := 0.B
//       mask(3)  := 0.B
//   }
//   mem.write(io.addr,wdata,mask)

//   rdata := mem.read(io.addr.asUInt)
//   io.dataout := Cat(Fill(24, rdata(1)(7)),rdata(0)).asSInt
  






//   when(io.r_enable) {
//     when(io.f3 === "b010".U) {
//       // load word
//       io.dataout := Cat(Fill(24, rdata(1)(7)),rdata(1)).asSInt
//     }
//       .elsewhen(io.f3 === "b000".U) {
//         // load byte
//         when(offsetSW === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.dataout := Cat(Fill(24,rdata(0)(1)),rdata(0)).asSInt
//         } .elsewhen(offsetSW === "b01".U) {
//           // addressing memory with 1,5,9...
//           io.dataout := Cat(Fill(24, rdata(1)(1)),rdata(1)).asSInt
//         } .elsewhen(offsetSW === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.dataout := Cat(Fill(24, rdata(2)(1)),rdata(2)).asSInt
//         } .elsewhen(offsetSW === "b11".U) {
//           // addressing memory with 3,7,11...
//           io.dataout := Cat(Fill(24, rdata(3)(1)),rdata(3)).asSInt
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.dataout := DontCare
//         }
//       }
//       .elsewhen(io.f3 === "b100".U) {
//         //load byte unsigned
//         when(offsetSW === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.dataout := Cat(Fill(24, 0.U), rdata(0)).asSInt
//         }.elsewhen(offsetSW === "b01".U) {
//           // addressing memory with 1,5,9...
//           io.dataout := Cat(Fill(24, 0.U), rdata(1)).asSInt
//         }.elsewhen(offsetSW === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.dataout := Cat(Fill(24, 0.U), rdata(2)).asSInt
//         }.elsewhen(offsetSW === "b11".U) {
//           // addressing memory with 3,7,11...
//           io.dataout := Cat(Fill(24, 0.U), rdata(3)).asSInt
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.dataout := DontCare
//         }
//       }
//       .elsewhen(io.f3 === "b101".U) {
//         // load halfword unsigned
//         when(offsetSW === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.dataout := Cat(Fill(16, 0.U),rdata(0),rdata(1)).asSInt
//         } .elsewhen(offsetSW === "b01".U) {
//           // addressing memory with 2,6,10...
//           io.dataout := Cat(Fill(16, 0.U),rdata(2),rdata(3)).asSInt
//         } .elsewhen(offsetSW === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.dataout := Cat(Fill(16, 0.U),rdata(3),rdata(1)).asSInt
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.dataout := DontCare
//         }
//       }
//       .elsewhen(io.f3 === "b001".U) {
//         // load halfword
//         when(offsetSW === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.dataout := Cat(Fill(16, rdata(1)(7)),rdata(0),rdata(0)).asSInt
//         } .elsewhen(offsetSW === "b01".U) {
//           // addressing memory with 1,3,7...
//           io.dataout := Cat(Fill(16, rdata(2)(7)),rdata(1),rdata(0)).asSInt
//         } .elsewhen(offsetSW === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.dataout := Cat(Fill(16, rdata(3)(7)),rdata(3),rdata(0)).asSInt
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.dataout := DontCare
//         }
//       }
//       .otherwise {
//       // unknown func3 bits
//       io.dataout := DontCare
//     }
//   } .otherwise {
//     io.dataout := DontCare
//   }


//   dontTouch(rdata)
//   dontTouch(wdata)
// }































    when(io.w_enable===1.B && io.stall >= 0.U && io.vec_en===1.B) {
        for (i <- 0 until 4) {
            memory.write(addr32(i),vector_data32(i))
        }
    }
    .elsewhen(io.w_enable===1.B && io.vec_en===0.B){
        memory.write(io.addr,io.mem_data.asUInt)
    }
    .elsewhen(io.r_enable===1.B && io.stall >= 0.U && io.vec_en===1.B) {
        for (i <- 0 until 4) {
            rdata(i) := memory.read(addr32(i))
        }
    }
    .otherwise{
        io.dataout := (memory.read(io.addr)).asSInt
    }
     
    io.dataout := (memory.read(io.addr)).asSInt
    io.vec_dataout := Cat(rdata(3),rdata(2),rdata(1),rdata(0))
    }