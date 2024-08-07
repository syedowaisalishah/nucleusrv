package nucleusrv.components
import chisel3._
import chisel3.util._ 

class MemoryFetch(implicit val config: nucleusrv.components.Configs) extends Module { // add config
  val XLEN   = config.XLEN // add config
  val io = IO(new Bundle {
    val aluResultIn: UInt = Input(UInt(XLEN.W))// add config
    val writeData: UInt = Input(UInt(XLEN.W)) // add config
    val writeEnable: Bool = Input(Bool())
    val readEnable: Bool = Input(Bool())
    val readData: UInt = Output(UInt(XLEN.W)) // add config
    val stall: Bool = Output(Bool())
    val f3 = Input(UInt(3.W))

    val dccmReq = Decoupled(new MemRequestIO)
    val dccmRsp = Flipped(Decoupled(new MemResponseIO))
  })

  io.dccmRsp.ready := true.B

 
  val wdata = Wire(Vec(8, UInt(8.W)))
  val rdata = Wire(UInt(XLEN.W))
  val offset = RegInit(0.U(3.W))
  val funct3 = RegInit(0.U(3.W))
  val offsetSW = io.aluResultIn(2,0)  //The least significant 3 bits of this address (io.aluResultIn(2,0)) will tell you the byte offset within the 64-bit word.

  when(!io.dccmRsp.valid){
    funct3 := io.f3
    // converting offset to 3 bits because 2 bits can represent only 4 bytes for 8 bytes we need 3 bits so we extend offset from 2 to 3
    offset := io.aluResultIn(2,0) 
  }.otherwise{
    funct3 := funct3
    offset := offset
  }
// val rdata = 0.U
// for 32 bit we take 4 width vec now for 64 bits we extends the vec to 8 
wdata(0) := io.writeData(7,0)
wdata(1) := io.writeData(15,8)
wdata(2) := io.writeData(23,16)
wdata(3) := io.writeData(31,24)
wdata(4) := io.writeData(39,32)
wdata(5) := io.writeData(47,40)
wdata(6) := io.writeData(55,48)
wdata(7) := io.writeData(63,56)
 io.dccmReq.bits.activeByteLane := 0.U
 
 /* Store Byte */
//  it is store Byte condition because f3 is 000 
  when(io.writeEnable && io.f3 === "b000".U){
   when(offsetSW === 0.U){
    io.dccmReq.bits.activeByteLane := "b00000001".U // we increase this bytelane to 8 bits for 64 bits one byte equal to 8 bits
  }.elsewhen(offsetSW === 1.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(7,0)
    wdata(2) := io.writeData(23,16)
    wdata(3) := io.writeData(31,24)
    io.dccmReq.bits.activeByteLane := "b00000010".U //when offset is 1 the wdata will be selected and bytelane cooresponds with wdata
  }.elsewhen(offsetSW === 2.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(7,0)
    wdata(3) := io.writeData(31,24)
    io.dccmReq.bits.activeByteLane := "b00000100".U
  }.elsewhen(offsetSW === 3.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(31,24)
    wdata(3) := io.writeData(7,0)
    io.dccmReq.bits.activeByteLane := "b00001000".U
  }.elsewhen(offsetSW === 4.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(31,24)
    wdata(3) := io.writeData(39,32)
    wdata(4) := io.writeData(7,0)
    io.dccmReq.bits.activeByteLane := "b00010000".U
  }.elsewhen(offsetSW === 5.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(31,24)
    wdata(3) := io.writeData(47,40)
    wdata(5) := io.writeData(7,0)
    io.dccmReq.bits.activeByteLane := "b00100000".U
  }.elsewhen(offsetSW === 6.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(31,24)
    wdata(3) := io.writeData(55,48)
    wdata(6) := io.writeData(7,0)
    io.dccmReq.bits.activeByteLane := "b01000000".U
  }.elsewhen(offsetSW === 7.U){
    wdata(0) := io.writeData(15,8)
    wdata(1) := io.writeData(23,16)
    wdata(2) := io.writeData(31,24)
    wdata(3) := io.writeData(63,56)
    wdata(7) := io.writeData(7,0)
    io.dccmReq.bits.activeByteLane := "b10000000".U
  }
}.elsewhen(io.writeEnable && io.f3 === "b001".U) {  /* Store Half Word */
  // offset will either be 0, 1, 2, or 3 since the address can vary within a 64-bit word
  when(offsetSW === 0.U) {
    // data to be stored at the lower 16 bits (15, 0)
    io.dccmReq.bits.activeByteLane := "b00000011".U
    wdata(0) := io.writeData(7,0)
    wdata(1) := io.writeData(15,8)
  }.elsewhen(offsetSW === 1.U) {
    // data to be stored at bytes 1 and 2
    io.dccmReq.bits.activeByteLane := "b00000110".U
    wdata(1) := io.writeData(7,0)
    wdata(2) := io.writeData(15,8)
  }.elsewhen(offsetSW === 2.U) {
    // data to be stored at bytes 2 and 3
    io.dccmReq.bits.activeByteLane := "b00001100".U
    wdata(2) := io.writeData(7,0)
    wdata(3) := io.writeData(15,8)
  }.elsewhen(offsetSW === 3.U) {
    // data to be stored at bytes 3 and 4
    io.dccmReq.bits.activeByteLane := "b00011000".U
    wdata(3) := io.writeData(7,0)
    wdata(4) := io.writeData(15,8)
  }.elsewhen(offsetSW === 4.U) {
    // data to be stored at bytes 4 and 5
    io.dccmReq.bits.activeByteLane := "b00110000".U
    wdata(4) := io.writeData(7,0)
    wdata(5) := io.writeData(15,8)
  }.elsewhen(offsetSW === 5.U) {
    // data to be stored at bytes 5 and 6
    io.dccmReq.bits.activeByteLane := "b01100000".U
    wdata(5) := io.writeData(7,0)
    wdata(6) := io.writeData(15,8)
  }.elsewhen(offsetSW === 6.U) {
    // data to be stored at bytes 6 and 7
    io.dccmReq.bits.activeByteLane := "b11000000".U
    wdata(6) := io.writeData(7,0)
    wdata(7) := io.writeData(15,8)
  }
}.otherwise{  /* Store Word */
    io.dccmReq.bits.activeByteLane := "b11111111".U
}

