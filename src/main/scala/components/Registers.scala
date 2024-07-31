
package nucleusrv.components
import chisel3._

class Registers(implicit val config:Configs) extends Module { // add config
  val XLEN   = config.XLEN // add config
  val io = IO(new Bundle {
    val readAddress = Input(Vec(2, UInt(5.W)))
    val writeEnable = Input(Bool())
    val writeAddress = Input(UInt(5.W))
    val writeData = Input(UInt(XLEN.W)) // add config

    val readData = Output(Vec(2, UInt(XLEN.W))) // add config
  })

 val reg = if (config.E) { // implementing extension E
    RegInit(VecInit(Seq.fill(16)(0.U(XLEN.W))))  // add config
  } else {
    RegInit(VecInit(Seq.fill(32)(0.U(XLEN.W)))) // add config
  } 

  when(io.writeEnable) {
    reg(io.writeAddress) := io.writeData
  }
  for (i <- 0 until 2) {
    when(io.readAddress(i) === 0.U) {
      io.readData(i) := 0.U
    }.otherwise {
      io.readData(i) := reg(io.readAddress(i))
    }
  }

  // io.readData1 := registerFile(io.readAddress1)
  // io.readData2 := registerFile(io.readAddress2)

  // when(io.writeEnable) {
  //   registerFile(io.writeAddress) := io.writeData
  // }
}
