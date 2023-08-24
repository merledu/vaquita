package riscv
import chisel3 . _
import chisel3 . util . _
object alu_op {
    val add = 0.U(32.W)
    val addi = 1.U(32.W)
    val sll = 2.U(32.W)
    val slli = 3.U(32.W)
    val slt = 4.U(32.W)
    val slti = 5.U(32.W)
    val sltu = 6.U(32.W)
    val sltui = 7.U(32.W)
    val bltu = 8.U(32.W)
    val xor = 9.U(32.W)
    val xori = 10.U(32.W)
    val srl = 11.U(32.W)
    val srli = 12.U(32.W)
    val or = 13.U(32.W)
    val ori = 14.U(32.W)
    val and = 15.U(32.W)
    val andi = 16.U(32.W)
    val sub = 17.U(32.W)
    val sra = 18.U(32.W)
    val srai = 19.U(32.W)
    val beq = 20.U(32.W)
    val bne = 21.U(32.W)
    val blt = 22.U(32.W)
    val bgeu = 23.U(32.W)
    val bge = 26.U(32.W)
    val jal = 24.U(32.W)
    val jalr = 25.U(32.W)
    val sw = 27.U(32.W)
    val lw = 28.U(32.W)
    val config = 29.U(32.W)
    val vle32 = 30.U(32.W)
    val vaddvv = 31.U(32.W)
    val vaddvx = 50.U(32.W)
    val vaddvi = 60.U(32.W)
    val vse32 = 32.U(32.W)
}


import alu_op._
class alu extends Module {
    val io = IO(new Bundle{
        //val instruction = Input(UInt(32.W))
        val alu =Input(UInt(32.W))
        val a =Input(SInt(32.W))
        val b =Input(SInt(32.W))
        val vs1 =Input(UInt(128.W))
        val vs2 =Input(UInt(128.W))
        val out = Output(SInt(32.W))
        val branch = Output(Bool())
        val vec_out = Output(UInt(128.W))
        val sew = Input(UInt(3.W))
        val vec = Input(Bool())
    })
    val out8 = VecInit(Seq.fill(16)(0.U(8.W)))
    val out16 = VecInit(Seq.fill(8)(0.U(16.W)))
    val out32 = VecInit(Seq.fill(4)(0.U(32.W)))
    val out64 = VecInit(Seq.fill(2)(0.U(64.W)))
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