  io.dccmReq.bits.dataRequest := wdata.asUInt()
  io.dccmReq.bits.addrRequest := (io.aluResultIn & "h00001fff".U) >> 3
  io.dccmReq.bits.isWrite := io.writeEnable
  io.dccmReq.valid := Mux(io.writeEnable | io.readEnable, true.B, false.B)

  io.stall := (io.writeEnable || io.readEnable) && !io.dccmRsp.valid
  
  rdata := Mux(io.dccmRsp.valid, io.dccmRsp.bits.dataResponse, DontCare)
  io.readData := 0.U
  when(io.readEnable) {
    when(funct3 === "b010".U) {
    // load word (64 bits)
    io.readData := rdata
  }.elsewhen(funct3 === "b000".U) {
    // load byte (8 bits)
    when(offset === "b000".U) {
      // addressing memory with 0, 8, 16...
      io.readData := Cat(Fill(56, rdata(7)), rdata(7, 0))
    }.elsewhen(offset === "b001".U) {
      // addressing memory with 1, 9, 17...
      io.readData := Cat(Fill(56, rdata(15)), rdata(15, 8))
    }.elsewhen(offset === "b010".U) {
      // addressing memory with 2, 10, 18...
      io.readData := Cat(Fill(56, rdata(23)), rdata(23, 16))
    }.elsewhen(offset === "b011".U) {
      // addressing memory with 3, 11, 19...
      io.readData := Cat(Fill(56, rdata(31)), rdata(31, 24))
    }.elsewhen(offset === "b100".U) {
      // addressing memory with 4, 12, 20...
      io.readData := Cat(Fill(56, rdata(39)), rdata(39, 32))
    }.elsewhen(offset === "b101".U) {
      // addressing memory with 5, 13, 21...
      io.readData := Cat(Fill(56, rdata(47)), rdata(47, 40))
    }.elsewhen(offset === "b110".U) {
      // addressing memory with 6, 14, 22...
      io.readData := Cat(Fill(56, rdata(55)), rdata(55, 48))
    }.elsewhen(offset === "b111".U) {
      // addressing memory with 7, 15, 23...
      io.readData := Cat(Fill(56, rdata(63)), rdata(63, 56))
    }.otherwise {
      // this condition should never occur but using it to avoid Chisel generating VOID errors
      io.readData := DontCare
    }
  }
}.elsewhen(funct3 === "b100".U) {
  // load byte unsigned
    when(offset === "b000".U) {
    // addressing memory with 0, 8, 16...
    io.readData := Cat(Fill(56, 0.U), rdata(7, 0))
  }.elsewhen(offset === "b001".U) {
    // addressing memory with 1, 9, 17...
    io.readData := Cat(Fill(56, 0.U), rdata(15, 8))
  }.elsewhen(offset === "b010".U) {
    // addressing memory with 2, 10, 18...
    io.readData := Cat(Fill(56, 0.U), rdata(23, 16))
  }.elsewhen(offset === "b011".U) {
    // addressing memory with 3, 11, 19...
    io.readData := Cat(Fill(56, 0.U), rdata(31, 24))
  }.elsewhen(offset === "b100".U) {
    // addressing memory with 4, 12, 20...
    io.readData := Cat(Fill(56, 0.U), rdata(39, 32))
  }.elsewhen(offset === "b101".U) {
    // addressing memory with 5, 13, 21...
    io.readData := Cat(Fill(56, 0.U), rdata(47, 40))
  }.elsewhen(offset === "b110".U) {
    // addressing memory with 6, 14, 22...
    io.readData := Cat(Fill(56, 0.U), rdata(55, 48))
  }.elsewhen(offset === "b111".U) {
    // addressing memory with 7, 15, 23...
    io.readData := Cat(Fill(56, 0.U), rdata(63, 56))
  }.otherwise {
    // this condition should never occur but using to avoid Chisel generating VOID errors
    io.readData := DontCare
  }
}.elsewhen(funct3 === "b101".U) {
   // load halfword unsigned
   when(offset === "b000".U) {
    // addressing memory with 0, 8, 16, 24, 32, 40, 48, 56...
    io.readData := Cat(Fill(48, 0.U), rdata(15, 0))
  }.elsewhen(offset === "b001".U) {
    // addressing memory with 1, 9, 17, 25, 33, 41, 49, 57...
    io.readData := Cat(Fill(48, 0.U), rdata(23, 8))
  }.elsewhen(offset === "b010".U) {
    // addressing memory with 2, 10, 18, 26, 34, 42, 50, 58...
    io.readData := Cat(Fill(48, 0.U), rdata(31, 16))
  }.elsewhen(offset === "b011".U) {
    // addressing memory with 3, 11, 19, 27, 35, 43, 51, 59...
    io.readData := Cat(Fill(48, 0.U), rdata(39, 24))
  }.elsewhen(offset === "b100".U) {
    // addressing memory with 4, 12, 20, 28, 36, 44, 52, 60...
    io.readData := Cat(Fill(48, 0.U), rdata(47, 32))
  }.elsewhen(offset === "b101".U) {
    // addressing memory with 5, 13, 21, 29, 37, 45, 53, 61...
    io.readData := Cat(Fill(48, 0.U), rdata(55, 40))
  }.elsewhen(offset === "b110".U) {
    // addressing memory with 6, 14, 22, 30, 38, 46, 54, 62...
    io.readData := Cat(Fill(48, 0.U), rdata(63, 48))
  }.otherwise {
    // this condition should never occur but using to avoid Chisel generating VOID errors
    io.readData := DontCare
  }
}.elsewhen(funct3 === "b001".U) {
    // load halfword
     when(offset === "b000".U) {
    // addressing memory with 0, 8, 16, 24, 32, 40, 48, 56...
    io.readData := Cat(Fill(48, rdata(15)), rdata(15, 0))
  }.elsewhen(offset === "b001".U) {
    // addressing memory with 1, 9, 17, 25, 33, 41, 49, 57...
    io.readData := Cat(Fill(48, rdata(23)), rdata(23, 8))
  }.elsewhen(offset === "b010".U) {
    // addressing memory with 2, 10, 18, 26, 34, 42, 50, 58...
    io.readData := Cat(Fill(48, rdata(31)), rdata(31, 16))
  }.elsewhen(offset === "b011".U) {
    // addressing memory with 3, 11, 19, 27, 35, 43, 51, 59...
    io.readData := Cat(Fill(48, rdata(39)), rdata(39, 24))
  }.elsewhen(offset === "b100".U) {
    // addressing memory with 4, 12, 20, 28, 36, 44, 52, 60...
    io.readData := Cat(Fill(48, rdata(47)), rdata(47, 32))
  }.elsewhen(offset === "b101".U) {
    // addressing memory with 5, 13, 21, 29, 37, 45, 53, 61...
    io.readData := Cat(Fill(48, rdata(55)), rdata(55, 40))
  }.elsewhen(offset === "b110".U) {
    // addressing memory with 6, 14, 22, 30, 38, 46, 54, 62...
    io.readData := Cat(Fill(48, rdata(63)), rdata(63, 48))
  }.otherwise {
    // this condition would never occur but using to avoid Chisel generating VOID errors
    io.readData := DontCare
  }
}.otherwise {
      // unknown func3 bits
      io.readData := DontCare
    }


