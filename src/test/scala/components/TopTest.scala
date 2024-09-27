package nucleusrv.components

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import chiseltest.simulator.VerilatorBackendAnnotation

class TopTest extends AnyFreeSpec with ChiselScalatestTester {
  
  def getProgramFile: Option[String] = {
    if (scalaTestContext.value.get.configMap.contains("programFile")) {
      Some(scalaTestContext.value.get.configMap("programFile").toString)
    } else {
      None
    }
  }

  def getDataFile1: Option[String] = {
    if (scalaTestContext.value.get.configMap.contains("dataFile1")) {
      Some(scalaTestContext.value.get.configMap("dataFile1").toString)
    } else {
      None
    }
  }

  def getDataFile2: Option[String] = {
    if (scalaTestContext.value.get.configMap.contains("dataFile2")) {
      Some(scalaTestContext.value.get.configMap("dataFile2").toString)
    } else {
      None
    }
  }

  "Top Test" in {
    // Define implicit config
    implicit val config: nucleusrv.components.Configs = Configs(XLEN = 64, M = true, C = true, TRACE = true)

    val programFile = getProgramFile
    val dataFile1 = getDataFile1
    val dataFile2 = getDataFile2
    
    // Pass the implicit config to the Top constructor
    test(new Top(programFile, dataFile1, dataFile2,config)).withAnnotations(Seq(VerilatorBackendAnnotation)){ c =>
      c.clock.setTimeout(0)
      c.clock.step(2149580800)
    }
  }
}
