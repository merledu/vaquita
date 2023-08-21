package riscv
import chisel3 . _
import chisel3 . util . _
object alu_op {
    val add = 0.U(5.W)
    val addi = 1.U(5.W)
    val sll = 2.U(5.W)
    val slli = 3.U(5.W)
    val slt = 4.U(5.W)
    val slti = 5.U(5.W)
    val sltu = 6.U(5.W)
    val sltui = 7.U(5.W)
    val bltu = 8.U(5.W)
    val xor = 9.U(5.W)
    val xori = 10.U(5.W)
    val srl = 11.U(5.W)
    val srli = 12.U(5.W)
    val or = 13.U(5.W)
    val ori = 14.U(5.W)
    val and = 15.U(5.W)
    val andi = 16.U(5.W)
    val sub = 17.U(5.W)
    val sra = 18.U(5.W)
    val srai = 19.U(5.W)
    val beq = 20.U(5.W)
    val bne = 21.U(5.W)
    val blt = 22.U(5.W)
    val bgeu = 23.U(5.W)
    val bge = 26.U(5.W)
    val jal = 24.U(5.W)
    val jalr = 25.U(5.W)
    val sw = 27.U(5.W)
    val lw = 28.U(5.W)
    val config = 29.U(5.W)
    val vle32 = 30.U(5.W)
    val vadd = 31.U(5.W)
}
import alu_op._
class alu extends Module {
    val io = IO(new Bundle{
        //val instruction = Input(UInt(32.W))
        val alu =Input(UInt(5.W))
        val a32 =Input(Vec(1,SInt(32.W)))
        val b32 =Input(Vec(1,SInt(32.W)))
        val vs1 =Input(UInt(128.W))
        val vs2 =Input(UInt(128.W))
        val out = Output(Vec(4,SInt(32.W)))
        val branch = Output(Bool())
        val vec_out = Output(UInt(128.W))
        val sew = Input(UInt(3.W))
    })
    val out8 = RegInit(VecInit(Seq.fill(16)(0.U(8.W))))
    val out16 = RegInit(VecInit(Seq.fill(8)(0.U(16.W))))
    val out32 = RegInit(VecInit(Seq.fill(4)(0.U(32.W))))
    val out64 = RegInit(VecInit(Seq.fill(2)(0.U(64.W))))
        //val array = WireInit(VecInit(Seq.fill(4)(0.S(32.W))))
        // array(0) := io.a
       // dontTouch(array)
  

