// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCgraTemplateRTL.h for the primary calling header

#ifndef _VCGRATEMPLATERTL___024UNIT_H_
#define _VCGRATEMPLATERTL___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCgraTemplateRTL__Syms;

//----------

VL_MODULE(VCgraTemplateRTL___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCgraTemplateRTL__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCgraTemplateRTL___024unit);  ///< Copying not allowed
  public:
    VCgraTemplateRTL___024unit(const char* name = "TOP");
    ~VCgraTemplateRTL___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCgraTemplateRTL__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
