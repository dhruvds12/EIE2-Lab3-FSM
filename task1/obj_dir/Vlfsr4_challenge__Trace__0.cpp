// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlfsr4_challenge__Syms.h"


void Vlfsr4_challenge___024root__trace_chg_sub_0(Vlfsr4_challenge___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlfsr4_challenge___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root__trace_chg_top_0\n"); );
    // Init
    Vlfsr4_challenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr4_challenge___024root*>(voidSelf);
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlfsr4_challenge___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlfsr4_challenge___024root__trace_chg_sub_0(Vlfsr4_challenge___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgCData(oldp+3,(vlSelf->data_out),8);
    bufp->chgCData(oldp+4,(vlSelf->lfsr4_challenge__DOT__lfsr),8);
}

void Vlfsr4_challenge___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4_challenge___024root__trace_cleanup\n"); );
    // Init
    Vlfsr4_challenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr4_challenge___024root*>(voidSelf);
    Vlfsr4_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
