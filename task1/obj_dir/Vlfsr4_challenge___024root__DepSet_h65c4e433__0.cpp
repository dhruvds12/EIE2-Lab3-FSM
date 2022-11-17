// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr4_challenge.h for the primary calling header

#include "verilated.h"

#include "Vlfsr4_challenge___024root.h"

VL_INLINE_OPT void Vlfsr4_challenge___024root___sequent__TOP__0(Vlfsr4_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__lfsr4_challenge__DOT__lfsr;
    // Body
    __Vdly__lfsr4_challenge__DOT__lfsr = vlSelf->lfsr4_challenge__DOT__lfsr;
    if (vlSelf->rst) {
        __Vdly__lfsr4_challenge__DOT__lfsr = 1U;
    } else if (vlSelf->en) {
        __Vdly__lfsr4_challenge__DOT__lfsr = ((0xfeU 
                                               & ((IData)(vlSelf->lfsr4_challenge__DOT__lfsr) 
                                                  << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_8(
                                                               (0x84U 
                                                                & (IData)(vlSelf->lfsr4_challenge__DOT__lfsr)))));
    }
    vlSelf->lfsr4_challenge__DOT__lfsr = __Vdly__lfsr4_challenge__DOT__lfsr;
    vlSelf->data_out = vlSelf->lfsr4_challenge__DOT__lfsr;
}

void Vlfsr4_challenge___024root___eval(Vlfsr4_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlfsr4_challenge___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlfsr4_challenge___024root___eval_debug_assertions(Vlfsr4_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
