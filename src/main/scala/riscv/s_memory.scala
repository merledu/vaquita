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

    })
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


val offsetSW = io.addr(1,0)
when(io.w_enable && io.f3 === "b000".U){
    when(offsetSW === 0.U){
    }.elsewhen(offsetSW === 1.U){
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(7,0)
      wdata(2) := io.writeData(23,16)
      wdata(3) := io.writeData(31,24)
    }.elsewhen(offsetSW === 2.U){
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(23,16)
      wdata(2) := io.writeData(7,0)
      wdata(3) := io.writeData(31,24)
    }.otherwise{
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(23,16)
      wdata(2) := io.writeData(31,24)
      wdata(3) := io.writeData(7,0)
    }
  }

//     val mem = SyncReadMem (1024,Vec(4,SInt(8.W)))
//     // Data you want to write (a Vec of 4 UInt values)

//     val data = VecInit(Seq(
//     io.mem_data(7, 0).asSInt,
//     io.mem_data(7, 0).asSInt,
//     io.mem_data(7, 0).asSInt,
//     io.mem_data(7, 0).asSInt
// ))
//     val mask = VecInit(Seq(1.B,0.B,0.B,1.B))

//     mem.write(io.addr,data,mask)
//     io.dataout := mem.read(io.addr,io.r_enable)
//     io.vec_dataout := 0.U 

  wdata(0) := io.writeData(7,0)
  wdata(1) := io.writeData(15,8)
  wdata(2) := io.writeData(23,16)
  wdata(3) := io.writeData(31,24)

  /* Store Half Word */
  when(io.writeEnable && io.f3 === "b000".U){
    when(offsetSW === 0.U){
      io.dccmReq.bits.activeByteLane := "b0001".U
    }.elsewhen(offsetSW === 1.U){
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(7,0)
      wdata(2) := io.writeData(23,16)
      wdata(3) := io.writeData(31,24)
      io.dccmReq.bits.activeByteLane := "b0010".U
    }.elsewhen(offsetSW === 2.U){
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(23,16)
      wdata(2) := io.writeData(7,0)
      wdata(3) := io.writeData(31,24)
      io.dccmReq.bits.activeByteLane := "b0100".U
    }.otherwise{
      wdata(0) := io.writeData(15,8)
      wdata(1) := io.writeData(23,16)
      wdata(2) := io.writeData(31,24)
      wdata(3) := io.writeData(7,0)
      io.dccmReq.bits.activeByteLane := "b1000".U
    }
  }
    /* Store Half Word */
    .elsewhen(io.writeEnable && io.f3 === "b001".U){
    // offset will either be 0 or 2 since address will be 0x0000 or 0x0002
    when(offsetSW === 0.U){
      // data to be stored at lower 16 bits (15,0)
      io.dccmReq.bits.activeByteLane := "b0011".U
    }.elsewhen(offsetSW === 1.U){
      // data to be stored at lower 16 bits (15,0)
      io.dccmReq.bits.activeByteLane := "b0110".U
      wdata(0) := io.writeData(23,16)
      wdata(1) := io.writeData(7,0)
      wdata(2) := io.writeData(15,8)
      wdata(3) := io.writeData(31,24)
    }.otherwise{
      // data to be stored at upper 16 bits (31,16)
      io.dccmReq.bits.activeByteLane := "b1100".U
      wdata(2) := io.writeData(7,0)
      wdata(3) := io.writeData(15,8)
      wdata(0) := io.writeData(23,16)
      wdata(1) := io.writeData(31,24)
    }
  }
    /* Store Word */
    .otherwise{
    io.dccmReq.bits.activeByteLane := "b1111".U
  }

  io.dccmReq.bits.dataRequest := wdata.asUInt()
  io.dccmReq.bits.addrRequest := (io.aluResultIn & "h00001fff".U) >> 2
  io.dccmReq.bits.isWrite := io.writeEnable
  io.dccmReq.valid := Mux(io.writeEnable | io.readEnable, true.B, false.B)

  io.stall := (io.writeEnable || io.readEnable) && !io.dccmRsp.valid

  rdata := Mux(io.dccmRsp.valid, io.dccmRsp.bits.dataResponse, DontCare)


  when(io.readEnable) {
    when(funct3 === "b010".U) {
      // load word
      io.readData := rdata
    }
      .elsewhen(funct3 === "b000".U) {
        // load byte
        when(offset === "b00".U) {
          // addressing memory with 0,4,8...
          io.readData := Cat(Fill(24,rdata(7)),rdata(7,0))
        } .elsewhen(offset === "b01".U) {
          // addressing memory with 1,5,9...
          io.readData := Cat(Fill(24, rdata(15)),rdata(15,8))
        } .elsewhen(offset === "b10".U) {
          // addressing memory with 2,6,10...
          io.readData := Cat(Fill(24, rdata(23)),rdata(23,16))
        } .elsewhen(offset === "b11".U) {
          // addressing memory with 3,7,11...
          io.readData := Cat(Fill(24, rdata(31)),rdata(31,24))
        } .otherwise {
          // this condition would never occur but using to avoid Chisel generating VOID errors
          io.readData := DontCare
        }
      }
      .elsewhen(funct3 === "b100".U) {
        //load byte unsigned
        when(offset === "b00".U) {
          // addressing memory with 0,4,8...
          io.readData := Cat(Fill(24, 0.U), rdata(7, 0))
        }.elsewhen(offset === "b01".U) {
          // addressing memory with 1,5,9...
          io.readData := Cat(Fill(24, 0.U), rdata(15, 8))
        }.elsewhen(offset === "b10".U) {
          // addressing memory with 2,6,10...
          io.readData := Cat(Fill(24, 0.U), rdata(23, 16))
        }.elsewhen(offset === "b11".U) {
          // addressing memory with 3,7,11...
          io.readData := Cat(Fill(24, 0.U), rdata(31, 24))
        } .otherwise {
          // this condition would never occur but using to avoid Chisel generating VOID errors
          io.readData := DontCare
        }
      }
      .elsewhen(funct3 === "b101".U) {
        // load halfword unsigned
        when(offset === "b00".U) {
          // addressing memory with 0,4,8...
          io.readData := Cat(Fill(16, 0.U),rdata(15,0))
        } .elsewhen(offset === "b01".U) {
          // addressing memory with 2,6,10...
          io.readData := Cat(Fill(16, 0.U),rdata(23,8))
        } .elsewhen(offset === "b10".U) {
          // addressing memory with 2,6,10...
          io.readData := Cat(Fill(16, 0.U),rdata(31,16))
        } .otherwise {
          // this condition would never occur but using to avoid Chisel generating VOID errors
          io.readData := DontCare
        }
      }
      .elsewhen(funct3 === "b001".U) {
        // load halfword
        when(offset === "b00".U) {
          // addressing memory with 0,4,8...
          io.readData := Cat(Fill(16, rdata(15)),rdata(15,0))
        } .elsewhen(offset === "b01".U) {
          // addressing memory with 1,3,7...
          io.readData := Cat(Fill(16, rdata(23)),rdata(23,8))
        } .elsewhen(offset === "b10".U) {
          // addressing memory with 2,6,10...
          io.readData := Cat(Fill(16, rdata(31)),rdata(31,16))
        } .otherwise {
          // this condition would never occur but using to avoid Chisel generating VOID errors
          io.readData := DontCare
        }
      }
      .otherwise {
      // unknown func3 bits
      io.readData := DontCare
    }
  } .otherwise {
    io.readData := DontCare
  }


  when(io.writeEnable && io.aluResultIn(31, 28) === "h8".asUInt()){
    printf("%x\n", io.writeData)
  }

}