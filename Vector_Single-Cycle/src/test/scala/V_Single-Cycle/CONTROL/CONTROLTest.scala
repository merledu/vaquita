package Vpractice

import chisel3._
import org.scalatest._
import chiseltest._

class CONTROLTest extends FreeSpec with ChiselScalatestTester{
   "CONTROL test" in{
       test(new Control()){c =>
         c.io.opcode.poke("b1010111".U)
         c.io.rs1_no.poke(0.U)
         c.io.rd_no.poke(2.U)
         c.io.fun3.poke(3.U)
         c.clock.step(1)
         c.io.mem_write.expect(0.B)
         c.io.branch.expect(0.B)
         c.io.mem_read.expect(0.B)
         c.io.reg_write.expect(1.B)
         c.io.men_to_reg.expect(0.B)
         c.io.alu_operation.expect(1.U)
         c.io.operand_A.expect(0.U)
         c.io.operand_B.expect(0.U)
         c.io.extend.expect(0.U)
         c.io.next_pc_sel.expect(0.U)
         c.io.avl_ope.expect(0.U)
         c.io.is_I.expect(0.B)                                
         c.io.is_V.expect(1.B)  
         c.io.csr_reg_write(0.B)     
         c.io.V_opeA.expect(1.U)         
         c.io.V_opeB.expect(1.U)
         c.io.V_imm.expect(1.U)  
         c.io.V_men_to_reg.expect(0.B)             
       }
   }
}