    when (io.alu === add || io.alu === addi){
      io.out(0) := io.a32(0) + io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === sll || io.alu === slli){
      io.out(0) := io.a32(0) << io.b32(0)(15,0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === slt || io.alu === slti){
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
      when (io.a32(0) < io.b32(0)){
        io.out(0) := 1.S
      }
      .otherwise{
        io.out(0) := 0.S
      }
    }
    .elsewhen(io.alu === sltu || io.alu === sltui){
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
      when (io.a32(0).asUInt < io.b32(0).asUInt){
        io.out(0) := 1.S
      }
      .otherwise{
        io.out(0) := 0.S
      }
    }
    .elsewhen(io.alu === xor || io.alu === xori){
      io.out(0) := io.a32(0) ^ io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === srl || io.alu === srli){
      io.out(0) := io.a32(0) >> io.b32(0)(15,0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === or || io.alu === ori){
      io.out(0) := io.a32(0) | io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === and || io.alu === andi){
      io.out(0) := io.a32(0) & io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === sub){
      io.out(0) := io.a32(0) - io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === sra || io.alu === srai){
      io.out(0) :=io.a32(0) >> io.b32(0)(15,0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === jal || io.alu === jalr){
      io.out(0) := io.a32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === sw){
      io.out(0) := io.a32(0) + io.b32(0)
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
    }
    .elsewhen(io.alu === config){
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
      when(io.a32(0).asUInt <= io.b32(0).asUInt){
        io.out(0) := io.a32(0)
      }
      .elsewhen(io.a32(0) >= (2.S * io.b32(0))){
        io.out(0) := io.b32(0)
      }
      .otherwise{
        io.out(0) := 0.S
      }
    }
    .elsewhen(io.alu === vle32){
      io.out(0) := io.a32(0)
      io.out(1) := io.a32(0)+4.S
      io.out(2) := io.a32(0)+8.S
      io.out(3) := io.a32(0)+12.S
    }
    .otherwise{
      io.out(0) := 0.S
      io.out(1) := 0.S
      io.out(2) := 0.S
      io.out(3) := 0.S
      
    }

    io.vec_out := Cat(io.vs1(127,96)+io.vs2(127,96),io.vs1(95,64)+io.vs2(95,64),io.vs1(63,32)+io.vs2(63,32),io.vs1(31,0)+io.vs2(31,0))
    when (io.alu===vadd){
      // sew =8
      when (io.sew==="b000".U && io.alu===add){
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
      .elsewhen (io.sew==="b001".U && io.alu===add){
        out16(0) := io.vs1(15,0) + io.vs2(15,0)
        out16(1) := io.vs1(31,16) + io.vs2(31,16)
        out16(2) := io.vs1(47,32) + io.vs2(47,32)
        out16(3) := io.vs1(63,48) + io.vs2(63,48)
        out16(4) := io.vs1(79,64) + io.vs2(79,64)
        out16(5) := io.vs1(95,80) + io.vs2(95,80)
        out16(6) := io.vs1(111,96) + io.vs2(111,96)
        out16(7) := io.vs1(127,112) + io.vs2(127,112)
      }
      //sew =32
      .elsewhen (io.sew==="b010".U && io.alu===add){
        out32(0) := io.vs1(31,0) + io.vs2(31,0)
        out32(1) := io.vs1(63,32) + io.vs2(63,32)
        out32(2) := io.vs1(95,64) + io.vs2(95,64)
        out32(3) := io.vs1(127,96) + io.vs2(127,96)
      }
      //sew =64
      .elsewhen (io.sew==="b011".U && io.alu===add){
        out32(0) := io.vs1(63,0) + io.vs2(63,0)
        out32(1) := io.vs1(127,64) + io.vs2(127,64)
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
        io.out(0) := io.a32(0)
        io.out(1) := io.a32(0)+4.S
        io.out(2) := io.a32(0)+8.S
        io.out(3) := io.a32(0)+12.S
      }
      //sew =64
      // .elsewhen (io.sew==="b011".U && io.alu===io.vle64){
      //   out32(0) := io.vs1(63,0) + io.vs2(63,0)
      //   out32(1) := io.vs1(127,64) + io.vs2(127,64)
      // }
    }


   
   

    //io.out(1):=Mux(io.alu === vle32,io.a32(0)+4.S,0.S)
    // io.out(2):=Mux(io.alu === vle32,io.a,0.S)
    // io.out(3):=Mux(io.alu === vle32,io.a,0.S)
    //Cat(io.a(31,16),io.a.asUInt+4.U(15,0)).asSInt

//Mux(io.a32(0) < (2.S * io.b32(0)),ceil(io.a32(0) / 2.S) ≤ vl ≤ io.b32(0)

    io.branch := Mux(io.alu === beq,io.a32(0)  ===  io.b32(0),
    Mux(io.alu === bne,io.a32(0) =/= io.b32(0),
    Mux(io.alu === blt,io.a32(0) < io.b32(0),
    Mux(io.alu === bgeu,io.a32(0).asUInt >= io.b32(0).asUInt,
    Mux(io.alu === bltu,io.a32(0).asUInt < io.b32(0).asUInt,
    Mux(io.alu === bge,io.a32(0) >= io.b32(0),0.B))))))
  //     val array = RegInit(VecInit(Seq.fill(4)(0.S(32.W))))
  // for ( i <- 1 until 4){
  //   val k=WireInit(0.S)
  //   array(i) := io.a32(0) + k
  //   k := k+ 4.S
  // }
  // array(0) := io.a
  // dontTouch(array)
  
}

    // io.out(0) := 
    // Mux(io.alu === add || io.alu === addi,io.a32(0) + io.b32(0),
    // Mux(io.alu === sll || io.alu === slli,io.a32(0) << io.b32(0)(15,0),
    // Mux(io.alu === slt || io.alu === slti,Mux(io.a32(0) < io.b32(0),1.S,0.S),
    // Mux(io.alu === sltu || io.alu === sltui ,Mux(io.a32(0).asUInt < io.b32(0).asUInt,1.S,0.S),
    // Mux(io.alu === xor || io.alu === xori, io.a32(0) ^ io.b32(0),
    // Mux(io.alu === srl || io.alu === srli, io.a32(0) >> io.b32(0)(15,0),
    // Mux(io.alu === or || io.alu === ori,io.a32(0) | io.b32(0),
    // Mux(io.alu === and || io.alu === andi,io.a32(0) & io.b32(0),
    // Mux(io.alu === sub,io.a32(0) - io.b32(0),
    // Mux(io.alu === sra || io.alu === srai,io.a32(0) >> io.b32(0)(15,0),
    // Mux(io.alu === jal || io.alu === jalr,io.a32(0),
    // Mux(io.alu === sw,io.a32(0) + io.b32(0),
    // Mux(io.alu === config,Mux(io.a32(0).asUInt <= io.b32(0).asUInt,io.a32(0),Mux(io.a32(0) >= (2.S * io.b32(0)),io.b32(0),0.S)),
    // Mux(io.alu === vle32,io.a32(0),
    // 0.S))))))))))))))
    // io.out(1):=Mux(io.alu === vle32,io.a32(0)+4.S,0.S)