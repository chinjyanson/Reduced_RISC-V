// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    SData/*15:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    // Body
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
    vlSelf->cpu__DOT__pc__DOT__PC = ((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->cpu__DOT__pc__DOT__next_PC);
    if ((1U == (IData)(vlSelf->cpu__DOT__MemWrite))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = vlSelf->cpu__DOT__alu__DOT__regOp2;
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = (0xffU & vlSelf->cpu__DOT__ALUResult_o);
    } else if ((2U == (IData)(vlSelf->cpu__DOT__MemWrite))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
            = (0xffffU & vlSelf->cpu__DOT__alu__DOT__regOp2);
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 1U;
        __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
            = (0xffU & vlSelf->cpu__DOT__ALUResult_o);
    } else if ((3U == (IData)(vlSelf->cpu__DOT__MemWrite))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__regOp2);
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 1U;
        __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
            = (0xffU & vlSelf->cpu__DOT__ALUResult_o);
    }
    vlSelf->cpu__DOT__PC = vlSelf->cpu__DOT__pc__DOT__next_PC;
    __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = ((4U & (IData)(vlSelf->cpu__DOT__RegWrite))
            ? ((2U & (IData)(vlSelf->cpu__DOT__RegWrite))
                ? ((1U & (IData)(vlSelf->cpu__DOT__RegWrite))
                    ? (0xffU & vlSelf->cpu__DOT__alu__DOT__Result)
                    : (0xffffU & vlSelf->cpu__DOT__alu__DOT__Result))
                : vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
               [(0x1fU & (vlSelf->cpu__DOT__Instr >> 7U))])
            : ((2U & (IData)(vlSelf->cpu__DOT__RegWrite))
                ? ((1U & (IData)(vlSelf->cpu__DOT__RegWrite))
                    ? (((- (IData)((1U & (vlSelf->cpu__DOT__alu__DOT__Result 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->cpu__DOT__alu__DOT__Result))
                    : (((- (IData)((1U & (vlSelf->cpu__DOT__alu__DOT__Result 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->cpu__DOT__alu__DOT__Result)))
                : ((1U & (IData)(vlSelf->cpu__DOT__RegWrite))
                    ? vlSelf->cpu__DOT__alu__DOT__Result
                    : vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                   [(0x1fU & (vlSelf->cpu__DOT__Instr 
                              >> 7U))])));
    __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = (0x1fU & (vlSelf->cpu__DOT__Instr >> 7U));
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1))) 
                & vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1))));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2))) 
                & vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2))));
    }
    vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0] 
        = __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    vlSelf->cpu__DOT__Instr = ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                [(0xffU & ((IData)(3U) 
                                           + vlSelf->cpu__DOT__PC))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                              [(0xffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                 [(0xffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                [(0xffU 
                                                  & vlSelf->cpu__DOT__PC)])));
    vlSelf->a0 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xaU];
    vlSelf->cpu__DOT__alu__DOT__regOp2 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0x14U))];
    vlSelf->cpu__DOT__alu__DOT__SrcA = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0xfU))];
}

extern const VlUnpacked<CData/*2:0*/, 4096> Vcpu__ConstPool__TABLE_h6fbb89d2_0;
extern const VlUnpacked<CData/*1:0*/, 4096> Vcpu__ConstPool__TABLE_h3bb3d64e_0;
extern const VlUnpacked<CData/*0:0*/, 4096> Vcpu__ConstPool__TABLE_h5f2fb561_0;
extern const VlUnpacked<CData/*1:0*/, 4096> Vcpu__ConstPool__TABLE_he565dfbc_0;
extern const VlUnpacked<CData/*1:0*/, 4096> Vcpu__ConstPool__TABLE_h957261ee_0;
extern const VlUnpacked<CData/*2:0*/, 4096> Vcpu__ConstPool__TABLE_h7d6b6a0a_0;
extern const VlUnpacked<CData/*1:0*/, 4096> Vcpu__ConstPool__TABLE_h5d79f2f0_0;

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = ((0x800U & (vlSelf->cpu__DOT__Instr 
                               >> 0x13U)) | (((vlSelf->cpu__DOT__alu__DOT__SrcA 
                                               == vlSelf->cpu__DOT__alu__DOT__SrcB) 
                                              << 0xaU) 
                                             | ((0x380U 
                                                 & (vlSelf->cpu__DOT__Instr 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->cpu__DOT__Instr))));
    vlSelf->cpu__DOT__RegWrite = Vcpu__ConstPool__TABLE_h6fbb89d2_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__control__DOT__ImmSrc = Vcpu__ConstPool__TABLE_h3bb3d64e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__ALUsrc = Vcpu__ConstPool__TABLE_h5f2fb561_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__MemWrite = Vcpu__ConstPool__TABLE_he565dfbc_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__Resultsrc = Vcpu__ConstPool__TABLE_h957261ee_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__ALUctrl = Vcpu__ConstPool__TABLE_h7d6b6a0a_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__PCsrc = Vcpu__ConstPool__TABLE_h5d79f2f0_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__ImmOp = ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__Instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->cpu__DOT__Instr) 
                                        | ((0x800U 
                                            & (vlSelf->cpu__DOT__Instr 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->cpu__DOT__Instr 
                                                 >> 0x14U)))))
                                    : (((- (IData)(
                                                   (vlSelf->cpu__DOT__Instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->cpu__DOT__Instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->cpu__DOT__Instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->cpu__DOT__Instr 
                                                 >> 7U))))))
                                : ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__Instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->cpu__DOT__Instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->cpu__DOT__Instr 
                                            >> 7U))))
                                    : (((- (IData)(
                                                   (vlSelf->cpu__DOT__Instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->cpu__DOT__Instr 
                                        >> 0x14U))));
    vlSelf->cpu__DOT__ALUResult_o = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? vlSelf->cpu__DOT__alu__DOT__SrcA
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 ^ vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 | vlSelf->cpu__DOT__alu__DOT__SrcB)
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 - vlSelf->cpu__DOT__alu__DOT__SrcB)
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 + vlSelf->cpu__DOT__alu__DOT__SrcB))));
    vlSelf->cpu__DOT__alu__DOT__SrcB = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                         ? vlSelf->cpu__DOT__ImmOp
                                         : vlSelf->cpu__DOT__alu__DOT__regOp2);
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((2U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                               ? vlSelf->cpu__DOT__pc__DOT__pc_mux__DOT__input3
                                               : vlSelf->cpu__DOT__ALUResult_o)
                                           : ((1U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                               ? (vlSelf->cpu__DOT__pc__DOT__PC 
                                                  + vlSelf->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlSelf->cpu__DOT__pc__DOT__PC)));
    vlSelf->cpu__DOT__alu__DOT__Result = ((2U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                               ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                                               : ((IData)(4U) 
                                                  + vlSelf->cpu__DOT__pc__DOT__PC))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                               ? vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                              [(0xffU 
                                                & vlSelf->cpu__DOT__ALUResult_o)]
                                               : vlSelf->cpu__DOT__ALUResult_o));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__alu__DOT__SrcB ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__alu__DOT__SrcB ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB))) VL_DBG_MSGF("        CHANGE: alu_top.sv:21: cpu.alu.SrcB\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB 
        = vlSelf->cpu__DOT__alu__DOT__SrcB;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
