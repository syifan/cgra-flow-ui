// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__448(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__448\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0U]) {
        if ((0x1bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((1U == (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                   >> 3U))) ? vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in1))]
                    : vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in2))]);
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                                         >> 2U)) 
                                                & (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in1))] 
                                                           >> 2U))) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__in2))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__449(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__449\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [2U]) {
        if ((7U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [2U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                       >> 3U)) 
                                              * (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x1dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 3U)) 
                                                  * (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [2U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__450(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__450\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [6U]) {
        if ((2U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [6U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                       >> 3U)) 
                                              + (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x19U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                           >> 3U)) 
                                                  + (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [6U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                              [6U] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((3U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [6U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(1U) 
                                                      + (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((4U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [6U][4U] >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                   >> 3U)) 
                                                          - (IData)(
                                                                    (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                     >> 3U))))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (((IData)(
                                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                    [
                                                                    (3U 
                                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                    >> 2U)) 
                                                           & (IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                      >> 2U))) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((0x24U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [6U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                       >> 3U)) 
                                                              - (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                         [6U] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                          [6U] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                             << 2U));
                        } else {
                            if ((0x1fU == (0x7fU & 
                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [6U][4U] 
                                            >> 4U)))) {
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)((IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                          >> 3U)))) 
                                                 << 3U));
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((0x7fffffffbULL 
                                        & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)(
                                                                 ((IData)(
                                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                           [
                                                                           (3U 
                                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                           >> 2U)) 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                                 << 2U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__451(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__451\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [9U]) {
        if ((0x10U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [9U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0U != (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                              >> 3U))) 
                                              & (((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                             >> 2U))) 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))))) 
                             << 2U));
        } else {
            if ((0x22U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in0))];
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((0x2fU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [9U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                        [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__in0))];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor) 
                                                      & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__already_grt_once))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__452(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__452\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xaU]) {
        if (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xaU][4U] >> 4U))) 
             | (0x2dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xaU][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))) 
                    & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                >> 3U)) == (IData)(
                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                    [
                                                    (3U 
                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                    >> 3U))))
                    ? 8ULL : (((0x2dU == (0x7fU & (
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                   [0xaU][4U] 
                                                   >> 4U))) 
                               & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                           >> 3U)) 
                                  != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                              [(3U 
                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                              >> 3U))))
                               ? 8ULL : 0ULL));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [0xaU][4U] >> 4U))) 
                 | (0x2eU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][4U] 
                                            >> 4U))) 
                        & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                    >> 3U)) == (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                        [0xaU] 
                                                        >> 3U))))
                        ? 8ULL : (((0x2eU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [0xaU][4U] 
                                                 >> 4U))) 
                                   & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                               [(3U 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                               >> 3U)) 
                                      != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                  [0xaU] 
                                                  >> 3U))))
                                   ? 8ULL : 0ULL));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x3cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = (((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                     [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                     >> 3U)) < (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                        >> 3U)))
                            ? 8ULL : 0ULL);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                                  >> 2U))) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__453(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__453\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xbU]) {
        if ((5U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xbU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                           >> 3U)))
                                               ? ((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                           >> 3U)) 
                                                  << (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 3U)))
                                               : 0U))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((6U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [0xbU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((0x1fU 
                                                   >= (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   ? 
                                                  ((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 3U)) 
                                                   >> (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   : 0U))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__454(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__454\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xcU]) {
        if ((0x11U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xcU][4U] >> 4U)))) {
            if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                               >> 2U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                          >> 3U)))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                   >> 2U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = (0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                           [0U]);
                }
            }
        } else {
            if ((0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0xcU][4U] >> 4U)))) {
                if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__first) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U)))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                         << 2U));
                    } else {
                        if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                           >> 2U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                             << 2U));
                        } else {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = (0x7fffffffbULL & 
                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                   [0U]);
                        }
                    }
                }
            } else {
                if ((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xcU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                  [0xcU] 
                                                                  >> 3U))
                                                       : (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                [0xcU] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))
                                                       : 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__455(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__455\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xdU]) {
        if ((8U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xdU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                       >> 3U)) 
                                              | (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0xaU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xdU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                           >> 3U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x2bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xdU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (~ (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((0xbU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [0xdU][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)))
                                                           ? 1U
                                                           : 0U))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                   >> 2U)) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((9U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [0xdU][4U] 
                                             >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)) 
                                                              ^ (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                             << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__456(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__456\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][4U] >> 4U)))) {
            if ((0x51U != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][4U] >> 4U)))) {
                if ((0x1cU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [7U][4U] >> 4U)))) {
                    if ((0xdU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [7U][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                            [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__in1))];
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                               | ((QData)((IData)((
                                                   ((IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                             >> 2U)) 
                                                    & (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__in1))] 
                                                               >> 2U))) 
                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                  << 2U));
                    } else {
                        if ((0x3aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [7U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__in0))];
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                                   | ((QData)((IData)(
                                                      (((IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                                 >> 2U)) 
                                                        & (IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                   [7U] 
                                                                   >> 2U))) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                      << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element___05Fto_mem_wdata___05Fmsg
        [7U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__457(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__457\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x17U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x16U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x15U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x14U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x13U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x12U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x11U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x10U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xfU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xeU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xdU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xcU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xbU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xaU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 9U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 8U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 7U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 6U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 5U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 4U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 3U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 2U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 1U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & (QData)((IData)(
                                                               vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                               [3U])))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [5U]) {
        if (((0x1aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [5U][4U] >> 4U))) 
             | (0x2cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1aU 
                                               == (0x7fU 
                                                   & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][4U] 
                                                      >> 4U)))
                                               ? vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
                                              [3U] : (IData)(
                                                             vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
                                                             [3U])))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__458(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__458\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp7378[5];
    WData/*159:0*/ __Vtemp7379[5];
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [4U]) {
        if ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [4U][4U] >> 4U)))) {
            if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                       [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                       [4U]]))) {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                   >> 2U)))) {
                    __Vtemp7378[0U] = (0xfffffff8U 
                                       & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                          [4U][0U] 
                                          << 3U));
                    __Vtemp7378[1U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][1U] 
                                             << 3U)));
                    __Vtemp7378[2U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][1U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][2U] 
                                             << 3U)));
                    __Vtemp7378[3U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][2U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][3U] 
                                             << 3U)));
                    __Vtemp7378[4U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][3U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][4U] 
                                             << 3U)));
                    VL_EXTEND_WW(151,142, __Vtemp7379, __Vtemp7378);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                        = __Vtemp7379[0U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                        = __Vtemp7379[1U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                        = __Vtemp7379[2U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                        = __Vtemp7379[3U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                        = ((0xff800000U & ((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                           << 0x17U)) 
                           | __Vtemp7379[4U]);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] 
                        = (0x38000000U | ((0x7fffffU 
                                           & ((IData)(
                                                      vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                              >> 9U)) 
                                          | (0xff800000U 
                                             & ((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                                         >> 0x20U)) 
                                                << 0x17U))));
                }
            }
        } else {
            if ((0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][4U] >> 4U)))) {
                if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                           [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                           [4U]]))) {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                            = (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][0U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][1U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][2U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][2U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][3U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][3U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][4U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0x38000000U;
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__459(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__459\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0U]) {
        if ((0x1bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((1U == (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                   >> 3U))) ? vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in1))]
                    : vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in2))]);
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                                         >> 2U)) 
                                                & (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in1))] 
                                                           >> 2U))) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__in2))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__460(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__460\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [2U]) {
        if ((7U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [2U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                       >> 3U)) 
                                              * (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x1dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 3U)) 
                                                  * (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [2U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__461(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__461\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [6U]) {
        if ((2U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [6U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                       >> 3U)) 
                                              + (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x19U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                           >> 3U)) 
                                                  + (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [6U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                              [6U] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((3U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [6U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(1U) 
                                                      + (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((4U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [6U][4U] >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                   >> 3U)) 
                                                          - (IData)(
                                                                    (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                     >> 3U))))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (((IData)(
                                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                    [
                                                                    (3U 
                                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                    >> 2U)) 
                                                           & (IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                      >> 2U))) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((0x24U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [6U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                       >> 3U)) 
                                                              - (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                         [6U] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                          [6U] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                             << 2U));
                        } else {
                            if ((0x1fU == (0x7fU & 
                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [6U][4U] 
                                            >> 4U)))) {
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)((IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                          >> 3U)))) 
                                                 << 3U));
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((0x7fffffffbULL 
                                        & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)(
                                                                 ((IData)(
                                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                           [
                                                                           (3U 
                                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                           >> 2U)) 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                                 << 2U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__462(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__462\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [9U]) {
        if ((0x10U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [9U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0U != (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                              >> 3U))) 
                                              & (((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                             >> 2U))) 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))))) 
                             << 2U));
        } else {
            if ((0x22U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in0))];
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((0x2fU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [9U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                        [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__in0))];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor) 
                                                      & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__already_grt_once))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__463(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__463\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xaU]) {
        if (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xaU][4U] >> 4U))) 
             | (0x2dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xaU][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))) 
                    & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                >> 3U)) == (IData)(
                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                    [
                                                    (3U 
                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                    >> 3U))))
                    ? 8ULL : (((0x2dU == (0x7fU & (
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                   [0xaU][4U] 
                                                   >> 4U))) 
                               & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                           >> 3U)) 
                                  != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                              [(3U 
                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                              >> 3U))))
                               ? 8ULL : 0ULL));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [0xaU][4U] >> 4U))) 
                 | (0x2eU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][4U] 
                                            >> 4U))) 
                        & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                    >> 3U)) == (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                        [0xaU] 
                                                        >> 3U))))
                        ? 8ULL : (((0x2eU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [0xaU][4U] 
                                                 >> 4U))) 
                                   & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                               [(3U 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                               >> 3U)) 
                                      != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                  [0xaU] 
                                                  >> 3U))))
                                   ? 8ULL : 0ULL));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x3cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = (((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                     [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                     >> 3U)) < (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                        >> 3U)))
                            ? 8ULL : 0ULL);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                                  >> 2U))) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__464(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__464\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xbU]) {
        if ((5U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xbU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                           >> 3U)))
                                               ? ((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                           >> 3U)) 
                                                  << (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 3U)))
                                               : 0U))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((6U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [0xbU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((0x1fU 
                                                   >= (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   ? 
                                                  ((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 3U)) 
                                                   >> (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   : 0U))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__465(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__465\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xcU]) {
        if ((0x11U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xcU][4U] >> 4U)))) {
            if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                               >> 2U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                          >> 3U)))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                   >> 2U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = (0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                           [0U]);
                }
            }
        } else {
            if ((0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0xcU][4U] >> 4U)))) {
                if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__first) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U)))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                         << 2U));
                    } else {
                        if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                           >> 2U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                             << 2U));
                        } else {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = (0x7fffffffbULL & 
                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                   [0U]);
                        }
                    }
                }
            } else {
                if ((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xcU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                  [0xcU] 
                                                                  >> 3U))
                                                       : (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                [0xcU] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))
                                                       : 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__466(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__466\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xdU]) {
        if ((8U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xdU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                       >> 3U)) 
                                              | (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0xaU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xdU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                           >> 3U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x2bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xdU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (~ (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((0xbU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [0xdU][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)))
                                                           ? 1U
                                                           : 0U))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                   >> 2U)) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((9U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [0xdU][4U] 
                                             >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)) 
                                                              ^ (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                             << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__467(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__467\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][4U] >> 4U)))) {
            if ((0x51U != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][4U] >> 4U)))) {
                if ((0x1cU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [7U][4U] >> 4U)))) {
                    if ((0xdU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [7U][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                            [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__in1))];
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                               | ((QData)((IData)((
                                                   ((IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                             >> 2U)) 
                                                    & (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__in1))] 
                                                               >> 2U))) 
                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                  << 2U));
                    } else {
                        if ((0x3aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [7U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__in0))];
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                                   | ((QData)((IData)(
                                                      (((IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                                 >> 2U)) 
                                                        & (IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                   [7U] 
                                                                   >> 2U))) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                      << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fto_mem_wdata___05Fmsg
        [7U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__468(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__468\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x17U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x16U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x15U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x14U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x13U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x12U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x11U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x10U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xfU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xeU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xdU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xcU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xbU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xaU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 9U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 8U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 7U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 6U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 5U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 4U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 3U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 2U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 1U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & (QData)((IData)(
                                                               vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                               [3U])))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [5U]) {
        if (((0x1aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [5U][4U] >> 4U))) 
             | (0x2cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1aU 
                                               == (0x7fU 
                                                   & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][4U] 
                                                      >> 4U)))
                                               ? vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
                                              [3U] : (IData)(
                                                             vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
                                                             [3U])))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__469(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__469\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp7491[5];
    WData/*159:0*/ __Vtemp7492[5];
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [4U]) {
        if ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [4U][4U] >> 4U)))) {
            if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                       [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                       [4U]]))) {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                   >> 2U)))) {
                    __Vtemp7491[0U] = (0xfffffff8U 
                                       & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                          [4U][0U] 
                                          << 3U));
                    __Vtemp7491[1U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][1U] 
                                             << 3U)));
                    __Vtemp7491[2U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][1U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][2U] 
                                             << 3U)));
                    __Vtemp7491[3U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][2U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][3U] 
                                             << 3U)));
                    __Vtemp7491[4U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][3U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][4U] 
                                             << 3U)));
                    VL_EXTEND_WW(151,142, __Vtemp7492, __Vtemp7491);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                        = __Vtemp7492[0U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                        = __Vtemp7492[1U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                        = __Vtemp7492[2U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                        = __Vtemp7492[3U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                        = ((0xff800000U & ((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                           << 0x17U)) 
                           | __Vtemp7492[4U]);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] 
                        = (0x38000000U | ((0x7fffffU 
                                           & ((IData)(
                                                      vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                              >> 9U)) 
                                          | (0xff800000U 
                                             & ((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                                         >> 0x20U)) 
                                                << 0x17U))));
                }
            }
        } else {
            if ((0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][4U] >> 4U)))) {
                if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                           [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                           [4U]]))) {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                            = (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][0U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][1U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][2U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][2U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][3U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][3U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][4U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0x38000000U;
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__470(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__470\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0U]) {
        if ((0x1bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((1U == (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                   >> 3U))) ? vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in1))]
                    : vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in2))]);
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                                         >> 2U)) 
                                                & (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in1))] 
                                                           >> 2U))) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__in2))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__471(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__471\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [2U]) {
        if ((7U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [2U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                       >> 3U)) 
                                              * (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x1dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 3U)) 
                                                  * (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [2U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__472(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__472\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [6U]) {
        if ((2U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [6U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                       >> 3U)) 
                                              + (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x19U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                           >> 3U)) 
                                                  + (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [6U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                              [6U] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((3U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [6U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(1U) 
                                                      + (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((4U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [6U][4U] >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                   >> 3U)) 
                                                          - (IData)(
                                                                    (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                     >> 3U))))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (((IData)(
                                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                    [
                                                                    (3U 
                                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                    >> 2U)) 
                                                           & (IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                      >> 2U))) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((0x24U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [6U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                       >> 3U)) 
                                                              - (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                         [6U] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                          [6U] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                             << 2U));
                        } else {
                            if ((0x1fU == (0x7fU & 
                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [6U][4U] 
                                            >> 4U)))) {
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)((IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                          >> 3U)))) 
                                                 << 3U));
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((0x7fffffffbULL 
                                        & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)(
                                                                 ((IData)(
                                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                           [
                                                                           (3U 
                                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                           >> 2U)) 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                                 << 2U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__473(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__473\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [9U]) {
        if ((0x10U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [9U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0U != (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                              >> 3U))) 
                                              & (((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                             >> 2U))) 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))))) 
                             << 2U));
        } else {
            if ((0x22U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in0))];
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((0x2fU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [9U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                        [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__in0))];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor) 
                                                      & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__already_grt_once))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__474(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__474\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xaU]) {
        if (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xaU][4U] >> 4U))) 
             | (0x2dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xaU][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))) 
                    & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                >> 3U)) == (IData)(
                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                    [
                                                    (3U 
                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                    >> 3U))))
                    ? 8ULL : (((0x2dU == (0x7fU & (
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                   [0xaU][4U] 
                                                   >> 4U))) 
                               & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                           >> 3U)) 
                                  != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                              [(3U 
                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                              >> 3U))))
                               ? 8ULL : 0ULL));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [0xaU][4U] >> 4U))) 
                 | (0x2eU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][4U] 
                                            >> 4U))) 
                        & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                    >> 3U)) == (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                        [0xaU] 
                                                        >> 3U))))
                        ? 8ULL : (((0x2eU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [0xaU][4U] 
                                                 >> 4U))) 
                                   & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                               [(3U 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                               >> 3U)) 
                                      != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                  [0xaU] 
                                                  >> 3U))))
                                   ? 8ULL : 0ULL));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x3cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = (((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                     [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                     >> 3U)) < (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                        >> 3U)))
                            ? 8ULL : 0ULL);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                                  >> 2U))) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__475(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__475\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xbU]) {
        if ((5U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xbU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                           >> 3U)))
                                               ? ((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                           >> 3U)) 
                                                  << (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 3U)))
                                               : 0U))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((6U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [0xbU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((0x1fU 
                                                   >= (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   ? 
                                                  ((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 3U)) 
                                                   >> (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   : 0U))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__476(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__476\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xcU]) {
        if ((0x11U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xcU][4U] >> 4U)))) {
            if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                               >> 2U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                          >> 3U)))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                   >> 2U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = (0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                           [0U]);
                }
            }
        } else {
            if ((0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0xcU][4U] >> 4U)))) {
                if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__first) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U)))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                         << 2U));
                    } else {
                        if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                           >> 2U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                             << 2U));
                        } else {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = (0x7fffffffbULL & 
                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                   [0U]);
                        }
                    }
                }
            } else {
                if ((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xcU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                  [0xcU] 
                                                                  >> 3U))
                                                       : (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                [0xcU] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))
                                                       : 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__477(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__477\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xdU]) {
        if ((8U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xdU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                       >> 3U)) 
                                              | (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0xaU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xdU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                           >> 3U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x2bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xdU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (~ (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((0xbU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [0xdU][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)))
                                                           ? 1U
                                                           : 0U))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                   >> 2U)) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((9U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [0xdU][4U] 
                                             >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)) 
                                                              ^ (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                             << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__478(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__478\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][4U] >> 4U)))) {
            if ((0x51U != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][4U] >> 4U)))) {
                if ((0x1cU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [7U][4U] >> 4U)))) {
                    if ((0xdU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [7U][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                            [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__in1))];
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                               | ((QData)((IData)((
                                                   ((IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                             >> 2U)) 
                                                    & (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__in1))] 
                                                               >> 2U))) 
                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                  << 2U));
                    } else {
                        if ((0x3aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [7U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__in0))];
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                                   | ((QData)((IData)(
                                                      (((IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                                 >> 2U)) 
                                                        & (IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                   [7U] 
                                                                   >> 2U))) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                      << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fto_mem_wdata___05Fmsg
        [7U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__479(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__479\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x17U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x16U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x15U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x14U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x13U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x12U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x11U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x10U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xfU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xeU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xdU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xcU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xbU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xaU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 9U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 8U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 7U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 6U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 5U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 4U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 3U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 2U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 1U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & (QData)((IData)(
                                                               vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                               [3U])))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [5U]) {
        if (((0x1aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [5U][4U] >> 4U))) 
             | (0x2cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1aU 
                                               == (0x7fU 
                                                   & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][4U] 
                                                      >> 4U)))
                                               ? vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
                                              [3U] : (IData)(
                                                             vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
                                                             [3U])))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__480(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__480\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp7604[5];
    WData/*159:0*/ __Vtemp7605[5];
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [4U]) {
        if ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [4U][4U] >> 4U)))) {
            if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                       [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                       [4U]]))) {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                   >> 2U)))) {
                    __Vtemp7604[0U] = (0xfffffff8U 
                                       & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                          [4U][0U] 
                                          << 3U));
                    __Vtemp7604[1U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][1U] 
                                             << 3U)));
                    __Vtemp7604[2U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][1U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][2U] 
                                             << 3U)));
                    __Vtemp7604[3U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][2U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][3U] 
                                             << 3U)));
                    __Vtemp7604[4U] = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][3U] 
                                              >> 0x1dU)) 
                                       | (0xfffffff8U 
                                          & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [4U][4U] 
                                             << 3U)));
                    VL_EXTEND_WW(151,142, __Vtemp7605, __Vtemp7604);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                        = __Vtemp7605[0U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                        = __Vtemp7605[1U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                        = __Vtemp7605[2U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                        = __Vtemp7605[3U];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                        = ((0xff800000U & ((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                           << 0x17U)) 
                           | __Vtemp7605[4U]);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] 
                        = (0x38000000U | ((0x7fffffU 
                                           & ((IData)(
                                                      vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))]) 
                                              >> 9U)) 
                                          | (0xff800000U 
                                             & ((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                                         >> 0x20U)) 
                                                << 0x17U))));
                }
            }
        } else {
            if ((0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][4U] >> 4U)))) {
                if ((1U & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                           [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                           [4U]]))) {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U] 
                            = (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][0U] 
                                              << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][0U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][1U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][2U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][2U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][3U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U] 
                            = ((7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][3U] >> 0x1dU)) 
                               | (0xfffffff8U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [4U][4U] 
                                                 << 3U)));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U] = 0x38000000U;
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg[4U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fmsg[5U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__481(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__481\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0U]) {
        if ((0x1bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((1U == (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                   >> 3U))) ? vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in1))]
                    : vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in2))]);
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((((IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in0))] 
                                                         >> 2U)) 
                                                & (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in1))] 
                                                           >> 2U))) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__in2))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__482(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__482\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [2U]) {
        if ((7U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [2U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                       >> 3U)) 
                                              * (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x1dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 3U)) 
                                                  * (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [2U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__483(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__483\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [6U]) {
        if ((2U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [6U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                       >> 3U)) 
                                              + (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0x19U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                           >> 3U)) 
                                                  + (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                             [6U] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                              [6U] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((3U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [6U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(1U) 
                                                      + (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((4U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [6U][4U] >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                   >> 3U)) 
                                                          - (IData)(
                                                                    (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                     >> 3U))))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (((IData)(
                                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                    [
                                                                    (3U 
                                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                    >> 2U)) 
                                                           & (IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in1))] 
                                                                      >> 2U))) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((0x24U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [6U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                       >> 3U)) 
                                                              - (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                         [6U] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                          [6U] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                             << 2U));
                        } else {
                            if ((0x1fU == (0x7fU & 
                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [6U][4U] 
                                            >> 4U)))) {
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)((IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                          >> 3U)))) 
                                                 << 3U));
                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg[0U] 
                                    = ((0x7fffffffbULL 
                                        & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
                                        [0U]) | ((QData)((IData)(
                                                                 ((IData)(
                                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F6__recv_in___05Fmsg
                                                                           [
                                                                           (3U 
                                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__in0))] 
                                                                           >> 2U)) 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor)))) 
                                                 << 2U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[6U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F6__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__484(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__484\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [9U]) {
        if ((0x10U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [9U][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0U != (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                              >> 3U))) 
                                              & (((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in1))] 
                                                             >> 2U))) 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))))) 
                             << 2U));
        } else {
            if ((0x22U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in0))];
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((0x2fU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [9U][4U] >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                        [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__in0))];
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor) 
                                                      & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__already_grt_once))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[9U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__485(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__485\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xaU]) {
        if (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xaU][4U] >> 4U))) 
             | (0x2dU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xaU][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = (((0xeU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))) 
                    & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                >> 3U)) == (IData)(
                                                   (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                    [
                                                    (3U 
                                                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                    >> 3U))))
                    ? 8ULL : (((0x2dU == (0x7fU & (
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                   [0xaU][4U] 
                                                   >> 4U))) 
                               & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                           >> 3U)) 
                                  != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                              [(3U 
                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                              >> 3U))))
                               ? 8ULL : 0ULL));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [0xaU][4U] >> 4U))) 
                 | (0x2eU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [0xaU][4U] >> 4U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = (((0x21U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][4U] 
                                            >> 4U))) 
                        & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                    [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                    >> 3U)) == (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                        [0xaU] 
                                                        >> 3U))))
                        ? 8ULL : (((0x2eU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [0xaU][4U] 
                                                 >> 4U))) 
                                   & ((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                               [(3U 
                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                               >> 3U)) 
                                      != (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                  [0xaU] 
                                                  >> 3U))))
                                   ? 8ULL : 0ULL));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                           >> 2U)) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x3cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = (((IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                     [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                     >> 3U)) < (IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                        >> 3U)))
                            ? 8ULL : 0ULL);
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__in1))] 
                                                                  >> 2U))) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor)))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xaU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F10__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__486(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__486\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xbU]) {
        if ((5U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xbU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                           >> 3U)))
                                               ? ((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                           >> 3U)) 
                                                  << (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 3U)))
                                               : 0U))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((6U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [0xbU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((0x1fU 
                                                   >= (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   ? 
                                                  ((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 3U)) 
                                                   >> (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                               >> 3U)))
                                                   : 0U))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F11__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor)))) 
                                 << 2U));
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xbU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F11__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__487(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__487\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xcU]) {
        if ((0x11U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0xcU][4U] >> 4U)))) {
            if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                               >> 2U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                          >> 3U)))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                 << 2U));
            } else {
                if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                   [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                   >> 2U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = (0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                           [0U]);
                }
            }
        } else {
            if ((0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0xcU][4U] >> 4U)))) {
                if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__first) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)((IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                              >> 3U)))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                     << 2U));
                } else {
                    if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                       [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                       >> 2U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U)))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                         << 2U));
                    } else {
                        if ((1U & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                           [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                           >> 2U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in1))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor)) 
                                             << 2U));
                        } else {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)((IData)(
                                                                     (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                      >> 3U)))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                                = (0x7fffffffbULL & 
                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                                   [0U]);
                        }
                    }
                }
            } else {
                if ((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xcU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                  [0xcU] 
                                                                  >> 3U))
                                                       : (IData)(
                                                                 (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                  >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__first)
                                                       ? 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                [0xcU] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))
                                                       : 
                                                      ((IData)(
                                                               (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F12__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__in0))] 
                                                                >> 2U)) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))))) 
                                     << 2U));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xcU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F12__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__488(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__488\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [0xdU]) {
        if ((8U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                             [0xdU][4U] >> 4U)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                       >> 3U)) 
                                              | (IData)(
                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                         >> 3U))))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                             << 2U));
        } else {
            if ((0xaU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [0xdU][4U] >> 4U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(
                                                          (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                           >> 3U)) 
                                                  & (IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                             >> 3U))))) 
                                 << 3U));
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                    = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((((IData)(
                                                           (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                            >> 2U)) 
                                                   & (IData)(
                                                             (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                              >> 2U))) 
                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                 << 2U));
            } else {
                if ((0x2bU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xdU][4U] 
                                        >> 4U)))) {
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (~ (IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                 >> 3U))))) 
                                     << 3U));
                    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                        = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                               >> 2U)) 
                                                      & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                     << 2U));
                } else {
                    if ((0xbU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [0xdU][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)))
                                                           ? 1U
                                                           : 0U))) 
                                         << 3U));
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         ((IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                   [
                                                                   (3U 
                                                                    & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                   >> 2U)) 
                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                         << 2U));
                    } else {
                        if ((9U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [0xdU][4U] 
                                             >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             ((IData)(
                                                                      (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                       >> 3U)) 
                                                              ^ (IData)(
                                                                        (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                         >> 3U))))) 
                                             << 3U));
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg[0U] 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
                                    [0U]) | ((QData)((IData)(
                                                             (((IData)(
                                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                        [
                                                                        (3U 
                                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in0))] 
                                                                        >> 2U)) 
                                                               & (IData)(
                                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F13__recv_in___05Fmsg
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__in1))] 
                                                                          >> 2U))) 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor)))) 
                                             << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[0xdU][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F13__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__489(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__489\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][4U] >> 4U)))) {
            if ((0x51U != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][4U] >> 4U)))) {
                if ((0x1cU != (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [7U][4U] >> 4U)))) {
                    if ((0xdU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [7U][4U] 
                                           >> 4U)))) {
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                            [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__in1))];
                        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                            = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                               | ((QData)((IData)((
                                                   ((IData)(
                                                            (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                             >> 2U)) 
                                                    & (IData)(
                                                              (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__in1))] 
                                                               >> 2U))) 
                                                   & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                  << 2U));
                    } else {
                        if ((0x3aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [7U][4U] 
                                                >> 4U)))) {
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__in0))];
                            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg 
                                = ((0x7fffffffbULL 
                                    & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg) 
                                   | ((QData)((IData)(
                                                      (((IData)(
                                                                (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__in0))] 
                                                                 >> 2U)) 
                                                        & (IData)(
                                                                  (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                                   [7U] 
                                                                   >> 2U))) 
                                                       & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor)))) 
                                      << 2U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_wdata___05Fmsg;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [6U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [7U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[8U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [8U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[9U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [9U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xaU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xaU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xbU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xbU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xcU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xcU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xdU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xdU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xeU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xeU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg[0xfU] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT____Vcellout__element__to_mem_wdata___05Fmsg
        [0xfU];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fto_mem_wdata___05Fmsg
        [7U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__490(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__490\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [0U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x17U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x16U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x15U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x14U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x13U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x12U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x11U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0x10U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [1U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xfU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xeU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xdU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xcU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xbU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 0xaU))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 9U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [2U])) 
                                                >> 8U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [2U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [2U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 7U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 6U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 5U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 4U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 3U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 2U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & ((QData)((IData)(
                                                                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                                [3U])) 
                                                >> 1U))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
        = (0x1ffffffffULL & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                              << 1U) | (1ULL & (QData)((IData)(
                                                               vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
                                                               [3U])))));
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                            [3U])))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
            = (0x1ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r 
                                 - (QData)((IData)(
                                                   vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
                                                   [3U]))));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q);
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__2__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__r;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__genblk2__BRA__3__KET____DOT__u0__DOT__q;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[1U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [5U]) {
        if (((0x1aU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [5U][4U] >> 4U))) 
             | (0x2cU == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U][4U] >> 4U))))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1aU 
                                               == (0x7fU 
                                                   & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][4U] 
                                                      >> 4U)))
                                               ? vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
                                              [3U] : (IData)(
                                                             vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
                                                             [3U])))) 
                             << 3U));
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((((IData)(
                                                       (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__in0))] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__in1))] 
                                                          >> 2U))) 
                                              & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor)))) 
                             << 2U));
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_out___05Fmsg[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
        [1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__491(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__491\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_waddr___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_waddr___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_waddr___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_raddr___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_raddr___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_raddr___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_waddr___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_waddr___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_waddr___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_waddr___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_raddr___05Fmsg
        [2U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__492(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__492\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__493(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__493\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__494(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__494\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F2__send___05Fen;
}
