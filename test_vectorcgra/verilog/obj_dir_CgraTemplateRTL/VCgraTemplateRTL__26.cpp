// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT QData VCgraTemplateRTL::_change_request(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_change_request\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCgraTemplateRTL::_change_request_1(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_change_request_1\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
               [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
               [0U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [0U])
         | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
            [1U]));
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [0U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U] ^ vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
                               [1U]))) VL_DBG_MSGF("        CHANGE: /cgra/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v:2134\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [0U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [1U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [0U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [1U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [0U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [1U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [0U];
    vlTOPp->__Vchglast__TOP__CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__fu_crossbar__recv_data___05Frdy
        [1U];
    return __req;
}

#ifdef VL_DEBUG
void VCgraTemplateRTL::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((address_lower & 0xfe00U))) {
        Verilated::overWidthError("address_lower");}
    if (VL_UNLIKELY((address_upper & 0xfe00U))) {
        Verilated::overWidthError("address_upper");}
    if (VL_UNLIKELY((cgra_id & 0xfcU))) {
        Verilated::overWidthError("cgra_id");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_from_cpu_pkt___05Fval & 0xfeU))) {
        Verilated::overWidthError("recv_from_cpu_pkt__val");}
    if (VL_UNLIKELY((recv_from_inter_cgra_noc___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("recv_from_inter_cgra_noc__val");}
    if (VL_UNLIKELY((send_to_cpu_pkt___05Frdy & 0xfeU))) {
        Verilated::overWidthError("send_to_cpu_pkt__rdy");}
    if (VL_UNLIKELY((send_to_inter_cgra_noc___05Frdy 
                     & 0xfeU))) {
        Verilated::overWidthError("send_to_inter_cgra_noc__rdy");}
}
#endif  // VL_DEBUG
