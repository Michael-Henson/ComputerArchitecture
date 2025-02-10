// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_TLBCAMLINE__PZ1_K34_S9_H_
#define VERILATED_VTESTBENCH_TLBCAMLINE__PZ1_K34_S9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_tlbcamline__Pz1_K34_S9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(SV39Mode,0,0);
    VL_IN8(WriteEnable,0,0);
    VL_IN8(PTE_G,0,0);
    VL_IN8(PTE_NAPOT,0,0);
    VL_IN8(PageTypeWriteVal,1,0);
    VL_IN8(TLBFlush,0,0);
    VL_OUT8(PageTypeRead,1,0);
    VL_OUT8(Match,0,0);
    CData/*0:0*/ __PVT__Valid;
    CData/*1:0*/ __PVT__PageType;
    VL_IN16(SATP_ASID,15,0);
    VL_IN64(VPN,35,0);
    QData/*51:0*/ __PVT__Key;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_tlbcamline__Pz1_K34_S9(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_tlbcamline__Pz1_K34_S9();
    VL_UNCOPYABLE(Vtestbench_tlbcamline__Pz1_K34_S9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
