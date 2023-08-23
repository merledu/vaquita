package csr
import chisel3._
import chisel3.util._

object AddressMap {
    // Machine trap setup
    val vstart            = "h008".U
    val vxsat             = "h009".U
    val vxrm              = "h00A".U
    val vcsr              = "h00F".U
    val vl                = "hC20".U
    val vtype             = "hC21".U
    val vlenb             = "hC22".U
}