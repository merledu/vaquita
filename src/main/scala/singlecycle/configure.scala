package singlecycle
import chisel3._
import chisel3.util._
import chisel3.experimental._

class configure extends Module {
  val io = IO (new Bundle {
    val zimm = Input(SInt(32.W))
    val rs1= Input(UInt(5.W))
    val rd= Input(UInt(5.W))
    val rs1_readdata =Input(SInt(32.W))
    val current_vl =Input(SInt(32.W))
    // val vlmax = Output(UInt(32.W))
    val vl = Output(SInt(32.W))
    val rd_out = Output(UInt(5.W))
    val avl_o = Output(SInt(32.W))
    val valmax_o = Output(SInt(32.W))

    val vlmul = io.zimm(2,0).asUInt
    val vsew =io.zimm(5,3).asUInt
    // val sew = 0.U(32.W)
    // val lmul = 0.U(32.W)
    var valmax = 0.S
    var avl= 0.S

    when (vlmul === "b101".U){  //lmul=1/8   

        when (vsew === "b000".U){ //sew=8
            valmax =2.S
        }.elsewhen(vsew === "b001".U){
            valmax =1.S
        }.elsewhen(vsew === "b010".U){
            valmax =(1.S >> 2)
        // }.elsewhen(vsew ==="b011".U){
        //     valmax =1/4.U
        }


    }.elsewhen(vlmul === "b110".U){ //lmul=1/4

        when (vsew === "b000".U){ //sew=8
            valmax =4.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =2.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =1.S
        // }.elsewhen(vsew ==="b011".U){ //sew=64
        //     valmax =1/2.U
        }

    }.elsewhen(vlmul === "b111".U){ //lmul=1/2

        when (vsew === "b000".U){ //sew=8
            valmax =8.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =4.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =2.S
        }.elsewhen(vsew ==="b011".U){ //sew=64
            valmax =1.S
        }

    }.elsewhen(vlmul === "b000".U){ //lmul=1
        when (vsew === "b000".U){ //sew=8
            valmax =16.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =8.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =4.S
        }.elsewhen(vsew ==="b011".U){ //sew=64
            valmax =2.S
        }
    }.elsewhen(vlmul === "b001".U){ //lmul=2
        when (vsew === "b000".U){ //sew=8
            valmax =32.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =16.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =8.S
        }.elsewhen(vsew ==="b011".U){ //sew=64
            valmax =4.S
        }
    }.elsewhen(vlmul === "b010".U){ //lmul=4
        when (vsew === "b000".U){ //sew=8
            valmax =64.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =32.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =16.S
        }.elsewhen(vsew ==="b011".U){ //sew=64
            valmax =8.S
        }
    }.elsewhen(vlmul === "b011".U){ //lmul=8
        when (vsew === "b000".U){ //sew=8
            valmax =128.S
        }.elsewhen(vsew === "b001".U){ //sew=16
            valmax =64.S
        }.elsewhen(vsew === "b010".U){ //sew=32
            valmax =32.S
        }.elsewhen(vsew ==="b011".U){ //sew=64
            valmax =16.S
        }
    }
    // io.vlmax = valmax

avl = Mux(io.rs1 =/= "b00000".U, io.rs1_readdata,
    Mux(io.rd =/= "b00000".U && io.rs1 === "b00000".U, valmax,
    Mux(io.rs1 === 0.U && io.rd === 0.U, io.current_vl, 0.S)))

    // io.avl =avl

    when (avl <= valmax){
        io.vl:=avl
    }.otherwise{
        io.vl:=valmax
    }
        
io.rd_out:= io.rd

io.valmax_o := valmax
io.avl_o := avl

}