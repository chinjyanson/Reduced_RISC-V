// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBus(c+31,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+36,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBus(c+31,"a0", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite", false,-1);
    tracep->declBit(c+18,"MemWrite", false,-1);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBus(c+19,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBit(c+32,"Zero", false,-1);
    tracep->declBus(c+21,"Resultsrc", false,-1, 1,0);
    tracep->declBus(c+22,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+23,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+2,"PC", false,-1, 7,0);
    tracep->declBus(c+3,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+33,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+38,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+20,"ALUsrc_i", false,-1);
    tracep->declBus(c+19,"ALUctrl_i", false,-1, 2,0);
    tracep->declBus(c+1,"Instr_i", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite_i", false,-1);
    tracep->declBus(c+21,"ResultSrc_i", false,-1, 1,0);
    tracep->declBit(c+18,"MemWrite_i", false,-1);
    tracep->declBus(c+22,"ImmOp_i", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_i", false,-1, 31,0);
    tracep->declBit(c+32,"Zero_o", false,-1);
    tracep->declBus(c+31,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"Result_o", false,-1, 31,0);
    tracep->declBus(c+24,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+4,"SrcA", false,-1, 31,0);
    tracep->declBus(c+25,"SrcB", false,-1, 31,0);
    tracep->declBus(c+5,"regOp2", false,-1, 31,0);
    tracep->declBus(c+34,"ReadData", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+38,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+4,"SrcA", false,-1, 31,0);
    tracep->declBus(c+25,"SrcB", false,-1, 31,0);
    tracep->declBus(c+24,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+32,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+20,"control", false,-1);
    tracep->declBus(c+5,"input0", false,-1, 31,0);
    tracep->declBus(c+22,"input1", false,-1, 31,0);
    tracep->declBus(c+25,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data ");
    tracep->declBus(c+36,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+18,"WE", false,-1);
    tracep->declBus(c+26,"A", false,-1, 7,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBus(c+34,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+36,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+17,"WE3", false,-1);
    tracep->declBus(c+24,"WD3", false,-1, 31,0);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBus(c+4,"RD1", false,-1, 31,0);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+31,"a0", false,-1, 31,0);
    tracep->declBus(c+6,"A2", false,-1, 7,0);
    tracep->declBus(c+7,"A1", false,-1, 7,0);
    tracep->declBus(c+8,"A3", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resultMux ");
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"control", false,-1, 1,0);
    tracep->declBus(c+34,"input0", false,-1, 31,0);
    tracep->declBus(c+24,"input1", false,-1, 31,0);
    tracep->declBus(c+3,"input2", false,-1, 31,0);
    tracep->declBus(c+40,"input3", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+36,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"PC_i", false,-1, 7,0);
    tracep->declBit(c+32,"Zero_i", false,-1);
    tracep->declBus(c+1,"instr_o", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite_o", false,-1);
    tracep->declBit(c+18,"MemWrite_o", false,-1);
    tracep->declBus(c+21,"Resultsrc_o", false,-1, 1,0);
    tracep->declBus(c+19,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+20,"ALUsrc_o", false,-1);
    tracep->declBus(c+23,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+22,"ImmOp_o", false,-1, 31,0);
    tracep->declBus(c+27,"ImmSrc", false,-1, 1,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"Zero_i", false,-1);
    tracep->declBus(c+1,"instr_i", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite_o", false,-1);
    tracep->declBit(c+18,"MemWrite_o", false,-1);
    tracep->declBus(c+21,"Resultsrc_o", false,-1, 1,0);
    tracep->declBus(c+19,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+20,"ALUsrc_o", false,-1);
    tracep->declBus(c+27,"ImmSrc_o", false,-1, 1,0);
    tracep->declBus(c+23,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+9,"opcode", false,-1, 6,0);
    tracep->declBus(c+10,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+36,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"addr_i", false,-1, 7,0);
    tracep->declBus(c+1,"Instr_o", false,-1, 31,0);
    tracep->declBus(c+11,"rom_array0", false,-1, 7,0);
    tracep->declBus(c+12,"rom_array1", false,-1, 7,0);
    tracep->declBus(c+13,"rom_array2", false,-1, 7,0);
    tracep->declBus(c+14,"rom_array3", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MySignExtend ");
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"instr_i", false,-1, 31,0);
    tracep->declBus(c+27,"ImmSrc_i", false,-1, 1,0);
    tracep->declBus(c+22,"ImmOp_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+37,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBus(c+33,"ALUResult_i", false,-1, 31,0);
    tracep->declBus(c+22,"ImmOp_i", false,-1, 31,0);
    tracep->declBus(c+23,"PCsrc_i", false,-1, 1,0);
    tracep->declBus(c+15,"pc_out", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_o", false,-1, 31,0);
    tracep->declBus(c+28,"next_PC", false,-1, 31,0);
    tracep->declBus(c+16,"PC", false,-1, 31,0);
    tracep->declBus(c+35,"PCTarget", false,-1, 31,0);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+37,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"control", false,-1, 1,0);
    tracep->declBus(c+3,"input0", false,-1, 31,0);
    tracep->declBus(c+35,"input1", false,-1, 31,0);
    tracep->declBus(c+33,"input2", false,-1, 31,0);
    tracep->declBus(c+41,"input3", false,-1, 31,0);
    tracep->declBus(c+28,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+37,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBus(c+28,"next_PC", false,-1, 31,0);
    tracep->declBus(c+16,"pc", false,-1, 31,0);
    tracep->declBus(c+15,"another_pc", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__Instr),32);
    bufp->fullCData(oldp+2,((0xffU & vlSelf->cpu__DOT____Vcellout__pc__pc_out)),8);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC)),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__alu__DOT__SrcA),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__alu__DOT__regOp2),32);
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 0x14U))),8);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 0xfU))),8);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 7U))),8);
    bufp->fullCData(oldp+9,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
    bufp->fullCData(oldp+10,((7U & (vlSelf->cpu__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+11,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & vlSelf->cpu__DOT____Vcellout__pc__pc_out)])),8);
    bufp->fullCData(oldp+12,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(1U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullCData(oldp+13,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(2U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullCData(oldp+14,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(3U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT____Vcellout__pc__pc_out),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__pc__DOT__PC),32);
    bufp->fullBit(oldp+17,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullBit(oldp+18,(vlSelf->cpu__DOT__MemWrite));
    bufp->fullCData(oldp+19,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__Resultsrc),2);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__PCsrc),2);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__alu__DOT__ALUResult_o),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__alu__DOT__SrcB),32);
    bufp->fullCData(oldp+26,((0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResult_o)),8);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__control__DOT__ImmSrc),2);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__pc__DOT__next_PC),32);
    bufp->fullBit(oldp+29,(vlSelf->clk));
    bufp->fullBit(oldp+30,(vlSelf->rst));
    bufp->fullIData(oldp+31,(vlSelf->a0),32);
    bufp->fullBit(oldp+32,((vlSelf->cpu__DOT__alu__DOT__SrcA 
                            == vlSelf->cpu__DOT__alu__DOT__SrcB)));
    bufp->fullIData(oldp+33,(((2U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                   ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                                   : ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC))
                               : ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                   ? vlSelf->cpu__DOT__alu__DOT__ALUResult_o
                                   : vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                  [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResult_o)]))),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                             [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResult_o)]),32);
    bufp->fullIData(oldp+35,((vlSelf->cpu__DOT__pc__DOT__PC 
                              + vlSelf->cpu__DOT__ImmOp)),32);
    bufp->fullIData(oldp+36,(8U),32);
    bufp->fullIData(oldp+37,(0x20U),32);
    bufp->fullIData(oldp+38,(3U),32);
    bufp->fullIData(oldp+39,(2U),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__pc__DOT__pc_mux__DOT__input3),32);
}
