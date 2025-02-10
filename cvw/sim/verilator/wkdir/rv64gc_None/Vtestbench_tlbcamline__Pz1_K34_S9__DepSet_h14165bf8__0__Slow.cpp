// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_tlbcamline__Pz1_K34_S9.h"

VL_ATTR_COLD void Vtestbench_tlbcamline__Pz1_K34_S9___ctor_var_reset(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->VPN = VL_RAND_RESET_Q(36);
    vlSelf->SATP_ASID = VL_RAND_RESET_I(16);
    vlSelf->SV39Mode = VL_RAND_RESET_I(1);
    vlSelf->WriteEnable = VL_RAND_RESET_I(1);
    vlSelf->PTE_G = VL_RAND_RESET_I(1);
    vlSelf->PTE_NAPOT = VL_RAND_RESET_I(1);
    vlSelf->PageTypeWriteVal = VL_RAND_RESET_I(2);
    vlSelf->TLBFlush = VL_RAND_RESET_I(1);
    vlSelf->PageTypeRead = VL_RAND_RESET_I(2);
    vlSelf->Match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Key = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__PageType = VL_RAND_RESET_I(2);
}
