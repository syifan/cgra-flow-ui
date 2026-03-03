// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__SYMS_H_
#define _VCGRATEMPLATERTL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL___024unit.h"

// SYMS CLASS
class VCgraTemplateRTL__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCgraTemplateRTL*              TOPp;
    
    // CREATORS
    VCgraTemplateRTL__Syms(VCgraTemplateRTL* topp, const char* namep);
    ~VCgraTemplateRTL__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
