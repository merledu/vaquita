package riscv
import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage
class alu_control extends Module {
    val io = IO(new Bundle{
        val op_code = Input(UInt(7.W))
        val fn3 = Input(UInt(3.W))
        val fn7 = Input(UInt(7.W))
        val lumop = Input(UInt(32.W))

        val out = Output(UInt(32.W))
    })
    val mop = io.fn7(3,2)
    //r type
    when (io.op_code==="b0110011".U){
        when (io.fn7===0.U){
            //add
            when (io.fn3===0.U){
                io.out :=0.U
            }
            //sll
            .elsewhen (io.fn3===1.U){
                io.out := 2.U
            }
            //slt
            .elsewhen (io.fn3===2.U){
                io.out := 4.U
            }
            //sltu
            .elsewhen (io.fn3===3.U){
                io.out := 6.U
            }
            //xor
            .elsewhen (io.fn3===4.U){
                io.out := 9.U
            }
            //srl
            .elsewhen (io.fn3===5.U){
                io.out := 11.U
            }
            //or
            .elsewhen (io.fn3===6.U){
                io.out := 13.U
            }
            //and
            .elsewhen (io.fn3===7.U){
                io.out := 15.U
            }
            .otherwise{
                io.out := 0.U
            }
        }


        .elsewhen (io.fn7===1.U){
            //sub
            when (io.fn3===0.U){
                io.out := 17.U
            }
            //sra
            .elsewhen (io.fn3===5.U){
                io.out := 18.U
            }
            .otherwise{
                io.out := 0.U
            }



        }
        .otherwise{
            io.out := 0.U
        }
    }




    // i type
    .elsewhen (io.op_code==="b0010011".U){
        when (io.fn7===0.U){
            //slli
            when (io.fn3===1.U){
                io.out := 3.U
            }
            //srli
            .elsewhen (io.fn3===5.U){
                io.out := 12.U
            }


            //i type without fn7
            //addi
            .elsewhen (io.fn3===0.U){
                io.out := 1.U
            }
            //slti
            .elsewhen (io.fn3===2.U){
                io.out := 5.U
            }
            //sltui
            .elsewhen (io.fn3===3.U){
                io.out := 7.U
            }
            //xori
            .elsewhen (io.fn3===4.U){
                io.out := 10.U
            }
            //ori
            .elsewhen (io.fn3===6.U){
                io.out := 14.U
            }
            //andi
            .elsewhen (io.fn3===7.U){
                io.out := 16.U
            }


            .otherwise{
                io.out := 0.U
            }
        }


        .elsewhen (io.fn7===1.U){
            //srai
            when (io.fn3===5.U){
                io.out := 19.U
            }
            .otherwise{
                io.out := 0.U
            }
        }
        .otherwise{
            io.out := 0.U
        }

    }

    // i typr jalr
    .elsewhen (io.op_code==="b1100111".U){
        io.out := 25.U
    }
    //i type load
    .elsewhen (io.op_code==="b0000011".U){
         when (io.fn3===2.U){
            io.out := 28.U
         }
         .otherwise{
            io.out := 0.U
         }
    }

    // j typr jal
    .elsewhen (io.op_code==="b1101111".U){
        io.out := 24.U
    }

    // b typr
    .elsewhen (io.op_code==="b1100011".U){
        //beq
        when (io.fn3===0.U){
            io.out := 20.U
        }
        //bne
        .elsewhen (io.fn3===1.U){
            io.out := 21.U
        }
        //blt
        .elsewhen (io.fn3===4.U){
            io.out := 22.U
        }
        // //bge
        // .elsewhen (io.fn3===5.U){
        //     io.out := 23.U
        // }
        //bltu
        .elsewhen (io.fn3===6.U){
            io.out := 8.U
        }
        //bgeu
        .elsewhen (io.fn3===7.U){
            io.out := 23.U
        }
        .otherwise{
            io.out :=30.U
        }
    }
    //sw
    .elsewhen(io.op_code==="b0100011".U){
        when (io.fn3===2.U){
            io.out := 27.U
        }
        .otherwise{
            io.out := 0.U
        }
    }
    //vector configure
    .elsewhen(io.op_code==="b1010111".U && io.fn3==="b111".U){
        when (io.fn3===7.U){
            io.out := 29.U
        }
        .otherwise{
            io.out := 0.U
        }
    }
    //vector load

    .elsewhen(io.op_code==="b0000111".U){
        when (mop==="b00".U && io.lumop === "b00000".U){
            io.out := 30.U
        }
        .otherwise{
            io.out := 0.U
        }
    }
    //vector store

    .elsewhen(io.op_code==="b0100111".U){
        when (mop==="b00".U && io.lumop === "b00000".U){
            io.out := 32.U
        }
        .otherwise{
            io.out := 0.U
        }
    }

