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
}
import alu_op._
class alu() extends Module {
    val io = IO(new Bundle{
        //val instruction = Input(UInt(32.W))
        val alu =Input(UInt(5.W))
        val a32 =Input(Vec(1,SInt(32.W)))
        val b32 =Input(Vec(1,SInt(32.W)))
        val out = Output(Vec(2,SInt(32.W)))
        val branch = Output(Bool())
    })
  //         val array = WireInit(VecInit(Seq.fill(4)(0.S(32.W))))
  // for ( i <- 1 until 4){
  //   //val k=WireInit(0.S)
  //   array(i) := io.a32(0) + io.b32(0)
  //   //k := k+ 4.S
  // }
  // array(0) := io.a
  // dontTouch(array)
  


    io.out(0) := 
    Mux(io.alu === add || io.alu === addi,io.a32(0) + io.b32(0),
    Mux(io.alu === sll || io.alu === slli,io.a32(0) << io.b32(0)(15,0),
    Mux(io.alu === slt || io.alu === slti,Mux(io.a32(0) < io.b32(0),1.S,0.S),
    Mux(io.alu === sltu || io.alu === sltui ,Mux(io.a32(0).asUInt < io.b32(0).asUInt,1.S,0.S),
    Mux(io.alu === xor || io.alu === xori, io.a32(0) ^ io.b32(0),
    Mux(io.alu === srl || io.alu === srli, io.a32(0) >> io.b32(0)(15,0),
    Mux(io.alu === or || io.alu === ori,io.a32(0) | io.b32(0),
    Mux(io.alu === and || io.alu === andi,io.a32(0) & io.b32(0),
    Mux(io.alu === sub,io.a32(0) - io.b32(0),
    Mux(io.alu === sra || io.alu === srai,io.a32(0) >> io.b32(0)(15,0),
    Mux(io.alu === jal || io.alu === jalr,io.a32(0),
    Mux(io.alu === sw,io.a32(0) + io.b32(0),
    Mux(io.alu === config,Mux(io.a32(0).asUInt <= io.b32(0).asUInt,io.a32(0),Mux(io.a32(0) >= (2.S * io.b32(0)),io.b32(0),0.S)),
    Mux(io.alu === vle32,io.a32(0),
    0.S))))))))))))))
    io.out(1):=Mux(io.alu === vle32,io.a32(0)+4.S,0.S)
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