// package singlecycle

// import chisel3._
// import chisel3.util._

// class VProcVRegFile(
//     val VREG_TYPE: Int = 0,
//     val VREG_W: Int = 128,
//     val MAX_PORT_W: Int = 128,
//     val MAX_ADDR_W: Int = 128,
//     val PORT_RD_CNT: Int = 1,
//     val PORT_RD_W: Seq[Int] = Seq.fill(PORT_RD_CNT)(0),
//     val PORT_WR_CNT: Int = 1,
//     val PORT_WR_W: Seq[Int] = Seq.fill(PORT_WR_CNT)(0)
// ) extends Module {
//   val io = IO(new Bundle {
//     val clk_i = Input(Bool())
//     val async_rst_ni = Input(Bool())
//     val sync_rst_ni = Input(Bool())
//     val wr_addr_i = Input(Vec(PORT_WR_CNT, Vec(MAX_ADDR_W, Bool())))
//     val wr_data_i = Input(Vec(PORT_WR_CNT, Vec(MAX_PORT_W, Bool())))
//     val wr_be_i = Input(Vec(PORT_WR_CNT, Vec(MAX_PORT_W / 8, Bool())))
//     val wr_we_i = Input(Vec(PORT_WR_CNT, Bool()))
//     val rd_addr_i = Input(Vec(PORT_RD_CNT, Vec(MAX_ADDR_W, Bool())))
//     val rd_data_o = Output(Vec(PORT_RD_CNT, Vec(MAX_PORT_W, Bool())))
//   })

//   val PORT_RD_CNT_TOTAL = PORT_RD_CNT + PORT_WR_CNT - 1
//   val ram_asic = Mem(32, Vec(32, UInt(VREG_W.W)))

//   val rd_addr = Wire(Vec(PORT_RD_CNT_TOTAL, Vec(PORT_WR_CNT, UInt(MAX_ADDR_W.W))))
//   for (i <- 0 until PORT_RD_CNT) {
//     for (j <- 0 until PORT_WR_CNT) {
//       rd_addr(i)(j) := io.rd_addr_i(i)
//     }
//   }
//   for (i <- 0 until (PORT_WR_CNT - 1)) {
//     for (j <- 0 until PORT_WR_CNT) {
//       rd_addr(PORT_RD_CNT + i)(j) := Mux(i.U < j.U, io.wr_addr_i(i), io.wr_addr_i(i + 1))
//     }
//   }

//   val rd_data = Seq.fill(PORT_RD_CNT_TOTAL)(Wire(Vec(PORT_WR_CNT, UInt(MAX_PORT_W.W))))

//   for (gw <- 0 until PORT_WR_CNT) {
//     val wr_data = Wire(Vec(MAX_PORT_W, UInt(8.W)))

//     wr_data := io.wr_data_i(gw)
//     when(VREG_TYPE =/= vproc_pkg.VREG_ASIC.U) {
//       for (i <- 0 until (PORT_WR_CNT - 1)) {
//         wr_data := wr_data ^ rd_data(PORT_RD_CNT + gw - Mux(i.U < gw.U, 1.U, 0.U))(i + Mux(i.U < gw.U, 0.U, 1.U))
//       }
//     }

//     VREG_TYPE match {
//       case vproc_pkg.VREG_GENERIC =>
//         for (gr <- 0 until PORT_RD_CNT_TOTAL) {
//           val ram = SyncReadMem(32, Vec(VREG_W / 8, UInt(8.W)))
//           val wr_addr = io.wr_addr_i(gw)
//           val wr_we = io.wr_we_i(gw)
//           val wr_be = io.wr_be_i(gw)
//           when(wr_we && wr_be.asUInt.andR) {
//             ram.write(wr_addr, wr_data)
//           }
//           rd_data(gr)(gw) := ram.read(rd_addr(gr)(gw))
//         }

