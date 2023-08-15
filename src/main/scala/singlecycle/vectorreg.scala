package singlecycle
import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.stage.ChiselStage


class vregfile extends Module {
  val io = IO (new Bundle {
    val vlmul = Input(UInt(3.W))
    val vsew = Input(UInt(3.W))
    val numElem = Input(UInt(4.W))
    val elemWidth = Input(UInt(5.W))
    val vs1_addr = Input(UInt(5.W))
    val vs2_addr = Input(UInt(5.W))
    val vd_addr = Input(UInt(5.W))
    val vs1_data = Output(Vec(16, UInt(128.W)))
    val vs2_data = Output(Vec(16, UInt(128.W)))
    val vd_data = Input(Vec(16, UInt(128.W)))
    val reg_write = Input(Bool())
  })

  val register = RegInit(VecInit(Seq.fill(32)(0.U(128.W))))

  when (io.reg_write) {
    when (io.vd_addr =/= "b00000".U) {
      register(io.vd_addr) := io.vd_data(io.vd_addr)
    }.otherwise {
      register(io.vd_addr) := 0.U
    }
  }
io.vs1_data := VecInit(Seq.fill(16)(0.U(128.W))) // Connect numElem elements of elemWidth bits each
io.vs2_data := VecInit(Seq.fill(16)(0.U(128.W))) // Connect numElem elements of elemWidth bits each

  when (io.vsew === "b011".U) {
    io.vs1_data := VecInit(Seq.tabulate(16) { i =>
      val t1_1 = register(io.vs1_addr)
      val t1 = t1_1(127, 64)
      val t2 = t1_1(63, 0)
      Cat(t1, t2)
    })

    io.vs2_data := VecInit(Seq.tabulate(16) { i =>
      val t3_1 = register(io.vs2_addr)
      val t3 = t3_1(127, 64)
      val t4 = t3_1(63, 0)
      Cat(t3, t4)
    })
  }.elsewhen (io.vsew === "b010".U) {
    io.vs1_data := VecInit(Seq.tabulate(16) { i =>
        val t1_1 = register(io.vs1_addr)
      val t1 = t1_1(127, 96)
      val t2 = t1_1(95, 64)
      val t3 = t1_1(63, 32)
      val t4 = t1_1(31, 0)
      Cat(t1, t2, t3, t4)
    })

    io.vs2_data := VecInit(Seq.tabulate(16) { i =>
        val t3_1 = register(io.vs2_addr)
      val t5 = t3_1(127, 96)
      val t6 = t3_1(95, 64)
      val t7 = t3_1(63, 32)
      val t8 = t3_1(31, 0)
      Cat(t5, t6, t7, t8)
    })
  }.elsewhen (io.vsew === "b001".U) {
    io.vs1_data := VecInit(Seq.tabulate(16) { i =>
        val t1_1 = register(io.vs1_addr)
      val t1 = t1_1(127, 112)
      val t2 = t1_1(111, 96)
      val t3 = t1_1(95, 80)
      val t4 = t1_1(79, 64)
      val t5 = t1_1(63, 48)
      val t6 = t1_1(47, 32)
      val t7 = t1_1(31, 16)
      val t8 = t1_1(15, 0)
      Cat(t1, t2, t3, t4, t5, t6, t7, t8)
    })

    io.vs2_data := VecInit(Seq.tabulate(16) { i =>
        val t3_1 = register(io.vs2_addr)
      val t9 = t3_1(127, 112)
      val t10 = t3_1(111, 96)
      val t11 = t3_1(95, 80)
      val t12 = t3_1(79, 64)
      val t13 = t3_1(63, 48)
      val t14 = t3_1(47, 32)
      val t15 = t3_1(31, 16)
      val t16 = t3_1(15, 0)
      Cat(t9, t10, t11, t12, t13, t14, t15, t16)
    })
  }.elsewhen (io.vsew === "b000".U) {
    io.vs1_data := VecInit(Seq.tabulate(16) { i =>
        val t1_1 = register(io.vs1_addr)
      val t1 = t1_1(127, 120)
      val t2 = t1_1(119, 112)
      val t3 = t1_1(111, 104)
      val t4 = t1_1(103, 96)
      val t5 = t1_1(95, 88)
      val t6 = t1_1(87, 80)
      val t7 = t1_1(79, 72)
      val t8 = t1_1(71, 64)
      val t9 = t1_1(63, 56)
      val t10 = t1_1(55, 48)
      val t11 = t1_1(47, 40)
      val t12 = t1_1(39, 32)
      val t13 = t1_1(31, 24)
      val t14 = t1_1(23, 16)
      val t15 = t1_1(15, 8)
      val t16 = t1_1(7, 0)
      Cat(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16)
    })

    io.vs2_data := VecInit(Seq.tabulate(16) { i =>
        val t3_1 = register(io.vs2_addr)
      val t17 = t3_1(127, 120)
      val t18 = t3_1(119, 112)
      val t19 = t3_1(111, 104)
      val t20 = t3_1(103, 96)
      val t21 = t3_1(95, 88)
      val t22 = t3_1(87, 80)
      val t23 = t3_1(79, 72)
      val t24 = t3_1(71, 64)
      val t25 = t3_1(63, 56)
      val t26 = t3_1(55, 48)
      val t27 = t3_1(47, 40)
      val t28 = t3_1(39, 32)
      val t29 = t3_1(31, 24)
      val t30 = t3_1(23, 16)
      val t31 = t3_1(15, 8)
      val t32 = t3_1(7, 0)
      Cat(t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32)
    })
  }
}