   when(io.writeEnable && io.aluResultIn(31, 28) === "h8".asUInt()){
    printf("%x\n", io.writeData)
  }

  } 




// package nucleusrv.components
// import chisel3._
// import chisel3.util._ 



// class MemoryFetch(implicit val config: nucleusrv.components.Configs) extends Module { // add config
//   val XLEN   = config.XLEN // add config
//   val io = IO(new Bundle {
//     val aluResultIn: UInt = Input(UInt(XLEN.W))// add config
//     val writeData: UInt = Input(UInt(XLEN.W)) // add config
//     val writeEnable: Bool = Input(Bool())
//     val readEnable: Bool = Input(Bool())
//     val readData: UInt = Output(UInt(XLEN.W)) // add config
//     val stall: Bool = Output(Bool())
//     val f3 = Input(UInt(3.W))

//     val dccmReq = Decoupled(new MemRequestIO)
//     val dccmRsp = Flipped(Decoupled(new MemResponseIO))
//   })

//   io.dccmRsp.ready := true.B

//   val wdata = Wire(Vec(4, UInt(8.W)))
//   val rdata = Wire(UInt(XLEN.W))
//   val offset = RegInit(0.U(2.W))
//   val funct3 = RegInit(0.U(3.W))
//   val offsetSW = io.aluResultIn(1,0)

