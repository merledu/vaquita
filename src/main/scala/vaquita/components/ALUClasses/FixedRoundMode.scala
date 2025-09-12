package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.components.ALUObj._
import vaquita.configparameter.VaquitaConfig

class FixedRoundMode{

    def fixed_round_mode(v:UInt,shifted: UInt, d: UInt, vxrm: UInt): UInt = {
    // Bit positions
        // val bit_d   = v(d) // v[d]
        // val bit_d1  = Mux(d === 0.U, 0.U, v(d - 1.U)) // v[d-1]

        // val high_2 = Mux(d > 1.U, d - 2.U, 0.U)
        // val mask_2 = "hffffffff".U >> high_2
        // val bits_d2_to_0 = v & mask_2  // v[d-2:0]

        // val high_1 = Mux(d > 1.U, d - 1.U, 0.U)
        // val mask_1 = "hffffffff".U >> high_1
        // val bits_d1_to_0 = v & mask_1          // v[d-1]
      
          val width        = v.getWidth
          val bit_d        = Mux(d < width.U, v(d), 0.U(1.W))        // LSB after shift
          val bit_d1       = Mux(d === 0.U, 0.U(1.W), v(d - 1.U))    // guard bit
          val mask_d1_to_0 = Mux(d === 0.U, 0.U(width.W), ((1.U(width.W) << d) - 1.U))
          val mask_d2_to_0 = Mux(d <= 1.U, 0.U(width.W), ((1.U(width.W) << (d - 1.U)) - 1.U))
          val any_d1_to_0  = (v & mask_d1_to_0).orR
          val any_d2_to_0  = (v & mask_d2_to_0).orR
      
          val rnu_inc = bit_d1                                              // vxrm = 00 (round to nearest, up)
          val rne_inc = Mux(bit_d1 === 1.U && (any_d2_to_0 || bit_d === 1.U), 1.U, 0.U) // vxrm = 01 (ties to even)
          val rdn_inc = 0.U(1.W)                                            // vxrm = 10 (round down: add 0)
          val rod_inc = Mux((bit_d === 0.U) && any_d1_to_0, 1.U, 0.U)  


    // Rounding increment flags
        // val rnu_inc = Mux(bit_d1 === 1.U,1.U,0.U)                          // vxrm = 00
        // val rne_inc = Mux((bit_d1 === 1.U) && ((bits_d2_to_0 =/= 0.U) || (bit_d === 1.U)),1.U,0.U) // vxrm = 01
        // val rdn_inc = 1.U                               // vxrm = 10
        // val rod_inc = Mux((bit_d === 0.U) && (bits_d1_to_0 =/= 0.U),1.U,0.U) // vxrm = 11

    //   // Select rounding increment
        
      val rounding_inc = WireDefault(0.U(1.W))
      switch(vxrm) {
        is("b00".U) { rounding_inc := rnu_inc }
        is("b01".U) { rounding_inc := rne_inc }
        is("b10".U) { rounding_inc := rdn_inc }
        is("b11".U) { rounding_inc := rod_inc }
      }

      // Final result
      shifted + rounding_inc
    }
}