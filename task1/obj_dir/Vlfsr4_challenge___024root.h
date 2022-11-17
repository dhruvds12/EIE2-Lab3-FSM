// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr4_challenge.h for the primary calling header

#ifndef VERILATED_VLFSR4_CHALLENGE___024ROOT_H_
#define VERILATED_VLFSR4_CHALLENGE___024ROOT_H_  // guard

#include "verilated.h"

class Vlfsr4_challenge__Syms;

class Vlfsr4_challenge___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,8,1);
    CData/*7:0*/ lfsr4_challenge__DOT__lfsr;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vlfsr4_challenge__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr4_challenge___024root(Vlfsr4_challenge__Syms* symsp, const char* name);
    ~Vlfsr4_challenge___024root();
    VL_UNCOPYABLE(Vlfsr4_challenge___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
