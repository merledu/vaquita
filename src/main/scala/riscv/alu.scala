package riscv
import chisel3 . _
import chisel3 . util . _
import alu_op._
class alu extends Module {
  val io = IO(new Bundle{
      //val instruction = Input(UInt(32.W))
      val alu =Input(UInt(32.W))
      val a =Input(SInt(32.W))
      val b =Input(SInt(32.W))
      val vs1 =Input(UInt(128.W))
      val vs2 =Input(UInt(128.W))
      val vd =Input(UInt(128.W))
      val sew = Input(UInt(3.W))
      val vec = Input(Bool())
      val vma = Input(Bool())
      val vta = Input(Bool())
      val arith_mask = Input(Bool())
      val vec_0 = Input(UInt(32.W))
      val vl = Input(UInt(32.W))
      val comp = Input(UInt(32.W))

      val out = Output(SInt(32.W))
      val branch = Output(Bool())
      val vec_out = Output(UInt(128.W))
      
  })
  val vec_m0_32 = VecInit(Seq.fill(32)(0.U(4.W)))
      val vd = Input(UInt(128.W))

  val sew_8_a  = VecInit(Seq.fill(16)(0.U(8.W)))
  val sew_16_a = VecInit(Seq.fill(8)(0.U(16.W)))
  val sew_32_a = VecInit(Seq.fill(4)(0.U(32.W)))

  val sew_8_b = VecInit(Seq.fill(16)(0.U(8.W)))
  val sew_16_b = VecInit(Seq.fill(8)(0.U(16.W)))
  val sew_32_b = VecInit(Seq.fill(4)(0.U(32.W)))

  val out8 = VecInit(Seq.fill(16)(0.U(8.W)))
  val out16 = VecInit(Seq.fill(8)(0.U(16.W)))
  val out32 = VecInit(Seq.fill(4)(0.U(32.W)))

  // define wires input a when sew = 8
  sew_8_a(0) := io.vs1(7,0)
  sew_8_a(1) := io.vs1(15,8)
  sew_8_a(2) := io.vs1(23,16)
  sew_8_a(3) := io.vs1(31,24)
  sew_8_a(4) := io.vs1(39,32)
  sew_8_a(5) := io.vs1(47,40)
  sew_8_a(6) := io.vs1(55,48)
  sew_8_a(7) := io.vs1(63,56)
  sew_8_a(8) := io.vs1(71,64)
  sew_8_a(9) := io.vs1(79,72)
  sew_8_a(10) := io.vs1(87,80)
  sew_8_a(11) := io.vs1(95,88)
  sew_8_a(12) := io.vs1(103,96)
  sew_8_a(13) := io.vs1(111,104)
  sew_8_a(14) := io.vs1(119,112)
  sew_8_a(15) := io.vs1(127,120)

  // define wires input b when sew = 8
  sew_8_b(0) := io.vs2(7,0)
  sew_8_b(1) := io.vs2(15,8)
  sew_8_b(2) := io.vs2(23,16)
  sew_8_b(3) := io.vs2(31,24)
  sew_8_b(4) := io.vs2(39,32)
  sew_8_b(5) := io.vs2(47,40)
  sew_8_b(6) := io.vs2(55,48)
  sew_8_b(7) := io.vs2(63,56)
  sew_8_b(8) := io.vs2(71,64)
  sew_8_b(9) := io.vs2(79,72)
  sew_8_b(10) := io.vs2(87,80)
  sew_8_b(11) := io.vs2(95,88)
  sew_8_b(12) := io.vs2(103,96)
  sew_8_b(13) := io.vs2(111,104)
  sew_8_b(14) := io.vs2(119,112)
  sew_8_b(15) := io.vs2(127,120)

  //define wires input a when sew = 16
  sew_16_a(0) := io.vs1(15,0)
  sew_16_a(1) := io.vs1(31,16)
  sew_16_a(2) := io.vs1(47,32)
  sew_16_a(3) := io.vs1(63,48)
  sew_16_a(4) := io.vs1(79,64)
  sew_16_a(5) := io.vs1(95,80)
  sew_16_a(6) := io.vs1(111,96)
  sew_16_a(7) := io.vs1(127,112)

