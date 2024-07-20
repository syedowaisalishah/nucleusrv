
package nucleusrv.components
import chisel3._

class Registers(configs: Configs) extends Module {
  val io = IO(new Bundle {
    val readAddress = Input(Vec(2, UInt(5.W)))
    val writeEnable = Input(Bool())
    val writeAddress = Input(UInt(5.W))
    val writeData = Input(UInt(configs.XLEN.W))

    val readData = Output(Vec(2, UInt(configs.XLEN.W)))
  })
  val reg = RegInit(VecInit(Seq.fill(32)(0.U(configs.XLEN.W))))

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
