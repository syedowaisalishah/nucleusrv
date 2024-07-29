
package nucleusrv.components
import chisel3._
import chisel3.util.BitPat

class JumpUnit(implicit val config: nucleusrv.components.Configs) extends Module {

  val XLEN   = config.XLEN
  val io = IO(new Bundle {
    val func7: UInt = Input(UInt(XLEN.W))
    val jump: UInt = Output(UInt(2.W))
  })

  when(io.func7 === BitPat("b1101111")) {
    io.jump := 2.U
  }.elsewhen(io.func7 === BitPat("b1100111")) {
      io.jump := 3.U
    }
    .otherwise {
      io.jump := 0.U
    }
}
