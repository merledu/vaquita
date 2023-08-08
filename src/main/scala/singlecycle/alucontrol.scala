package singlecycle

import chisel3._
import chisel3.util._

class alucontrol extends Module{
	val io = IO(new Bundle{
		val aluOp = Input(UInt(3.W))
		val func3 = Input(UInt(3.W))
		val func7 = Input(UInt(1.W))
		val aluc = Output(UInt(5.W))
	})


	io.aluc := 0.U

	when (io.aluOp === "b000".U){io.aluc := Cat("b0".U,io.func7,io.func3)
    } .elsewhen (io.aluOp === "b001".U) {io.aluc := Cat("b00".U,io.func3)
    }.elsewhen (io.aluOp === "b101".U || io.aluOp === "b100".U){io.aluc := "b00000".U
    } .elsewhen (io.aluOp === "b011".U){io.aluc := "b11111".U
    } .elsewhen (io.aluOp === "b010".U){io.aluc := Cat("b10".U,io.func3)
    }.elsewhen (io.aluOp === "b110".U){io.aluc := "b00000".U}  
	
}
	
