// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgIData(oldp+1,((IData)((0x7ffULL & 
                                        (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                         >> 2U)))),32);
        bufp->chgQData(oldp+2,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),64);
        bufp->chgCData(oldp+4,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),8);
        bufp->chgBit(oldp+5,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgBit(oldp+6,(vlSelf->Top__DOT__dmem__DOT__validReg));
        bufp->chgBit(oldp+7,(vlSelf->Top__DOT__imem__DOT__validReg));
        bufp->chgIData(oldp+8,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+9,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
        bufp->chgIData(oldp+10,(vlSelf->Top__DOT__core__DOT__insDelay_3),32);
        bufp->chgIData(oldp+11,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
        bufp->chgIData(oldp+12,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
        bufp->chgIData(oldp+13,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
        bufp->chgIData(oldp+14,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
        bufp->chgBit(oldp+15,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
        bufp->chgCData(oldp+16,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgCData(oldp+17,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
        bufp->chgCData(oldp+18,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
        bufp->chgIData(oldp+19,(((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                << 3U))) 
                                 | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                     << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                << 1U) 
                                               | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
        bufp->chgIData(oldp+20,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+21,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+22,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
        bufp->chgBit(oldp+23,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+24,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                          >> 7U))),5);
        bufp->chgBit(oldp+27,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
        bufp->chgIData(oldp+28,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+29,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgIData(oldp+30,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
        bufp->chgQData(oldp+31,(vlSelf->Top__DOT__core__DOT__ex_reg_result),64);
        bufp->chgBit(oldp+33,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
        bufp->chgBit(oldp+34,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
        bufp->chgBit(oldp+35,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+36,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+37,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+38,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+39,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+40,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgQData(oldp+41,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[0U])))),64);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+44,((((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)((0x5013U 
                                             == (0x707fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))))
                                  ? (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x19U) : 0U)),7);
        bufp->chgCData(oldp+45,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+46,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x3bU == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36)))));
        bufp->chgCData(oldp+47,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x13U 
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
        bufp->chgBit(oldp+48,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x3bU == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x1bU == 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((3U 
                                                  == 
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
        bufp->chgBit(oldp+49,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x3bU != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x1bU != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((3U == 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | (0xbU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgBit(oldp+50,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x3bU != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x13U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x1bU != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x73U 
                                               != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((3U 
                                                  != 
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
        bufp->chgBit(oldp+51,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch));
        bufp->chgCData(oldp+52,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 2U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 2U : (
                                                   (0x13U 
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
        bufp->chgCData(oldp+53,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump),2);
        bufp->chgCData(oldp+54,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x13U 
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
        bufp->chgBit(oldp+55,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write));
        bufp->chgIData(oldp+56,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                  : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
        bufp->chgBit(oldp+57,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+60,(vlSelf->Top__DOT__core__DOT__id_reg_imm),32);
        bufp->chgQData(oldp+61,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),64);
        bufp->chgQData(oldp+63,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),64);
        bufp->chgIData(oldp+65,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+66,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+67,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+68,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+69,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+70,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgQData(oldp+71,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),64);
        bufp->chgCData(oldp+73,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+74,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+75,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
        bufp->chgIData(oldp+76,(((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
        bufp->chgCData(oldp+77,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+78,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+79,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgCData(oldp+80,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+81,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+82,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgQData(oldp+83,(vlSelf->Top__DOT__core__DOT__mem_reg_result),64);
        bufp->chgCData(oldp+85,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+86,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
        bufp->chgIData(oldp+87,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
        bufp->chgIData(oldp+88,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
        bufp->chgCData(oldp+89,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
        bufp->chgCData(oldp+90,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
        bufp->chgCData(oldp+91,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
        bufp->chgCData(oldp+92,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
        bufp->chgIData(oldp+93,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
        bufp->chgIData(oldp+94,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
        bufp->chgBit(oldp+95,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
        bufp->chgBit(oldp+96,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
        bufp->chgBit(oldp+97,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
        bufp->chgIData(oldp+98,(vlSelf->Top__DOT__core__DOT__insDelay_0),32);
        bufp->chgIData(oldp+99,(vlSelf->Top__DOT__core__DOT__insDelay_1),32);
        bufp->chgIData(oldp+100,(vlSelf->Top__DOT__core__DOT__insDelay_2),32);
        bufp->chgCData(oldp+101,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
        bufp->chgCData(oldp+102,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                        >> 5U))),7);
        bufp->chgCData(oldp+103,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+104,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+105,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+106,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+107,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgSData(oldp+108,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+109,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en));
        bufp->chgCData(oldp+110,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+111,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                           & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                                          & (((0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU))) 
                                             | ((0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))))) 
                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))))));
        bufp->chgBit(oldp+112,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x3bU == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x13U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x1bU == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((3U 
                                                == 
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
        bufp->chgBit(oldp+113,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x3bU != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x1bU != 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x73U 
                                             != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((3U 
                                                != 
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
        bufp->chgBit(oldp+114,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable));
        bufp->chgQData(oldp+115,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                   ? 0ULL : ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                                                  : 
                                                 ((0x1dU 
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
        bufp->chgQData(oldp+117,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),64);
        bufp->chgQData(oldp+119,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),64);
        bufp->chgCData(oldp+121,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+122,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+123,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+124,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+125,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+126,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+127,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+128,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
        bufp->chgIData(oldp+129,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+130,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+131,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+132,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+133,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+134,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+135,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+136,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+137,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+138,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+139,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+140,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+141,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+142,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                   << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                              << 3U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
        bufp->chgIData(oldp+143,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+144,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
        bufp->chgIData(oldp+145,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgBit(oldp+146,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+147,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+148,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+149,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+150,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+151,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgCData(oldp+152,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgQData(oldp+153,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U))))),64);
        bufp->chgIData(oldp+155,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgQData(oldp+156,(((QData)((IData)((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                  << 0x20U)),52);
        bufp->chgSData(oldp+158,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgQData(oldp+159,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    ((0xfe0U 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                           >> 7U))))))),64);
        bufp->chgSData(oldp+161,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 8U)))))),12);
        bufp->chgQData(oldp+162,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x1fffffffffffULL
                                     : 0ULL) << 0xdU) 
                                  | (QData)((IData)(
                                                    ((0x1000U 
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
        bufp->chgIData(oldp+164,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgQData(oldp+165,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffffffffffULL
                                     : 0ULL) << 0x15U) 
                                  | (QData)((IData)(
                                                    ((0x100000U 
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
        bufp->chgQData(oldp+167,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0),64);
        bufp->chgQData(oldp+169,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1),64);
        bufp->chgQData(oldp+171,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2),64);
        bufp->chgQData(oldp+173,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3),64);
        bufp->chgQData(oldp+175,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4),64);
        bufp->chgQData(oldp+177,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5),64);
        bufp->chgQData(oldp+179,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6),64);
        bufp->chgQData(oldp+181,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7),64);
        bufp->chgQData(oldp+183,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8),64);
        bufp->chgQData(oldp+185,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9),64);
        bufp->chgQData(oldp+187,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10),64);
        bufp->chgQData(oldp+189,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11),64);
        bufp->chgQData(oldp+191,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12),64);
        bufp->chgQData(oldp+193,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13),64);
        bufp->chgQData(oldp+195,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14),64);
        bufp->chgQData(oldp+197,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15),64);
        bufp->chgQData(oldp+199,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16),64);
        bufp->chgQData(oldp+201,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17),64);
        bufp->chgQData(oldp+203,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18),64);
        bufp->chgQData(oldp+205,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19),64);
        bufp->chgQData(oldp+207,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20),64);
        bufp->chgQData(oldp+209,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21),64);
        bufp->chgQData(oldp+211,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22),64);
        bufp->chgQData(oldp+213,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23),64);
        bufp->chgQData(oldp+215,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24),64);
        bufp->chgQData(oldp+217,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25),64);
        bufp->chgQData(oldp+219,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26),64);
        bufp->chgQData(oldp+221,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27),64);
        bufp->chgQData(oldp+223,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28),64);
        bufp->chgQData(oldp+225,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29),64);
        bufp->chgQData(oldp+227,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30),64);
        bufp->chgQData(oldp+229,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31),64);
        bufp->chgCData(oldp+231,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),3);
        bufp->chgCData(oldp+232,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+233,((7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result))),3);
        bufp->chgCData(oldp+234,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0),8);
        bufp->chgCData(oldp+235,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1),8);
        bufp->chgCData(oldp+236,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2),8);
        bufp->chgCData(oldp+237,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3),8);
        bufp->chgCData(oldp+238,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4),8);
        bufp->chgCData(oldp+239,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5),8);
        bufp->chgCData(oldp+240,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6),8);
        bufp->chgCData(oldp+241,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7),8);
        bufp->chgIData(oldp+242,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3) 
                                   << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0))))),32);
        bufp->chgIData(oldp+243,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7) 
                                   << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4))))),32);
        bufp->chgSData(oldp+244,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
        bufp->chgCData(oldp+245,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
        bufp->chgBit(oldp+246,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        bufp->chgBit(oldp+247,(vlSelf->Top__DOT__dmem__DOT__sram2_csb_i));
        bufp->chgBit(oldp+248,(vlSelf->Top__DOT__dmem__DOT__sram2_we_i));
        bufp->chgCData(oldp+249,((0xfU & (IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane))),4);
        bufp->chgIData(oldp+250,(vlSelf->Top__DOT__dmem__DOT__sram1_addr_i),21);
        bufp->chgIData(oldp+251,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest)),32);
        bufp->chgCData(oldp+252,((0xfU & ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+253,(vlSelf->Top__DOT__dmem__DOT__sram2_addr_i),21);
        bufp->chgIData(oldp+254,((IData)((vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+255,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__csb));
        bufp->chgIData(oldp+256,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__addr_o),21);
        bufp->chgIData(oldp+257,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wdata_o),32);
        bufp->chgCData(oldp+258,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wmask_o),4);
        bufp->chgBit(oldp+259,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__we_o));
        bufp->chgBit(oldp+260,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rvalid));
        bufp->chgBit(oldp+261,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+262,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+263,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+264,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+265,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+266,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__csb));
        bufp->chgIData(oldp+267,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__addr_o),21);
        bufp->chgIData(oldp+268,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wdata_o),32);
        bufp->chgCData(oldp+269,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wmask_o),4);
        bufp->chgBit(oldp+270,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__we_o));
        bufp->chgBit(oldp+271,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rvalid));
        bufp->chgBit(oldp+272,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+273,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+274,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+275,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+276,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+277,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgIData(oldp+278,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),21);
        bufp->chgIData(oldp+279,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+280,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+281,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+282,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
        bufp->chgBit(oldp+283,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+284,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+285,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+286,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+287,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+288,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+289,((IData)(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                           ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                           : vlSelf->Top__DOT__core__DOT___GEN_6))),32);
        bufp->chgIData(oldp+290,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                   ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                      + vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_immediate_T_9[0U])
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                       ? ((IData)((
                                                   ((0x1fU 
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
        bufp->chgBit(oldp+291,(((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken) 
                                | (0U != (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump)))));
        bufp->chgQData(oldp+292,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),64);
        bufp->chgQData(oldp+294,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                   ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                   : vlSelf->Top__DOT__core__DOT___GEN_6)),64);
        bufp->chgQData(oldp+296,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_rd1
                                   : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                       ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                       : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                           ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+298,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U)))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                   : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6)),64);
        bufp->chgQData(oldp+300,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))
                                   : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                            >> 7U)))
                                       ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                       : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))),64);
        bufp->chgBit(oldp+302,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU)))
                                 ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                    == vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                 : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)))
                                     ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                        != vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                     : ((4U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                         ? VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                             ? VL_GTES_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                 : 
                                                (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
        bufp->chgIData(oldp+303,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+304,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  & (~ vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
        bufp->chgIData(oldp+305,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction) 
                                   << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        bufp->chgBit(oldp+306,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                 & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                    >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+307,((QData)((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T))),64);
        bufp->chgQData(oldp+309,((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o))),64);
        bufp->chgIData(oldp+311,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+312,((IData)(((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+313,(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o),32);
        bufp->chgIData(oldp+314,(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o),32);
        bufp->chgIData(oldp+315,((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+316,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                  >> 2U)),32);
        bufp->chgIData(oldp+317,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)),32);
        bufp->chgIData(oldp+318,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
        bufp->chgQData(oldp+319,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),64);
        bufp->chgQData(oldp+321,(vlSelf->Top__DOT__core__DOT__Execute_io_wb_result),64);
        bufp->chgQData(oldp+323,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_38[0U])))),64);
        bufp->chgQData(oldp+325,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1),64);
        bufp->chgQData(oldp+327,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2),64);
        bufp->chgBit(oldp+329,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc));
        bufp->chgQData(oldp+330,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),64);
        bufp->chgIData(oldp+332,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
        bufp->chgIData(oldp+333,((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction)),32);
        bufp->chgIData(oldp+334,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
        bufp->chgBit(oldp+335,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                    ? ((0U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | ((1U == (3U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xeU))) 
                                          | (3U == 
                                             (3U & 
                                              (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xeU)))))
                                    : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                        ? ((0U == (7U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xdU))) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                        : ((2U == (3U 
                                                   & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xeU))) 
                                              | ((1U 
                                                  == 
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
        bufp->chgIData(oldp+336,(((0U == vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                   ? vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o
                                   : ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                       ? vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7
                                       : vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62))),32);
        bufp->chgIData(oldp+337,((0x2023U | ((0x38000U 
                                              & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                | (0x200U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 3U)))))),18);
        bufp->chgIData(oldp+338,((0x6fU | ((0x1000000U 
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
        bufp->chgSData(oldp+339,((0x63U | ((0x1000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 1U)) 
                                           | ((0xc00U 
                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                              | ((0x300U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 5U)) 
                                                 | (0x80U 
                                                    & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       >> 5U))))))),15);
        bufp->chgQData(oldp+340,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),64);
        bufp->chgQData(oldp+342,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),64);
        bufp->chgBit(oldp+344,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken));
        bufp->chgQData(oldp+345,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData),64);
        bufp->chgQData(oldp+347,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),64);
        bufp->chgQData(oldp+349,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),64);
        bufp->chgIData(oldp+351,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+352,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgQData(oldp+353,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),64);
        bufp->chgBit(oldp+355,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                      >> 1U))));
        bufp->chgIData(oldp+356,((0x1fffffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                               >> 2U))),21);
    }
    bufp->chgBit(oldp+357,(vlSelf->clock));
    bufp->chgBit(oldp+358,(vlSelf->reset));
    bufp->chgIData(oldp+359,(vlSelf->io_pin),32);
    bufp->chgIData(oldp+360,(vlSelf->io_fcsr),32);
    bufp->chgBit(oldp+361,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgIData(oldp+362,((IData)(((6U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                       ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
                                       : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                           ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data))
                                           : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                               ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_csr_data))
                                               : ((3U 
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
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