    // io.vec_out := Cat(io.vs1(127,96)+io.vs2(127,96),io.vs1(95,64)+io.vs2(95,64),io.vs1(63,32)+io.vs2(63,32),io.vs1(31,0)+io.vs2(31,0))
    .otherwise{
    when (io.alu === vaddvv){
      // sew =8
      when (io.sew==="b000".U && io.alu===vaddvv){
        out8(0) := io.vs1(7,0) + io.vs2(7,0)
        out8(1) := io.vs1(15,8) + io.vs2(15,8)
        out8(2) := io.vs1(23,16) + io.vs2(23,16)
        out8(3) := io.vs1(31,24) + io.vs2(31,24)
        out8(4) := io.vs1(39,32) + io.vs2(39,32)
        out8(5) := io.vs1(47,40) + io.vs2(47,40)
        out8(6) := io.vs1(55,48) + io.vs2(55,48)
        out8(7) := io.vs1(63,56) + io.vs2(63,56)
        out8(8) := io.vs1(71,64) + io.vs2(71,64)
        out8(9) := io.vs1(79,72) + io.vs2(79,72)
        out8(10) := io.vs1(87,80) + io.vs2(87,80)
        out8(11) := io.vs1(95,88) + io.vs2(95,88)
        out8(12) := io.vs1(103,96) + io.vs2(103,96)
        out8(13) := io.vs1(111,104) + io.vs2(111,104)
        out8(14) := io.vs1(119,112) + io.vs2(119,112)
        out8(15) := io.vs1(127,120) + io.vs2(127,120)

      }
      //sew 16
      .elsewhen (io.sew==="b001".U && io.alu===vaddvv){
        out16(0) := io.vs1(15,0) + io.vs2(15,0)
        out16(1) := io.vs1(31,16) + io.vs2(31,16)
        out16(2) := io.vs1(47,32) + io.vs2(47,32)
        out16(3) := io.vs1(63,48) + io.vs2(63,48)
        out16(4) := io.vs1(79,64) + io.vs2(79,64)
        out16(5) := io.vs1(95,80) + io.vs2(95,80)
        out16(6) := io.vs1(111,96) + io.vs2(111,96)
        out16(7) := io.vs1(127,112) + io.vs2(127,112)
        io.vec_out := 0.U
      }
      //sew =32
      .elsewhen (io.sew==="b010".U && io.alu===vaddvv){
        out32(0) := io.vs1(31,0) + io.vs2(31,0)
        out32(1) := io.vs1(63,32) + io.vs2(63,32)
        out32(2) := io.vs1(95,64) + io.vs2(95,64)
        out32(3) := io.vs1(127,96) + io.vs2(127,96)
        io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      }
      //sew =64
      .elsewhen (io.sew==="b011".U && io.alu===vaddvv){
        out64(0) := io.vs1(63,0) + io.vs2(63,0)
        out64(1) := io.vs1(127,64) + io.vs2(127,64)
        io.vec_out := 0.U
      }
    }
    .elsewhen(io.alu === vle32){//all 16 ,8 ,64
      // // sew =8
      // when (io.sew==="b000".U && io.alu===io.vle8){
      //   out8(0) := io.vs1(7,0) + io.vs2(7,0)
      //   out8(1) := io.vs1(15,8) + io.vs2(15,8)
      //   out8(2) := io.vs1(23,16) + io.vs2(23,16)
      //   out8(3) := io.vs1(31,24) + io.vs2(31,24)
      //   out8(4) := io.vs1(39,32) + io.vs2(39,32)
      //   out8(5) := io.vs1(47,40) + io.vs2(47,40)
      //   out8(6) := io.vs1(55,48) + io.vs2(55,48)
      //   out8(7) := io.vs1(63,56) + io.vs2(63,56)
      //   out8(8) := io.vs1(71,64) + io.vs2(71,64)
      //   out8(9) := io.vs1(79,72) + io.vs2(79,72)
      //   out8(10) := io.vs1(87,80) + io.vs2(87,80)
      //   out8(11) := io.vs1(95,88) + io.vs2(95,88)
      //   out8(12) := io.vs1(103,96) + io.vs2(103,96)
      //   out8(13) := io.vs1(111,104) + io.vs2(111,104)
      //   out8(14) := io.vs1(119,112) + io.vs2(119,112)
      //   out8(15) := io.vs1(127,120) + io.vs2(127,120)
      // }
      // //sew 16
      // .elsewhen (io.sew==="b001".U && io.alu===io.vle16){
      //   out16(0) := io.vs1(15,0) + io.vs2(15,0)
      //   out16(1) := io.vs1(31,16) + io.vs2(31,16)
      //   out16(2) := io.vs1(47,32) + io.vs2(47,32)
      //   out16(3) := io.vs1(63,48) + io.vs2(63,48)
      //   out16(4) := io.vs1(79,64) + io.vs2(79,64)
      //   out16(5) := io.vs1(95,80) + io.vs2(95,80)
      //   out16(6) := io.vs1(111,96) + io.vs2(111,96)
      //   out16(7) := io.vs1(127,112) + io.vs2(127,112)
      // }
      //sew =32
      when (io.sew==="b010".U && io.alu===vle32){
        out32(0) := io.a.asUInt
        out32(1) := io.a.asUInt+4.U
        out32(2) := io.a.asUInt+8.U
        out32(3) := io.a.asUInt+12.U
        io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
      }
      
      //sew =64
      // .elsewhen (io.sew==="b011".U && io.alu===io.vle64){
      //   out32(0) := io.vs1(63,0) + io.vs2(63,0)
      //   out32(1) := io.vs1(127,64) + io.vs2(127,64)
      // }
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
      .elsewhen(io.sew==="b010".U && io.alu===vaddvi){
        out32(0) := io.vs2(31,0) + io.b.asUInt
        out32(1) := io.vs2(63,32) + io.b.asUInt
        out32(2) := io.vs2(95,64) + io.b.asUInt
        out32(3) := io.vs2(127,96) + io.b.asUInt
        io.vec_out := Cat(out32(3),out32(2),out32(1),out32(0))
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