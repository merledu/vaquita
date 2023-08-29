package singlecycle

import chisel3._
import chisel3.util._

class v_alucontrol extends Module{
	val io = IO(new Bundle{
		val aluOp = Input(UInt(3.W))
		val func6 = Input(UInt(6.W))
        val func3 = Input(UInt(3.W))
		val aluc = Output(UInt(10.W))
	})


	io.aluc := 0.U

	when (io.aluOp === "b01000".U){io.aluc := Cat("b0".U,io.func6,io.func3)

	 
	
}
	
}