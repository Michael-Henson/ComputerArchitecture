// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/04-comp-arch-m/Downloads/cvw/testbench/testbench.sv:64:38
    extern const char* getenvval(const char* env_name);

#ifdef __cplusplus
}
#endif

#endif  // guard