  //define wires input b when sew = 16
  sew_16_b(0) := io.vs2(15,0)
  sew_16_b(1) := io.vs2(31,16)
  sew_16_b(2) := io.vs2(47,32)
  sew_16_b(3) := io.vs2(63,48)
  sew_16_b(4) := io.vs2(79,64)
  sew_16_b(5) := io.vs2(95,80)
  sew_16_b(6) := io.vs2(111,96)
  sew_16_b(7) := io.vs2(127,112)

  //define wires input a when sew = 32
  sew_32_a(0) := io.vs1(31,0)
  sew_32_a(1) := io.vs1(63,32)
  sew_32_a(2) := io.vs1(95,64)
  sew_32_a(3) := io.vs1(127,96)

  //define wires input b when sew = 32
  sew_32_b(0) := io.vs2(31,0)
  sew_32_b(1) := io.vs2(63,32)
  sew_32_b(2) := io.vs2(95,64)
  sew_32_b(3) := io.vs2(127,96)



  io.vec_out := 0.U
  io.out := 0.S

      //val array = WireInit(VecInit(Seq.fill(4)(0.S(32.W))))
      // array(0) := io.a
      // dontTouch(array)

  when (io.vec===0.B){
    when (io.alu === add || io.alu === addi){
      io.out := io.a + io.b
      
    }
    .elsewhen(io.alu === sll || io.alu === slli){
      io.out := io.a << io.b (15,0)
      
    }
    .elsewhen(io.alu === slt || io.alu === slti){
      
      when (io.a < io.b){
        io.out := 1.S
      }
      .otherwise{
        io.out := 0.S
      }
    }
    .elsewhen(io.alu === sltu || io.alu === sltui){
      
      when (io.a.asUInt < io.b.asUInt){
        io.out := 1.S
      }
      .otherwise{
        io.out := 0.S
      }
    }
    .elsewhen(io.alu === xor || io.alu === xori){
      io.out := io.a ^ io.b
      
    }
    .elsewhen(io.alu === srl || io.alu === srli){
      io.out := io.a >> io.b(15,0)
      
    }
    .elsewhen(io.alu === or || io.alu === ori){
      io.out := io.a | io.b
      
    }
    .elsewhen(io.alu === and || io.alu === andi){
      io.out := io.a & io.b
      
    }
    .elsewhen(io.alu === sub){
      io.out := io.a - io.b
      
    }
    .elsewhen(io.alu === sra || io.alu === srai){
      io.out :=io.a >> io.b(15,0)
      
    }
    .elsewhen(io.alu === jal || io.alu === jalr){
      io.out := io.a
      
    }
    .elsewhen(io.alu === sw){
      io.out := io.a + io.b
      
    }
    .elsewhen(io.alu === lw){
      io.out := io.a + io.b
      
    }
    .elsewhen(io.alu === config){
      
      when(io.a.asUInt <= io.b.asUInt){
        io.out := io.a
      }
      .elsewhen(io.a < (2.S * io.b)){ //ceil(AVL / 2) ≤ vl ≤ VLMAX if AVL < (2 * VLMAX)
        when(io.a < io.b){
          io.out := io.a
        }
        .otherwise{
          io.out := io.b
        }
      }
      .elsewhen(io.a >= (2.S * io.b)){
        io.out := io.b
      }
      
      .otherwise{
        io.out := 0.S
      }
    }
    .otherwise{
      io.out := 0.S
    }
  }
  //computing of vector instruction
  .otherwise{
    // element width = 32
    when (io.sew==="b010".U){
      // vector to vector addition
      when(io.alu===vaddvv){
        when(io.comp===1.U){
          out32(0) := Mux(io.arith_mask===1.B,sew_32_a(0) + sew_32_b(0),Mux((io.arith_mask===0.B && io.vec_0(0)===1.B),(sew_32_a(0) + sew_32_b(0)) & Fill(32,io.vec_0(0)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(31,0),Fill(32,1.U))))
          io.vec_out := Cat(io.vd(127,32),out32(0))
        }
        .elsewhen(io.comp===2.U){
          out32(0) := Mux(io.arith_mask===1.B,sew_32_a(0) + sew_32_b(0),Mux((io.arith_mask===0.B && io.vec_0(0)===1.B),(sew_32_a(0) + sew_32_b(0)) & Fill(32,io.vec_0(0)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(31,0),Fill(32,1.U))))
          out32(1) := Mux(io.arith_mask===1.B,sew_32_a(1) + sew_32_b(1),Mux((io.arith_mask===0.B && io.vec_0(1)===1.B),(sew_32_a(1) + sew_32_b(1)) & Fill(32,io.vec_0(1)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(63,32),Fill(32,1.U))))
          io.vec_out := Cat(io.vd(127,64),out32(1),out32(0))
        }
        .elsewhen(io.comp===3.U){
          out32(0) := Mux(io.arith_mask===1.B,sew_32_a(0) + sew_32_b(0),Mux((io.arith_mask===0.B && io.vec_0(0)===1.B),(sew_32_a(0) + sew_32_b(0)) & Fill(32,io.vec_0(0)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(31,0),Fill(32,1.U))))
          out32(1) := Mux(io.arith_mask===1.B,sew_32_a(1) + sew_32_b(1),Mux((io.arith_mask===0.B && io.vec_0(1)===1.B),(sew_32_a(1) + sew_32_b(1)) & Fill(32,io.vec_0(1)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(63,32),Fill(32,1.U))))
          out32(2) := Mux(io.arith_mask===1.B,sew_32_a(2) + sew_32_b(2),Mux((io.arith_mask===0.B && io.vec_0(2)===1.B),(sew_32_a(2) + sew_32_b(2)) & Fill(32,io.vec_0(2)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(95,64),Fill(32,1.U))))
          io.vec_out := Cat(io.vd(127,96),out32(2),out32(1),out32(0))
        }
        .elsewhen(io.comp===0.U){//when ==0
          out32(0) := Mux(io.arith_mask===1.B,sew_32_a(0) + sew_32_b(0),Mux((io.arith_mask===0.B && io.vec_0(0)===1.B),(sew_32_a(0) + sew_32_b(0)) & Fill(32,io.vec_0(0)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(31,0),Fill(32,1.U))))
          out32(1) := Mux(io.arith_mask===1.B,sew_32_a(1) + sew_32_b(1),Mux((io.arith_mask===0.B && io.vec_0(1)===1.B),(sew_32_a(1) + sew_32_b(1)) & Fill(32,io.vec_0(1)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(63,32),Fill(32,1.U))))
          out32(2) := Mux(io.arith_mask===1.B,sew_32_a(2) + sew_32_b(2),Mux((io.arith_mask===0.B && io.vec_0(2)===1.B),(sew_32_a(2) + sew_32_b(2)) & Fill(32,io.vec_0(2)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(95,64),Fill(32,1.U))))
          out32(3) := Mux(io.arith_mask===1.B,sew_32_a(3) + sew_32_b(3),Mux((io.arith_mask===0.B && io.vec_0(3)===1.B),(sew_32_a(3) + sew_32_b(3)) & Fill(32,io.vec_0(3)),Mux((io.arith_mask===0.B && io.vma === 0.B) ,io.vd(127,96),Fill(32,1.U))))
          io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
        }
        .otherwise{
          io.vec_out := Fill(128,1.U)
        }
      }
      
     
      .elsewhen (io.sew==="b010".U && io.alu===vle32){
          out32(0) := io.a.asUInt
          out32(1) := io.a.asUInt+4.U
          out32(2) := io.a.asUInt+8.U
          out32(3) := io.a.asUInt+12.U
          io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
        }
      //vector store 32 bits
      .elsewhen(io.sew==="b010".U && io.alu===vse32){
          out32(0) := io.a.asUInt
          out32(1) := io.a.asUInt+4.U
          out32(2) := io.a.asUInt+8.U
          out32(3) := io.a.asUInt+12.U
          
          io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
        }

      //vector to scalar addition
      .elsewhen(io.sew==="b010".U && io.alu===vaddvx){
        out32(0) := io.vs2(31,0) + io.a.asUInt
        out32(1) := io.vs2(63,32) + io.a.asUInt
        out32(2) := io.vs2(95,64) + io.a.asUInt
        out32(3) := io.vs2(127,96) + io.a.asUInt
        io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      }
      //vector to immediate addition
      .elsewhen(io.alu===vaddvi){
        out32(0) := io.vs2(31,0) + io.b.asUInt
        out32(1) := io.vs2(63,32) + io.b.asUInt
        out32(2) := io.vs2(95,64) + io.b.asUInt
        out32(3) := io.vs2(127,96) + io.b.asUInt
        io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      }
      // // vector to vector subtraction
      // .elsewhen (io.sew==="b010".U && io.alu===vaddvv){
      //   for (i <- 0 until 4) {
      //       out32(i) := sew_32_a(i) - sew_32_b(i)
      //   }
      //   io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      // }
       .otherwise{
        io.vec_out := 0.U
      }
    }
    .otherwise{
        io.vec_out := 0.U
      }
    
}





