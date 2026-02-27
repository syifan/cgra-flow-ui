// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCgraTemplateRTL__Syms.h"
#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL___024unit.h"



// FUNCTIONS
VCgraTemplateRTL__Syms::VCgraTemplateRTL__Syms(VCgraTemplateRTL* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
