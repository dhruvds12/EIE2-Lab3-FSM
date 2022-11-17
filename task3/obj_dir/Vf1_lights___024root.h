// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_lights.h for the primary calling header

#ifndef VERILATED_VF1_LIGHTS___024ROOT_H_
#define VERILATED_VF1_LIGHTS___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_lights__Syms;

class Vf1_lights___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);
    VL_OUT8(tick,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1_lights__DOT__delay__DOT__count;
    SData/*15:0*/ __Vdly__f1_lights__DOT__delay__DOT__count;
    IData/*31:0*/ f1_lights__DOT__statemachine__DOT__current_state;
    IData/*31:0*/ f1_lights__DOT__statemachine__DOT__next_state;

    // INTERNAL VARIABLES
    Vf1_lights__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_lights___024root(Vf1_lights__Syms* symsp, const char* name);
    ~Vf1_lights___024root();
    VL_UNCOPYABLE(Vf1_lights___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