//   when(!io.dccmRsp.valid){
//     funct3 := io.f3
//     // for 32 bit the offset is last 2 digits so for 64 bits offset will be last 3 bits 
//     offset := io.aluResultIn(2,0) 
//   }.otherwise{
//     funct3 := funct3
//     offset := offset
//   }

//   wdata(0) := io.writeData(15,0)
//   wdata(1) := io.writeData(31,16)
//   wdata(2) := io.writeData(47,32)
//   wdata(3) := io.writeData(63,48)

//   /* Store Half Word */
//   when(io.writeEnable && io.f3 === "b000".U){
//     when(offsetSW === 0.U){
//       io.dccmReq.bits.activeByteLane := "b0001".U
//     }.elsewhen(offsetSW === 1.U){
//       wdata(0) := io.writeData(31,16)
//       wdata(1) := io.writeData(15,0)
//       wdata(2) := io.writeData(47,32)
//       wdata(3) := io.writeData(63,48)
//       io.dccmReq.bits.activeByteLane := "b0010".U
//     }.elsewhen(offsetSW === 2.U){
//       wdata(0) := io.writeData(31,16)
//       wdata(1) := io.writeData(47,32)
//       wdata(2) := io.writeData(15,0)
//       wdata(3) := io.writeData(63,48)
//       io.dccmReq.bits.activeByteLane := "b0100".U
//     }.otherwise{
//       wdata(0) := io.writeData(31,16)
//       wdata(1) := io.writeData(47,32)
//       wdata(2) := io.writeData(63,48)
//       wdata(3) := io.writeData(15,0)
//       io.dccmReq.bits.activeByteLane := "b1000".U
//     }
//   }
//     /* Store Half Word */
//     .elsewhen(io.writeEnable && io.f3 === "b001".U){
//     // offset will either be 0 or 2 since address will be 0x0000 or 0x0002
//     when(offsetSW === 0.U){
//       // data to be stored at lower 16 bits (15,0)
//       io.dccmReq.bits.activeByteLane := "b0011".U
//     }.elsewhen(offsetSW === 1.U){
//       // data to be stored at lower 16 bits (15,0)
//       io.dccmReq.bits.activeByteLane := "b0110".U
//       wdata(0) := io.writeData(47,32)
//       wdata(1) := io.writeData(15,0)
//       wdata(2) := io.writeData(31,16)
//       wdata(3) := io.writeData(63,48)
//     }.otherwise{
//       // data to be stored at upper 16 bits (31,16)
//       io.dccmReq.bits.activeByteLane := "b1100".U
//       wdata(2) := io.writeData(15,0)
//       wdata(3) := io.writeData(31,16)
//       wdata(0) := io.writeData(47,32)
//       wdata(1) := io.writeData(63,48)
//     }
//   }
//     /* Store Word */
//     .otherwise{
//     io.dccmReq.bits.activeByteLane := "b1111".U
//   }