    io.branch := Mux(io.alu === beq,io.a  ===  io.b,
    Mux(io.alu === bne,io.a =/= io.b,
    Mux(io.alu === blt,io.a < io.b,
    Mux(io.alu === bgeu,io.a.asUInt >= io.b.asUInt,
    Mux(io.alu === bltu,io.a.asUInt < io.b.asUInt,
    Mux(io.alu === bge,io.a >= io.b,0.B))))))
}

// when (io.alu === vaddvv){
//       // sew =8
//       when (io.sew==="b000".U && io.alu===vaddvv){
        // out8(0) := io.vs1(7,0) + io.vs2(7,0)
        // out8(1) := io.vs1(15,8) + io.vs2(15,8)
        // out8(2) := io.vs1(23,16) + io.vs2(23,16)
        // out8(3) := io.vs1(31,24) + io.vs2(31,24)
        // out8(4) := io.vs1(39,32) + io.vs2(39,32)
        // out8(5) := io.vs1(47,40) + io.vs2(47,40)
        // out8(6) := io.vs1(55,48) + io.vs2(55,48)
        // out8(7) := io.vs1(63,56) + io.vs2(63,56)
        // out8(8) := io.vs1(71,64) + io.vs2(71,64)
        // out8(9) := io.vs1(79,72) + io.vs2(79,72)
        // out8(10) := io.vs1(87,80) + io.vs2(87,80)
        // out8(11) := io.vs1(95,88) + io.vs2(95,88)
        // out8(12) := io.vs1(103,96) + io.vs2(103,96)
        // out8(13) := io.vs1(111,104) + io.vs2(111,104)
        // out8(14) := io.vs1(119,112) + io.vs2(119,112)
        // out8(15) := io.vs1(127,120) + io.vs2(127,120)

