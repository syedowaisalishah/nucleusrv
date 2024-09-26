// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+360,"io_pin", false,-1, 31,0);
    tracep->declBus(c+361,"io_fcsr", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+360,"io_pin", false,-1, 31,0);
    tracep->declBus(c+361,"io_fcsr", false,-1, 31,0);
    tracep->declBit(c+358,"core_clock", false,-1);
    tracep->declBit(c+359,"core_reset", false,-1);
    tracep->declBus(c+290,"core_io_pin", false,-1, 31,0);
    tracep->declBit(c+1,"core_io_dmemReq_valid", false,-1);
    tracep->declBus(c+2,"core_io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"core_io_dmemReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"core_io_dmemReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"core_io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"core_io_dmemRsp_valid", false,-1);
    tracep->declQuad(c+308,"core_io_dmemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+362,"core_io_imemReq_valid", false,-1);
    tracep->declBus(c+317,"core_io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"core_io_imemRsp_valid", false,-1);
    tracep->declQuad(c+310,"core_io_imemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+9,"core_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"core_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"core_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"core_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+290,"core_io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"core_io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"core_io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+318,"core_io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"core_io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"core_io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"core_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"core_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"core_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+20,"core_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+358,"dmem_clock", false,-1);
    tracep->declBit(c+359,"dmem_reset", false,-1);
    tracep->declBit(c+1,"dmem_io_req_valid", false,-1);
    tracep->declBus(c+2,"dmem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"dmem_io_req_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"dmem_io_req_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"dmem_io_req_bits_isWrite", false,-1);
    tracep->declBit(c+7,"dmem_io_rsp_valid", false,-1);
    tracep->declQuad(c+308,"dmem_io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"imem_clock", false,-1);
    tracep->declBit(c+359,"imem_reset", false,-1);
    tracep->declBit(c+362,"imem_io_req_valid", false,-1);
    tracep->declBus(c+317,"imem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"imem_io_rsp_valid", false,-1);
    tracep->declQuad(c+310,"imem_io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"tracer_clock", false,-1);
    tracep->declBit(c+359,"tracer_reset", false,-1);
    tracep->declBus(c+9,"tracer_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"tracer_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"tracer_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"tracer_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+290,"tracer_io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"tracer_io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"tracer_io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+318,"tracer_io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"tracer_io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"tracer_io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"tracer_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"tracer_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"tracer_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+290,"io_pin", false,-1, 31,0);
    tracep->declBit(c+1,"io_dmemReq_valid", false,-1);
    tracep->declBus(c+2,"io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_dmemReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_dmemReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_dmemRsp_valid", false,-1);
    tracep->declQuad(c+308,"io_dmemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+362,"io_imemReq_valid", false,-1);
    tracep->declBus(c+317,"io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_imemRsp_valid", false,-1);
    tracep->declQuad(c+310,"io_imemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+9,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+290,"io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+318,"io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+20,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+359,"InstructionFetch_reset", false,-1);
    tracep->declBus(c+319,"InstructionFetch_io_address", false,-1, 31,0);
    tracep->declQuad(c+320,"InstructionFetch_io_instruction", false,-1, 63,0);
    tracep->declBit(c+362,"InstructionFetch_io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+317,"InstructionFetch_io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"InstructionFetch_io_coreInstrResp_valid", false,-1);
    tracep->declQuad(c+310,"InstructionFetch_io_coreInstrResp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"InstructionDecode_clock", false,-1);
    tracep->declBit(c+359,"InstructionDecode_reset", false,-1);
    tracep->declBus(c+21,"InstructionDecode_io_id_instruction", false,-1, 31,0);
    tracep->declQuad(c+322,"InstructionDecode_io_writeData", false,-1, 63,0);
    tracep->declBus(c+17,"InstructionDecode_io_writeReg", false,-1, 4,0);
    tracep->declBus(c+22,"InstructionDecode_io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+23,"InstructionDecode_io_ctl_writeEnable", false,-1);
    tracep->declBit(c+24,"InstructionDecode_io_id_ex_mem_read", false,-1);
    tracep->declBit(c+25,"InstructionDecode_io_ex_mem_mem_read", false,-1);
    tracep->declBus(c+26,"InstructionDecode_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+27,"InstructionDecode_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+28,"InstructionDecode_io_id_ex_branch", false,-1);
    tracep->declBus(c+29,"InstructionDecode_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+30,"InstructionDecode_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+31,"InstructionDecode_io_ex_ins", false,-1, 31,0);
    tracep->declQuad(c+324,"InstructionDecode_io_ex_result", false,-1, 63,0);
    tracep->declQuad(c+32,"InstructionDecode_io_ex_mem_result", false,-1, 63,0);
    tracep->declQuad(c+322,"InstructionDecode_io_mem_wb_result", false,-1, 63,0);
    tracep->declBit(c+34,"InstructionDecode_io_id_ex_regWr", false,-1);
    tracep->declBit(c+35,"InstructionDecode_io_ex_mem_regWr", false,-1);
    tracep->declBit(c+36,"InstructionDecode_io_csr_Ex", false,-1);
    tracep->declBit(c+37,"InstructionDecode_io_csr_Mem", false,-1);
    tracep->declBit(c+38,"InstructionDecode_io_csr_Wb", false,-1);
    tracep->declBus(c+39,"InstructionDecode_io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+40,"InstructionDecode_io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+41,"InstructionDecode_io_csr_Wb_data", false,-1, 31,0);
    tracep->declQuad(c+308,"InstructionDecode_io_dmem_data", false,-1, 63,0);
    tracep->declQuad(c+42,"InstructionDecode_io_immediate", false,-1, 63,0);
    tracep->declBus(c+44,"InstructionDecode_io_writeRegAddress", false,-1, 4,0);
    tracep->declQuad(c+326,"InstructionDecode_io_readData1", false,-1, 63,0);
    tracep->declQuad(c+328,"InstructionDecode_io_readData2", false,-1, 63,0);
    tracep->declBus(c+45,"InstructionDecode_io_func7", false,-1, 6,0);
    tracep->declBus(c+46,"InstructionDecode_io_func3", false,-1, 2,0);
    tracep->declBit(c+47,"InstructionDecode_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+48,"InstructionDecode_io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+49,"InstructionDecode_io_ctl_regWrite", false,-1);
    tracep->declBit(c+50,"InstructionDecode_io_ctl_memRead", false,-1);
    tracep->declBit(c+51,"InstructionDecode_io_ctl_memWrite", false,-1);
    tracep->declBit(c+52,"InstructionDecode_io_ctl_branch", false,-1);
    tracep->declBus(c+53,"InstructionDecode_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+54,"InstructionDecode_io_ctl_jump", false,-1, 1,0);
    tracep->declBus(c+55,"InstructionDecode_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+56,"InstructionDecode_io_hdu_pcWrite", false,-1);
    tracep->declBit(c+56,"InstructionDecode_io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+330,"InstructionDecode_io_pcSrc", false,-1);
    tracep->declBus(c+291,"InstructionDecode_io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+292,"InstructionDecode_io_ifid_flush", false,-1);
    tracep->declBus(c+57,"InstructionDecode_io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+58,"InstructionDecode_io_is_csr", false,-1);
    tracep->declBus(c+20,"InstructionDecode_io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+59,"InstructionDecode_io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+60,"InstructionDecode_io_rs_addr_1", false,-1, 4,0);
    tracep->declBus(c+61,"Execute_io_immediate", false,-1, 31,0);
    tracep->declQuad(c+62,"Execute_io_readData1", false,-1, 63,0);
    tracep->declQuad(c+64,"Execute_io_readData2", false,-1, 63,0);
    tracep->declBus(c+66,"Execute_io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+67,"Execute_io_func7", false,-1, 6,0);
    tracep->declBus(c+68,"Execute_io_func3", false,-1, 2,0);
    tracep->declQuad(c+32,"Execute_io_mem_result", false,-1, 63,0);
    tracep->declQuad(c+322,"Execute_io_wb_result", false,-1, 63,0);
    tracep->declBit(c+35,"Execute_io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+23,"Execute_io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+31,"Execute_io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+29,"Execute_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+30,"Execute_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+69,"Execute_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+70,"Execute_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+71,"Execute_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declQuad(c+293,"Execute_io_writeData", false,-1, 63,0);
    tracep->declQuad(c+324,"Execute_io_ALUresult", false,-1, 63,0);
    tracep->declBit(c+358,"MEM_clock", false,-1);
    tracep->declBit(c+359,"MEM_reset", false,-1);
    tracep->declQuad(c+32,"MEM_io_aluResultIn", false,-1, 63,0);
    tracep->declQuad(c+72,"MEM_io_writeData", false,-1, 63,0);
    tracep->declBit(c+6,"MEM_io_writeEnable", false,-1);
    tracep->declBit(c+25,"MEM_io_readEnable", false,-1);
    tracep->declQuad(c+331,"MEM_io_readData", false,-1, 63,0);
    tracep->declBus(c+74,"MEM_io_f3", false,-1, 2,0);
    tracep->declBit(c+1,"MEM_io_dccmReq_valid", false,-1);
    tracep->declBus(c+2,"MEM_io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"MEM_io_dccmReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"MEM_io_dccmReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"MEM_io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"MEM_io_dccmRsp_valid", false,-1);
    tracep->declQuad(c+308,"MEM_io_dccmRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"pc_clock", false,-1);
    tracep->declBit(c+359,"pc_reset", false,-1);
    tracep->declBus(c+333,"pc_io_in", false,-1, 31,0);
    tracep->declBus(c+75,"pc_io_out", false,-1, 31,0);
    tracep->declBus(c+76,"pc_io_pc4", false,-1, 31,0);
    tracep->declBus(c+77,"pc_io_pc2", false,-1, 31,0);
    tracep->declBit(c+358,"Realigner_clock", false,-1);
    tracep->declBit(c+359,"Realigner_reset", false,-1);
    tracep->declBus(c+333,"Realigner_io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+334,"Realigner_io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+330,"Realigner_io_ral_jmp", false,-1);
    tracep->declBus(c+319,"Realigner_io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+335,"Realigner_io_ral_instruction_o", false,-1, 31,0);
    tracep->declBus(c+335,"CompressedDecoder_io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+336,"CompressedDecoder_io_is_comp", false,-1);
    tracep->declBus(c+337,"CompressedDecoder_io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+22,"if_reg_pc", false,-1, 31,0);
    tracep->declBus(c+21,"if_reg_ins", false,-1, 31,0);
    tracep->declBus(c+66,"id_reg_pc", false,-1, 31,0);
    tracep->declQuad(c+62,"id_reg_rd1", false,-1, 63,0);
    tracep->declQuad(c+64,"id_reg_rd2", false,-1, 63,0);
    tracep->declBus(c+61,"id_reg_imm", false,-1, 31,0);
    tracep->declBus(c+78,"id_reg_wra", false,-1, 4,0);
    tracep->declBus(c+67,"id_reg_f7", false,-1, 6,0);
    tracep->declBus(c+68,"id_reg_f3", false,-1, 2,0);
    tracep->declBus(c+31,"id_reg_ins", false,-1, 31,0);
    tracep->declBit(c+69,"id_reg_ctl_aluSrc", false,-1);
    tracep->declBus(c+71,"id_reg_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+79,"id_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+34,"id_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+24,"id_reg_ctl_memRead", false,-1);
    tracep->declBit(c+80,"id_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+70,"id_reg_ctl_aluOp", false,-1, 1,0);
    tracep->declBit(c+36,"id_reg_is_csr", false,-1);
    tracep->declBus(c+39,"id_reg_csr_data", false,-1, 31,0);
    tracep->declQuad(c+32,"ex_reg_result", false,-1, 63,0);
    tracep->declQuad(c+72,"ex_reg_wd", false,-1, 63,0);
    tracep->declBus(c+81,"ex_reg_wra", false,-1, 4,0);
    tracep->declBus(c+29,"ex_reg_ins", false,-1, 31,0);
    tracep->declBus(c+82,"ex_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+35,"ex_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+25,"ex_reg_ctl_memRead", false,-1);
    tracep->declBit(c+6,"ex_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+83,"ex_reg_pc", false,-1, 31,0);
    tracep->declBit(c+37,"ex_reg_is_csr", false,-1);
    tracep->declBus(c+40,"ex_reg_csr_data", false,-1, 31,0);
    tracep->declBus(c+30,"mem_reg_ins", false,-1, 31,0);
    tracep->declQuad(c+84,"mem_reg_result", false,-1, 63,0);
    tracep->declBus(c+17,"mem_reg_wra", false,-1, 4,0);
    tracep->declBus(c+86,"mem_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+23,"mem_reg_ctl_regWrite", false,-1);
    tracep->declBus(c+9,"mem_reg_pc", false,-1, 31,0);
    tracep->declBit(c+38,"mem_reg_is_csr", false,-1);
    tracep->declBus(c+41,"mem_reg_csr_data", false,-1, 31,0);
    tracep->declBus(c+337,"instruction", false,-1, 31,0);
    tracep->declBit(c+336,"is_comp", false,-1);
    tracep->declQuad(c+295,"wb_data", false,-1, 63,0);
    tracep->declBus(c+87,"npcDelay_0", false,-1, 31,0);
    tracep->declBus(c+88,"npcDelay_1", false,-1, 31,0);
    tracep->declBus(c+89,"npcDelay_2", false,-1, 31,0);
    tracep->declBus(c+10,"npcDelay_3", false,-1, 31,0);
    tracep->declBus(c+90,"rsAddrDelay_0_0", false,-1, 4,0);
    tracep->declBus(c+91,"rsAddrDelay_0_1", false,-1, 4,0);
    tracep->declBus(c+18,"rsAddrDelay_0_2", false,-1, 4,0);
    tracep->declBus(c+92,"rsAddrDelay_1_0", false,-1, 4,0);
    tracep->declBus(c+93,"rsAddrDelay_1_1", false,-1, 4,0);
    tracep->declBus(c+19,"rsAddrDelay_1_2", false,-1, 4,0);
    tracep->declBus(c+94,"rsDataDelay_0_0", false,-1, 31,0);
    tracep->declBus(c+13,"rsDataDelay_0_1", false,-1, 31,0);
    tracep->declBus(c+95,"rsDataDelay_1_0", false,-1, 31,0);
    tracep->declBus(c+14,"rsDataDelay_1_1", false,-1, 31,0);
    tracep->declBus(c+12,"memAddrDelay", false,-1, 31,0);
    tracep->declBus(c+15,"memWdataDelay", false,-1, 31,0);
    tracep->declBit(c+96,"stallDelay_0", false,-1);
    tracep->declBit(c+97,"stallDelay_1", false,-1);
    tracep->declBit(c+98,"stallDelay_2", false,-1);
    tracep->declBit(c+16,"stallDelay_3", false,-1);
    tracep->declBus(c+99,"insDelay_0", false,-1, 31,0);
    tracep->declBus(c+100,"insDelay_1", false,-1, 31,0);
    tracep->declBus(c+101,"insDelay_2", false,-1, 31,0);
    tracep->declBus(c+11,"insDelay_3", false,-1, 31,0);
    tracep->declQuad(c+320,"c_ins_trace", false,-1, 63,0);
    tracep->pushNamePrefix("CompressedDecoder ");
    tracep->declBus(c+335,"io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+336,"io_is_comp", false,-1);
    tracep->declBus(c+337,"io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+338,"io_instruction_o_lo_2", false,-1, 17,0);
    tracep->declBus(c+339,"io_instruction_o_lo_4", false,-1, 24,0);
    tracep->declBus(c+340,"io_instruction_o_lo_16", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute ");
    tracep->declBus(c+61,"io_immediate", false,-1, 31,0);
    tracep->declQuad(c+62,"io_readData1", false,-1, 63,0);
    tracep->declQuad(c+64,"io_readData2", false,-1, 63,0);
    tracep->declBus(c+66,"io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+67,"io_func7", false,-1, 6,0);
    tracep->declBus(c+68,"io_func3", false,-1, 2,0);
    tracep->declQuad(c+32,"io_mem_result", false,-1, 63,0);
    tracep->declQuad(c+322,"io_wb_result", false,-1, 63,0);
    tracep->declBit(c+35,"io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+23,"io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+31,"io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+29,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+30,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+69,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+70,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+71,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declQuad(c+293,"io_writeData", false,-1, 63,0);
    tracep->declQuad(c+324,"io_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+341,"alu_io_input1", false,-1, 63,0);
    tracep->declQuad(c+343,"alu_io_input2", false,-1, 63,0);
    tracep->declBus(c+102,"alu_io_aluCtl", false,-1, 3,0);
    tracep->declQuad(c+324,"alu_io_result", false,-1, 63,0);
    tracep->declBus(c+70,"aluCtl_io_aluOp", false,-1, 1,0);
    tracep->declBus(c+103,"aluCtl_io_f7", false,-1, 6,0);
    tracep->declBus(c+68,"aluCtl_io_f3", false,-1, 2,0);
    tracep->declBit(c+69,"aluCtl_io_aluSrc", false,-1);
    tracep->declBus(c+102,"aluCtl_io_out", false,-1, 3,0);
    tracep->declBus(c+27,"ForwardingUnit_io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+104,"ForwardingUnit_io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+105,"ForwardingUnit_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+106,"ForwardingUnit_io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+35,"ForwardingUnit_io_ex_regWrite", false,-1);
    tracep->declBit(c+23,"ForwardingUnit_io_mem_regWrite", false,-1);
    tracep->declBus(c+107,"ForwardingUnit_io_forwardA", false,-1, 1,0);
    tracep->declBus(c+108,"ForwardingUnit_io_forwardB", false,-1, 1,0);
    tracep->declQuad(c+297,"inputMux1", false,-1, 63,0);
    tracep->declQuad(c+293,"inputMux2", false,-1, 63,0);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBus(c+27,"io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+104,"io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+105,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+106,"io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+35,"io_ex_regWrite", false,-1);
    tracep->declBit(c+23,"io_mem_regWrite", false,-1);
    tracep->declBus(c+107,"io_forwardA", false,-1, 1,0);
    tracep->declBus(c+108,"io_forwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+341,"io_input1", false,-1, 63,0);
    tracep->declQuad(c+343,"io_input2", false,-1, 63,0);
    tracep->declBus(c+102,"io_aluCtl", false,-1, 3,0);
    tracep->declQuad(c+324,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluCtl ");
    tracep->declBus(c+70,"io_aluOp", false,-1, 1,0);
    tracep->declBus(c+103,"io_f7", false,-1, 6,0);
    tracep->declBus(c+68,"io_f3", false,-1, 2,0);
    tracep->declBit(c+69,"io_aluSrc", false,-1);
    tracep->declBus(c+102,"io_out", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionDecode ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+21,"io_id_instruction", false,-1, 31,0);
    tracep->declQuad(c+322,"io_writeData", false,-1, 63,0);
    tracep->declBus(c+17,"io_writeReg", false,-1, 4,0);
    tracep->declBus(c+22,"io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+23,"io_ctl_writeEnable", false,-1);
    tracep->declBit(c+24,"io_id_ex_mem_read", false,-1);
    tracep->declBit(c+25,"io_ex_mem_mem_read", false,-1);
    tracep->declBus(c+26,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+27,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+28,"io_id_ex_branch", false,-1);
    tracep->declBus(c+29,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+30,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+31,"io_ex_ins", false,-1, 31,0);
    tracep->declQuad(c+324,"io_ex_result", false,-1, 63,0);
    tracep->declQuad(c+32,"io_ex_mem_result", false,-1, 63,0);
    tracep->declQuad(c+322,"io_mem_wb_result", false,-1, 63,0);
    tracep->declBit(c+34,"io_id_ex_regWr", false,-1);
    tracep->declBit(c+35,"io_ex_mem_regWr", false,-1);
    tracep->declBit(c+36,"io_csr_Ex", false,-1);
    tracep->declBit(c+37,"io_csr_Mem", false,-1);
    tracep->declBit(c+38,"io_csr_Wb", false,-1);
    tracep->declBus(c+39,"io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+40,"io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+41,"io_csr_Wb_data", false,-1, 31,0);
    tracep->declQuad(c+308,"io_dmem_data", false,-1, 63,0);
    tracep->declQuad(c+42,"io_immediate", false,-1, 63,0);
    tracep->declBus(c+44,"io_writeRegAddress", false,-1, 4,0);
    tracep->declQuad(c+326,"io_readData1", false,-1, 63,0);
    tracep->declQuad(c+328,"io_readData2", false,-1, 63,0);
    tracep->declBus(c+45,"io_func7", false,-1, 6,0);
    tracep->declBus(c+46,"io_func3", false,-1, 2,0);
    tracep->declBit(c+47,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+48,"io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+49,"io_ctl_regWrite", false,-1);
    tracep->declBit(c+50,"io_ctl_memRead", false,-1);
    tracep->declBit(c+51,"io_ctl_memWrite", false,-1);
    tracep->declBit(c+52,"io_ctl_branch", false,-1);
    tracep->declBus(c+53,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+54,"io_ctl_jump", false,-1, 1,0);
    tracep->declBus(c+55,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+56,"io_hdu_pcWrite", false,-1);
    tracep->declBit(c+56,"io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+330,"io_pcSrc", false,-1);
    tracep->declBus(c+291,"io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+292,"io_ifid_flush", false,-1);
    tracep->declBus(c+57,"io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+58,"io_is_csr", false,-1);
    tracep->declBus(c+20,"io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+59,"io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+60,"io_rs_addr_1", false,-1, 4,0);
    tracep->declBit(c+358,"csr_clock", false,-1);
    tracep->declBit(c+359,"csr_reset", false,-1);
    tracep->declBus(c+363,"csr_io_i_data", false,-1, 31,0);
    tracep->declBus(c+59,"csr_io_i_imm", false,-1, 4,0);
    tracep->declBus(c+57,"csr_io_o_data", false,-1, 31,0);
    tracep->declBus(c+46,"csr_io_i_opr", false,-1, 2,0);
    tracep->declBus(c+109,"csr_io_i_addr", false,-1, 11,0);
    tracep->declBit(c+110,"csr_io_i_w_en", false,-1);
    tracep->declBus(c+20,"csr_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+34,"csrController_io_regWrExecute", false,-1);
    tracep->declBus(c+26,"csrController_io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+36,"csrController_io_csrWrExecute", false,-1);
    tracep->declBit(c+35,"csrController_io_regWrMemory", false,-1);
    tracep->declBus(c+27,"csrController_io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+37,"csrController_io_csrWrMemory", false,-1);
    tracep->declBit(c+23,"csrController_io_regWrWriteback", false,-1);
    tracep->declBus(c+17,"csrController_io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+38,"csrController_io_csrWrWriteback", false,-1);
    tracep->declBus(c+59,"csrController_io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+58,"csrController_io_csrInstDecode", false,-1);
    tracep->declBus(c+111,"csrController_io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+24,"hdu_io_id_ex_memRead", false,-1);
    tracep->declBit(c+25,"hdu_io_ex_mem_memRead", false,-1);
    tracep->declBit(c+28,"hdu_io_id_ex_branch", false,-1);
    tracep->declBus(c+26,"hdu_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+27,"hdu_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+59,"hdu_io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+60,"hdu_io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+345,"hdu_io_taken", false,-1);
    tracep->declBus(c+54,"hdu_io_jump", false,-1, 1,0);
    tracep->declBit(c+52,"hdu_io_branch", false,-1);
    tracep->declBit(c+56,"hdu_io_if_reg_write", false,-1);
    tracep->declBit(c+56,"hdu_io_pc_write", false,-1);
    tracep->declBit(c+56,"hdu_io_ctl_mux", false,-1);
    tracep->declBit(c+292,"hdu_io_ifid_flush", false,-1);
    tracep->declBit(c+112,"hdu_io_take_branch", false,-1);
    tracep->declBus(c+21,"control_io_in", false,-1, 31,0);
    tracep->declBit(c+47,"control_io_aluSrc", false,-1);
    tracep->declBus(c+48,"control_io_memToReg", false,-1, 1,0);
    tracep->declBit(c+113,"control_io_regWrite", false,-1);
    tracep->declBit(c+50,"control_io_memRead", false,-1);
    tracep->declBit(c+114,"control_io_memWrite", false,-1);
    tracep->declBit(c+52,"control_io_branch", false,-1);
    tracep->declBus(c+53,"control_io_aluOp", false,-1, 1,0);
    tracep->declBus(c+54,"control_io_jump", false,-1, 1,0);
    tracep->declBus(c+55,"control_io_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+358,"registers_clock", false,-1);
    tracep->declBit(c+359,"registers_reset", false,-1);
    tracep->declBus(c+59,"registers_io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+60,"registers_io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+115,"registers_io_writeEnable", false,-1);
    tracep->declBus(c+17,"registers_io_writeAddress", false,-1, 4,0);
    tracep->declQuad(c+346,"registers_io_writeData", false,-1, 63,0);
    tracep->declQuad(c+116,"registers_io_readData_0", false,-1, 63,0);
    tracep->declQuad(c+118,"registers_io_readData_1", false,-1, 63,0);
    tracep->declBus(c+21,"immediate_io_instruction", false,-1, 31,0);
    tracep->declQuad(c+120,"immediate_io_out", false,-1, 63,0);
    tracep->declBit(c+52,"bu_io_branch", false,-1);
    tracep->declBus(c+46,"bu_io_funct3", false,-1, 2,0);
    tracep->declQuad(c+348,"bu_io_rd1", false,-1, 63,0);
    tracep->declQuad(c+350,"bu_io_rd2", false,-1, 63,0);
    tracep->declBit(c+112,"bu_io_take_branch", false,-1);
    tracep->declBit(c+345,"bu_io_taken", false,-1);
    tracep->declQuad(c+299,"input1", false,-1, 63,0);
    tracep->declQuad(c+301,"j_offset", false,-1, 63,0);
    tracep->pushNamePrefix("bu ");
    tracep->declBit(c+52,"io_branch", false,-1);
    tracep->declBus(c+46,"io_funct3", false,-1, 2,0);
    tracep->declQuad(c+348,"io_rd1", false,-1, 63,0);
    tracep->declQuad(c+350,"io_rd2", false,-1, 63,0);
    tracep->declBit(c+112,"io_take_branch", false,-1);
    tracep->declBit(c+345,"io_taken", false,-1);
    tracep->declBit(c+303,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+21,"io_in", false,-1, 31,0);
    tracep->declBit(c+47,"io_aluSrc", false,-1);
    tracep->declBus(c+48,"io_memToReg", false,-1, 1,0);
    tracep->declBit(c+113,"io_regWrite", false,-1);
    tracep->declBit(c+50,"io_memRead", false,-1);
    tracep->declBit(c+114,"io_memWrite", false,-1);
    tracep->declBit(c+52,"io_branch", false,-1);
    tracep->declBus(c+53,"io_aluOp", false,-1, 1,0);
    tracep->declBus(c+54,"io_jump", false,-1, 1,0);
    tracep->declBus(c+55,"io_aluSrc1", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+363,"io_i_data", false,-1, 31,0);
    tracep->declBus(c+59,"io_i_imm", false,-1, 4,0);
    tracep->declBus(c+57,"io_o_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_i_opr", false,-1, 2,0);
    tracep->declBus(c+109,"io_i_addr", false,-1, 11,0);
    tracep->declBit(c+110,"io_i_w_en", false,-1);
    tracep->declBus(c+20,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+358,"csrRegFile_clock", false,-1);
    tracep->declBit(c+359,"csrRegFile_reset", false,-1);
    tracep->declBus(c+364,"csrRegFile_io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+364,"csrRegFile_io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+122,"csrRegFile_io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+57,"csrRegFile_io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+352,"csrRegFile_io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+109,"csrRegFile_io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+110,"csrRegFile_io_CSR_i_w_en", false,-1);
    tracep->declBit(c+123,"csrRegFile_io_FCSR_nx", false,-1);
    tracep->declBit(c+124,"csrRegFile_io_FCSR_uf", false,-1);
    tracep->declBit(c+125,"csrRegFile_io_FCSR_of", false,-1);
    tracep->declBit(c+126,"csrRegFile_io_FCSR_dz", false,-1);
    tracep->declBit(c+127,"csrRegFile_io_FCSR_nv", false,-1);
    tracep->declBus(c+128,"csrRegFile_io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+129,"io_fcsr_o_data_lo", false,-1, 2,0);
    tracep->declBus(c+130,"io_fcsr_o_data_hi", false,-1, 28,0);
    tracep->pushNamePrefix("csrRegFile ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+364,"io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+364,"io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+122,"io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+57,"io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+352,"io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+109,"io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+110,"io_CSR_i_w_en", false,-1);
    tracep->declBit(c+123,"io_FCSR_nx", false,-1);
    tracep->declBit(c+124,"io_FCSR_uf", false,-1);
    tracep->declBit(c+125,"io_FCSR_of", false,-1);
    tracep->declBit(c+126,"io_FCSR_dz", false,-1);
    tracep->declBit(c+127,"io_FCSR_nv", false,-1);
    tracep->declBus(c+128,"io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+131,"MISA_REG", false,-1, 31,0);
    tracep->declBus(c+131,"MHARTID_REG", false,-1, 31,0);
    tracep->declBus(c+132,"MCAUSE_REG", false,-1, 31,0);
    tracep->declBus(c+133,"MTVEC_REG", false,-1, 31,0);
    tracep->declBus(c+134,"MEPC_REG", false,-1, 31,0);
    tracep->declBus(c+135,"MIE_REG", false,-1, 31,0);
    tracep->declBit(c+136,"MSTATUS_TW_REG", false,-1);
    tracep->declBit(c+137,"MSTATUS_MPRV_REG", false,-1);
    tracep->declBus(c+138,"MSTATUS_MPP_REG", false,-1, 1,0);
    tracep->declBit(c+139,"MSTATUS_MPIE_REG", false,-1);
    tracep->declBit(c+140,"MSTATUS_MIE_REG", false,-1);
    tracep->declBit(c+123,"FCSR_NX_REG", false,-1);
    tracep->declBit(c+124,"FCSR_UF_REG", false,-1);
    tracep->declBit(c+125,"FCSR_OF_REG", false,-1);
    tracep->declBit(c+126,"FCSR_DZ_REG", false,-1);
    tracep->declBit(c+127,"FCSR_NV_REG", false,-1);
    tracep->declBus(c+128,"FCSR_FRM_REG", false,-1, 2,0);
    tracep->declBus(c+141,"MSTATUS_WIRE_lo", false,-1, 10,0);
    tracep->declBus(c+142,"MSTATUS_WIRE", false,-1, 31,0);
    tracep->declBus(c+143,"FFLAGS_WIRE", false,-1, 31,0);
    tracep->declBus(c+144,"FRM_WIRE", false,-1, 31,0);
    tracep->declBus(c+145,"FCSR_WIRE", false,-1, 31,0);
    tracep->declBus(c+146,"r_data", false,-1, 31,0);
    tracep->declBus(c+304,"set_data", false,-1, 31,0);
    tracep->declBus(c+305,"clear_data", false,-1, 31,0);
    tracep->declBus(c+353,"w_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrController ");
    tracep->declBit(c+34,"io_regWrExecute", false,-1);
    tracep->declBus(c+26,"io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+36,"io_csrWrExecute", false,-1);
    tracep->declBit(c+35,"io_regWrMemory", false,-1);
    tracep->declBus(c+27,"io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+37,"io_csrWrMemory", false,-1);
    tracep->declBit(c+23,"io_regWrWriteback", false,-1);
    tracep->declBus(c+17,"io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+38,"io_csrWrWriteback", false,-1);
    tracep->declBus(c+59,"io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+58,"io_csrInstDecode", false,-1);
    tracep->declBus(c+111,"io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+147,"hazard_DecEx", false,-1);
    tracep->declBit(c+148,"hazard_DecMem", false,-1);
    tracep->declBit(c+149,"hazard_DecWb", false,-1);
    tracep->declBit(c+150,"csrHazard_DecEx", false,-1);
    tracep->declBit(c+151,"csrHazard_DecMem", false,-1);
    tracep->declBit(c+152,"csrHazard_DecWb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hdu ");
    tracep->declBit(c+24,"io_id_ex_memRead", false,-1);
    tracep->declBit(c+25,"io_ex_mem_memRead", false,-1);
    tracep->declBit(c+28,"io_id_ex_branch", false,-1);
    tracep->declBus(c+26,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+27,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+59,"io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+60,"io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+345,"io_taken", false,-1);
    tracep->declBus(c+54,"io_jump", false,-1, 1,0);
    tracep->declBit(c+52,"io_branch", false,-1);
    tracep->declBit(c+56,"io_if_reg_write", false,-1);
    tracep->declBit(c+56,"io_pc_write", false,-1);
    tracep->declBit(c+56,"io_ctl_mux", false,-1);
    tracep->declBit(c+292,"io_ifid_flush", false,-1);
    tracep->declBit(c+112,"io_take_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immediate ");
    tracep->declBus(c+21,"io_instruction", false,-1, 31,0);
    tracep->declQuad(c+120,"io_out", false,-1, 63,0);
    tracep->declBus(c+153,"opcode", false,-1, 6,0);
    tracep->declBus(c+109,"imm_i", false,-1, 11,0);
    tracep->declQuad(c+154,"ext_i", false,-1, 63,0);
    tracep->declBus(c+156,"imm_u", false,-1, 19,0);
    tracep->declQuad(c+157,"ext_u", false,-1, 51,0);
    tracep->declBus(c+159,"imm_s", false,-1, 11,0);
    tracep->declQuad(c+160,"ext_s", false,-1, 63,0);
    tracep->declBus(c+162,"imm_sb", false,-1, 11,0);
    tracep->declQuad(c+163,"ext_sb", false,-1, 57,0);
    tracep->declBus(c+165,"imm_uj", false,-1, 19,0);
    tracep->declQuad(c+166,"ext_uj", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+59,"io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+60,"io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+115,"io_writeEnable", false,-1);
    tracep->declBus(c+17,"io_writeAddress", false,-1, 4,0);
    tracep->declQuad(c+346,"io_writeData", false,-1, 63,0);
    tracep->declQuad(c+116,"io_readData_0", false,-1, 63,0);
    tracep->declQuad(c+118,"io_readData_1", false,-1, 63,0);
    tracep->declQuad(c+168,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+170,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+172,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+174,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+176,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+178,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+180,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+182,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+184,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+186,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+188,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+190,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+192,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+194,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+196,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+198,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+200,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+202,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+204,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+206,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+208,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+210,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+212,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+214,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+216,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+218,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+220,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+222,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+224,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+226,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+228,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+230,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionFetch ");
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+319,"io_address", false,-1, 31,0);
    tracep->declQuad(c+320,"io_instruction", false,-1, 63,0);
    tracep->declBit(c+362,"io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+317,"io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_coreInstrResp_valid", false,-1);
    tracep->declQuad(c+310,"io_coreInstrResp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+312,"instrLow", false,-1, 31,0);
    tracep->declBus(c+313,"instrHigh", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declQuad(c+32,"io_aluResultIn", false,-1, 63,0);
    tracep->declQuad(c+72,"io_writeData", false,-1, 63,0);
    tracep->declBit(c+6,"io_writeEnable", false,-1);
    tracep->declBit(c+25,"io_readEnable", false,-1);
    tracep->declQuad(c+331,"io_readData", false,-1, 63,0);
    tracep->declBus(c+74,"io_f3", false,-1, 2,0);
    tracep->declBit(c+1,"io_dccmReq_valid", false,-1);
    tracep->declBus(c+2,"io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_dccmReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_dccmReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_dccmRsp_valid", false,-1);
    tracep->declQuad(c+308,"io_dccmRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+232,"offset", false,-1, 2,0);
    tracep->declBus(c+233,"funct3", false,-1, 2,0);
    tracep->declBus(c+234,"offsetSW", false,-1, 2,0);
    tracep->declBus(c+235,"wdata_0", false,-1, 7,0);
    tracep->declBus(c+236,"wdata_1", false,-1, 7,0);
    tracep->declBus(c+237,"wdata_2", false,-1, 7,0);
    tracep->declBus(c+238,"wdata_3", false,-1, 7,0);
    tracep->declBus(c+239,"wdata_4", false,-1, 7,0);
    tracep->declBus(c+240,"wdata_5", false,-1, 7,0);
    tracep->declBus(c+241,"wdata_6", false,-1, 7,0);
    tracep->declBus(c+242,"wdata_7", false,-1, 7,0);
    tracep->declBus(c+243,"io_dccmReq_bits_dataRequest_lo", false,-1, 31,0);
    tracep->declBus(c+244,"io_dccmReq_bits_dataRequest_hi", false,-1, 31,0);
    tracep->declQuad(c+354,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Realigner ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+333,"io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+334,"io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+330,"io_ral_jmp", false,-1);
    tracep->declBus(c+319,"io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+335,"io_ral_instruction_o", false,-1, 31,0);
    tracep->declBit(c+356,"addri", false,-1);
    tracep->declBus(c+245,"lhw_reg", false,-1, 15,0);
    tracep->declBus(c+306,"conc_instr", false,-1, 31,0);
    tracep->declBus(c+246,"stateReg", false,-1, 1,0);
    tracep->declBit(c+307,"pc4_sel", false,-1);
    tracep->declBit(c+247,"conc_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+333,"io_in", false,-1, 31,0);
    tracep->declBus(c+75,"io_out", false,-1, 31,0);
    tracep->declBus(c+76,"io_pc4", false,-1, 31,0);
    tracep->declBus(c+77,"io_pc2", false,-1, 31,0);
    tracep->declBus(c+75,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBit(c+1,"io_req_valid", false,-1);
    tracep->declBus(c+2,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_req_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_req_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_rsp_valid", false,-1);
    tracep->declQuad(c+308,"io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"sram1_clk_i", false,-1);
    tracep->declBit(c+359,"sram1_rst_i", false,-1);
    tracep->declBit(c+248,"sram1_csb_i", false,-1);
    tracep->declBit(c+249,"sram1_we_i", false,-1);
    tracep->declBus(c+250,"sram1_wmask_i", false,-1, 3,0);
    tracep->declBus(c+251,"sram1_addr_i", false,-1, 20,0);
    tracep->declBus(c+252,"sram1_wdata_i", false,-1, 31,0);
    tracep->declBus(c+314,"sram1_rdata_o", false,-1, 31,0);
    tracep->declBit(c+358,"sram2_clk_i", false,-1);
    tracep->declBit(c+359,"sram2_rst_i", false,-1);
    tracep->declBit(c+248,"sram2_csb_i", false,-1);
    tracep->declBit(c+249,"sram2_we_i", false,-1);
    tracep->declBus(c+253,"sram2_wmask_i", false,-1, 3,0);
    tracep->declBus(c+254,"sram2_addr_i", false,-1, 20,0);
    tracep->declBus(c+255,"sram2_wdata_i", false,-1, 31,0);
    tracep->declBus(c+315,"sram2_rdata_o", false,-1, 31,0);
    tracep->declBit(c+7,"validReg", false,-1);
    tracep->declBus(c+315,"rdata2", false,-1, 31,0);
    tracep->declBus(c+314,"rdata1", false,-1, 31,0);
    tracep->declBus(c+316,"rdata64", false,-1, 31,0);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBus(c+365,"IFILE_IN", false,-1, 7,0);
    tracep->declBit(c+358,"clk_i", false,-1);
    tracep->declBit(c+359,"rst_i", false,-1);
    tracep->declBit(c+248,"csb_i", false,-1);
    tracep->declBus(c+251,"addr_i", false,-1, 20,0);
    tracep->declBus(c+252,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+250,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+249,"we_i", false,-1);
    tracep->declBus(c+314,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+256,"csb", false,-1);
    tracep->declBus(c+257,"addr_o", false,-1, 20,0);
    tracep->declBus(c+258,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+259,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+260,"we_o", false,-1);
    tracep->declBus(c+366,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+261,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+367,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+369,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+371,"DELAY", false,-1, 31,0);
    tracep->declBus(c+372,"IZERO", false,-1, 31,0);
    tracep->declBus(c+365,"IFILE", false,-1, 7,0);
    tracep->declBit(c+358,"clk0", false,-1);
    tracep->declBit(c+248,"csb0", false,-1);
    tracep->declBit(c+249,"web0", false,-1);
    tracep->declBus(c+250,"wmask0", false,-1, 3,0);
    tracep->declBus(c+251,"addr0", false,-1, 20,0);
    tracep->declBus(c+252,"din0", false,-1, 31,0);
    tracep->declBus(c+314,"dout0", false,-1, 31,0);
    tracep->declBit(c+373,"clk1", false,-1);
    tracep->declBit(c+374,"csb1", false,-1);
    tracep->declBus(c+375,"addr1", false,-1, 20,0);
    tracep->declBus(c+376,"dout1", false,-1, 31,0);
    tracep->declBit(c+262,"csb0_reg", false,-1);
    tracep->declBit(c+263,"web0_reg", false,-1);
    tracep->declBus(c+264,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+265,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+266,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+377,"csb1_reg", false,-1);
    tracep->declBus(c+378,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBus(c+365,"IFILE_IN", false,-1, 7,0);
    tracep->declBit(c+358,"clk_i", false,-1);
    tracep->declBit(c+359,"rst_i", false,-1);
    tracep->declBit(c+248,"csb_i", false,-1);
    tracep->declBus(c+254,"addr_i", false,-1, 20,0);
    tracep->declBus(c+255,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+253,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+249,"we_i", false,-1);
    tracep->declBus(c+315,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+267,"csb", false,-1);
    tracep->declBus(c+268,"addr_o", false,-1, 20,0);
    tracep->declBus(c+269,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+270,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+271,"we_o", false,-1);
    tracep->declBus(c+380,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+272,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+367,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+369,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+371,"DELAY", false,-1, 31,0);
    tracep->declBus(c+372,"IZERO", false,-1, 31,0);
    tracep->declBus(c+365,"IFILE", false,-1, 7,0);
    tracep->declBit(c+358,"clk0", false,-1);
    tracep->declBit(c+248,"csb0", false,-1);
    tracep->declBit(c+249,"web0", false,-1);
    tracep->declBus(c+253,"wmask0", false,-1, 3,0);
    tracep->declBus(c+254,"addr0", false,-1, 20,0);
    tracep->declBus(c+255,"din0", false,-1, 31,0);
    tracep->declBus(c+315,"dout0", false,-1, 31,0);
    tracep->declBit(c+373,"clk1", false,-1);
    tracep->declBit(c+374,"csb1", false,-1);
    tracep->declBus(c+375,"addr1", false,-1, 20,0);
    tracep->declBus(c+381,"dout1", false,-1, 31,0);
    tracep->declBit(c+273,"csb0_reg", false,-1);
    tracep->declBit(c+274,"web0_reg", false,-1);
    tracep->declBus(c+275,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+276,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+277,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+382,"csb1_reg", false,-1);
    tracep->declBus(c+383,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBit(c+362,"io_req_valid", false,-1);
    tracep->declBus(c+317,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_rsp_valid", false,-1);
    tracep->declQuad(c+310,"io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+358,"sram_clk_i", false,-1);
    tracep->declBit(c+359,"sram_rst_i", false,-1);
    tracep->declBit(c+359,"sram_csb_i", false,-1);
    tracep->declBit(c+362,"sram_we_i", false,-1);
    tracep->declBus(c+385,"sram_wmask_i", false,-1, 3,0);
    tracep->declBus(c+357,"sram_addr_i", false,-1, 20,0);
    tracep->declBus(c+364,"sram_wdata_i", false,-1, 31,0);
    tracep->declBus(c+312,"sram_rdata_o", false,-1, 31,0);
    tracep->declBit(c+8,"validReg", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declArray(c+386,"IFILE_IN", false,-1, 263,0);
    tracep->declBit(c+358,"clk_i", false,-1);
    tracep->declBit(c+359,"rst_i", false,-1);
    tracep->declBit(c+359,"csb_i", false,-1);
    tracep->declBus(c+357,"addr_i", false,-1, 20,0);
    tracep->declBus(c+364,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+385,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+362,"we_i", false,-1);
    tracep->declBus(c+312,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+278,"csb", false,-1);
    tracep->declBus(c+279,"addr_o", false,-1, 20,0);
    tracep->declBus(c+280,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+281,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+282,"we_o", false,-1);
    tracep->declBus(c+395,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+283,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+367,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+369,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+371,"DELAY", false,-1, 31,0);
    tracep->declBus(c+372,"IZERO", false,-1, 31,0);
    tracep->declArray(c+386,"IFILE", false,-1, 263,0);
    tracep->declBit(c+358,"clk0", false,-1);
    tracep->declBit(c+359,"csb0", false,-1);
    tracep->declBit(c+362,"web0", false,-1);
    tracep->declBus(c+385,"wmask0", false,-1, 3,0);
    tracep->declBus(c+357,"addr0", false,-1, 20,0);
    tracep->declBus(c+364,"din0", false,-1, 31,0);
    tracep->declBus(c+312,"dout0", false,-1, 31,0);
    tracep->declBit(c+373,"clk1", false,-1);
    tracep->declBit(c+374,"csb1", false,-1);
    tracep->declBus(c+375,"addr1", false,-1, 20,0);
    tracep->declBus(c+396,"dout1", false,-1, 31,0);
    tracep->declBit(c+284,"csb0_reg", false,-1);
    tracep->declBit(c+285,"web0_reg", false,-1);
    tracep->declBus(c+286,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+287,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+288,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+397,"csb1_reg", false,-1);
    tracep->declBus(c+398,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+399,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("tracer ");
    tracep->declBit(c+358,"clock", false,-1);
    tracep->declBit(c+359,"reset", false,-1);
    tracep->declBus(c+9,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+290,"io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+318,"io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+289,"clkCycle", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<9>/*287:0*/ VTop__ConstPool__CONST_h06c05930_0;

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    bufp->fullIData(oldp+2,((IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                                 >> 2U)))),32);
    bufp->fullQData(oldp+3,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),64);
    bufp->fullCData(oldp+5,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),8);
    bufp->fullBit(oldp+6,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    bufp->fullBit(oldp+7,(vlSelf->Top__DOT__dmem__DOT__validReg));
    bufp->fullBit(oldp+8,(vlSelf->Top__DOT__imem__DOT__validReg));
    bufp->fullIData(oldp+9,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
    bufp->fullIData(oldp+10,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
    bufp->fullIData(oldp+11,(vlSelf->Top__DOT__core__DOT__insDelay_3),32);
    bufp->fullIData(oldp+12,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
    bufp->fullIData(oldp+13,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
    bufp->fullIData(oldp+15,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
    bufp->fullBit(oldp+16,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
    bufp->fullCData(oldp+17,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
    bufp->fullCData(oldp+18,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
    bufp->fullCData(oldp+19,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
    bufp->fullIData(oldp+20,(((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 4U) | 
                                          ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U))) 
                              | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                  << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                             << 1U) 
                                            | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
    bufp->fullIData(oldp+21,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
    bufp->fullIData(oldp+22,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
    bufp->fullBit(oldp+23,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
    bufp->fullBit(oldp+24,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
    bufp->fullBit(oldp+25,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+27,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                       >> 7U))),5);
    bufp->fullBit(oldp+28,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
    bufp->fullIData(oldp+29,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
    bufp->fullIData(oldp+30,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
    bufp->fullIData(oldp+31,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
    bufp->fullQData(oldp+32,(vlSelf->Top__DOT__core__DOT__ex_reg_result),64);
    bufp->fullBit(oldp+34,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
    bufp->fullBit(oldp+35,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
    bufp->fullBit(oldp+36,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
    bufp->fullBit(oldp+37,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
    bufp->fullBit(oldp+38,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
    bufp->fullQData(oldp+42,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[0U])))),64);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,((((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (IData)((0x5013U == 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__core__DOT__if_reg_ins))))
                               ? (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+46,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+47,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            | ((0x3bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36)))));
    bufp->fullCData(oldp+48,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 1U
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                         ? 0U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                          ? 2U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                           ? 2U
                                                           : 0U)))))))))))))),2);
    bufp->fullBit(oldp+49,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x3bU == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x1bU == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                 | ((0x23U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                    & ((0x63U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                       & ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                          | ((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                             | ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))))))))));
    bufp->fullBit(oldp+50,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x3bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x1bU != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((3U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | (0xbU 
                                              == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))));
    bufp->fullBit(oldp+51,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x3bU != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x1bU != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((3U != 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((0xbU 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                 & (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))));
    bufp->fullBit(oldp+52,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch));
    bufp->fullCData(oldp+53,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 2U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 2U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 2U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 2U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 2U
                                                   : 0U)))))),2);
    bufp->fullCData(oldp+54,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump),2);
    bufp->fullCData(oldp+55,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))))),2);
    bufp->fullBit(oldp+56,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write));
    bufp->fullIData(oldp+57,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                               : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
    bufp->fullBit(oldp+58,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+61,(vlSelf->Top__DOT__core__DOT__id_reg_imm),32);
    bufp->fullQData(oldp+62,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),64);
    bufp->fullQData(oldp+64,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),64);
    bufp->fullIData(oldp+66,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
    bufp->fullCData(oldp+67,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
    bufp->fullCData(oldp+68,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
    bufp->fullBit(oldp+69,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
    bufp->fullCData(oldp+70,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
    bufp->fullCData(oldp+71,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
    bufp->fullQData(oldp+72,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),64);
    bufp->fullCData(oldp+74,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+75,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
    bufp->fullIData(oldp+76,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
    bufp->fullIData(oldp+77,(((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
    bufp->fullCData(oldp+78,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
    bufp->fullCData(oldp+79,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
    bufp->fullBit(oldp+80,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
    bufp->fullCData(oldp+81,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
    bufp->fullCData(oldp+82,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
    bufp->fullIData(oldp+83,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
    bufp->fullQData(oldp+84,(vlSelf->Top__DOT__core__DOT__mem_reg_result),64);
    bufp->fullCData(oldp+86,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
    bufp->fullIData(oldp+87,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
    bufp->fullIData(oldp+88,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
    bufp->fullIData(oldp+89,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
    bufp->fullCData(oldp+90,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
    bufp->fullCData(oldp+91,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
    bufp->fullCData(oldp+92,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
    bufp->fullCData(oldp+93,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
    bufp->fullIData(oldp+94,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
    bufp->fullIData(oldp+95,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
    bufp->fullBit(oldp+96,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
    bufp->fullBit(oldp+97,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
    bufp->fullBit(oldp+98,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
    bufp->fullIData(oldp+99,(vlSelf->Top__DOT__core__DOT__insDelay_0),32);
    bufp->fullIData(oldp+100,(vlSelf->Top__DOT__core__DOT__insDelay_1),32);
    bufp->fullIData(oldp+101,(vlSelf->Top__DOT__core__DOT__insDelay_2),32);
    bufp->fullCData(oldp+102,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
    bufp->fullCData(oldp+103,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                     >> 5U))),7);
    bufp->fullCData(oldp+104,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+106,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+107,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
    bufp->fullCData(oldp+108,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
    bufp->fullSData(oldp+109,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+110,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en));
    bufp->fullCData(oldp+111,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
    bufp->fullBit(oldp+112,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                        & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                                       & (((0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU))) 
                                          | ((0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))))) 
                                   & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))))));
    bufp->fullBit(oldp+113,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x3bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x13U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x1bU == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x73U == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x23U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x63U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                           | ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                              | (0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))))))));
    bufp->fullBit(oldp+114,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             & ((0x3bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x1bU != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
                                             (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0xbU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                               & (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))));
    bufp->fullBit(oldp+115,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable));
    bufp->fullQData(oldp+116,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                ? 0ULL : ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)))
                                           ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                               ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27
                                                     : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_90))))))),64);
    bufp->fullQData(oldp+118,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),64);
    bufp->fullQData(oldp+120,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),64);
    bufp->fullCData(oldp+122,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+123,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
    bufp->fullBit(oldp+124,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
    bufp->fullBit(oldp+125,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
    bufp->fullBit(oldp+126,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
    bufp->fullBit(oldp+127,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
    bufp->fullCData(oldp+128,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
    bufp->fullCData(oldp+129,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
    bufp->fullIData(oldp+130,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
    bufp->fullIData(oldp+131,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
    bufp->fullIData(oldp+132,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
    bufp->fullIData(oldp+133,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
    bufp->fullIData(oldp+134,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
    bufp->fullIData(oldp+135,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
    bufp->fullBit(oldp+136,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
    bufp->fullBit(oldp+137,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
    bufp->fullCData(oldp+138,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
    bufp->fullBit(oldp+139,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
    bufp->fullBit(oldp+140,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
    bufp->fullSData(oldp+141,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                          << 3U))),11);
    bufp->fullIData(oldp+142,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                              << 0x11U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                    << 7U) 
                                                   | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                      << 3U)))))),32);
    bufp->fullIData(oldp+143,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U) | 
                                          (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                            << 2U) 
                                           | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                               << 1U) 
                                              | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
    bufp->fullIData(oldp+144,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
    bufp->fullIData(oldp+145,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
    bufp->fullIData(oldp+146,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
    bufp->fullBit(oldp+147,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
    bufp->fullBit(oldp+148,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
    bufp->fullBit(oldp+149,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
    bufp->fullBit(oldp+150,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
    bufp->fullBit(oldp+151,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
    bufp->fullBit(oldp+152,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
    bufp->fullCData(oldp+153,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
    bufp->fullQData(oldp+154,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))),64);
    bufp->fullIData(oldp+156,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU)),20);
    bufp->fullQData(oldp+157,(((QData)((IData)((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                               << 0x20U)),52);
    bufp->fullSData(oldp+159,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 7U)))),12);
    bufp->fullQData(oldp+160,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)(((0xfe0U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 7U))))))),64);
    bufp->fullSData(oldp+162,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U)))))),12);
    bufp->fullQData(oldp+163,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x1fffffffffffULL
                                  : 0ULL) << 0xdU) 
                               | (QData)((IData)(((0x1000U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                              >> 7U))))))))),58);
    bufp->fullIData(oldp+165,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U)))))),20);
    bufp->fullQData(oldp+166,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x7ffffffffffULL
                                  : 0ULL) << 0x15U) 
                               | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins) 
                                                     | ((0x800U 
                                                         & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))))))))),64);
    bufp->fullQData(oldp+168,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0),64);
    bufp->fullQData(oldp+170,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1),64);
    bufp->fullQData(oldp+172,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2),64);
    bufp->fullQData(oldp+174,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3),64);
    bufp->fullQData(oldp+176,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4),64);
    bufp->fullQData(oldp+178,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5),64);
    bufp->fullQData(oldp+180,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6),64);
    bufp->fullQData(oldp+182,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7),64);
    bufp->fullQData(oldp+184,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8),64);
    bufp->fullQData(oldp+186,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9),64);
    bufp->fullQData(oldp+188,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10),64);
    bufp->fullQData(oldp+190,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11),64);
    bufp->fullQData(oldp+192,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12),64);
    bufp->fullQData(oldp+194,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13),64);
    bufp->fullQData(oldp+196,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14),64);
    bufp->fullQData(oldp+198,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15),64);
    bufp->fullQData(oldp+200,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16),64);
    bufp->fullQData(oldp+202,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17),64);
    bufp->fullQData(oldp+204,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18),64);
    bufp->fullQData(oldp+206,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19),64);
    bufp->fullQData(oldp+208,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20),64);
    bufp->fullQData(oldp+210,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21),64);
    bufp->fullQData(oldp+212,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22),64);
    bufp->fullQData(oldp+214,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23),64);
    bufp->fullQData(oldp+216,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24),64);
    bufp->fullQData(oldp+218,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25),64);
    bufp->fullQData(oldp+220,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26),64);
    bufp->fullQData(oldp+222,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27),64);
    bufp->fullQData(oldp+224,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28),64);
    bufp->fullQData(oldp+226,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29),64);
    bufp->fullQData(oldp+228,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30),64);
    bufp->fullQData(oldp+230,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31),64);
    bufp->fullCData(oldp+232,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),3);
    bufp->fullCData(oldp+233,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
    bufp->fullCData(oldp+234,((7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result))),3);
    bufp->fullCData(oldp+235,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0),8);
    bufp->fullCData(oldp+236,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1),8);
    bufp->fullCData(oldp+237,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2),8);
    bufp->fullCData(oldp+238,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3),8);
    bufp->fullCData(oldp+239,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4),8);
    bufp->fullCData(oldp+240,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5),8);
    bufp->fullCData(oldp+241,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6),8);
    bufp->fullCData(oldp+242,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7),8);
    bufp->fullIData(oldp+243,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3) 
                                << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1) 
                                                 << 8U) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0))))),32);
    bufp->fullIData(oldp+244,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7) 
                                << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5) 
                                                 << 8U) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4))))),32);
    bufp->fullSData(oldp+245,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
    bufp->fullCData(oldp+246,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
    bufp->fullBit(oldp+247,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    bufp->fullBit(oldp+248,(vlSelf->Top__DOT__dmem__DOT__sram2_csb_i));
    bufp->fullBit(oldp+249,(vlSelf->Top__DOT__dmem__DOT__sram2_we_i));
    bufp->fullCData(oldp+250,((0xfU & (IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane))),4);
    bufp->fullIData(oldp+251,(vlSelf->Top__DOT__dmem__DOT__sram1_addr_i),21);
    bufp->fullIData(oldp+252,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest)),32);
    bufp->fullCData(oldp+253,((0xfU & ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+254,(vlSelf->Top__DOT__dmem__DOT__sram2_addr_i),21);
    bufp->fullIData(oldp+255,((IData)((vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+256,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__csb));
    bufp->fullIData(oldp+257,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__addr_o),21);
    bufp->fullIData(oldp+258,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wdata_o),32);
    bufp->fullCData(oldp+259,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wmask_o),4);
    bufp->fullBit(oldp+260,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__we_o));
    bufp->fullBit(oldp+261,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rvalid));
    bufp->fullBit(oldp+262,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+263,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+264,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+265,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+266,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__din0_reg),32);
    bufp->fullBit(oldp+267,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__csb));
    bufp->fullIData(oldp+268,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__addr_o),21);
    bufp->fullIData(oldp+269,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wdata_o),32);
    bufp->fullCData(oldp+270,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wmask_o),4);
    bufp->fullBit(oldp+271,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__we_o));
    bufp->fullBit(oldp+272,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rvalid));
    bufp->fullBit(oldp+273,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+274,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+275,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+276,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+277,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__din0_reg),32);
    bufp->fullBit(oldp+278,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
    bufp->fullIData(oldp+279,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),21);
    bufp->fullIData(oldp+280,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+281,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+282,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+283,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
    bufp->fullBit(oldp+284,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+285,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+286,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+287,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+288,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullIData(oldp+289,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    bufp->fullIData(oldp+290,((IData)(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                        ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                        : vlSelf->Top__DOT__core__DOT___GEN_6))),32);
    bufp->fullIData(oldp+291,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                   + vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[0U])
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                    ? ((IData)((((0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                     >> 7U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))
                                                 : 
                                                (((0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 7U)))
                                                  ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                                  : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))) 
                                       + vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[0U])
                                    : (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                       + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))))),32);
    bufp->fullBit(oldp+292,(((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken) 
                             | (0U != (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump)))));
    bufp->fullQData(oldp+293,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),64);
    bufp->fullQData(oldp+295,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                : vlSelf->Top__DOT__core__DOT___GEN_6)),64);
    bufp->fullQData(oldp+297,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_rd1
                                : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                    : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                        ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+299,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U)))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6)),64);
    bufp->fullQData(oldp+301,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                             >> 7U)))
                                ? (((QData)((IData)(
                                                    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))
                                : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xfU)) 
                                    == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                    : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))),64);
    bufp->fullBit(oldp+303,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 == vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                     != vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                  : ((4U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                      : ((5U == (7U 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_GTES_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                              : (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
    bufp->fullIData(oldp+304,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               | vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
    bufp->fullIData(oldp+305,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               & (~ vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
    bufp->fullIData(oldp+306,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction) 
                                << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
    bufp->fullBit(oldp+307,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                              & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                 >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)))));
    bufp->fullQData(oldp+308,((QData)((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T))),64);
    bufp->fullQData(oldp+310,((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o))),64);
    bufp->fullIData(oldp+312,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
    bufp->fullIData(oldp+313,((IData)(((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)) 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+314,(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o),32);
    bufp->fullIData(oldp+315,(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o),32);
    bufp->fullIData(oldp+316,((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T)),32);
    bufp->fullIData(oldp+317,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                               >> 2U)),32);
    bufp->fullIData(oldp+318,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)),32);
    bufp->fullIData(oldp+319,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
    bufp->fullQData(oldp+320,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),64);
    bufp->fullQData(oldp+322,(vlSelf->Top__DOT__core__DOT__Execute_io_wb_result),64);
    bufp->fullQData(oldp+324,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))),64);
    bufp->fullQData(oldp+326,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1),64);
    bufp->fullQData(oldp+328,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2),64);
    bufp->fullBit(oldp+330,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc));
    bufp->fullQData(oldp+331,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),64);
    bufp->fullIData(oldp+333,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
    bufp->fullIData(oldp+334,((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction)),32);
    bufp->fullIData(oldp+335,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
    bufp->fullBit(oldp+336,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                             & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                 ? ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 0xeU))) 
                                    | ((1U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | (3U == (3U 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 0xeU)))))
                                 : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                     ? ((0U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xdU))) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                     : ((2U == (3U 
                                                & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                        & ((0U == (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                           | ((1U == 
                                               (3U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xeU))) 
                                              | ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        >> 0xeU))))))))))));
    bufp->fullIData(oldp+337,(((0U == vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                ? vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o
                                : ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                    ? vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7
                                    : vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62))),32);
    bufp->fullIData(oldp+338,((0x2023U | ((0x38000U 
                                           & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              << 8U)) 
                                          | ((0xc00U 
                                              & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                             | (0x200U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 3U)))))),18);
    bufp->fullIData(oldp+339,((0x6fU | ((0x1000000U 
                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            << 0xdU)) 
                                        | ((0xe00000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               << 0x12U)) 
                                           | ((((0x1000U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                 ? 0x1ffU
                                                 : 0U) 
                                               << 0xcU) 
                                              | (0x80U 
                                                 & ((~ 
                                                     (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xfU)) 
                                                    << 7U))))))),25);
    bufp->fullSData(oldp+340,((0x63U | ((0x1000U & 
                                         (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 1U)) | 
                                        ((0xc00U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                         | ((0x300U 
                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                << 5U)) 
                                            | (0x80U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 5U))))))),15);
    bufp->fullQData(oldp+341,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),64);
    bufp->fullQData(oldp+343,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),64);
    bufp->fullBit(oldp+345,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken));
    bufp->fullQData(oldp+346,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData),64);
    bufp->fullQData(oldp+348,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),64);
    bufp->fullQData(oldp+350,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),64);
    bufp->fullIData(oldp+352,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
    bufp->fullIData(oldp+353,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
    bufp->fullQData(oldp+354,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),64);
    bufp->fullBit(oldp+356,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                   >> 1U))));
    bufp->fullIData(oldp+357,((0x1fffffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),21);
    bufp->fullBit(oldp+358,(vlSelf->clock));
    bufp->fullBit(oldp+359,(vlSelf->reset));
    bufp->fullIData(oldp+360,(vlSelf->io_pin),32);
    bufp->fullIData(oldp+361,(vlSelf->io_fcsr),32);
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+363,((IData)(((6U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                        ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
                                        : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                            ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data))
                                            : ((4U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_csr_data))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                     ? 
                                                    ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                      ? (QData)((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T))
                                                      : vlSelf->Top__DOT__core__DOT__ex_reg_result)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))
                                                      : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1)))))))),32);
    bufp->fullIData(oldp+364,(0U),32);
    bufp->fullCData(oldp+365,(0U),8);
    bufp->fullIData(oldp+366,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rdata_i),32);
    bufp->fullIData(oldp+367,(4U),32);
    bufp->fullIData(oldp+368,(0x20U),32);
    bufp->fullIData(oldp+369,(0x15U),32);
    bufp->fullIData(oldp+370,(0x200000U),32);
    bufp->fullIData(oldp+371,(3U),32);
    bufp->fullIData(oldp+372,(0U),32);
    bufp->fullBit(oldp+373,(0U));
    bufp->fullBit(oldp+374,(1U));
    bufp->fullIData(oldp+375,(0U),21);
    bufp->fullIData(oldp+376,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+377,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+378,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+379,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__i),32);
    bufp->fullIData(oldp+380,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rdata_i),32);
    bufp->fullIData(oldp+381,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+382,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+383,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+384,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__i),32);
    bufp->fullCData(oldp+385,(0xfU),4);
    bufp->fullWData(oldp+386,(VTop__ConstPool__CONST_h06c05930_0),264);
    bufp->fullIData(oldp+395,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+396,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+397,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+398,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+399,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
}