//   io.dccmReq.bits.dataRequest := wdata.asUInt()
//   io.dccmReq.bits.addrRequest := (io.aluResultIn & "h00001fff".U) >> 2
//   io.dccmReq.bits.isWrite := io.writeEnable
//   io.dccmReq.valid := Mux(io.writeEnable | io.readEnable, true.B, false.B)

//   io.stall := (io.writeEnable || io.readEnable) && !io.dccmRsp.valid

//   rdata := Mux(io.dccmRsp.valid, io.dccmRsp.bits.dataResponse, DontCare)


//   when(io.readEnable) {
//     when(funct3 === "b010".U) {
//       // load word
//       io.readData := rdata
//     }
//       .elsewhen(funct3 === "b000".U) {
//         // load byte
//         when(offset === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.readData := Cat(Fill(24,rdata(7)),rdata(15,0))
//         } .elsewhen(offset === "b01".U) {
//           // addressing memory with 1,5,9...
//           io.readData := Cat(Fill(24, rdata(15)),rdata(31,16))
//         } .elsewhen(offset === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.readData := Cat(Fill(24, rdata(23)),rdata(47,32))
//         } .elsewhen(offset === "b11".U) {
//           // addressing memory with 3,7,11...
//           io.readData := Cat(Fill(24, rdata(31)),rdata(63,48))
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.readData := DontCare
//         }
//       }
//       .elsewhen(funct3 === "b100".U) {
//         //load byte unsigned
//         when(offset === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.readData := Cat(Fill(24, 0.U), rdata(7, 0))
//         }.elsewhen(offset === "b01".U) {
//           // addressing memory with 1,5,9...
//           io.readData := Cat(Fill(24, 0.U), rdata(15, 8))
//         }.elsewhen(offset === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.readData := Cat(Fill(24, 0.U), rdata(23, 16))
//         }.elsewhen(offset === "b11".U) {
//           // addressing memory with 3,7,11...
//           io.readData := Cat(Fill(24, 0.U), rdata(31, 24))
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.readData := DontCare
//         }
//       }
//       .elsewhen(funct3 === "b101".U) {
//         // load halfword unsigned
//         when(offset === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.readData := Cat(Fill(16, 0.U),rdata(15,0))
//         } .elsewhen(offset === "b01".U) {
//           // addressing memory with 2,6,10...
//           io.readData := Cat(Fill(16, 0.U),rdata(23,8))
//         } .elsewhen(offset === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.readData := Cat(Fill(16, 0.U),rdata(31,16))
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.readData := DontCare
//         }
//       }
//       .elsewhen(funct3 === "b001".U) {
//         // load halfword
//         when(offset === "b00".U) {
//           // addressing memory with 0,4,8...
//           io.readData := Cat(Fill(16, rdata(15)),rdata(15,0))
//         } .elsewhen(offset === "b01".U) {
//           // addressing memory with 1,3,7...
//           io.readData := Cat(Fill(16, rdata(23)),rdata(23,8))
//         } .elsewhen(offset === "b10".U) {
//           // addressing memory with 2,6,10...
//           io.readData := Cat(Fill(16, rdata(31)),rdata(31,16))
//         } .otherwise {
//           // this condition would never occur but using to avoid Chisel generating VOID errors
//           io.readData := DontCare
//         }
//       }
//       .otherwise {
//       // unknown func3 bits
//       io.readData := DontCare
//     }
//   } .otherwise {
//     io.readData := DontCare
//   }


//   when(io.writeEnable && io.aluResultIn(31, 28) === "h8".asUInt()){
//     printf("%x\n", io.writeData)
//   }

// }
