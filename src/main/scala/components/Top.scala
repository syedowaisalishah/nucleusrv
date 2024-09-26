package nucleusrv.components
import chisel3._
import chisel3.stage.ChiselStage
import nucleusrv.tracer._

class Top(programFile: Option[String], dataFile1: Option[String], dataFile2: Option[String],implicit val config: nucleusrv.components.Configs) extends Module {
  val XLEN   = config.XLEN
  val io = IO(new Bundle() {
    val pin = Output(UInt(32.W))
    val fcsr = Output(UInt(32.W))
  })

  val core: Core = Module(new Core())
  core.io.stall := false.B

  // Pass config explicitly to both SRamTop and SRamTop32
  val dmem = Module(new SRamTop(dataFile1, dataFile2,config))  // config passed explicitly
  val imem = Module(new SRamTop32(programFile,config))  // config passed explicitly

  /*  Imem Interconnections  */
  core.io.imemRsp <> imem.io.rsp
  imem.io.req <> core.io.imemReq

  /*  Dmem Interconnections  */
  core.io.dmemRsp <> dmem.io.rsp
  dmem.io.req <> core.io.dmemReq

  io.pin := core.io.pin
  io.fcsr := core.io.fcsr_o_data

  if (config.TRACE) {
    val tracer = Module(new Tracer())

    Seq(
      (tracer.io.rvfiUInt, core.io.rvfiUInt.get),
      (tracer.io.rvfiSInt, core.io.rvfiSInt.get),
      (tracer.io.rvfiBool, core.io.rvfiBool.get),
      (tracer.io.rvfiRegAddr, core.io.rvfiRegAddr.get)
    ).map(
      tr => tr._1 <> tr._2
    )
    tracer.io.rvfiMode := core.io.rvfiMode.get
  }
}

object NRVDriver {
  def main(args: Array[String]): Unit = {
    val IMem = if (args.length > 0) args(0) else "program.hex"
    val DMem1 = if (args.length > 1) args(1) else "data1.hex"
    val DMem2 = if (args.length > 2) args(2) else "data2.hex"

    // Ensure the config is passed to the Top module
    implicit val config: nucleusrv.components.Configs = Configs(XLEN = 64, M = true, C = true, TRACE = true)

    new ChiselStage().emitVerilog(new Top(Some(IMem), Some(DMem1), Some(DMem2),config))
  }
}

// object NRVDriver {
//   // generate verilog
//   def main(args: Array[String]): Unit = {
//     val IMem = if (args.length > 0) args(0) else "program.hex"
//     val DMem = if (args.length > 1) args(1) else "data.hex"
//     new ChiselStage().emitVerilog(new Top(Some(IMem), Some(DMem)))
//   }
// }


