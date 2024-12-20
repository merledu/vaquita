package vaquita
import chisel3._
import chisel3.util._

// control unit base on function6 (following number is function6 written in decimal)

object alu_obj{
    val vadd = "000000".U(6.W)//ok
    val vsub = 2.U(6.W)//ok
    val vrsub = 3.U(6.W)//ok
    val vminu = 4.U(6.W) //bit
    val vmin = 5.U(6.W) //bit
    val vmaxu = 6.U(6.W) //bit
    val vmax = 7.U(6.W) //bit
    val vand = 9.U(6.W)//ok
    val vor = 10.U(6.W)//ok
    val vxor = 11.U(6.W)//ok
    val vrgather = 12.U(6.W)//
    val vslideup = 14.U(6.W)
    val vrgatherei16 = 14.U(6.W)
    val vslidedown = 15.U(6.W)
    val vadc = 16.U(6.W)
    val vmadc = 17.U(6.W)
    val vsbc = 18.U(6.W)
    val vmsbc = 19.U(6.W)
    val vmv = 23.U(6.W)
    val vmseq = 24.U(6.W)//bit
    val vmsne = 25.U(6.W)//bit
    val vmsltu = 26.U(6.W)//bit
    val vmslt = 27.U(6.W)//bit
    val vmsleu = 28.U(6.W)//bit
    val vmsle = 29.U(6.W)//bit
    val vmsgtu = 30.U(6.W)//bit
    val vmsgt = 31.U(6.W)//bit
    val vsaddu = 32.U(6.W)//
    val vsadd = 33.U(6.W)
    val vssubu = 34.U(6.W)
    val vssub = 35.U(6.W)
    val vsll = 37.U(6.W)//ok
    val vsmul = 39.U(6.W)
    val vsrl = 40.U(6.W)
    val vsra = 41.U(6.W)
    val vssrl = 42.U(6.W)
    val vssra = 43.U(6.W)
    val vnsrl = 44.U(6.W)
    val vnsra = 45.U(6.W)
    val vnclipu = 46.U(6.W)
    val vnclip = 47.U(6.W)
    val vwredsumu = 48.U(6.W)
    val vwredsum = 59.U(6.W)
}