    //vector to vector
    .elsewhen (io.op_code==="b1010111".U && io.fn3==="b000".U){
      val opcodeMap = Array(
        "b000000".U -> 31.U,    // vadd
        "b000010".U -> 33.U,    // vsub
        "b000100".U -> 34.U,    // vminu
        "b000101".U -> 35.U,    // vmin
        "b000110".U -> 36.U,    // vmaxu
        "b000111".U -> 37.U,    // vmax
        "b001001".U -> 38.U,    // vand
        "b001010".U -> 39.U,    // vor
        "b001011".U -> 40.U,    // vxor
        "b001100".U -> 41.U,    // vrgather
        "b001110".U -> 42.U,    // vgatherei16
        "b010000".U -> 43.U,    // vadc
        "b010001".U -> 44.U,    // vmadc
        "b010010".U -> 45.U,    // vsbc
        "b010011".U -> 46.U,    // vmsbc
        "b010111".U -> 47.U,    // vmerge  or vmv
        "b011000".U -> 48.U,    // vmseq
        "b011001".U -> 49.U,    // vmsne
        "b011010".U -> 50.U,    // vmsltu
        "b011011".U -> 51.U,    // vmslt
        "b011100".U -> 52.U,    // vmsleu
        "b011101".U -> 53.U,    // vmsle
        "b100000".U -> 54.U,    // vsaddu
        "b100001".U -> 55.U,    // vsadd
        "b100010".U -> 56.U,    // vssubu
        "b100011".U -> 57.U,    // vssub
        "b100101".U -> 58.U,    // vsll
        "b100111".U -> 59.U,    // vsmul
        "b101000".U -> 60.U,    // vsrl
        "b101001".U -> 61.U,    // vsra
        "b101010".U -> 62.U,    // vssrl
        "b101011".U -> 63.U,    // vssra
        "b101100".U -> 64.U,    // vnsrl
        "b101101".U -> 65.U,    // vnsra
        "b101110".U -> 66.U,    // vnclipu
        "b101111".U -> 67.U,    // vnclip
        "b110000".U -> 68.U,    // vwredsumu
        "b110001".U -> 69.U     // vwredsum
        )

io.out := MuxLookup(io.fn7(6, 1), 0.U, opcodeMap)
    }
    //vector to scalar
    .elsewhen (io.op_code==="b1010111".U && io.fn3==="b100".U){
      val opcodeMap = Array(
  "b000000".U -> 70.U,    // vadd
  "b000010".U -> 71.U,    // vsub
  "b000011".U -> 72.U,    // vrsub
  "b000100".U -> 73.U,    // vminu
  "b000101".U -> 74.U,    // vmin
  "b000110".U -> 75.U,    // vmaxu
  "b000111".U -> 76.U,    // vmax
  "b001001".U -> 77.U,    // vand
  "b001010".U -> 78.U,    // vor
  "b001011".U -> 79.U,    // vxor
  "b001100".U -> 80.U,    // vrgather
  "b001110".U -> 81.U,    // vslideup
  "b001111".U -> 82.U,    // vslidedown
  "b010000".U -> 83.U,    // vadc
  "b010001".U -> 84.U,    // vmadc
  "b010010".U -> 85.U,    // vsbc
  "b010011".U -> 86.U,    // vmsbc
  "b010111".U -> 87.U,    // vmerge  or vmv
  "b011000".U -> 88.U,    // vmseq
  "b011001".U -> 89.U,    // vmsne
  "b011010".U -> 90.U,    // vmsltu
  "b011011".U -> 91.U,    // vmslt
  "b011100".U -> 92.U,    // vmsleu
  "b011101".U -> 93.U,    // vmsle
  "b011110".U -> 94.U,    // vmsgtu
  "b011111".U -> 95.U,    // vmsgt
  "b100000".U -> 96.U,    // vsaddu
  "b100001".U -> 97.U,    // vsadd
  "b100010".U -> 98.U,    // vssubu
  "b100011".U -> 99.U,    // vssub
  "b100101".U -> 100.U,    // vsll
  "b100111".U -> 101.U,    // vsmul
  "b101000".U -> 102.U,    // vsrl
  "b101001".U -> 103.U,    // vsra
  "b101010".U -> 104.U,    // vssrl
  "b101011".U -> 105.U,    // vssra
  "b101100".U -> 106.U,    // vnsrl
  "b101101".U -> 107.U,    // vnsra
  "b101110".U -> 108.U,    // vnclipu
  "b101111".U -> 109.U,    // vnclip
)

io.out := MuxLookup(io.fn7(6, 1), 0.U, opcodeMap)
    }
     //vector to immediater
    .elsewhen (io.op_code==="b1010111".U && io.fn3==="b011".U){
      val opcodeMap = Array(
  "b000000".U -> 110.U,    // vadd
  "b000011".U -> 111.U,    // vrsub
  "b001001".U -> 112.U,    // vand
  "b001010".U -> 113.U,    // vor
  "b001011".U -> 114.U,    // vxor
  "b001100".U -> 115.U,    // vrgather
  "b001110".U -> 116.U,    // vslideup
  "b001111".U -> 117.U,    // vslidedown
  "b010000".U -> 118.U,    // vadc
  "b010001".U -> 119.U,    // vmadc
  "b010111".U -> 120.U,    // vmerge or vmv
  "b011000".U -> 121.U,    // vmseq
  "b011001".U -> 122.U,    // vmsne
  "b011100".U -> 123.U,    // vmsleu
  "b011101".U -> 124.U,    // vmsle
  "b011110".U -> 125.U,    // vmsgtu
  "b011111".U -> 126.U,    // vmsgt
  "b100000".U -> 127.U,    // vsaddu
  "b100001".U -> 128.U,    // vsadd
  "b100101".U -> 129.U,    // vsll
  "b101000".U -> 130.U,    // vsrl
  "b101001".U -> 131.U,    // vsra
  "b101010".U -> 132.U,    // vssrl
  "b101011".U -> 133.U,    // vssra
  "b101100".U -> 134.U,    // vnsrl
  "b101101".U -> 135.U,    // vnsra
  "b101110".U -> 136.U,    // vnclipu
  "b101111".U -> 137.U,    // vnclip
)

io.out := MuxLookup(io.fn7(6, 1), 0.U, opcodeMap)
    }
    .otherwise{
        io.out := 0.U
    }
}
// object aluDriver extends App{
//   (new ChiselStage).emitVerilog(new alu_control)
// }