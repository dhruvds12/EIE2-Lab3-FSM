// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr4_challenge.h for the primary calling header

#include "verilated.h"

#include "Vlfsr4_challenge__Syms.h"
#include "Vlfsr4_challenge___024root.h"

void Vlfsr4_challenge___024root___ctor_var_reset(Vlfsr4_challenge___024root* vlSelf);

Vlfsr4_challenge___024root::Vlfsr4_challenge___024root(Vlfsr4_challenge__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr4_challenge___024root___ctor_var_reset(this);
}

void Vlfsr4_challenge___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr4_challenge___024root::~Vlfsr4_challenge___024root() {
}