//       }
//       //sew 16
//       .elsewhen (io.sew==="b001".U && io.alu===vaddvv){
//         out16(0) := io.vs1(15,0) + io.vs2(15,0)
//         out16(1) := io.vs1(31,16) + io.vs2(31,16)
//         out16(2) := io.vs1(47,32) + io.vs2(47,32)
//         out16(3) := io.vs1(63,48) + io.vs2(63,48)
//         out16(4) := io.vs1(79,64) + io.vs2(79,64)
//         out16(5) := io.vs1(95,80) + io.vs2(95,80)
//         out16(6) := io.vs1(111,96) + io.vs2(111,96)
//         out16(7) := io.vs1(127,112) + io.vs2(127,112)
//         io.vec_out := 0.U
//       }
//       //sew =32
      // .elsewhen (io.sew==="b010".U && io.alu===vaddvv){
      //   out32(0) := io.vs1(31,0) + io.vs2(31,0)
      //   out32(1) := io.vs1(63,32) + io.vs2(63,32)
      //   out32(2) := io.vs1(95,64) + io.vs2(95,64)
      //   out32(3) := io.vs1(127,96) + io.vs2(127,96)
      //   io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      // }
//       //sew =64
//       .elsewhen (io.sew==="b011".U && io.alu===vaddvv){
//         out64(0) := io.vs1(63,0) + io.vs2(63,0)
//         out64(1) := io.vs1(127,64) + io.vs2(127,64)
//         io.vec_out := 0.U
//       }
//       .otherwise{
//         io.vec_out := 0.U
//       }