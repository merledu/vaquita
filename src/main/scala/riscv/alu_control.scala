package riscv
import chisel3 . _
import chisel3 . util . _
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
        //vaddvv
        when(io.fn7(6,1)==="b000000".U){
            io.out := 31.U
        }
        //vsubvv
        .elsewhen(io.fn7(6,1)==="b000010".U){
            io.out := 33.U
        }
        // //vrsubvv
<<<<<<< HEAD
        // .elsewhen(io.fn7(6,1)==="b000011".U){
=======
        // .elsewhen(io.fn7(6,1)==="000011".U){
>>>>>>> 2bf89c3 (push saad)
        //     io.out := 34.U
        // }
        //vminu
        .elsewhen(io.fn7(6,1)==="b000100".U){
            io.out := 34.U
        }
        //vmin
        .elsewhen(io.fn7(6,1)==="b000101".U){
            io.out := 35.U
        }
        //vmaxu
        .elsewhen(io.fn7(6,1)==="b000110".U){
            io.out := 36.U
        }
        //vmax
        .elsewhen(io.fn7(6,1)==="b000111".U){
<<<<<<< HEAD
            io.out := 38.U
        }
        //vand
        .elsewhen(io.fn7(6,1)==="b001001".U){
            io.out := 39.U
        }
        //vor
        .elsewhen(io.fn7(6,1)==="b001010".U){
            io.out := 40.U
        }
        //vxor
        .elsewhen(io.fn7(6,1)==="b001011".U){
            io.out := 41.U
        }
        //vrgather
        .elsewhen(io.fn7(6,1)==="b001100".U){
            io.out := 42.U
        }
        //vslide up 
        .elsewhen(io.fn7(6,1)==="b001110".U){
            io.out := 43.U
        }
        //vgatherei16
        .elsewhen(io.fn7(6,1)==="b001110".U){
            io.out := 44.U
        }
        //vor
        .elsewhen(io.fn7(6,1)==="b001111".U){
=======
            io.out := 37.U
        }
        //vand
        .elsewhen(io.fn7(6,1)==="b001001".U){
            io.out := 38.U
        }
        //vor
        .elsewhen(io.fn7(6,1)==="b001010".U){
            io.out := 39.U
        }
        //vxor
        .elsewhen(io.fn7(6,1)==="b001011".U){
            io.out := 40.U
        }
        //vrgather
        .elsewhen(io.fn7(6,1)==="b001100".U){
            io.out := 41.U
        }
        // //vslide up 
        // .elsewhen(io.fn7(6,1)==="b001110".U){
        //     io.out := 43.U
        // }
        //vgatherei16
        .elsewhen(io.fn7(6,1)==="b001110".U){
            io.out := 42.U
        }
        // //vslidedown
        // .elsewhen(io.fn7(6,1)==="b001111".U){
        //     io.out := 45.U
        // }
        //vadc
        .elsewhen(io.fn7(6,1)==="b010000".U){
            io.out := 43.U
        }
        //vmadc
        .elsewhen(io.fn7(6,1)==="b010001".U){
            io.out := 44.U
        }
        //vsbc
        .elsewhen(io.fn7(6,1)==="b010010".U){
>>>>>>> 2bf89c3 (push saad)
            io.out := 45.U
        }
        //vmsbc
        .elsewhen(io.fn7(6,1)==="b010011".U){
            io.out := 46.U
        }
        //vmerge
        .elsewhen(io.fn7(6,1)==="b010111".U){
            io.out := 47.U
        }
        //vmseq
        .elsewhen(io.fn7(6,1)==="b011000".U){
            io.out := 48.U
        }
        //vmsne
        .elsewhen(io.fn7(6,1)==="b011001".U){
            io.out := 49.U
        }
        //vmsltu
        .elsewhen(io.fn7(6,1)==="b011010".U){
            io.out := 50.U
        }
        //vmslt
        .elsewhen(io.fn7(6,1)==="b011011".U){
            io.out := 50.U
        }
        //vmsleu
        .elsewhen(io.fn7(6,1)==="b011100".U){
            io.out := 51.U
        }
        //vmsle
        .elsewhen(io.fn7(6,1)==="b011101".U){
            io.out := 52.U
        }
        //vmsgtu
        .elsewhen(io.fn7(6,1)==="b011110".U){
            io.out := 53.U
        }
        //vmsgt
        .elsewhen(io.fn7(6,1)==="011111".U){
            io.out := 54.U
        }
        //vsaddu
        .elsewhen(io.fn7(6,1)==="b100000".U){
            io.out := 55.U
        }
        //vsadd
        .elsewhen(io.fn7(6,1)==="b100001".U){
            io.out := 56.U
        }
        //vssubu
        .elsewhen(io.fn7(6,1)==="b100010".U){
            io.out := 57.U
        }
        //vssub
        .elsewhen(io.fn7(6,1)==="b100011".U){
            io.out := 58.U
        }
        //vsll
        .elsewhen(io.fn7(6,1)==="b100101".U){
            io.out := 59.U
        }
        //vsmul
        .elsewhen(io.fn7(6,1)==="b100111".U){
            io.out := 60.U
        }
        //vsrl
        .elsewhen(io.fn7(6,1)==="b101000".U){
            io.out := 61.U
        }
        //vsra
        .elsewhen(io.fn7(6,1)==="b101001".U){
            io.out := 62.U
        }
        //vssrl
        .elsewhen(io.fn7(6,1)==="b101010".U){
            io.out := 63.U
        }
        //vssra
        .elsewhen(io.fn7(6,1)==="b101011".U){
            io.out := 64.U
        }
        //vnsrl
        .elsewhen(io.fn7(6,1)==="b101100".U){
            io.out := 65.U
        }
        //vnsra
        .elsewhen(io.fn7(6,1)==="b101101".U){
            io.out := 66.U
        }
        //vnclipu
        git config pull.rebase true  git config pull.rebase trvnclip
        .elsewhen(io.fn7(6,1)==="b101110".U){
            io.out := 67.U
        }
        //vnclip
        .elsewhen(io.fn7(6,1)==="b101111".U){
                    io.out := 68.U
        }
        //vwredsumu
        .elsewhen(io.fn7(6,1)==="b110000".U){
        git config pull.rebase true      io.out := 69.U
        }
        //vwredsum
        .elsewhen(io.fn7(6,1)==="b110001".U){
            io.out := 70.U
        }
















        //vminuvv
        .elsewhen(io.fn7(6,1)==="b000100".U){
            io.out := 31.U
        }
        //vminvv
        .elsewhen(io.fn7(6,1)==="b000101".U){
            io.out := 31.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 31.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 31.U
        }.otherwise{
            io.out:=0.U
        }
    }
    //vector to scalar
    .elsewhen (io.op_code==="b1010111".U && io.fn3==="b100".U){
        //vaddvi
        when(io.fn7(6,1)==="b000000".U){
            io.out := 50.U
        }
        //vsubvi
        .elsewhen(io.fn7(6,1)==="b000010".U){
            io.out := 51.U
        }
        //vminuvv
        .elsewhen(io.fn7(6,1)==="b000100".U){
            io.out := 52.U
        }
        //vminvv
        .elsewhen(io.fn7(6,1)==="b000101".U){
            io.out := 53.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 54.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 55.U
        }.otherwise{
            io.out:=0.U
        }
    }
     //vector to immediater
    .elsewhen (io.op_code==="b1010111".U && io.fn3==="b011".U){
        //vaddvi
        when(io.fn7(6,1)==="b000000".U){
            io.out := 60.U
        }
        //vsubvi
        .elsewhen(io.fn7(6,1)==="b000010".U){
            io.out := 51.U
        }
        //vminuvv
        .elsewhen(io.fn7(6,1)==="b000100".U){
            io.out := 52.U
        }
        //vminvv
        .elsewhen(io.fn7(6,1)==="b000101".U){
            io.out := 53.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 54.U
        }
        .elsewhen(io.fn7(6,1)==="b000000".U){
            io.out := 55.U
        }.otherwise{
            io.out:=0.U
        }
    }


    .otherwise{
        io.out := 0.U
    }
}