//       case vproc_pkg.VREG_XLNX_RAM32M =>
//         val numReadPorts = (PORT_RD_CNT_TOTAL + 2) / 3
//         for (gr <- 0 until numReadPorts) {
//           for (gm <- 0 until (MAX_PORT_W / 2)) {
//             val rd_addr_0 = Wire(UInt(MAX_ADDR_W.W))
//             val rd_addr_1 = Wire(UInt(MAX_ADDR_W.W))
//             val rd_addr_2 = Wire(UInt(MAX_ADDR_W.W))
//             val rd_data_0 = Wire(UInt(2.W))
//             val rd_data_1 = Wire(UInt(2.W))
//             val rd_data_2 = Wire(UInt(2.W))
//             val xlnx_ram32m_inst = Module(new RAM32M)
//             xlnx_ram32m_inst.io.ADDRA := rd_addr_0
//             xlnx_ram32m_inst.io.ADDRB := rd_addr_1
//             xlnx_ram32m_inst.io.ADDRC := rd_addr_2
//             xlnx_ram32m_inst.io.ADDRD := io.wr_addr_i(gw)
//             xlnx_ram32m_inst.io.DIA := wr_data(2 * gm + 1, 2 * gm)
//             xlnx_ram32m_inst.io.DIB := wr_data(2 * gm + 1, 2 * gm)
//             xlnx_ram32m_inst.io.DIC := wr_data(2 * gm + 1, 2 * gm)
//             xlnx_ram32m_inst.io.DID := wr_data(2 * gm + 1, 2 * gm)
//             xlnx_ram32m_inst.io.WCLK := io.clk_i
//             xlnx_ram32m_inst.io.WE := io.wr_we_i(gw) && io.wr_be_i(gw)(gm / 4)
//             rd_addr_0 := rd_addr(gr * 3)(gw)
//             rd_data_0 := xlnx_ram32m_inst.io.DOA
//             rd_data(gr * 3)(gw)(2 * gm + 1, 2 * gm) := rd_data_0
//             when(gr * 3 + 1.U < PORT_RD_CNT_TOTAL.U) {
//               rd_addr_1 := rd_addr(gr * 3 + 1)(gw)
//               rd_data_1 := xlnx_ram32m_inst.io.DOB
//               rd_data(gr * 3 + 1)(gw)(2 * gm + 1, 2 * gm) := rd_data_1
//             }.otherwise {
//               rd_addr_1 := 0.U
//             }
//             when(gr * 3 + 2.U < PORT_RD_CNT_TOTAL.U) {
//               rd_addr_2 := rd_addr(gr * 3 + 2)(gw)
//               rd_data_2 := xlnx_ram32m_inst.io.DOC
//               rd_data(gr * 3 + 2)(gw)(2 * gm + 1, 2 * gm) := rd_data_2
//             }.otherwise {
//               rd_addr_2 := 0.U
//             }
//           }
//         }

//       case vproc_pkg.VREG_ASIC =>
//         for (gr <- 0 until PORT_RD_CNT_TOTAL) {
//           when(io.wr_we_i(gw) && io.wr_be_i(gw).asUInt.andR) {
//             ram_asic.write(io.wr_addr_i(gw), wr_data)
//           }
//           rd_data(gr)(gw) := ram_asic.read(rd_addr(gr)(gw))
//         }

//       case _ => // Default case

//     }
//   }

//   val rd_data_o = Wire(Vec(PORT_RD_CNT, UInt(MAX_PORT_W.W)))
//   for (i <- 0 until PORT_RD_CNT) {
//     rd_data_o(i) := rd_data(i)(0)
//     for (j <- 1 until PORT_WR_CNT) {
//       rd_data_o(i) := Mux(VREG_TYPE =/= vproc_pkg.VREG_ASIC.U, rd_data_o(i) ^ rd_data(i)(j), ram_asic.read(io.rd_addr_i(i)))
//     }
//   }
//   io.rd_data_o := rd_data_o
// }

// object VProcVRegFileDriver extends App {
//   chisel3.Driver.execute(args, () => new VProcVRegFile)
// }
