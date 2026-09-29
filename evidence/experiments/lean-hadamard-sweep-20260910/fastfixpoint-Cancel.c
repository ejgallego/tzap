// Lean compiler output
// Module: TzapLean.Cancel
// Imports: public import Init public meta import Init public import Mathlib.Tactic.IntervalCases public import Mathlib.Tactic.FinCases public import TzapLean.Pass
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lp_tzap_x2dlean_TzapLean_Gate_support(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_cast___at___00Mathlib_Meta_Positivity_evalLogNatLit_spec__0(lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_Gate_isSelfInverse(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_overlaps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_overlaps___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_gatesEqual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_gatesEqual___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_gatesEqual_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_gatesEqual_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_splitBlocker(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_splitBlocker_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_splitBlocker_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelPairsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelPairs(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isH___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isX(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isX___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_classifyQuarterPi(lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__3_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__6_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__6_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__7_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_diagonalK___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_diagonalK___closed__9_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagonalK(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagRun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagRun___boxed(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__3_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__6_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__9_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "before"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__10_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__10_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__11_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "after"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__13_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__13_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__14_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rest"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__16 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__16_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__16_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__17 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__17_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hasRun"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__18 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__18_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__18_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__19 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__19_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__20 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__20_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__23 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__23_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__20_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__24 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__24_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprHScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprHScan_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprHScan___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_HScan_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanH___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanHOnly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanHOnly___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanXH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanXH___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceAtH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceStep(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldrTR___at___00TzapLean_reduceSweep_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_reduceSweep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_reduceSweep___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_reduceSweep___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceSweep(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamardsFuel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamards(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamards_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamards_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCnot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCnot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCz(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCz___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_pairCommutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_pairCommutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isPair(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isPair___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingStep(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingFuel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingPairs(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_IsDiagGate(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_IsDiagGate___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesLoop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGates(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesCircuit(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_CancelGates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_CancelGates___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_CancelGates___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Gate cancellation"};
static const lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_CancelGates___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__1_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__2_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_CancelGates = (const lean_object*)&lp_tzap_x2dlean_TzapLean_CancelGates___closed__2_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0(lean_object* v_g_x27_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v___x_6_ = lp_tzap_x2dlean_TzapLean_Gate_support(v_g_x27_1_, v_head_4_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0___boxed(lean_object* v_g_x27_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0(v_g_x27_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec_ref(v_g_x27_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_overlaps(lean_object* v_g_12_, lean_object* v_g_x27_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(v_g_12_);
v___x_15_ = lp_tzap_x2dlean_List_any___at___00TzapLean_Gate_overlaps_spec__0(v_g_x27_13_, v___x_14_);
lean_dec(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_overlaps___boxed(lean_object* v_g_16_, lean_object* v_g_x27_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = lp_tzap_x2dlean_TzapLean_Gate_overlaps(v_g_16_, v_g_x27_17_);
lean_dec_ref(v_g_x27_17_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_gatesEqual(lean_object* v_x_20_, lean_object* v_x_21_){
_start:
{
switch(lean_obj_tag(v_x_20_))
{
case 1:
{
if (lean_obj_tag(v_x_21_) == 1)
{
lean_object* v_q_22_; lean_object* v_q_23_; uint8_t v___x_24_; 
v_q_22_ = lean_ctor_get(v_x_20_, 0);
v_q_23_ = lean_ctor_get(v_x_21_, 0);
v___x_24_ = lean_nat_dec_eq(v_q_22_, v_q_23_);
return v___x_24_;
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 0;
return v___x_25_;
}
}
case 0:
{
if (lean_obj_tag(v_x_21_) == 0)
{
lean_object* v_q_26_; lean_object* v_q_27_; uint8_t v___x_28_; 
v_q_26_ = lean_ctor_get(v_x_20_, 0);
v_q_27_ = lean_ctor_get(v_x_21_, 0);
v___x_28_ = lean_nat_dec_eq(v_q_26_, v_q_27_);
return v___x_28_;
}
else
{
uint8_t v___x_29_; 
v___x_29_ = 0;
return v___x_29_;
}
}
case 4:
{
if (lean_obj_tag(v_x_21_) == 4)
{
lean_object* v_q_30_; lean_object* v_q_31_; uint8_t v___x_32_; 
v_q_30_ = lean_ctor_get(v_x_20_, 0);
v_q_31_ = lean_ctor_get(v_x_21_, 0);
v___x_32_ = lean_nat_dec_eq(v_q_30_, v_q_31_);
return v___x_32_;
}
else
{
uint8_t v___x_33_; 
v___x_33_ = 0;
return v___x_33_;
}
}
case 8:
{
if (lean_obj_tag(v_x_21_) == 8)
{
lean_object* v_control_34_; lean_object* v_target_35_; lean_object* v_control_36_; lean_object* v_target_37_; uint8_t v___x_38_; 
v_control_34_ = lean_ctor_get(v_x_20_, 0);
v_target_35_ = lean_ctor_get(v_x_20_, 1);
v_control_36_ = lean_ctor_get(v_x_21_, 0);
v_target_37_ = lean_ctor_get(v_x_21_, 1);
v___x_38_ = lean_nat_dec_eq(v_control_34_, v_control_36_);
if (v___x_38_ == 0)
{
return v___x_38_;
}
else
{
uint8_t v___x_39_; 
v___x_39_ = lean_nat_dec_eq(v_target_35_, v_target_37_);
return v___x_39_;
}
}
else
{
uint8_t v___x_40_; 
v___x_40_ = 0;
return v___x_40_;
}
}
case 9:
{
if (lean_obj_tag(v_x_21_) == 9)
{
lean_object* v_control_41_; lean_object* v_target_42_; lean_object* v_control_43_; lean_object* v_target_44_; uint8_t v___y_46_; uint8_t v___x_49_; 
v_control_41_ = lean_ctor_get(v_x_20_, 0);
v_target_42_ = lean_ctor_get(v_x_20_, 1);
v_control_43_ = lean_ctor_get(v_x_21_, 0);
v_target_44_ = lean_ctor_get(v_x_21_, 1);
v___x_49_ = lean_nat_dec_eq(v_control_41_, v_control_43_);
if (v___x_49_ == 0)
{
v___y_46_ = v___x_49_;
goto v___jp_45_;
}
else
{
uint8_t v___x_50_; 
v___x_50_ = lean_nat_dec_eq(v_target_42_, v_target_44_);
v___y_46_ = v___x_50_;
goto v___jp_45_;
}
v___jp_45_:
{
if (v___y_46_ == 0)
{
uint8_t v___x_47_; 
v___x_47_ = lean_nat_dec_eq(v_control_41_, v_target_44_);
if (v___x_47_ == 0)
{
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
v___x_48_ = lean_nat_dec_eq(v_target_42_, v_control_43_);
return v___x_48_;
}
}
else
{
return v___y_46_;
}
}
}
else
{
uint8_t v___x_51_; 
v___x_51_ = 0;
return v___x_51_;
}
}
case 10:
{
if (lean_obj_tag(v_x_21_) == 10)
{
lean_object* v_control_u2081_52_; lean_object* v_control_u2082_53_; lean_object* v_target_54_; lean_object* v_control_u2081_55_; lean_object* v_control_u2082_56_; lean_object* v_target_57_; uint8_t v___y_59_; uint8_t v___x_61_; 
v_control_u2081_52_ = lean_ctor_get(v_x_20_, 0);
v_control_u2082_53_ = lean_ctor_get(v_x_20_, 1);
v_target_54_ = lean_ctor_get(v_x_20_, 2);
v_control_u2081_55_ = lean_ctor_get(v_x_21_, 0);
v_control_u2082_56_ = lean_ctor_get(v_x_21_, 1);
v_target_57_ = lean_ctor_get(v_x_21_, 2);
v___x_61_ = lean_nat_dec_eq(v_control_u2081_52_, v_control_u2081_55_);
if (v___x_61_ == 0)
{
v___y_59_ = v___x_61_;
goto v___jp_58_;
}
else
{
uint8_t v___x_62_; 
v___x_62_ = lean_nat_dec_eq(v_control_u2082_53_, v_control_u2082_56_);
v___y_59_ = v___x_62_;
goto v___jp_58_;
}
v___jp_58_:
{
if (v___y_59_ == 0)
{
return v___y_59_;
}
else
{
uint8_t v___x_60_; 
v___x_60_ = lean_nat_dec_eq(v_target_54_, v_target_57_);
return v___x_60_;
}
}
}
else
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
case 11:
{
if (lean_obj_tag(v_x_21_) == 11)
{
lean_object* v_control_u2081_64_; lean_object* v_control_u2082_65_; lean_object* v_target_66_; lean_object* v_control_u2081_67_; lean_object* v_control_u2082_68_; lean_object* v_target_69_; uint8_t v___y_71_; uint8_t v___y_77_; uint8_t v___y_83_; uint8_t v___y_89_; uint8_t v___y_95_; uint8_t v___y_101_; uint8_t v___x_103_; 
v_control_u2081_64_ = lean_ctor_get(v_x_20_, 0);
v_control_u2082_65_ = lean_ctor_get(v_x_20_, 1);
v_target_66_ = lean_ctor_get(v_x_20_, 2);
v_control_u2081_67_ = lean_ctor_get(v_x_21_, 0);
v_control_u2082_68_ = lean_ctor_get(v_x_21_, 1);
v_target_69_ = lean_ctor_get(v_x_21_, 2);
v___x_103_ = lean_nat_dec_eq(v_control_u2081_64_, v_control_u2081_67_);
if (v___x_103_ == 0)
{
v___y_101_ = v___x_103_;
goto v___jp_100_;
}
else
{
uint8_t v___x_104_; 
v___x_104_ = lean_nat_dec_eq(v_control_u2082_65_, v_control_u2082_68_);
v___y_101_ = v___x_104_;
goto v___jp_100_;
}
v___jp_70_:
{
if (v___y_71_ == 0)
{
return v___y_71_;
}
else
{
uint8_t v___x_72_; 
v___x_72_ = lean_nat_dec_eq(v_target_66_, v_control_u2081_67_);
return v___x_72_;
}
}
v___jp_73_:
{
uint8_t v___x_74_; 
v___x_74_ = lean_nat_dec_eq(v_control_u2081_64_, v_target_69_);
if (v___x_74_ == 0)
{
v___y_71_ = v___x_74_;
goto v___jp_70_;
}
else
{
uint8_t v___x_75_; 
v___x_75_ = lean_nat_dec_eq(v_control_u2082_65_, v_control_u2082_68_);
v___y_71_ = v___x_75_;
goto v___jp_70_;
}
}
v___jp_76_:
{
if (v___y_77_ == 0)
{
goto v___jp_73_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = lean_nat_dec_eq(v_target_66_, v_control_u2082_68_);
if (v___x_78_ == 0)
{
goto v___jp_73_;
}
else
{
return v___x_78_;
}
}
}
v___jp_79_:
{
uint8_t v___x_80_; 
v___x_80_ = lean_nat_dec_eq(v_control_u2081_64_, v_target_69_);
if (v___x_80_ == 0)
{
v___y_77_ = v___x_80_;
goto v___jp_76_;
}
else
{
uint8_t v___x_81_; 
v___x_81_ = lean_nat_dec_eq(v_control_u2082_65_, v_control_u2081_67_);
v___y_77_ = v___x_81_;
goto v___jp_76_;
}
}
v___jp_82_:
{
if (v___y_83_ == 0)
{
goto v___jp_79_;
}
else
{
uint8_t v___x_84_; 
v___x_84_ = lean_nat_dec_eq(v_target_66_, v_control_u2081_67_);
if (v___x_84_ == 0)
{
goto v___jp_79_;
}
else
{
return v___x_84_;
}
}
}
v___jp_85_:
{
uint8_t v___x_86_; 
v___x_86_ = lean_nat_dec_eq(v_control_u2081_64_, v_control_u2082_68_);
if (v___x_86_ == 0)
{
v___y_83_ = v___x_86_;
goto v___jp_82_;
}
else
{
uint8_t v___x_87_; 
v___x_87_ = lean_nat_dec_eq(v_control_u2082_65_, v_target_69_);
v___y_83_ = v___x_87_;
goto v___jp_82_;
}
}
v___jp_88_:
{
if (v___y_89_ == 0)
{
goto v___jp_85_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = lean_nat_dec_eq(v_target_66_, v_target_69_);
if (v___x_90_ == 0)
{
goto v___jp_85_;
}
else
{
return v___x_90_;
}
}
}
v___jp_91_:
{
uint8_t v___x_92_; 
v___x_92_ = lean_nat_dec_eq(v_control_u2081_64_, v_control_u2082_68_);
if (v___x_92_ == 0)
{
v___y_89_ = v___x_92_;
goto v___jp_88_;
}
else
{
uint8_t v___x_93_; 
v___x_93_ = lean_nat_dec_eq(v_control_u2082_65_, v_control_u2081_67_);
v___y_89_ = v___x_93_;
goto v___jp_88_;
}
}
v___jp_94_:
{
if (v___y_95_ == 0)
{
goto v___jp_91_;
}
else
{
uint8_t v___x_96_; 
v___x_96_ = lean_nat_dec_eq(v_target_66_, v_control_u2082_68_);
if (v___x_96_ == 0)
{
goto v___jp_91_;
}
else
{
return v___x_96_;
}
}
}
v___jp_97_:
{
uint8_t v___x_98_; 
v___x_98_ = lean_nat_dec_eq(v_control_u2081_64_, v_control_u2081_67_);
if (v___x_98_ == 0)
{
v___y_95_ = v___x_98_;
goto v___jp_94_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = lean_nat_dec_eq(v_control_u2082_65_, v_target_69_);
v___y_95_ = v___x_99_;
goto v___jp_94_;
}
}
v___jp_100_:
{
if (v___y_101_ == 0)
{
goto v___jp_97_;
}
else
{
uint8_t v___x_102_; 
v___x_102_ = lean_nat_dec_eq(v_target_66_, v_target_69_);
if (v___x_102_ == 0)
{
goto v___jp_97_;
}
else
{
return v___x_102_;
}
}
}
}
else
{
uint8_t v___x_105_; 
v___x_105_ = 0;
return v___x_105_;
}
}
default: 
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_gatesEqual___boxed(lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
uint8_t v_res_109_; lean_object* v_r_110_; 
v_res_109_ = lp_tzap_x2dlean_TzapLean_gatesEqual(v_x_107_, v_x_108_);
lean_dec_ref(v_x_108_);
lean_dec_ref(v_x_107_);
v_r_110_ = lean_box(v_res_109_);
return v_r_110_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_gatesEqual_match__1_splitter___redArg(lean_object* v_x_111_, lean_object* v_x_112_, lean_object* v_h__1_113_, lean_object* v_h__2_114_, lean_object* v_h__3_115_, lean_object* v_h__4_116_, lean_object* v_h__5_117_, lean_object* v_h__6_118_, lean_object* v_h__7_119_, lean_object* v_h__8_120_){
_start:
{
switch(lean_obj_tag(v_x_111_))
{
case 1:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
if (lean_obj_tag(v_x_112_) == 1)
{
lean_object* v_q_121_; lean_object* v_q_122_; lean_object* v___x_123_; 
lean_dec(v_h__8_120_);
v_q_121_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_q_121_);
lean_dec_ref_known(v_x_111_, 1);
v_q_122_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_q_122_);
lean_dec_ref_known(v_x_112_, 1);
v___x_123_ = lean_apply_2(v_h__1_113_, v_q_121_, v_q_122_);
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
lean_dec(v_h__1_113_);
v___x_124_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_124_;
}
}
case 0:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 0)
{
lean_object* v_q_125_; lean_object* v_q_126_; lean_object* v___x_127_; 
lean_dec(v_h__8_120_);
v_q_125_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_q_125_);
lean_dec_ref_known(v_x_111_, 1);
v_q_126_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_q_126_);
lean_dec_ref_known(v_x_112_, 1);
v___x_127_ = lean_apply_2(v_h__2_114_, v_q_125_, v_q_126_);
return v___x_127_;
}
else
{
lean_object* v___x_128_; 
lean_dec(v_h__2_114_);
v___x_128_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_128_;
}
}
case 4:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 4)
{
lean_object* v_q_129_; lean_object* v_q_130_; lean_object* v___x_131_; 
lean_dec(v_h__8_120_);
v_q_129_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_q_129_);
lean_dec_ref_known(v_x_111_, 1);
v_q_130_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_q_130_);
lean_dec_ref_known(v_x_112_, 1);
v___x_131_ = lean_apply_2(v_h__3_115_, v_q_129_, v_q_130_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
lean_dec(v_h__3_115_);
v___x_132_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_132_;
}
}
case 8:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 8)
{
lean_object* v_control_133_; lean_object* v_target_134_; lean_object* v_control_135_; lean_object* v_target_136_; lean_object* v___x_137_; 
lean_dec(v_h__8_120_);
v_control_133_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_control_133_);
v_target_134_ = lean_ctor_get(v_x_111_, 1);
lean_inc(v_target_134_);
lean_dec_ref_known(v_x_111_, 2);
v_control_135_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_control_135_);
v_target_136_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_target_136_);
lean_dec_ref_known(v_x_112_, 2);
v___x_137_ = lean_apply_4(v_h__4_116_, v_control_133_, v_target_134_, v_control_135_, v_target_136_);
return v___x_137_;
}
else
{
lean_object* v___x_138_; 
lean_dec(v_h__4_116_);
v___x_138_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_138_;
}
}
case 9:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 9)
{
lean_object* v_control_139_; lean_object* v_target_140_; lean_object* v_control_141_; lean_object* v_target_142_; lean_object* v___x_143_; 
lean_dec(v_h__8_120_);
v_control_139_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_control_139_);
v_target_140_ = lean_ctor_get(v_x_111_, 1);
lean_inc(v_target_140_);
lean_dec_ref_known(v_x_111_, 2);
v_control_141_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_control_141_);
v_target_142_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_target_142_);
lean_dec_ref_known(v_x_112_, 2);
v___x_143_ = lean_apply_4(v_h__5_117_, v_control_139_, v_target_140_, v_control_141_, v_target_142_);
return v___x_143_;
}
else
{
lean_object* v___x_144_; 
lean_dec(v_h__5_117_);
v___x_144_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_144_;
}
}
case 10:
{
lean_dec(v_h__7_119_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 10)
{
lean_object* v_control_u2081_145_; lean_object* v_control_u2082_146_; lean_object* v_target_147_; lean_object* v_control_u2081_148_; lean_object* v_control_u2082_149_; lean_object* v_target_150_; lean_object* v___x_151_; 
lean_dec(v_h__8_120_);
v_control_u2081_145_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_control_u2081_145_);
v_control_u2082_146_ = lean_ctor_get(v_x_111_, 1);
lean_inc(v_control_u2082_146_);
v_target_147_ = lean_ctor_get(v_x_111_, 2);
lean_inc(v_target_147_);
lean_dec_ref_known(v_x_111_, 3);
v_control_u2081_148_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_control_u2081_148_);
v_control_u2082_149_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_control_u2082_149_);
v_target_150_ = lean_ctor_get(v_x_112_, 2);
lean_inc(v_target_150_);
lean_dec_ref_known(v_x_112_, 3);
v___x_151_ = lean_apply_6(v_h__6_118_, v_control_u2081_145_, v_control_u2082_146_, v_target_147_, v_control_u2081_148_, v_control_u2082_149_, v_target_150_);
return v___x_151_;
}
else
{
lean_object* v___x_152_; 
lean_dec(v_h__6_118_);
v___x_152_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_152_;
}
}
case 11:
{
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
if (lean_obj_tag(v_x_112_) == 11)
{
lean_object* v_control_u2081_153_; lean_object* v_control_u2082_154_; lean_object* v_target_155_; lean_object* v_control_u2081_156_; lean_object* v_control_u2082_157_; lean_object* v_target_158_; lean_object* v___x_159_; 
lean_dec(v_h__8_120_);
v_control_u2081_153_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_control_u2081_153_);
v_control_u2082_154_ = lean_ctor_get(v_x_111_, 1);
lean_inc(v_control_u2082_154_);
v_target_155_ = lean_ctor_get(v_x_111_, 2);
lean_inc(v_target_155_);
lean_dec_ref_known(v_x_111_, 3);
v_control_u2081_156_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_control_u2081_156_);
v_control_u2082_157_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_control_u2082_157_);
v_target_158_ = lean_ctor_get(v_x_112_, 2);
lean_inc(v_target_158_);
lean_dec_ref_known(v_x_112_, 3);
v___x_159_ = lean_apply_6(v_h__7_119_, v_control_u2081_153_, v_control_u2082_154_, v_target_155_, v_control_u2081_156_, v_control_u2082_157_, v_target_158_);
return v___x_159_;
}
else
{
lean_object* v___x_160_; 
lean_dec(v_h__7_119_);
v___x_160_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_160_;
}
}
default: 
{
lean_object* v___x_161_; 
lean_dec(v_h__7_119_);
lean_dec(v_h__6_118_);
lean_dec(v_h__5_117_);
lean_dec(v_h__4_116_);
lean_dec(v_h__3_115_);
lean_dec(v_h__2_114_);
lean_dec(v_h__1_113_);
v___x_161_ = lean_apply_9(v_h__8_120_, v_x_111_, v_x_112_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_gatesEqual_match__1_splitter(lean_object* v_motive_162_, lean_object* v_x_163_, lean_object* v_x_164_, lean_object* v_h__1_165_, lean_object* v_h__2_166_, lean_object* v_h__3_167_, lean_object* v_h__4_168_, lean_object* v_h__5_169_, lean_object* v_h__6_170_, lean_object* v_h__7_171_, lean_object* v_h__8_172_){
_start:
{
switch(lean_obj_tag(v_x_163_))
{
case 1:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
if (lean_obj_tag(v_x_164_) == 1)
{
lean_object* v_q_173_; lean_object* v_q_174_; lean_object* v___x_175_; 
lean_dec(v_h__8_172_);
v_q_173_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_q_173_);
lean_dec_ref_known(v_x_163_, 1);
v_q_174_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_q_174_);
lean_dec_ref_known(v_x_164_, 1);
v___x_175_ = lean_apply_2(v_h__1_165_, v_q_173_, v_q_174_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
lean_dec(v_h__1_165_);
v___x_176_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_176_;
}
}
case 0:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v_q_177_; lean_object* v_q_178_; lean_object* v___x_179_; 
lean_dec(v_h__8_172_);
v_q_177_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_q_177_);
lean_dec_ref_known(v_x_163_, 1);
v_q_178_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_q_178_);
lean_dec_ref_known(v_x_164_, 1);
v___x_179_ = lean_apply_2(v_h__2_166_, v_q_177_, v_q_178_);
return v___x_179_;
}
else
{
lean_object* v___x_180_; 
lean_dec(v_h__2_166_);
v___x_180_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_180_;
}
}
case 4:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 4)
{
lean_object* v_q_181_; lean_object* v_q_182_; lean_object* v___x_183_; 
lean_dec(v_h__8_172_);
v_q_181_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_q_181_);
lean_dec_ref_known(v_x_163_, 1);
v_q_182_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_q_182_);
lean_dec_ref_known(v_x_164_, 1);
v___x_183_ = lean_apply_2(v_h__3_167_, v_q_181_, v_q_182_);
return v___x_183_;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_h__3_167_);
v___x_184_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_184_;
}
}
case 8:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 8)
{
lean_object* v_control_185_; lean_object* v_target_186_; lean_object* v_control_187_; lean_object* v_target_188_; lean_object* v___x_189_; 
lean_dec(v_h__8_172_);
v_control_185_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_control_185_);
v_target_186_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_target_186_);
lean_dec_ref_known(v_x_163_, 2);
v_control_187_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_control_187_);
v_target_188_ = lean_ctor_get(v_x_164_, 1);
lean_inc(v_target_188_);
lean_dec_ref_known(v_x_164_, 2);
v___x_189_ = lean_apply_4(v_h__4_168_, v_control_185_, v_target_186_, v_control_187_, v_target_188_);
return v___x_189_;
}
else
{
lean_object* v___x_190_; 
lean_dec(v_h__4_168_);
v___x_190_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_190_;
}
}
case 9:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 9)
{
lean_object* v_control_191_; lean_object* v_target_192_; lean_object* v_control_193_; lean_object* v_target_194_; lean_object* v___x_195_; 
lean_dec(v_h__8_172_);
v_control_191_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_control_191_);
v_target_192_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_target_192_);
lean_dec_ref_known(v_x_163_, 2);
v_control_193_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_control_193_);
v_target_194_ = lean_ctor_get(v_x_164_, 1);
lean_inc(v_target_194_);
lean_dec_ref_known(v_x_164_, 2);
v___x_195_ = lean_apply_4(v_h__5_169_, v_control_191_, v_target_192_, v_control_193_, v_target_194_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; 
lean_dec(v_h__5_169_);
v___x_196_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_196_;
}
}
case 10:
{
lean_dec(v_h__7_171_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 10)
{
lean_object* v_control_u2081_197_; lean_object* v_control_u2082_198_; lean_object* v_target_199_; lean_object* v_control_u2081_200_; lean_object* v_control_u2082_201_; lean_object* v_target_202_; lean_object* v___x_203_; 
lean_dec(v_h__8_172_);
v_control_u2081_197_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_control_u2081_197_);
v_control_u2082_198_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_control_u2082_198_);
v_target_199_ = lean_ctor_get(v_x_163_, 2);
lean_inc(v_target_199_);
lean_dec_ref_known(v_x_163_, 3);
v_control_u2081_200_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_control_u2081_200_);
v_control_u2082_201_ = lean_ctor_get(v_x_164_, 1);
lean_inc(v_control_u2082_201_);
v_target_202_ = lean_ctor_get(v_x_164_, 2);
lean_inc(v_target_202_);
lean_dec_ref_known(v_x_164_, 3);
v___x_203_ = lean_apply_6(v_h__6_170_, v_control_u2081_197_, v_control_u2082_198_, v_target_199_, v_control_u2081_200_, v_control_u2082_201_, v_target_202_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
lean_dec(v_h__6_170_);
v___x_204_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_204_;
}
}
case 11:
{
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
if (lean_obj_tag(v_x_164_) == 11)
{
lean_object* v_control_u2081_205_; lean_object* v_control_u2082_206_; lean_object* v_target_207_; lean_object* v_control_u2081_208_; lean_object* v_control_u2082_209_; lean_object* v_target_210_; lean_object* v___x_211_; 
lean_dec(v_h__8_172_);
v_control_u2081_205_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_control_u2081_205_);
v_control_u2082_206_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_control_u2082_206_);
v_target_207_ = lean_ctor_get(v_x_163_, 2);
lean_inc(v_target_207_);
lean_dec_ref_known(v_x_163_, 3);
v_control_u2081_208_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_control_u2081_208_);
v_control_u2082_209_ = lean_ctor_get(v_x_164_, 1);
lean_inc(v_control_u2082_209_);
v_target_210_ = lean_ctor_get(v_x_164_, 2);
lean_inc(v_target_210_);
lean_dec_ref_known(v_x_164_, 3);
v___x_211_ = lean_apply_6(v_h__7_171_, v_control_u2081_205_, v_control_u2082_206_, v_target_207_, v_control_u2081_208_, v_control_u2082_209_, v_target_210_);
return v___x_211_;
}
else
{
lean_object* v___x_212_; 
lean_dec(v_h__7_171_);
v___x_212_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_212_;
}
}
default: 
{
lean_object* v___x_213_; 
lean_dec(v_h__7_171_);
lean_dec(v_h__6_170_);
lean_dec(v_h__5_169_);
lean_dec(v_h__4_168_);
lean_dec(v_h__3_167_);
lean_dec(v_h__2_166_);
lean_dec(v_h__1_165_);
v___x_213_ = lean_apply_9(v_h__8_172_, v_x_163_, v_x_164_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_213_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_splitBlocker(lean_object* v_g_214_, lean_object* v_x_215_){
_start:
{
if (lean_obj_tag(v_x_215_) == 0)
{
lean_object* v___x_216_; 
lean_dec_ref(v_g_214_);
v___x_216_ = lean_box(0);
return v___x_216_;
}
else
{
lean_object* v_head_217_; lean_object* v_tail_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_257_; 
v_head_217_ = lean_ctor_get(v_x_215_, 0);
v_tail_218_ = lean_ctor_get(v_x_215_, 1);
v_isSharedCheck_257_ = !lean_is_exclusive(v_x_215_);
if (v_isSharedCheck_257_ == 0)
{
v___x_220_ = v_x_215_;
v_isShared_221_ = v_isSharedCheck_257_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_tail_218_);
lean_inc(v_head_217_);
lean_dec(v_x_215_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_257_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
uint8_t v___x_222_; 
lean_inc_ref(v_g_214_);
v___x_222_ = lp_tzap_x2dlean_TzapLean_Gate_overlaps(v_g_214_, v_head_217_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
v___x_223_ = lp_tzap_x2dlean_TzapLean_splitBlocker(v_g_214_, v_tail_218_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_del_object(v___x_220_);
lean_dec(v_head_217_);
return v___x_223_;
}
else
{
lean_object* v_val_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_252_; 
v_val_224_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_252_ == 0)
{
v___x_226_ = v___x_223_;
v_isShared_227_ = v_isSharedCheck_252_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_val_224_);
lean_dec(v___x_223_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_252_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_snd_228_; lean_object* v_fst_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_251_; 
v_snd_228_ = lean_ctor_get(v_val_224_, 1);
v_fst_229_ = lean_ctor_get(v_val_224_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v_val_224_);
if (v_isSharedCheck_251_ == 0)
{
v___x_231_ = v_val_224_;
v_isShared_232_ = v_isSharedCheck_251_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_snd_228_);
lean_inc(v_fst_229_);
lean_dec(v_val_224_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_251_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_250_; 
v_fst_233_ = lean_ctor_get(v_snd_228_, 0);
v_snd_234_ = lean_ctor_get(v_snd_228_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_snd_228_);
if (v_isSharedCheck_250_ == 0)
{
v___x_236_ = v_snd_228_;
v_isShared_237_ = v_isSharedCheck_250_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_snd_234_);
lean_inc(v_fst_233_);
lean_dec(v_snd_228_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_250_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v_fst_229_);
v___x_239_ = v___x_220_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_head_217_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_fst_229_);
v___x_239_ = v_reuseFailAlloc_249_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_241_; 
if (v_isShared_237_ == 0)
{
v___x_241_ = v___x_236_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_snd_234_);
v___x_241_ = v_reuseFailAlloc_248_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_243_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_241_);
lean_ctor_set(v___x_231_, 0, v___x_239_);
v___x_243_ = v___x_231_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_239_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___x_241_);
v___x_243_ = v_reuseFailAlloc_247_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_243_);
v___x_245_ = v___x_226_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_del_object(v___x_220_);
lean_dec_ref(v_g_214_);
v___x_253_ = lean_box(0);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v_head_217_);
lean_ctor_set(v___x_254_, 1, v_tail_218_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_splitBlocker_match__1_splitter___redArg(lean_object* v_x_258_, lean_object* v_h__1_259_, lean_object* v_h__2_260_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec(v_h__2_260_);
v___x_261_ = lean_box(0);
v___x_262_ = lean_apply_1(v_h__1_259_, v___x_261_);
return v___x_262_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_265_; 
lean_dec(v_h__1_259_);
v_head_263_ = lean_ctor_get(v_x_258_, 0);
lean_inc(v_head_263_);
v_tail_264_ = lean_ctor_get(v_x_258_, 1);
lean_inc(v_tail_264_);
lean_dec_ref_known(v_x_258_, 2);
v___x_265_ = lean_apply_2(v_h__2_260_, v_head_263_, v_tail_264_);
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_splitBlocker_match__1_splitter(lean_object* v_motive_266_, lean_object* v_x_267_, lean_object* v_h__1_268_, lean_object* v_h__2_269_){
_start:
{
if (lean_obj_tag(v_x_267_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v_h__2_269_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_apply_1(v_h__1_268_, v___x_270_);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v_tail_273_; lean_object* v___x_274_; 
lean_dec(v_h__1_268_);
v_head_272_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_head_272_);
v_tail_273_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_tail_273_);
lean_dec_ref_known(v_x_267_, 2);
v___x_274_ = lean_apply_2(v_h__2_269_, v_head_272_, v_tail_273_);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelPairsAux(lean_object* v_x_275_, lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v___x_277_; 
v___x_277_ = l_List_reverse___redArg(v_x_275_);
return v___x_277_;
}
else
{
lean_object* v_head_278_; lean_object* v_tail_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_305_; 
v_head_278_ = lean_ctor_get(v_x_276_, 0);
v_tail_279_ = lean_ctor_get(v_x_276_, 1);
v_isSharedCheck_305_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_305_ == 0)
{
v___x_281_ = v_x_276_;
v_isShared_282_ = v_isSharedCheck_305_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_tail_279_);
lean_inc(v_head_278_);
lean_dec(v_x_276_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_305_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
uint8_t v___x_283_; 
v___x_283_ = lp_tzap_x2dlean_TzapLean_Gate_isSelfInverse(v_head_278_);
if (v___x_283_ == 0)
{
lean_object* v___x_285_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v_x_275_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_head_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_x_275_);
v___x_285_ = v_reuseFailAlloc_287_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
v_x_275_ = v___x_285_;
v_x_276_ = v_tail_279_;
goto _start;
}
}
else
{
lean_object* v___x_288_; 
lean_inc(v_x_275_);
lean_inc(v_head_278_);
v___x_288_ = lp_tzap_x2dlean_TzapLean_splitBlocker(v_head_278_, v_x_275_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_290_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v_x_275_);
v___x_290_ = v___x_281_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_head_278_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_x_275_);
v___x_290_ = v_reuseFailAlloc_292_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
v_x_275_ = v___x_290_;
v_x_276_ = v_tail_279_;
goto _start;
}
}
else
{
lean_object* v_val_293_; lean_object* v_snd_294_; lean_object* v_fst_295_; lean_object* v_fst_296_; lean_object* v_snd_297_; uint8_t v___x_298_; 
v_val_293_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_val_293_);
lean_dec_ref_known(v___x_288_, 1);
v_snd_294_ = lean_ctor_get(v_val_293_, 1);
lean_inc(v_snd_294_);
v_fst_295_ = lean_ctor_get(v_val_293_, 0);
lean_inc(v_fst_295_);
lean_dec(v_val_293_);
v_fst_296_ = lean_ctor_get(v_snd_294_, 0);
lean_inc(v_fst_296_);
v_snd_297_ = lean_ctor_get(v_snd_294_, 1);
lean_inc(v_snd_297_);
lean_dec(v_snd_294_);
v___x_298_ = lp_tzap_x2dlean_TzapLean_gatesEqual(v_fst_296_, v_head_278_);
lean_dec(v_fst_296_);
if (v___x_298_ == 0)
{
lean_object* v___x_300_; 
lean_dec(v_snd_297_);
lean_dec(v_fst_295_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v_x_275_);
v___x_300_ = v___x_281_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_head_278_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_x_275_);
v___x_300_ = v_reuseFailAlloc_302_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
v_x_275_ = v___x_300_;
v_x_276_ = v_tail_279_;
goto _start;
}
}
else
{
lean_object* v___x_303_; 
lean_del_object(v___x_281_);
lean_dec(v_head_278_);
lean_dec(v_x_275_);
v___x_303_ = l_List_appendTR___redArg(v_fst_295_, v_snd_297_);
v_x_275_ = v___x_303_;
v_x_276_ = v_tail_279_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelPairs(lean_object* v_gs_306_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_box(0);
v___x_308_ = lp_tzap_x2dlean_TzapLean_cancelPairsAux(v___x_307_, v_gs_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__3_splitter___redArg(lean_object* v_x_309_, lean_object* v_x_310_, lean_object* v_h__1_311_, lean_object* v_h__2_312_){
_start:
{
if (lean_obj_tag(v_x_310_) == 0)
{
lean_object* v___x_313_; 
lean_dec(v_h__2_312_);
v___x_313_ = lean_apply_1(v_h__1_311_, v_x_309_);
return v___x_313_;
}
else
{
lean_object* v_head_314_; lean_object* v_tail_315_; lean_object* v___x_316_; 
lean_dec(v_h__1_311_);
v_head_314_ = lean_ctor_get(v_x_310_, 0);
lean_inc(v_head_314_);
v_tail_315_ = lean_ctor_get(v_x_310_, 1);
lean_inc(v_tail_315_);
lean_dec_ref_known(v_x_310_, 2);
v___x_316_ = lean_apply_3(v_h__2_312_, v_x_309_, v_head_314_, v_tail_315_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__3_splitter(lean_object* v_motive_317_, lean_object* v_x_318_, lean_object* v_x_319_, lean_object* v_h__1_320_, lean_object* v_h__2_321_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v___x_322_; 
lean_dec(v_h__2_321_);
v___x_322_ = lean_apply_1(v_h__1_320_, v_x_318_);
return v___x_322_;
}
else
{
lean_object* v_head_323_; lean_object* v_tail_324_; lean_object* v___x_325_; 
lean_dec(v_h__1_320_);
v_head_323_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_head_323_);
v_tail_324_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_tail_324_);
lean_dec_ref_known(v_x_319_, 2);
v___x_325_ = lean_apply_3(v_h__2_321_, v_x_318_, v_head_323_, v_tail_324_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__1_splitter___redArg(lean_object* v_x_326_, lean_object* v_h__1_327_, lean_object* v_h__2_328_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; 
lean_dec(v_h__1_327_);
v___x_329_ = lean_box(0);
v___x_330_ = lean_apply_1(v_h__2_328_, v___x_329_);
return v___x_330_;
}
else
{
lean_object* v_val_331_; lean_object* v_snd_332_; lean_object* v_fst_333_; lean_object* v_fst_334_; lean_object* v_snd_335_; lean_object* v___x_336_; 
lean_dec(v_h__2_328_);
v_val_331_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v_x_326_, 1);
v_snd_332_ = lean_ctor_get(v_val_331_, 1);
lean_inc(v_snd_332_);
v_fst_333_ = lean_ctor_get(v_val_331_, 0);
lean_inc(v_fst_333_);
lean_dec(v_val_331_);
v_fst_334_ = lean_ctor_get(v_snd_332_, 0);
lean_inc(v_fst_334_);
v_snd_335_ = lean_ctor_get(v_snd_332_, 1);
lean_inc(v_snd_335_);
lean_dec(v_snd_332_);
v___x_336_ = lean_apply_3(v_h__1_327_, v_fst_333_, v_fst_334_, v_snd_335_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_cancelPairsAux_match__1_splitter(lean_object* v_motive_337_, lean_object* v_x_338_, lean_object* v_h__1_339_, lean_object* v_h__2_340_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v___x_341_; lean_object* v___x_342_; 
lean_dec(v_h__1_339_);
v___x_341_ = lean_box(0);
v___x_342_ = lean_apply_1(v_h__2_340_, v___x_341_);
return v___x_342_;
}
else
{
lean_object* v_val_343_; lean_object* v_snd_344_; lean_object* v_fst_345_; lean_object* v_fst_346_; lean_object* v_snd_347_; lean_object* v___x_348_; 
lean_dec(v_h__2_340_);
v_val_343_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_val_343_);
lean_dec_ref_known(v_x_338_, 1);
v_snd_344_ = lean_ctor_get(v_val_343_, 1);
lean_inc(v_snd_344_);
v_fst_345_ = lean_ctor_get(v_val_343_, 0);
lean_inc(v_fst_345_);
lean_dec(v_val_343_);
v_fst_346_ = lean_ctor_get(v_snd_344_, 0);
lean_inc(v_fst_346_);
v_snd_347_ = lean_ctor_get(v_snd_344_, 1);
lean_inc(v_snd_347_);
lean_dec(v_snd_344_);
v___x_348_ = lean_apply_3(v_h__1_339_, v_fst_345_, v_fst_346_, v_snd_347_);
return v___x_348_;
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isH(lean_object* v_q_349_, lean_object* v_x_350_){
_start:
{
if (lean_obj_tag(v_x_350_) == 1)
{
lean_object* v_q_351_; uint8_t v___x_352_; 
v_q_351_ = lean_ctor_get(v_x_350_, 0);
v___x_352_ = lean_nat_dec_eq(v_q_351_, v_q_349_);
return v___x_352_;
}
else
{
uint8_t v___x_353_; 
v___x_353_ = 0;
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isH___boxed(lean_object* v_q_354_, lean_object* v_x_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = lp_tzap_x2dlean_TzapLean_isH(v_q_354_, v_x_355_);
lean_dec_ref(v_x_355_);
lean_dec(v_q_354_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isX(lean_object* v_q_358_, lean_object* v_x_359_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
lean_object* v_q_360_; uint8_t v___x_361_; 
v_q_360_ = lean_ctor_get(v_x_359_, 0);
v___x_361_ = lean_nat_dec_eq(v_q_360_, v_q_358_);
return v___x_361_;
}
else
{
uint8_t v___x_362_; 
v___x_362_ = 0;
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isX___boxed(lean_object* v_q_363_, lean_object* v_x_364_){
_start:
{
uint8_t v_res_365_; lean_object* v_r_366_; 
v_res_365_ = lp_tzap_x2dlean_TzapLean_isX(v_q_363_, v_x_364_);
lean_dec_ref(v_x_364_);
lean_dec(v_q_363_);
v_r_366_ = lean_box(v_res_365_);
return v_r_366_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(4u);
v___x_368_ = lp_mathlib_Nat_cast___at___00Mathlib_Meta_Positivity_evalLogNatLit_spec__0(v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_unsigned_to_nat(8u);
v___x_370_ = lean_nat_to_int(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_classifyQuarterPi(lean_object* v_00_u03b8_371_){
_start:
{
lean_object* v___x_372_; lean_object* v_x_373_; lean_object* v_num_374_; lean_object* v_den_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_372_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0, &lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0_once, _init_lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__0);
v_x_373_ = l_Rat_mul(v___x_372_, v_00_u03b8_371_);
v_num_374_ = lean_ctor_get(v_x_373_, 0);
lean_inc(v_num_374_);
v_den_375_ = lean_ctor_get(v_x_373_, 1);
lean_inc(v_den_375_);
lean_dec_ref(v_x_373_);
v___x_376_ = lean_unsigned_to_nat(1u);
v___x_377_ = lean_nat_dec_eq(v_den_375_, v___x_376_);
lean_dec(v_den_375_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
lean_dec(v_num_374_);
v___x_378_ = lean_box(0);
return v___x_378_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_379_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1, &lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1_once, _init_lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1);
v___x_380_ = lean_int_emod(v_num_374_, v___x_379_);
lean_dec(v_num_374_);
v___x_381_ = lean_int_add(v___x_380_, v___x_379_);
lean_dec(v___x_380_);
v___x_382_ = lean_int_emod(v___x_381_, v___x_379_);
lean_dec(v___x_381_);
v___x_383_ = l_Int_toNat(v___x_382_);
lean_dec(v___x_382_);
v___x_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagonalK(lean_object* v_g_405_, lean_object* v_q_406_){
_start:
{
switch(lean_obj_tag(v_g_405_))
{
case 5:
{
lean_object* v_q_407_; uint8_t v___x_408_; 
v_q_407_ = lean_ctor_get(v_g_405_, 0);
lean_inc(v_q_407_);
lean_dec_ref_known(v_g_405_, 1);
v___x_408_ = lean_nat_dec_eq(v_q_407_, v_q_406_);
lean_dec(v_q_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_diagonalK___closed__1));
return v___x_410_;
}
}
case 6:
{
lean_object* v_q_411_; uint8_t v___x_412_; 
v_q_411_ = lean_ctor_get(v_g_405_, 0);
lean_inc(v_q_411_);
lean_dec_ref_known(v_g_405_, 1);
v___x_412_ = lean_nat_dec_eq(v_q_411_, v_q_406_);
lean_dec(v_q_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
v___x_413_ = lean_box(0);
return v___x_413_;
}
else
{
lean_object* v___x_414_; 
v___x_414_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_diagonalK___closed__3));
return v___x_414_;
}
}
case 2:
{
lean_object* v_q_415_; uint8_t v___x_416_; 
v_q_415_ = lean_ctor_get(v_g_405_, 0);
lean_inc(v_q_415_);
lean_dec_ref_known(v_g_405_, 1);
v___x_416_ = lean_nat_dec_eq(v_q_415_, v_q_406_);
lean_dec(v_q_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_box(0);
return v___x_417_;
}
else
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_diagonalK___closed__5));
return v___x_418_;
}
}
case 3:
{
lean_object* v_q_419_; uint8_t v___x_420_; 
v_q_419_ = lean_ctor_get(v_g_405_, 0);
lean_inc(v_q_419_);
lean_dec_ref_known(v_g_405_, 1);
v___x_420_ = lean_nat_dec_eq(v_q_419_, v_q_406_);
lean_dec(v_q_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = lean_box(0);
return v___x_421_;
}
else
{
lean_object* v___x_422_; 
v___x_422_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_diagonalK___closed__7));
return v___x_422_;
}
}
case 4:
{
lean_object* v_q_423_; uint8_t v___x_424_; 
v_q_423_ = lean_ctor_get(v_g_405_, 0);
lean_inc(v_q_423_);
lean_dec_ref_known(v_g_405_, 1);
v___x_424_ = lean_nat_dec_eq(v_q_423_, v_q_406_);
lean_dec(v_q_423_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_box(0);
return v___x_425_;
}
else
{
lean_object* v___x_426_; 
v___x_426_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_diagonalK___closed__9));
return v___x_426_;
}
}
case 7:
{
lean_object* v_theta_427_; lean_object* v_q_428_; uint8_t v___x_429_; 
v_theta_427_ = lean_ctor_get(v_g_405_, 0);
lean_inc_ref(v_theta_427_);
v_q_428_ = lean_ctor_get(v_g_405_, 1);
lean_inc(v_q_428_);
lean_dec_ref_known(v_g_405_, 2);
v___x_429_ = lean_nat_dec_eq(v_q_428_, v_q_406_);
lean_dec(v_q_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; 
lean_dec_ref(v_theta_427_);
v___x_430_ = lean_box(0);
return v___x_430_;
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lp_tzap_x2dlean_TzapLean_classifyQuarterPi(v_theta_427_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
default: 
{
lean_object* v___x_433_; 
lean_dec_ref(v_g_405_);
v___x_433_ = lean_box(0);
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagonalK___boxed(lean_object* v_g_434_, lean_object* v_q_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = lp_tzap_x2dlean_TzapLean_diagonalK(v_g_434_, v_q_435_);
lean_dec(v_q_435_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagRun(lean_object* v_x_437_, lean_object* v_x_438_){
_start:
{
lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_439_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_nat_dec_eq(v_x_437_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = lean_unsigned_to_nat(1u);
v___x_442_ = lean_nat_dec_eq(v_x_437_, v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_443_ = lean_unsigned_to_nat(2u);
v___x_444_ = lean_nat_dec_eq(v_x_437_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_445_ = lean_unsigned_to_nat(3u);
v___x_446_ = lean_nat_dec_eq(v_x_437_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = lean_unsigned_to_nat(4u);
v___x_448_ = lean_nat_dec_eq(v_x_437_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(5u);
v___x_450_ = lean_nat_dec_eq(v_x_437_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_unsigned_to_nat(6u);
v___x_452_ = lean_nat_dec_eq(v_x_437_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = lean_unsigned_to_nat(7u);
v___x_454_ = lean_nat_dec_eq(v_x_437_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; 
lean_dec(v_x_438_);
v___x_455_ = lean_box(0);
return v___x_455_;
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_456_, 0, v_x_438_);
v___x_457_ = lean_box(0);
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
return v___x_458_;
}
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_459_, 0, v_x_438_);
v___x_460_ = lean_box(0);
v___x_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
return v___x_461_;
}
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
lean_inc(v_x_438_);
v___x_462_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_462_, 0, v_x_438_);
v___x_463_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_463_, 0, v_x_438_);
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_462_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
return v___x_466_;
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_467_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_467_, 0, v_x_438_);
v___x_468_ = lean_box(0);
v___x_469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
return v___x_469_;
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_inc(v_x_438_);
v___x_470_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_470_, 0, v_x_438_);
v___x_471_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_471_, 0, v_x_438_);
v___x_472_ = lean_box(0);
v___x_473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_470_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
return v___x_474_;
}
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_475_, 0, v_x_438_);
v___x_476_ = lean_box(0);
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
return v___x_477_;
}
}
else
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_478_, 0, v_x_438_);
v___x_479_ = lean_box(0);
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
return v___x_480_;
}
}
else
{
lean_object* v___x_481_; 
lean_dec(v_x_438_);
v___x_481_ = lean_box(0);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_diagRun___boxed(lean_object* v_x_482_, lean_object* v_x_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = lp_tzap_x2dlean_TzapLean_diagRun(v_x_482_, v_x_483_);
lean_dec(v_x_482_);
return v_res_484_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(5u);
v___x_499_ = lean_nat_to_int(v___x_498_);
return v___x_499_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(10u);
v___x_507_ = lean_nat_to_int(v___x_506_);
return v___x_507_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(9u);
v___x_512_ = lean_nat_to_int(v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__0));
v___x_521_ = lean_string_length(v___x_520_);
return v___x_521_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21, &lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21_once, _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__21);
v___x_523_ = lean_nat_to_int(v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg(lean_object* v_x_528_){
_start:
{
lean_object* v_k_529_; lean_object* v_before_530_; lean_object* v_after_531_; lean_object* v_rest_532_; uint8_t v_hasRun_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_k_529_ = lean_ctor_get(v_x_528_, 0);
lean_inc(v_k_529_);
v_before_530_ = lean_ctor_get(v_x_528_, 1);
lean_inc(v_before_530_);
v_after_531_ = lean_ctor_get(v_x_528_, 2);
lean_inc(v_after_531_);
v_rest_532_ = lean_ctor_get(v_x_528_, 3);
lean_inc(v_rest_532_);
v_hasRun_533_ = lean_ctor_get_uint8(v_x_528_, sizeof(void*)*4);
lean_dec_ref(v_x_528_);
v___x_534_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__5));
v___x_535_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__6));
v___x_536_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7, &lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__7);
v___x_537_ = l_Nat_reprFast(v_k_529_);
v___x_538_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
v___x_539_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_536_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = 0;
v___x_541_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set_uint8(v___x_541_, sizeof(void*)*1, v___x_540_);
v___x_542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_535_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__9));
v___x_544_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lean_box(1);
v___x_546_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_544_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
v___x_547_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__11));
v___x_548_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
v___x_549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
lean_ctor_set(v___x_549_, 1, v___x_534_);
v___x_550_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12, &lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12_once, _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__12);
v___x_551_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(v_before_530_);
v___x_552_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_550_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
v___x_553_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*1, v___x_540_);
v___x_554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_549_);
lean_ctor_set(v___x_554_, 1, v___x_553_);
v___x_555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___x_543_);
v___x_556_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v___x_545_);
v___x_557_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__14));
v___x_558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v___x_534_);
v___x_560_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15, &lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15_once, _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__15);
v___x_561_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(v_after_531_);
v___x_562_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*1, v___x_540_);
v___x_564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_559_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_543_);
v___x_566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_545_);
v___x_567_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__17));
v___x_568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_534_);
v___x_570_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1, &lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1_once, _init_lp_tzap_x2dlean_TzapLean_classifyQuarterPi___closed__1);
v___x_571_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(v_rest_532_);
v___x_572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*1, v___x_540_);
v___x_574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_569_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v___x_543_);
v___x_576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_545_);
v___x_577_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__19));
v___x_578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set(v___x_579_, 1, v___x_534_);
v___x_580_ = l_Bool_repr___redArg(v_hasRun_533_);
v___x_581_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_550_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*1, v___x_540_);
v___x_583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_579_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22, &lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22_once, _init_lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__22);
v___x_585_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__23));
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___x_583_);
v___x_587_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg___closed__24));
v___x_588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_584_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*1, v___x_540_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr(lean_object* v_x_591_, lean_object* v_prec_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = lp_tzap_x2dlean_TzapLean_instReprHScan_repr___redArg(v_x_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprHScan_repr___boxed(lean_object* v_x_594_, lean_object* v_prec_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = lp_tzap_x2dlean_TzapLean_instReprHScan_repr(v_x_594_, v_prec_595_);
lean_dec(v_prec_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_HScan_push(lean_object* v_g_599_, lean_object* v_r_600_){
_start:
{
uint8_t v_hasRun_601_; 
v_hasRun_601_ = lean_ctor_get_uint8(v_r_600_, sizeof(void*)*4);
if (v_hasRun_601_ == 0)
{
lean_object* v_k_602_; lean_object* v_before_603_; lean_object* v_after_604_; lean_object* v_rest_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_613_; 
v_k_602_ = lean_ctor_get(v_r_600_, 0);
v_before_603_ = lean_ctor_get(v_r_600_, 1);
v_after_604_ = lean_ctor_get(v_r_600_, 2);
v_rest_605_ = lean_ctor_get(v_r_600_, 3);
v_isSharedCheck_613_ = !lean_is_exclusive(v_r_600_);
if (v_isSharedCheck_613_ == 0)
{
v___x_607_ = v_r_600_;
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_rest_605_);
lean_inc(v_after_604_);
lean_inc(v_before_603_);
lean_inc(v_k_602_);
lean_dec(v_r_600_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_609_, 0, v_g_599_);
lean_ctor_set(v___x_609_, 1, v_after_604_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 2, v___x_609_);
v___x_611_ = v___x_607_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_k_602_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_before_603_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_rest_605_);
lean_ctor_set_uint8(v_reuseFailAlloc_612_, sizeof(void*)*4, v_hasRun_601_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
else
{
lean_object* v_k_614_; lean_object* v_before_615_; lean_object* v_after_616_; lean_object* v_rest_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_625_; 
v_k_614_ = lean_ctor_get(v_r_600_, 0);
v_before_615_ = lean_ctor_get(v_r_600_, 1);
v_after_616_ = lean_ctor_get(v_r_600_, 2);
v_rest_617_ = lean_ctor_get(v_r_600_, 3);
v_isSharedCheck_625_ = !lean_is_exclusive(v_r_600_);
if (v_isSharedCheck_625_ == 0)
{
v___x_619_ = v_r_600_;
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_rest_617_);
lean_inc(v_after_616_);
lean_inc(v_before_615_);
lean_inc(v_k_614_);
lean_dec(v_r_600_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_621_, 0, v_g_599_);
lean_ctor_set(v___x_621_, 1, v_before_615_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_k_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_after_616_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_rest_617_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*4, v_hasRun_601_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanH(lean_object* v_q_626_, lean_object* v_x_627_){
_start:
{
if (lean_obj_tag(v_x_627_) == 0)
{
lean_object* v___x_628_; 
v___x_628_ = lean_box(0);
return v___x_628_;
}
else
{
lean_object* v_head_629_; lean_object* v_tail_630_; uint8_t v___x_631_; 
v_head_629_ = lean_ctor_get(v_x_627_, 0);
lean_inc(v_head_629_);
v_tail_630_ = lean_ctor_get(v_x_627_, 1);
lean_inc(v_tail_630_);
lean_dec_ref_known(v_x_627_, 2);
v___x_631_ = lp_tzap_x2dlean_TzapLean_Gate_support(v_head_629_, v_q_626_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; 
v___x_632_ = lp_tzap_x2dlean_TzapLean_scanH(v_q_626_, v_tail_630_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_dec(v_head_629_);
return v___x_632_;
}
else
{
lean_object* v_val_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_641_; 
v_val_633_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_641_ == 0)
{
v___x_635_ = v___x_632_;
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_val_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lp_tzap_x2dlean_TzapLean_HScan_push(v_head_629_, v_val_633_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v___x_637_);
v___x_639_ = v___x_635_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
else
{
lean_object* v___x_642_; 
lean_inc(v_head_629_);
v___x_642_ = lp_tzap_x2dlean_TzapLean_diagonalK(v_head_629_, v_q_626_);
if (lean_obj_tag(v___x_642_) == 0)
{
uint8_t v___x_643_; 
v___x_643_ = lp_tzap_x2dlean_TzapLean_isH(v_q_626_, v_head_629_);
lean_dec(v_head_629_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
lean_dec(v_tail_630_);
v___x_644_ = lean_box(0);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = lean_box(0);
v___x_647_ = 0;
v___x_648_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_648_, 0, v___x_645_);
lean_ctor_set(v___x_648_, 1, v___x_646_);
lean_ctor_set(v___x_648_, 2, v___x_646_);
lean_ctor_set(v___x_648_, 3, v_tail_630_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*4, v___x_647_);
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
}
else
{
lean_object* v_val_650_; 
lean_dec(v_head_629_);
v_val_650_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v___x_642_, 1);
if (lean_obj_tag(v_val_650_) == 0)
{
lean_object* v___x_651_; 
lean_dec(v_tail_630_);
v___x_651_ = lean_box(0);
return v___x_651_;
}
else
{
lean_object* v_val_652_; lean_object* v___x_653_; 
v_val_652_ = lean_ctor_get(v_val_650_, 0);
lean_inc(v_val_652_);
lean_dec_ref_known(v_val_650_, 1);
v___x_653_ = lp_tzap_x2dlean_TzapLean_scanH(v_q_626_, v_tail_630_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_dec(v_val_652_);
return v___x_653_;
}
else
{
lean_object* v_val_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_677_; 
v_val_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_677_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_677_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_val_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_677_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v_k_658_; lean_object* v_before_659_; lean_object* v_after_660_; lean_object* v_rest_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_676_; 
v_k_658_ = lean_ctor_get(v_val_654_, 0);
v_before_659_ = lean_ctor_get(v_val_654_, 1);
v_after_660_ = lean_ctor_get(v_val_654_, 2);
v_rest_661_ = lean_ctor_get(v_val_654_, 3);
v_isSharedCheck_676_ = !lean_is_exclusive(v_val_654_);
if (v_isSharedCheck_676_ == 0)
{
v___x_663_ = v_val_654_;
v_isShared_664_ = v_isSharedCheck_676_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_rest_661_);
lean_inc(v_after_660_);
lean_inc(v_before_659_);
lean_inc(v_k_658_);
lean_dec(v_val_654_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_676_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_665_ = lean_nat_add(v_val_652_, v_k_658_);
lean_dec(v_k_658_);
lean_dec(v_val_652_);
v___x_666_ = lean_unsigned_to_nat(8u);
v___x_667_ = lean_nat_mod(v___x_665_, v___x_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v___x_669_ = l_List_appendTR___redArg(v_before_659_, v_after_660_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 2, v___x_669_);
lean_ctor_set(v___x_663_, 1, v___x_668_);
lean_ctor_set(v___x_663_, 0, v___x_667_);
v___x_671_ = v___x_663_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_675_, 3, v_rest_661_);
v___x_671_ = v_reuseFailAlloc_675_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_673_; 
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*4, v___x_631_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_671_);
v___x_673_ = v___x_656_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanH___boxed(lean_object* v_q_678_, lean_object* v_x_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = lp_tzap_x2dlean_TzapLean_scanH(v_q_678_, v_x_679_);
lean_dec(v_q_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanHOnly(lean_object* v_q_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
lean_object* v___x_683_; 
v___x_683_ = lean_box(0);
return v___x_683_;
}
else
{
lean_object* v_head_684_; lean_object* v_tail_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_716_; 
v_head_684_ = lean_ctor_get(v_x_682_, 0);
v_tail_685_ = lean_ctor_get(v_x_682_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_x_682_);
if (v_isSharedCheck_716_ == 0)
{
v___x_687_ = v_x_682_;
v_isShared_688_ = v_isSharedCheck_716_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_tail_685_);
lean_inc(v_head_684_);
lean_dec(v_x_682_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_716_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
uint8_t v___x_689_; 
v___x_689_ = lp_tzap_x2dlean_TzapLean_Gate_support(v_head_684_, v_q_681_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
v___x_690_ = lp_tzap_x2dlean_TzapLean_scanHOnly(v_q_681_, v_tail_685_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_del_object(v___x_687_);
lean_dec(v_head_684_);
return v___x_690_;
}
else
{
lean_object* v_val_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_710_; 
v_val_691_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_710_ == 0)
{
v___x_693_ = v___x_690_;
v_isShared_694_ = v_isSharedCheck_710_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_val_691_);
lean_dec(v___x_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_710_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_fst_695_; lean_object* v_snd_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_709_; 
v_fst_695_ = lean_ctor_get(v_val_691_, 0);
v_snd_696_ = lean_ctor_get(v_val_691_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_val_691_);
if (v_isSharedCheck_709_ == 0)
{
v___x_698_ = v_val_691_;
v_isShared_699_ = v_isSharedCheck_709_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_snd_696_);
lean_inc(v_fst_695_);
lean_dec(v_val_691_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_709_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 1, v_fst_695_);
v___x_701_ = v___x_687_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_head_684_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_fst_695_);
v___x_701_ = v_reuseFailAlloc_708_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_703_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_701_);
v___x_703_ = v___x_698_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_snd_696_);
v___x_703_ = v_reuseFailAlloc_707_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_705_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v___x_703_);
v___x_705_ = v___x_693_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
}
}
}
else
{
uint8_t v___x_711_; 
lean_del_object(v___x_687_);
v___x_711_ = lp_tzap_x2dlean_TzapLean_isH(v_q_681_, v_head_684_);
lean_dec(v_head_684_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; 
lean_dec(v_tail_685_);
v___x_712_ = lean_box(0);
return v___x_712_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_box(0);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
lean_ctor_set(v___x_714_, 1, v_tail_685_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanHOnly___boxed(lean_object* v_q_717_, lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = lp_tzap_x2dlean_TzapLean_scanHOnly(v_q_717_, v_x_718_);
lean_dec(v_q_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanXH(lean_object* v_q_720_, lean_object* v_x_721_){
_start:
{
if (lean_obj_tag(v_x_721_) == 0)
{
lean_object* v___x_722_; 
v___x_722_ = lean_box(0);
return v___x_722_;
}
else
{
lean_object* v_head_723_; lean_object* v_tail_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_782_; 
v_head_723_ = lean_ctor_get(v_x_721_, 0);
v_tail_724_ = lean_ctor_get(v_x_721_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v_x_721_);
if (v_isSharedCheck_782_ == 0)
{
v___x_726_ = v_x_721_;
v_isShared_727_ = v_isSharedCheck_782_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_tail_724_);
lean_inc(v_head_723_);
lean_dec(v_x_721_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_782_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
uint8_t v___x_728_; 
v___x_728_ = lp_tzap_x2dlean_TzapLean_Gate_support(v_head_723_, v_q_720_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
v___x_729_ = lp_tzap_x2dlean_TzapLean_scanXH(v_q_720_, v_tail_724_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_del_object(v___x_726_);
lean_dec(v_head_723_);
return v___x_729_;
}
else
{
lean_object* v_val_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_758_; 
v_val_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_758_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_758_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_val_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_758_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_snd_734_; lean_object* v_fst_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_757_; 
v_snd_734_ = lean_ctor_get(v_val_730_, 1);
v_fst_735_ = lean_ctor_get(v_val_730_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_val_730_);
if (v_isSharedCheck_757_ == 0)
{
v___x_737_ = v_val_730_;
v_isShared_738_ = v_isSharedCheck_757_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_snd_734_);
lean_inc(v_fst_735_);
lean_dec(v_val_730_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_757_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_756_; 
v_fst_739_ = lean_ctor_get(v_snd_734_, 0);
v_snd_740_ = lean_ctor_get(v_snd_734_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v_snd_734_);
if (v_isSharedCheck_756_ == 0)
{
v___x_742_ = v_snd_734_;
v_isShared_743_ = v_isSharedCheck_756_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_snd_740_);
lean_inc(v_fst_739_);
lean_dec(v_snd_734_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_756_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v_fst_735_);
v___x_745_ = v___x_726_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_head_723_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_fst_735_);
v___x_745_ = v_reuseFailAlloc_755_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_747_; 
if (v_isShared_743_ == 0)
{
v___x_747_ = v___x_742_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_fst_739_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_snd_740_);
v___x_747_ = v_reuseFailAlloc_754_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_749_; 
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 1, v___x_747_);
lean_ctor_set(v___x_737_, 0, v___x_745_);
v___x_749_ = v___x_737_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_753_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_751_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_749_);
v___x_751_ = v___x_732_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
}
}
}
}
else
{
uint8_t v___x_759_; 
lean_del_object(v___x_726_);
v___x_759_ = lp_tzap_x2dlean_TzapLean_isX(v_q_720_, v_head_723_);
lean_dec(v_head_723_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
lean_dec(v_tail_724_);
v___x_760_ = lean_box(0);
return v___x_760_;
}
else
{
lean_object* v___x_761_; 
v___x_761_ = lp_tzap_x2dlean_TzapLean_scanHOnly(v_q_720_, v_tail_724_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v___x_762_; 
v___x_762_ = lean_box(0);
return v___x_762_;
}
else
{
lean_object* v_val_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_781_; 
v_val_763_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_781_ == 0)
{
v___x_765_ = v___x_761_;
v_isShared_766_ = v_isSharedCheck_781_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_val_763_);
lean_dec(v___x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_781_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v_fst_767_; lean_object* v_snd_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_780_; 
v_fst_767_ = lean_ctor_get(v_val_763_, 0);
v_snd_768_ = lean_ctor_get(v_val_763_, 1);
v_isSharedCheck_780_ = !lean_is_exclusive(v_val_763_);
if (v_isSharedCheck_780_ == 0)
{
v___x_770_ = v_val_763_;
v_isShared_771_ = v_isSharedCheck_780_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_snd_768_);
lean_inc(v_fst_767_);
lean_dec(v_val_763_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_780_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = lean_box(0);
if (v_isShared_771_ == 0)
{
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_fst_767_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_snd_768_);
v___x_774_ = v_reuseFailAlloc_779_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_772_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_775_);
v___x_777_ = v___x_765_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_775_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_scanXH___boxed(lean_object* v_q_783_, lean_object* v_x_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = lp_tzap_x2dlean_TzapLean_scanXH(v_q_783_, v_x_784_);
lean_dec(v_q_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceAtH(lean_object* v_q_786_, lean_object* v_gs_787_){
_start:
{
lean_object* v___x_788_; 
lean_inc(v_gs_787_);
v___x_788_ = lp_tzap_x2dlean_TzapLean_scanXH(v_q_786_, v_gs_787_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v___x_789_; 
v___x_789_ = lp_tzap_x2dlean_TzapLean_scanH(v_q_786_, v_gs_787_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v___x_790_; 
lean_dec(v_q_786_);
v___x_790_ = lean_box(0);
return v___x_790_;
}
else
{
lean_object* v_val_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_841_; 
v_val_791_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_841_ == 0)
{
v___x_793_ = v___x_789_;
v_isShared_794_ = v_isSharedCheck_841_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_val_791_);
lean_dec(v___x_789_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_841_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v_k_795_; lean_object* v_before_796_; lean_object* v_after_797_; lean_object* v_rest_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v_k_795_ = lean_ctor_get(v_val_791_, 0);
lean_inc(v_k_795_);
v_before_796_ = lean_ctor_get(v_val_791_, 1);
lean_inc(v_before_796_);
v_after_797_ = lean_ctor_get(v_val_791_, 2);
lean_inc(v_after_797_);
v_rest_798_ = lean_ctor_get(v_val_791_, 3);
lean_inc(v_rest_798_);
lean_dec(v_val_791_);
v___x_799_ = lean_unsigned_to_nat(2u);
v___x_800_ = lean_nat_mod(v_k_795_, v___x_799_);
v___x_801_ = lean_unsigned_to_nat(1u);
v___x_802_ = lean_nat_dec_eq(v___x_800_, v___x_801_);
lean_dec(v___x_800_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = lean_nat_dec_eq(v_k_795_, v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(4u);
v___x_806_ = lean_nat_dec_eq(v_k_795_, v___x_805_);
if (v___x_806_ == 0)
{
uint8_t v___x_807_; 
v___x_807_ = lean_nat_dec_eq(v_k_795_, v___x_799_);
lean_dec(v_k_795_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
lean_inc(v_q_786_);
v___x_808_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_808_, 0, v_q_786_);
lean_inc_ref(v___x_808_);
v___x_809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v_before_796_);
v___x_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_810_, 0, v_q_786_);
v___x_811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
lean_ctor_set(v___x_811_, 1, v_after_797_);
v___x_812_ = l_List_appendTR___redArg(v___x_809_, v___x_811_);
v___x_813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_808_);
lean_ctor_set(v___x_813_, 1, v_rest_798_);
v___x_814_ = l_List_appendTR___redArg(v___x_812_, v___x_813_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_814_);
v___x_816_ = v___x_793_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
lean_inc(v_q_786_);
v___x_818_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_818_, 0, v_q_786_);
lean_inc_ref(v___x_818_);
v___x_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
lean_ctor_set(v___x_819_, 1, v_before_796_);
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v_q_786_);
v___x_821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
lean_ctor_set(v___x_821_, 1, v_after_797_);
v___x_822_ = l_List_appendTR___redArg(v___x_819_, v___x_821_);
v___x_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_818_);
lean_ctor_set(v___x_823_, 1, v_rest_798_);
v___x_824_ = l_List_appendTR___redArg(v___x_822_, v___x_823_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_824_);
v___x_826_ = v___x_793_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
else
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
lean_dec(v_k_795_);
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v_q_786_);
v___x_829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v_after_797_);
v___x_830_ = l_List_appendTR___redArg(v_before_796_, v___x_829_);
v___x_831_ = l_List_appendTR___redArg(v___x_830_, v_rest_798_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_831_);
v___x_833_ = v___x_793_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
lean_dec(v_k_795_);
lean_dec(v_q_786_);
v___x_835_ = l_List_appendTR___redArg(v_before_796_, v_after_797_);
v___x_836_ = l_List_appendTR___redArg(v___x_835_, v_rest_798_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_836_);
v___x_838_ = v___x_793_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
else
{
lean_object* v___x_840_; 
lean_dec(v_rest_798_);
lean_dec(v_after_797_);
lean_dec(v_before_796_);
lean_dec(v_k_795_);
lean_del_object(v___x_793_);
lean_dec(v_q_786_);
v___x_840_ = lean_box(0);
return v___x_840_;
}
}
}
}
else
{
lean_object* v_val_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_gs_787_);
v_val_842_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_863_ == 0)
{
v___x_844_ = v___x_788_;
v_isShared_845_ = v_isSharedCheck_863_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_val_842_);
lean_dec(v___x_788_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_863_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v_snd_846_; lean_object* v_fst_847_; lean_object* v_fst_848_; lean_object* v_snd_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_862_; 
v_snd_846_ = lean_ctor_get(v_val_842_, 1);
lean_inc(v_snd_846_);
v_fst_847_ = lean_ctor_get(v_val_842_, 0);
lean_inc(v_fst_847_);
lean_dec(v_val_842_);
v_fst_848_ = lean_ctor_get(v_snd_846_, 0);
v_snd_849_ = lean_ctor_get(v_snd_846_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_snd_846_);
if (v_isSharedCheck_862_ == 0)
{
v___x_851_ = v_snd_846_;
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_snd_849_);
lean_inc(v_fst_848_);
lean_dec(v_snd_846_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_853_, 0, v_q_786_);
if (v_isShared_852_ == 0)
{
lean_ctor_set_tag(v___x_851_, 1);
lean_ctor_set(v___x_851_, 1, v_fst_848_);
lean_ctor_set(v___x_851_, 0, v___x_853_);
v___x_855_ = v___x_851_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_fst_848_);
v___x_855_ = v_reuseFailAlloc_861_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_856_ = l_List_appendTR___redArg(v_fst_847_, v___x_855_);
v___x_857_ = l_List_appendTR___redArg(v___x_856_, v_snd_849_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_857_);
v___x_859_ = v___x_844_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceStep(lean_object* v_x_864_){
_start:
{
if (lean_obj_tag(v_x_864_) == 0)
{
lean_object* v___x_865_; 
v___x_865_ = lean_box(0);
return v___x_865_;
}
else
{
lean_object* v_head_866_; 
v_head_866_ = lean_ctor_get(v_x_864_, 0);
lean_inc(v_head_866_);
if (lean_obj_tag(v_head_866_) == 1)
{
lean_object* v_tail_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_885_; 
v_tail_867_ = lean_ctor_get(v_x_864_, 1);
v_isSharedCheck_885_ = !lean_is_exclusive(v_x_864_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v_x_864_, 0);
lean_dec(v_unused_886_);
v___x_869_ = v_x_864_;
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_tail_867_);
lean_dec(v_x_864_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v_q_871_; lean_object* v___x_872_; 
v_q_871_ = lean_ctor_get(v_head_866_, 0);
lean_inc(v_tail_867_);
lean_inc(v_q_871_);
v___x_872_ = lp_tzap_x2dlean_TzapLean_reduceAtH(v_q_871_, v_tail_867_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v___x_873_; 
v___x_873_ = lp_tzap_x2dlean_TzapLean_reduceStep(v_tail_867_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_del_object(v___x_869_);
lean_dec_ref_known(v_head_866_, 1);
return v___x_873_;
}
else
{
lean_object* v_val_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_884_; 
v_val_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_884_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_884_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_val_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_884_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v_val_874_);
v___x_879_ = v___x_869_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_head_866_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_val_874_);
v___x_879_ = v_reuseFailAlloc_883_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_881_; 
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_879_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
else
{
lean_del_object(v___x_869_);
lean_dec(v_tail_867_);
lean_dec_ref_known(v_head_866_, 1);
return v___x_872_;
}
}
}
else
{
lean_object* v_tail_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_903_; 
v_tail_887_ = lean_ctor_get(v_x_864_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v_x_864_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v_x_864_, 0);
lean_dec(v_unused_904_);
v___x_889_ = v_x_864_;
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_tail_887_);
lean_dec(v_x_864_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; 
v___x_891_ = lp_tzap_x2dlean_TzapLean_reduceStep(v_tail_887_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_del_object(v___x_889_);
lean_dec(v_head_866_);
return v___x_891_;
}
else
{
lean_object* v_val_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_902_; 
v_val_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_902_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_902_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_val_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_902_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 1, v_val_892_);
v___x_897_ = v___x_889_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_head_866_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_val_892_);
v___x_897_ = v_reuseFailAlloc_901_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
lean_object* v___x_899_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_897_);
v___x_899_ = v___x_894_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHead(lean_object* v_g_905_, lean_object* v_gs_906_){
_start:
{
if (lean_obj_tag(v_g_905_) == 1)
{
lean_object* v_q_907_; lean_object* v___x_908_; 
v_q_907_ = lean_ctor_get(v_g_905_, 0);
lean_inc(v_q_907_);
lean_dec_ref_known(v_g_905_, 1);
v___x_908_ = lp_tzap_x2dlean_TzapLean_reduceAtH(v_q_907_, v_gs_906_);
return v___x_908_;
}
else
{
lean_object* v___x_909_; 
lean_dec(v_gs_906_);
lean_dec_ref(v_g_905_);
v___x_909_ = lean_box(0);
return v___x_909_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0(lean_object* v_as_910_, size_t v_i_911_, size_t v_stop_912_, lean_object* v_b_913_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = lean_usize_dec_eq(v_i_911_, v_stop_912_);
if (v___x_914_ == 0)
{
lean_object* v_fst_915_; lean_object* v_snd_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_936_; 
v_fst_915_ = lean_ctor_get(v_b_913_, 0);
v_snd_916_ = lean_ctor_get(v_b_913_, 1);
v_isSharedCheck_936_ = !lean_is_exclusive(v_b_913_);
if (v_isSharedCheck_936_ == 0)
{
v___x_918_ = v_b_913_;
v_isShared_919_ = v_isSharedCheck_936_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_snd_916_);
lean_inc(v_fst_915_);
lean_dec(v_b_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_936_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
size_t v___x_920_; size_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_920_ = ((size_t)1ULL);
v___x_921_ = lean_usize_sub(v_i_911_, v___x_920_);
v___x_922_ = lean_array_uget_borrowed(v_as_910_, v___x_921_);
lean_inc(v_snd_916_);
lean_inc(v___x_922_);
v___x_923_ = lp_tzap_x2dlean_TzapLean_reduceHead(v___x_922_, v_snd_916_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v___x_924_; lean_object* v___x_926_; 
lean_inc(v___x_922_);
v___x_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v_snd_916_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 1, v___x_924_);
v___x_926_ = v___x_918_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_fst_915_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_928_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
v_i_911_ = v___x_921_;
v_b_913_ = v___x_926_;
goto _start;
}
}
else
{
lean_object* v_val_929_; uint8_t v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
lean_dec(v_snd_916_);
lean_dec(v_fst_915_);
v_val_929_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_val_929_);
lean_dec_ref_known(v___x_923_, 1);
v___x_930_ = 1;
v___x_931_ = lean_box(v___x_930_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 1, v_val_929_);
lean_ctor_set(v___x_918_, 0, v___x_931_);
v___x_933_ = v___x_918_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_val_929_);
v___x_933_ = v_reuseFailAlloc_935_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
v_i_911_ = v___x_921_;
v_b_913_ = v___x_933_;
goto _start;
}
}
}
}
else
{
return v_b_913_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0___boxed(lean_object* v_as_937_, lean_object* v_i_938_, lean_object* v_stop_939_, lean_object* v_b_940_){
_start:
{
size_t v_i_boxed_941_; size_t v_stop_boxed_942_; lean_object* v_res_943_; 
v_i_boxed_941_ = lean_unbox_usize(v_i_938_);
lean_dec(v_i_938_);
v_stop_boxed_942_ = lean_unbox_usize(v_stop_939_);
lean_dec(v_stop_939_);
v_res_943_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0(v_as_937_, v_i_boxed_941_, v_stop_boxed_942_, v_b_940_);
lean_dec_ref(v_as_937_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldrTR___at___00TzapLean_reduceSweep_spec__0(lean_object* v_init_944_, lean_object* v_l_945_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_946_ = lean_array_mk(v_l_945_);
v___x_947_ = lean_array_get_size(v___x_946_);
v___x_948_ = lean_unsigned_to_nat(0u);
v___x_949_ = lean_nat_dec_lt(v___x_948_, v___x_947_);
if (v___x_949_ == 0)
{
lean_dec_ref(v___x_946_);
return v_init_944_;
}
else
{
size_t v___x_950_; size_t v___x_951_; lean_object* v___x_952_; 
v___x_950_ = lean_usize_of_nat(v___x_947_);
v___x_951_ = ((size_t)0ULL);
v___x_952_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00TzapLean_reduceSweep_spec__0_spec__0(v___x_946_, v___x_950_, v___x_951_, v_init_944_);
lean_dec_ref(v___x_946_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceSweep(lean_object* v_gs_957_){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_reduceSweep___closed__0));
v___x_959_ = lp_tzap_x2dlean_List_foldrTR___at___00TzapLean_reduceSweep_spec__0(v___x_958_, v_gs_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamardsFuel(lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
lean_object* v_zero_962_; uint8_t v_isZero_963_; 
v_zero_962_ = lean_unsigned_to_nat(0u);
v_isZero_963_ = lean_nat_dec_eq(v_x_960_, v_zero_962_);
if (v_isZero_963_ == 1)
{
lean_dec(v_x_960_);
return v_x_961_;
}
else
{
lean_object* v_r_964_; lean_object* v_fst_965_; uint8_t v___x_966_; 
lean_inc(v_x_961_);
v_r_964_ = lp_tzap_x2dlean_TzapLean_reduceSweep(v_x_961_);
v_fst_965_ = lean_ctor_get(v_r_964_, 0);
lean_inc(v_fst_965_);
v___x_966_ = lean_unbox(v_fst_965_);
lean_dec(v_fst_965_);
if (v___x_966_ == 0)
{
lean_dec_ref(v_r_964_);
lean_dec(v_x_960_);
return v_x_961_;
}
else
{
lean_object* v_snd_967_; lean_object* v_one_968_; lean_object* v_n_969_; 
lean_dec(v_x_961_);
v_snd_967_ = lean_ctor_get(v_r_964_, 1);
lean_inc(v_snd_967_);
lean_dec_ref(v_r_964_);
v_one_968_ = lean_unsigned_to_nat(1u);
v_n_969_ = lean_nat_sub(v_x_960_, v_one_968_);
lean_dec(v_x_960_);
v_x_960_ = v_n_969_;
v_x_961_ = v_snd_967_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamards(lean_object* v_gs_971_){
_start:
{
lean_object* v___x_972_; 
lean_inc(v_gs_971_);
v___x_972_ = lp_tzap_x2dlean_TzapLean_reduceStep(v_gs_971_);
if (lean_obj_tag(v___x_972_) == 0)
{
return v_gs_971_;
}
else
{
lean_object* v_val_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v_val_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_val_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = l_List_lengthTR___redArg(v_gs_971_);
lean_dec(v_gs_971_);
v___x_975_ = lp_tzap_x2dlean_TzapLean_reduceHadamardsFuel(v___x_974_, v_val_973_);
return v___x_975_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter___redArg(lean_object* v_x_976_, lean_object* v_h__1_977_, lean_object* v_h__2_978_, lean_object* v_h__3_979_, lean_object* v_h__4_980_, lean_object* v_h__5_981_, lean_object* v_h__6_982_, lean_object* v_h__7_983_, lean_object* v_h__8_984_, lean_object* v_h__9_985_){
_start:
{
switch(lean_obj_tag(v_x_976_))
{
case 1:
{
lean_object* v_q_986_; lean_object* v___x_987_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
v_q_986_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_986_);
lean_dec_ref_known(v_x_976_, 1);
v___x_987_ = lean_apply_1(v_h__1_977_, v_q_986_);
return v___x_987_;
}
case 0:
{
lean_object* v_q_988_; lean_object* v___x_989_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__1_977_);
v_q_988_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_988_);
lean_dec_ref_known(v_x_976_, 1);
v___x_989_ = lean_apply_1(v_h__2_978_, v_q_988_);
return v___x_989_;
}
case 2:
{
lean_object* v_q_990_; lean_object* v___x_991_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_q_990_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_990_);
lean_dec_ref_known(v_x_976_, 1);
v___x_991_ = lean_apply_1(v_h__3_979_, v_q_990_);
return v___x_991_;
}
case 3:
{
lean_object* v_q_992_; lean_object* v___x_993_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_q_992_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_992_);
lean_dec_ref_known(v_x_976_, 1);
v___x_993_ = lean_apply_1(v_h__4_980_, v_q_992_);
return v___x_993_;
}
case 4:
{
lean_object* v_q_994_; lean_object* v___x_995_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_q_994_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_994_);
lean_dec_ref_known(v_x_976_, 1);
v___x_995_ = lean_apply_1(v_h__5_981_, v_q_994_);
return v___x_995_;
}
case 5:
{
lean_object* v_q_996_; lean_object* v___x_997_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_q_996_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_996_);
lean_dec_ref_known(v_x_976_, 1);
v___x_997_ = lean_apply_1(v_h__6_982_, v_q_996_);
return v___x_997_;
}
case 6:
{
lean_object* v_q_998_; lean_object* v___x_999_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__8_984_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_q_998_ = lean_ctor_get(v_x_976_, 0);
lean_inc(v_q_998_);
lean_dec_ref_known(v_x_976_, 1);
v___x_999_ = lean_apply_1(v_h__7_983_, v_q_998_);
return v___x_999_;
}
case 7:
{
lean_object* v_theta_1000_; lean_object* v_q_1001_; lean_object* v___x_1002_; 
lean_dec(v_h__9_985_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v_theta_1000_ = lean_ctor_get(v_x_976_, 0);
lean_inc_ref(v_theta_1000_);
v_q_1001_ = lean_ctor_get(v_x_976_, 1);
lean_inc(v_q_1001_);
lean_dec_ref_known(v_x_976_, 2);
v___x_1002_ = lean_apply_2(v_h__8_984_, v_theta_1000_, v_q_1001_);
return v___x_1002_;
}
default: 
{
lean_object* v___x_1003_; 
lean_dec(v_h__8_984_);
lean_dec(v_h__7_983_);
lean_dec(v_h__6_982_);
lean_dec(v_h__5_981_);
lean_dec(v_h__4_980_);
lean_dec(v_h__3_979_);
lean_dec(v_h__2_978_);
lean_dec(v_h__1_977_);
v___x_1003_ = lean_apply_9(v_h__9_985_, v_x_976_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1003_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter(lean_object* v_motive_1004_, lean_object* v_x_1005_, lean_object* v_h__1_1006_, lean_object* v_h__2_1007_, lean_object* v_h__3_1008_, lean_object* v_h__4_1009_, lean_object* v_h__5_1010_, lean_object* v_h__6_1011_, lean_object* v_h__7_1012_, lean_object* v_h__8_1013_, lean_object* v_h__9_1014_){
_start:
{
switch(lean_obj_tag(v_x_1005_))
{
case 1:
{
lean_object* v_q_1015_; lean_object* v___x_1016_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
v_q_1015_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1015_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1016_ = lean_apply_1(v_h__1_1006_, v_q_1015_);
return v___x_1016_;
}
case 0:
{
lean_object* v_q_1017_; lean_object* v___x_1018_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__1_1006_);
v_q_1017_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1017_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1018_ = lean_apply_1(v_h__2_1007_, v_q_1017_);
return v___x_1018_;
}
case 2:
{
lean_object* v_q_1019_; lean_object* v___x_1020_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_q_1019_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1019_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1020_ = lean_apply_1(v_h__3_1008_, v_q_1019_);
return v___x_1020_;
}
case 3:
{
lean_object* v_q_1021_; lean_object* v___x_1022_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_q_1021_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1021_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1022_ = lean_apply_1(v_h__4_1009_, v_q_1021_);
return v___x_1022_;
}
case 4:
{
lean_object* v_q_1023_; lean_object* v___x_1024_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_q_1023_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1023_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1024_ = lean_apply_1(v_h__5_1010_, v_q_1023_);
return v___x_1024_;
}
case 5:
{
lean_object* v_q_1025_; lean_object* v___x_1026_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_q_1025_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1025_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1026_ = lean_apply_1(v_h__6_1011_, v_q_1025_);
return v___x_1026_;
}
case 6:
{
lean_object* v_q_1027_; lean_object* v___x_1028_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__8_1013_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_q_1027_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_q_1027_);
lean_dec_ref_known(v_x_1005_, 1);
v___x_1028_ = lean_apply_1(v_h__7_1012_, v_q_1027_);
return v___x_1028_;
}
case 7:
{
lean_object* v_theta_1029_; lean_object* v_q_1030_; lean_object* v___x_1031_; 
lean_dec(v_h__9_1014_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v_theta_1029_ = lean_ctor_get(v_x_1005_, 0);
lean_inc_ref(v_theta_1029_);
v_q_1030_ = lean_ctor_get(v_x_1005_, 1);
lean_inc(v_q_1030_);
lean_dec_ref_known(v_x_1005_, 2);
v___x_1031_ = lean_apply_2(v_h__8_1013_, v_theta_1029_, v_q_1030_);
return v___x_1031_;
}
default: 
{
lean_object* v___x_1032_; 
lean_dec(v_h__8_1013_);
lean_dec(v_h__7_1012_);
lean_dec(v_h__6_1011_);
lean_dec(v_h__5_1010_);
lean_dec(v_h__4_1009_);
lean_dec(v_h__3_1008_);
lean_dec(v_h__2_1007_);
lean_dec(v_h__1_1006_);
v___x_1032_ = lean_apply_9(v_h__9_1014_, v_x_1005_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1032_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object* v_x_1033_, lean_object* v_x_1034_, lean_object* v_h__1_1035_, lean_object* v_h__2_1036_, lean_object* v_h__3_1037_, lean_object* v_h__4_1038_, lean_object* v_h__5_1039_, lean_object* v_h__6_1040_, lean_object* v_h__7_1041_, lean_object* v_h__8_1042_, lean_object* v_h__9_1043_){
_start:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = lean_nat_dec_eq(v_x_1033_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; uint8_t v___x_1047_; 
lean_dec(v_h__1_1035_);
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = lean_nat_dec_eq(v_x_1033_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
lean_dec(v_h__2_1036_);
v___x_1048_ = lean_unsigned_to_nat(2u);
v___x_1049_ = lean_nat_dec_eq(v_x_1033_, v___x_1048_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; uint8_t v___x_1051_; 
lean_dec(v_h__3_1037_);
v___x_1050_ = lean_unsigned_to_nat(3u);
v___x_1051_ = lean_nat_dec_eq(v_x_1033_, v___x_1050_);
if (v___x_1051_ == 0)
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
lean_dec(v_h__4_1038_);
v___x_1052_ = lean_unsigned_to_nat(4u);
v___x_1053_ = lean_nat_dec_eq(v_x_1033_, v___x_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; uint8_t v___x_1055_; 
lean_dec(v_h__5_1039_);
v___x_1054_ = lean_unsigned_to_nat(5u);
v___x_1055_ = lean_nat_dec_eq(v_x_1033_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
lean_dec(v_h__6_1040_);
v___x_1056_ = lean_unsigned_to_nat(6u);
v___x_1057_ = lean_nat_dec_eq(v_x_1033_, v___x_1056_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; uint8_t v___x_1059_; 
lean_dec(v_h__7_1041_);
v___x_1058_ = lean_unsigned_to_nat(7u);
v___x_1059_ = lean_nat_dec_eq(v_x_1033_, v___x_1058_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
lean_dec(v_h__8_1042_);
v___x_1060_ = lean_apply_10(v_h__9_1043_, v_x_1033_, v_x_1034_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1060_;
}
else
{
lean_object* v___x_1061_; 
lean_dec(v_h__9_1043_);
lean_dec(v_x_1033_);
v___x_1061_ = lean_apply_1(v_h__8_1042_, v_x_1034_);
return v___x_1061_;
}
}
else
{
lean_object* v___x_1062_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_x_1033_);
v___x_1062_ = lean_apply_1(v_h__7_1041_, v_x_1034_);
return v___x_1062_;
}
}
else
{
lean_object* v___x_1063_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_x_1033_);
v___x_1063_ = lean_apply_1(v_h__6_1040_, v_x_1034_);
return v___x_1063_;
}
}
else
{
lean_object* v___x_1064_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_h__6_1040_);
lean_dec(v_x_1033_);
v___x_1064_ = lean_apply_1(v_h__5_1039_, v_x_1034_);
return v___x_1064_;
}
}
else
{
lean_object* v___x_1065_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_h__6_1040_);
lean_dec(v_h__5_1039_);
lean_dec(v_x_1033_);
v___x_1065_ = lean_apply_1(v_h__4_1038_, v_x_1034_);
return v___x_1065_;
}
}
else
{
lean_object* v___x_1066_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_h__6_1040_);
lean_dec(v_h__5_1039_);
lean_dec(v_h__4_1038_);
lean_dec(v_x_1033_);
v___x_1066_ = lean_apply_1(v_h__3_1037_, v_x_1034_);
return v___x_1066_;
}
}
else
{
lean_object* v___x_1067_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_h__6_1040_);
lean_dec(v_h__5_1039_);
lean_dec(v_h__4_1038_);
lean_dec(v_h__3_1037_);
lean_dec(v_x_1033_);
v___x_1067_ = lean_apply_1(v_h__2_1036_, v_x_1034_);
return v___x_1067_;
}
}
else
{
lean_object* v___x_1068_; 
lean_dec(v_h__9_1043_);
lean_dec(v_h__8_1042_);
lean_dec(v_h__7_1041_);
lean_dec(v_h__6_1040_);
lean_dec(v_h__5_1039_);
lean_dec(v_h__4_1038_);
lean_dec(v_h__3_1037_);
lean_dec(v_h__2_1036_);
lean_dec(v_x_1033_);
v___x_1068_ = lean_apply_1(v_h__1_1035_, v_x_1034_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter(lean_object* v_motive_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_, lean_object* v_h__1_1072_, lean_object* v_h__2_1073_, lean_object* v_h__3_1074_, lean_object* v_h__4_1075_, lean_object* v_h__5_1076_, lean_object* v_h__6_1077_, lean_object* v_h__7_1078_, lean_object* v_h__8_1079_, lean_object* v_h__9_1080_){
_start:
{
lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = lean_unsigned_to_nat(0u);
v___x_1082_ = lean_nat_dec_eq(v_x_1070_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
lean_dec(v_h__1_1072_);
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_dec_eq(v_x_1070_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; uint8_t v___x_1086_; 
lean_dec(v_h__2_1073_);
v___x_1085_ = lean_unsigned_to_nat(2u);
v___x_1086_ = lean_nat_dec_eq(v_x_1070_, v___x_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; uint8_t v___x_1088_; 
lean_dec(v_h__3_1074_);
v___x_1087_ = lean_unsigned_to_nat(3u);
v___x_1088_ = lean_nat_dec_eq(v_x_1070_, v___x_1087_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; uint8_t v___x_1090_; 
lean_dec(v_h__4_1075_);
v___x_1089_ = lean_unsigned_to_nat(4u);
v___x_1090_ = lean_nat_dec_eq(v_x_1070_, v___x_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; uint8_t v___x_1092_; 
lean_dec(v_h__5_1076_);
v___x_1091_ = lean_unsigned_to_nat(5u);
v___x_1092_ = lean_nat_dec_eq(v_x_1070_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; uint8_t v___x_1094_; 
lean_dec(v_h__6_1077_);
v___x_1093_ = lean_unsigned_to_nat(6u);
v___x_1094_ = lean_nat_dec_eq(v_x_1070_, v___x_1093_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; uint8_t v___x_1096_; 
lean_dec(v_h__7_1078_);
v___x_1095_ = lean_unsigned_to_nat(7u);
v___x_1096_ = lean_nat_dec_eq(v_x_1070_, v___x_1095_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
lean_dec(v_h__8_1079_);
v___x_1097_ = lean_apply_10(v_h__9_1080_, v_x_1070_, v_x_1071_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; 
lean_dec(v_h__9_1080_);
lean_dec(v_x_1070_);
v___x_1098_ = lean_apply_1(v_h__8_1079_, v_x_1071_);
return v___x_1098_;
}
}
else
{
lean_object* v___x_1099_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_x_1070_);
v___x_1099_ = lean_apply_1(v_h__7_1078_, v_x_1071_);
return v___x_1099_;
}
}
else
{
lean_object* v___x_1100_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_x_1070_);
v___x_1100_ = lean_apply_1(v_h__6_1077_, v_x_1071_);
return v___x_1100_;
}
}
else
{
lean_object* v___x_1101_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_h__6_1077_);
lean_dec(v_x_1070_);
v___x_1101_ = lean_apply_1(v_h__5_1076_, v_x_1071_);
return v___x_1101_;
}
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_h__6_1077_);
lean_dec(v_h__5_1076_);
lean_dec(v_x_1070_);
v___x_1102_ = lean_apply_1(v_h__4_1075_, v_x_1071_);
return v___x_1102_;
}
}
else
{
lean_object* v___x_1103_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_h__6_1077_);
lean_dec(v_h__5_1076_);
lean_dec(v_h__4_1075_);
lean_dec(v_x_1070_);
v___x_1103_ = lean_apply_1(v_h__3_1074_, v_x_1071_);
return v___x_1103_;
}
}
else
{
lean_object* v___x_1104_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_h__6_1077_);
lean_dec(v_h__5_1076_);
lean_dec(v_h__4_1075_);
lean_dec(v_h__3_1074_);
lean_dec(v_x_1070_);
v___x_1104_ = lean_apply_1(v_h__2_1073_, v_x_1071_);
return v___x_1104_;
}
}
else
{
lean_object* v___x_1105_; 
lean_dec(v_h__9_1080_);
lean_dec(v_h__8_1079_);
lean_dec(v_h__7_1078_);
lean_dec(v_h__6_1077_);
lean_dec(v_h__5_1076_);
lean_dec(v_h__4_1075_);
lean_dec(v_h__3_1074_);
lean_dec(v_h__2_1073_);
lean_dec(v_x_1070_);
v___x_1105_ = lean_apply_1(v_h__1_1072_, v_x_1071_);
return v___x_1105_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter___redArg(lean_object* v_g_1106_, lean_object* v_h__1_1107_, lean_object* v_h__2_1108_, lean_object* v_h__3_1109_, lean_object* v_h__4_1110_, lean_object* v_h__5_1111_, lean_object* v_h__6_1112_, lean_object* v_h__7_1113_){
_start:
{
switch(lean_obj_tag(v_g_1106_))
{
case 5:
{
lean_object* v_q_1114_; lean_object* v___x_1115_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__6_1112_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__2_1108_);
v_q_1114_ = lean_ctor_get(v_g_1106_, 0);
lean_inc(v_q_1114_);
lean_dec_ref_known(v_g_1106_, 1);
v___x_1115_ = lean_apply_1(v_h__1_1107_, v_q_1114_);
return v___x_1115_;
}
case 6:
{
lean_object* v_q_1116_; lean_object* v___x_1117_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__6_1112_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__1_1107_);
v_q_1116_ = lean_ctor_get(v_g_1106_, 0);
lean_inc(v_q_1116_);
lean_dec_ref_known(v_g_1106_, 1);
v___x_1117_ = lean_apply_1(v_h__2_1108_, v_q_1116_);
return v___x_1117_;
}
case 2:
{
lean_object* v_q_1118_; lean_object* v___x_1119_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__6_1112_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__2_1108_);
lean_dec(v_h__1_1107_);
v_q_1118_ = lean_ctor_get(v_g_1106_, 0);
lean_inc(v_q_1118_);
lean_dec_ref_known(v_g_1106_, 1);
v___x_1119_ = lean_apply_1(v_h__3_1109_, v_q_1118_);
return v___x_1119_;
}
case 3:
{
lean_object* v_q_1120_; lean_object* v___x_1121_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__6_1112_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__2_1108_);
lean_dec(v_h__1_1107_);
v_q_1120_ = lean_ctor_get(v_g_1106_, 0);
lean_inc(v_q_1120_);
lean_dec_ref_known(v_g_1106_, 1);
v___x_1121_ = lean_apply_1(v_h__4_1110_, v_q_1120_);
return v___x_1121_;
}
case 4:
{
lean_object* v_q_1122_; lean_object* v___x_1123_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__6_1112_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__2_1108_);
lean_dec(v_h__1_1107_);
v_q_1122_ = lean_ctor_get(v_g_1106_, 0);
lean_inc(v_q_1122_);
lean_dec_ref_known(v_g_1106_, 1);
v___x_1123_ = lean_apply_1(v_h__5_1111_, v_q_1122_);
return v___x_1123_;
}
case 7:
{
lean_object* v_theta_1124_; lean_object* v_q_1125_; lean_object* v___x_1126_; 
lean_dec(v_h__7_1113_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__2_1108_);
lean_dec(v_h__1_1107_);
v_theta_1124_ = lean_ctor_get(v_g_1106_, 0);
lean_inc_ref(v_theta_1124_);
v_q_1125_ = lean_ctor_get(v_g_1106_, 1);
lean_inc(v_q_1125_);
lean_dec_ref_known(v_g_1106_, 2);
v___x_1126_ = lean_apply_2(v_h__6_1112_, v_theta_1124_, v_q_1125_);
return v___x_1126_;
}
default: 
{
lean_object* v___x_1127_; 
lean_dec(v_h__6_1112_);
lean_dec(v_h__5_1111_);
lean_dec(v_h__4_1110_);
lean_dec(v_h__3_1109_);
lean_dec(v_h__2_1108_);
lean_dec(v_h__1_1107_);
v___x_1127_ = lean_apply_7(v_h__7_1113_, v_g_1106_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1127_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter(lean_object* v_motive_1128_, lean_object* v_g_1129_, lean_object* v_h__1_1130_, lean_object* v_h__2_1131_, lean_object* v_h__3_1132_, lean_object* v_h__4_1133_, lean_object* v_h__5_1134_, lean_object* v_h__6_1135_, lean_object* v_h__7_1136_){
_start:
{
switch(lean_obj_tag(v_g_1129_))
{
case 5:
{
lean_object* v_q_1137_; lean_object* v___x_1138_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__6_1135_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__2_1131_);
v_q_1137_ = lean_ctor_get(v_g_1129_, 0);
lean_inc(v_q_1137_);
lean_dec_ref_known(v_g_1129_, 1);
v___x_1138_ = lean_apply_1(v_h__1_1130_, v_q_1137_);
return v___x_1138_;
}
case 6:
{
lean_object* v_q_1139_; lean_object* v___x_1140_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__6_1135_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__1_1130_);
v_q_1139_ = lean_ctor_get(v_g_1129_, 0);
lean_inc(v_q_1139_);
lean_dec_ref_known(v_g_1129_, 1);
v___x_1140_ = lean_apply_1(v_h__2_1131_, v_q_1139_);
return v___x_1140_;
}
case 2:
{
lean_object* v_q_1141_; lean_object* v___x_1142_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__6_1135_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__2_1131_);
lean_dec(v_h__1_1130_);
v_q_1141_ = lean_ctor_get(v_g_1129_, 0);
lean_inc(v_q_1141_);
lean_dec_ref_known(v_g_1129_, 1);
v___x_1142_ = lean_apply_1(v_h__3_1132_, v_q_1141_);
return v___x_1142_;
}
case 3:
{
lean_object* v_q_1143_; lean_object* v___x_1144_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__6_1135_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__2_1131_);
lean_dec(v_h__1_1130_);
v_q_1143_ = lean_ctor_get(v_g_1129_, 0);
lean_inc(v_q_1143_);
lean_dec_ref_known(v_g_1129_, 1);
v___x_1144_ = lean_apply_1(v_h__4_1133_, v_q_1143_);
return v___x_1144_;
}
case 4:
{
lean_object* v_q_1145_; lean_object* v___x_1146_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__6_1135_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__2_1131_);
lean_dec(v_h__1_1130_);
v_q_1145_ = lean_ctor_get(v_g_1129_, 0);
lean_inc(v_q_1145_);
lean_dec_ref_known(v_g_1129_, 1);
v___x_1146_ = lean_apply_1(v_h__5_1134_, v_q_1145_);
return v___x_1146_;
}
case 7:
{
lean_object* v_theta_1147_; lean_object* v_q_1148_; lean_object* v___x_1149_; 
lean_dec(v_h__7_1136_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__2_1131_);
lean_dec(v_h__1_1130_);
v_theta_1147_ = lean_ctor_get(v_g_1129_, 0);
lean_inc_ref(v_theta_1147_);
v_q_1148_ = lean_ctor_get(v_g_1129_, 1);
lean_inc(v_q_1148_);
lean_dec_ref_known(v_g_1129_, 2);
v___x_1149_ = lean_apply_2(v_h__6_1135_, v_theta_1147_, v_q_1148_);
return v___x_1149_;
}
default: 
{
lean_object* v___x_1150_; 
lean_dec(v_h__6_1135_);
lean_dec(v_h__5_1134_);
lean_dec(v_h__4_1133_);
lean_dec(v_h__3_1132_);
lean_dec(v_h__2_1131_);
lean_dec(v_h__1_1130_);
v___x_1150_ = lean_apply_7(v_h__7_1136_, v_g_1129_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter___redArg(lean_object* v_x_1151_, lean_object* v_h__1_1152_, lean_object* v_h__2_1153_){
_start:
{
if (lean_obj_tag(v_x_1151_) == 1)
{
lean_object* v_q_1154_; lean_object* v___x_1155_; 
lean_dec(v_h__2_1153_);
v_q_1154_ = lean_ctor_get(v_x_1151_, 0);
lean_inc(v_q_1154_);
lean_dec_ref_known(v_x_1151_, 1);
v___x_1155_ = lean_apply_1(v_h__1_1152_, v_q_1154_);
return v___x_1155_;
}
else
{
lean_object* v___x_1156_; 
lean_dec(v_h__1_1152_);
v___x_1156_ = lean_apply_2(v_h__2_1153_, v_x_1151_, lean_box(0));
return v___x_1156_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter(lean_object* v_motive_1157_, lean_object* v_x_1158_, lean_object* v_h__1_1159_, lean_object* v_h__2_1160_){
_start:
{
if (lean_obj_tag(v_x_1158_) == 1)
{
lean_object* v_q_1161_; lean_object* v___x_1162_; 
lean_dec(v_h__2_1160_);
v_q_1161_ = lean_ctor_get(v_x_1158_, 0);
lean_inc(v_q_1161_);
lean_dec_ref_known(v_x_1158_, 1);
v___x_1162_ = lean_apply_1(v_h__1_1159_, v_q_1161_);
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; 
lean_dec(v_h__1_1159_);
v___x_1163_ = lean_apply_2(v_h__2_1160_, v_x_1158_, lean_box(0));
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter___redArg(lean_object* v_x_1164_, lean_object* v_h__1_1165_, lean_object* v_h__2_1166_){
_start:
{
if (lean_obj_tag(v_x_1164_) == 0)
{
lean_object* v_q_1167_; lean_object* v___x_1168_; 
lean_dec(v_h__2_1166_);
v_q_1167_ = lean_ctor_get(v_x_1164_, 0);
lean_inc(v_q_1167_);
lean_dec_ref_known(v_x_1164_, 1);
v___x_1168_ = lean_apply_1(v_h__1_1165_, v_q_1167_);
return v___x_1168_;
}
else
{
lean_object* v___x_1169_; 
lean_dec(v_h__1_1165_);
v___x_1169_ = lean_apply_2(v_h__2_1166_, v_x_1164_, lean_box(0));
return v___x_1169_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter(lean_object* v_motive_1170_, lean_object* v_x_1171_, lean_object* v_h__1_1172_, lean_object* v_h__2_1173_){
_start:
{
if (lean_obj_tag(v_x_1171_) == 0)
{
lean_object* v_q_1174_; lean_object* v___x_1175_; 
lean_dec(v_h__2_1173_);
v_q_1174_ = lean_ctor_get(v_x_1171_, 0);
lean_inc(v_q_1174_);
lean_dec_ref_known(v_x_1171_, 1);
v___x_1175_ = lean_apply_1(v_h__1_1172_, v_q_1174_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; 
lean_dec(v_h__1_1172_);
v___x_1176_ = lean_apply_2(v_h__2_1173_, v_x_1171_, lean_box(0));
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter___redArg(lean_object* v_x_1177_, lean_object* v_h__1_1178_, lean_object* v_h__2_1179_, lean_object* v_h__3_1180_){
_start:
{
if (lean_obj_tag(v_x_1177_) == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_dec(v_h__2_1179_);
lean_dec(v_h__1_1178_);
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_apply_1(v_h__3_1180_, v___x_1181_);
return v___x_1182_;
}
else
{
lean_object* v_val_1183_; 
lean_dec(v_h__3_1180_);
v_val_1183_ = lean_ctor_get(v_x_1177_, 0);
lean_inc(v_val_1183_);
lean_dec_ref_known(v_x_1177_, 1);
if (lean_obj_tag(v_val_1183_) == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_dec(v_h__1_1178_);
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_apply_1(v_h__2_1179_, v___x_1184_);
return v___x_1185_;
}
else
{
lean_object* v_val_1186_; lean_object* v___x_1187_; 
lean_dec(v_h__2_1179_);
v_val_1186_ = lean_ctor_get(v_val_1183_, 0);
lean_inc(v_val_1186_);
lean_dec_ref_known(v_val_1183_, 1);
v___x_1187_ = lean_apply_1(v_h__1_1178_, v_val_1186_);
return v___x_1187_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter(lean_object* v_motive_1188_, lean_object* v_x_1189_, lean_object* v_h__1_1190_, lean_object* v_h__2_1191_, lean_object* v_h__3_1192_){
_start:
{
if (lean_obj_tag(v_x_1189_) == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_dec(v_h__2_1191_);
lean_dec(v_h__1_1190_);
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_apply_1(v_h__3_1192_, v___x_1193_);
return v___x_1194_;
}
else
{
lean_object* v_val_1195_; 
lean_dec(v_h__3_1192_);
v_val_1195_ = lean_ctor_get(v_x_1189_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v_x_1189_, 1);
if (lean_obj_tag(v_val_1195_) == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec(v_h__1_1190_);
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_apply_1(v_h__2_1191_, v___x_1196_);
return v___x_1197_;
}
else
{
lean_object* v_val_1198_; lean_object* v___x_1199_; 
lean_dec(v_h__2_1191_);
v_val_1198_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_val_1198_);
lean_dec_ref_known(v_val_1195_, 1);
v___x_1199_ = lean_apply_1(v_h__1_1190_, v_val_1198_);
return v___x_1199_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter___redArg(lean_object* v_x_1200_, lean_object* v_h__1_1201_, lean_object* v_h__2_1202_){
_start:
{
if (lean_obj_tag(v_x_1200_) == 0)
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_dec(v_h__1_1201_);
v___x_1203_ = lean_box(0);
v___x_1204_ = lean_apply_1(v_h__2_1202_, v___x_1203_);
return v___x_1204_;
}
else
{
lean_object* v_val_1205_; lean_object* v___x_1206_; 
lean_dec(v_h__2_1202_);
v_val_1205_ = lean_ctor_get(v_x_1200_, 0);
lean_inc(v_val_1205_);
lean_dec_ref_known(v_x_1200_, 1);
v___x_1206_ = lean_apply_1(v_h__1_1201_, v_val_1205_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter(lean_object* v_motive_1207_, lean_object* v_x_1208_, lean_object* v_h__1_1209_, lean_object* v_h__2_1210_){
_start:
{
if (lean_obj_tag(v_x_1208_) == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_dec(v_h__1_1209_);
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_apply_1(v_h__2_1210_, v___x_1211_);
return v___x_1212_;
}
else
{
lean_object* v_val_1213_; lean_object* v___x_1214_; 
lean_dec(v_h__2_1210_);
v_val_1213_ = lean_ctor_get(v_x_1208_, 0);
lean_inc(v_val_1213_);
lean_dec_ref_known(v_x_1208_, 1);
v___x_1214_ = lean_apply_1(v_h__1_1209_, v_val_1213_);
return v___x_1214_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg(lean_object* v_x_1215_, lean_object* v_x_1216_, lean_object* v_h__1_1217_, lean_object* v_h__2_1218_){
_start:
{
lean_object* v_zero_1219_; uint8_t v_isZero_1220_; 
v_zero_1219_ = lean_unsigned_to_nat(0u);
v_isZero_1220_ = lean_nat_dec_eq(v_x_1215_, v_zero_1219_);
if (v_isZero_1220_ == 1)
{
lean_object* v___x_1221_; 
lean_dec(v_h__2_1218_);
v___x_1221_ = lean_apply_1(v_h__1_1217_, v_x_1216_);
return v___x_1221_;
}
else
{
lean_object* v_one_1222_; lean_object* v_n_1223_; lean_object* v___x_1224_; 
lean_dec(v_h__1_1217_);
v_one_1222_ = lean_unsigned_to_nat(1u);
v_n_1223_ = lean_nat_sub(v_x_1215_, v_one_1222_);
v___x_1224_ = lean_apply_2(v_h__2_1218_, v_n_1223_, v_x_1216_);
return v___x_1224_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg___boxed(lean_object* v_x_1225_, lean_object* v_x_1226_, lean_object* v_h__1_1227_, lean_object* v_h__2_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg(v_x_1225_, v_x_1226_, v_h__1_1227_, v_h__2_1228_);
lean_dec(v_x_1225_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter(lean_object* v_motive_1230_, lean_object* v_x_1231_, lean_object* v_x_1232_, lean_object* v_h__1_1233_, lean_object* v_h__2_1234_){
_start:
{
lean_object* v_zero_1235_; uint8_t v_isZero_1236_; 
v_zero_1235_ = lean_unsigned_to_nat(0u);
v_isZero_1236_ = lean_nat_dec_eq(v_x_1231_, v_zero_1235_);
if (v_isZero_1236_ == 1)
{
lean_object* v___x_1237_; 
lean_dec(v_h__2_1234_);
v___x_1237_ = lean_apply_1(v_h__1_1233_, v_x_1232_);
return v___x_1237_;
}
else
{
lean_object* v_one_1238_; lean_object* v_n_1239_; lean_object* v___x_1240_; 
lean_dec(v_h__1_1233_);
v_one_1238_ = lean_unsigned_to_nat(1u);
v_n_1239_ = lean_nat_sub(v_x_1231_, v_one_1238_);
v___x_1240_ = lean_apply_2(v_h__2_1234_, v_n_1239_, v_x_1232_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___boxed(lean_object* v_motive_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_, lean_object* v_h__1_1244_, lean_object* v_h__2_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter(v_motive_1241_, v_x_1242_, v_x_1243_, v_h__1_1244_, v_h__2_1245_);
lean_dec(v_x_1242_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamards_match__1_splitter___redArg(lean_object* v_x_1247_, lean_object* v_h__1_1248_, lean_object* v_h__2_1249_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_dec(v_h__2_1249_);
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_apply_1(v_h__1_1248_, v___x_1250_);
return v___x_1251_;
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1253_; 
lean_dec(v_h__1_1248_);
v_val_1252_ = lean_ctor_get(v_x_1247_, 0);
lean_inc(v_val_1252_);
lean_dec_ref_known(v_x_1247_, 1);
v___x_1253_ = lean_apply_1(v_h__2_1249_, v_val_1252_);
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamards_match__1_splitter(lean_object* v_motive_1254_, lean_object* v_x_1255_, lean_object* v_h__1_1256_, lean_object* v_h__2_1257_){
_start:
{
if (lean_obj_tag(v_x_1255_) == 0)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_dec(v_h__2_1257_);
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_apply_1(v_h__1_1256_, v___x_1258_);
return v___x_1259_;
}
else
{
lean_object* v_val_1260_; lean_object* v___x_1261_; 
lean_dec(v_h__1_1256_);
v_val_1260_ = lean_ctor_get(v_x_1255_, 0);
lean_inc(v_val_1260_);
lean_dec_ref_known(v_x_1255_, 1);
v___x_1261_ = lean_apply_1(v_h__2_1257_, v_val_1260_);
return v___x_1261_;
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCnot(lean_object* v_g_1262_, lean_object* v_c_1263_, lean_object* v_t_1264_){
_start:
{
lean_object* v_q_1266_; lean_object* v_q_1272_; 
switch(lean_obj_tag(v_g_1262_))
{
case 0:
{
lean_object* v_q_1276_; uint8_t v___x_1277_; 
v_q_1276_ = lean_ctor_get(v_g_1262_, 0);
v___x_1277_ = lean_nat_dec_eq(v_q_1276_, v_c_1263_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; 
v___x_1278_ = 1;
return v___x_1278_;
}
else
{
uint8_t v___x_1279_; 
v___x_1279_ = 0;
return v___x_1279_;
}
}
case 1:
{
lean_object* v_q_1280_; 
v_q_1280_ = lean_ctor_get(v_g_1262_, 0);
v_q_1266_ = v_q_1280_;
goto v___jp_1265_;
}
case 7:
{
lean_object* v_q_1281_; uint8_t v___x_1282_; 
v_q_1281_ = lean_ctor_get(v_g_1262_, 1);
v___x_1282_ = lean_nat_dec_eq(v_q_1281_, v_t_1264_);
if (v___x_1282_ == 0)
{
uint8_t v___x_1283_; 
v___x_1283_ = 1;
return v___x_1283_;
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = 0;
return v___x_1284_;
}
}
case 8:
{
lean_object* v_control_1285_; lean_object* v_target_1286_; uint8_t v___x_1287_; 
v_control_1285_ = lean_ctor_get(v_g_1262_, 0);
v_target_1286_ = lean_ctor_get(v_g_1262_, 1);
v___x_1287_ = lean_nat_dec_eq(v_control_1285_, v_t_1264_);
if (v___x_1287_ == 0)
{
uint8_t v___x_1288_; 
v___x_1288_ = lean_nat_dec_eq(v_target_1286_, v_c_1263_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = 1;
return v___x_1289_;
}
else
{
return v___x_1287_;
}
}
else
{
uint8_t v___x_1290_; 
v___x_1290_ = 0;
return v___x_1290_;
}
}
case 9:
{
lean_object* v_control_1291_; lean_object* v_target_1292_; uint8_t v___x_1293_; 
v_control_1291_ = lean_ctor_get(v_g_1262_, 0);
v_target_1292_ = lean_ctor_get(v_g_1262_, 1);
v___x_1293_ = lean_nat_dec_eq(v_control_1291_, v_t_1264_);
if (v___x_1293_ == 0)
{
uint8_t v___x_1294_; 
v___x_1294_ = lean_nat_dec_eq(v_target_1292_, v_t_1264_);
if (v___x_1294_ == 0)
{
uint8_t v___x_1295_; 
v___x_1295_ = 1;
return v___x_1295_;
}
else
{
return v___x_1293_;
}
}
else
{
uint8_t v___x_1296_; 
v___x_1296_ = 0;
return v___x_1296_;
}
}
case 10:
{
lean_object* v_control_u2081_1297_; lean_object* v_control_u2082_1298_; lean_object* v_target_1299_; uint8_t v___x_1300_; 
v_control_u2081_1297_ = lean_ctor_get(v_g_1262_, 0);
v_control_u2082_1298_ = lean_ctor_get(v_g_1262_, 1);
v_target_1299_ = lean_ctor_get(v_g_1262_, 2);
v___x_1300_ = lean_nat_dec_eq(v_control_u2081_1297_, v_c_1263_);
if (v___x_1300_ == 0)
{
uint8_t v___x_1301_; 
v___x_1301_ = lean_nat_dec_eq(v_control_u2081_1297_, v_t_1264_);
if (v___x_1301_ == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_nat_dec_eq(v_control_u2082_1298_, v_c_1263_);
if (v___x_1302_ == 0)
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_nat_dec_eq(v_control_u2082_1298_, v_t_1264_);
if (v___x_1303_ == 0)
{
uint8_t v___x_1304_; 
v___x_1304_ = lean_nat_dec_eq(v_target_1299_, v_c_1263_);
if (v___x_1304_ == 0)
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_nat_dec_eq(v_target_1299_, v_t_1264_);
if (v___x_1305_ == 0)
{
uint8_t v___x_1306_; 
v___x_1306_ = 1;
return v___x_1306_;
}
else
{
return v___x_1304_;
}
}
else
{
return v___x_1303_;
}
}
else
{
return v___x_1302_;
}
}
else
{
return v___x_1301_;
}
}
else
{
return v___x_1300_;
}
}
else
{
uint8_t v___x_1307_; 
v___x_1307_ = 0;
return v___x_1307_;
}
}
case 11:
{
lean_object* v_control_u2081_1308_; lean_object* v_control_u2082_1309_; lean_object* v_target_1310_; uint8_t v___x_1311_; 
v_control_u2081_1308_ = lean_ctor_get(v_g_1262_, 0);
v_control_u2082_1309_ = lean_ctor_get(v_g_1262_, 1);
v_target_1310_ = lean_ctor_get(v_g_1262_, 2);
v___x_1311_ = lean_nat_dec_eq(v_target_1310_, v_t_1264_);
if (v___x_1311_ == 0)
{
uint8_t v___x_1312_; 
v___x_1312_ = lean_nat_dec_eq(v_control_u2081_1308_, v_t_1264_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; 
v___x_1313_ = lean_nat_dec_eq(v_control_u2082_1309_, v_t_1264_);
if (v___x_1313_ == 0)
{
uint8_t v___x_1314_; 
v___x_1314_ = 1;
return v___x_1314_;
}
else
{
return v___x_1312_;
}
}
else
{
return v___x_1311_;
}
}
else
{
uint8_t v___x_1315_; 
v___x_1315_ = 0;
return v___x_1315_;
}
}
case 12:
{
lean_object* v_qubit_1316_; uint8_t v___x_1317_; 
v_qubit_1316_ = lean_ctor_get(v_g_1262_, 0);
v___x_1317_ = lean_nat_dec_eq(v_qubit_1316_, v_c_1263_);
if (v___x_1317_ == 0)
{
uint8_t v___x_1318_; 
v___x_1318_ = lean_nat_dec_eq(v_qubit_1316_, v_t_1264_);
if (v___x_1318_ == 0)
{
uint8_t v___x_1319_; 
v___x_1319_ = 1;
return v___x_1319_;
}
else
{
return v___x_1317_;
}
}
else
{
uint8_t v___x_1320_; 
v___x_1320_ = 0;
return v___x_1320_;
}
}
case 13:
{
lean_object* v_q_1321_; 
v_q_1321_ = lean_ctor_get(v_g_1262_, 0);
v_q_1266_ = v_q_1321_;
goto v___jp_1265_;
}
default: 
{
lean_object* v_q_1322_; 
v_q_1322_ = lean_ctor_get(v_g_1262_, 0);
v_q_1272_ = v_q_1322_;
goto v___jp_1271_;
}
}
v___jp_1265_:
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_nat_dec_eq(v_q_1266_, v_c_1263_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_eq(v_q_1266_, v_t_1264_);
if (v___x_1268_ == 0)
{
uint8_t v___x_1269_; 
v___x_1269_ = 1;
return v___x_1269_;
}
else
{
return v___x_1267_;
}
}
else
{
uint8_t v___x_1270_; 
v___x_1270_ = 0;
return v___x_1270_;
}
}
v___jp_1271_:
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_nat_dec_eq(v_q_1272_, v_t_1264_);
if (v___x_1273_ == 0)
{
uint8_t v___x_1274_; 
v___x_1274_ = 1;
return v___x_1274_;
}
else
{
uint8_t v___x_1275_; 
v___x_1275_ = 0;
return v___x_1275_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCnot___boxed(lean_object* v_g_1323_, lean_object* v_c_1324_, lean_object* v_t_1325_){
_start:
{
uint8_t v_res_1326_; lean_object* v_r_1327_; 
v_res_1326_ = lp_tzap_x2dlean_TzapLean_commutesPastCnot(v_g_1323_, v_c_1324_, v_t_1325_);
lean_dec(v_t_1325_);
lean_dec(v_c_1324_);
lean_dec_ref(v_g_1323_);
v_r_1327_ = lean_box(v_res_1326_);
return v_r_1327_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCz(lean_object* v_g_1328_, lean_object* v_a_1329_, lean_object* v_b_1330_){
_start:
{
lean_object* v_q_1332_; 
switch(lean_obj_tag(v_g_1328_))
{
case 0:
{
lean_object* v_q_1337_; 
v_q_1337_ = lean_ctor_get(v_g_1328_, 0);
v_q_1332_ = v_q_1337_;
goto v___jp_1331_;
}
case 1:
{
lean_object* v_q_1338_; 
v_q_1338_ = lean_ctor_get(v_g_1328_, 0);
v_q_1332_ = v_q_1338_;
goto v___jp_1331_;
}
case 8:
{
lean_object* v_target_1339_; uint8_t v___x_1340_; 
v_target_1339_ = lean_ctor_get(v_g_1328_, 1);
v___x_1340_ = lean_nat_dec_eq(v_target_1339_, v_a_1329_);
if (v___x_1340_ == 0)
{
uint8_t v___x_1341_; 
v___x_1341_ = lean_nat_dec_eq(v_target_1339_, v_b_1330_);
if (v___x_1341_ == 0)
{
uint8_t v___x_1342_; 
v___x_1342_ = 1;
return v___x_1342_;
}
else
{
return v___x_1340_;
}
}
else
{
uint8_t v___x_1343_; 
v___x_1343_ = 0;
return v___x_1343_;
}
}
case 10:
{
lean_object* v_target_1344_; uint8_t v___x_1345_; 
v_target_1344_ = lean_ctor_get(v_g_1328_, 2);
v___x_1345_ = lean_nat_dec_eq(v_target_1344_, v_a_1329_);
if (v___x_1345_ == 0)
{
uint8_t v___x_1346_; 
v___x_1346_ = lean_nat_dec_eq(v_target_1344_, v_b_1330_);
if (v___x_1346_ == 0)
{
uint8_t v___x_1347_; 
v___x_1347_ = 1;
return v___x_1347_;
}
else
{
return v___x_1345_;
}
}
else
{
uint8_t v___x_1348_; 
v___x_1348_ = 0;
return v___x_1348_;
}
}
case 12:
{
lean_object* v_qubit_1349_; uint8_t v___x_1350_; 
v_qubit_1349_ = lean_ctor_get(v_g_1328_, 0);
v___x_1350_ = lean_nat_dec_eq(v_qubit_1349_, v_a_1329_);
if (v___x_1350_ == 0)
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_nat_dec_eq(v_qubit_1349_, v_b_1330_);
if (v___x_1351_ == 0)
{
uint8_t v___x_1352_; 
v___x_1352_ = 1;
return v___x_1352_;
}
else
{
return v___x_1350_;
}
}
else
{
uint8_t v___x_1353_; 
v___x_1353_ = 0;
return v___x_1353_;
}
}
case 13:
{
lean_object* v_q_1354_; 
v_q_1354_ = lean_ctor_get(v_g_1328_, 0);
v_q_1332_ = v_q_1354_;
goto v___jp_1331_;
}
default: 
{
uint8_t v___x_1355_; 
v___x_1355_ = 1;
return v___x_1355_;
}
}
v___jp_1331_:
{
uint8_t v___x_1333_; 
v___x_1333_ = lean_nat_dec_eq(v_q_1332_, v_a_1329_);
if (v___x_1333_ == 0)
{
uint8_t v___x_1334_; 
v___x_1334_ = lean_nat_dec_eq(v_q_1332_, v_b_1330_);
if (v___x_1334_ == 0)
{
uint8_t v___x_1335_; 
v___x_1335_ = 1;
return v___x_1335_;
}
else
{
return v___x_1333_;
}
}
else
{
uint8_t v___x_1336_; 
v___x_1336_ = 0;
return v___x_1336_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCz___boxed(lean_object* v_g_1356_, lean_object* v_a_1357_, lean_object* v_b_1358_){
_start:
{
uint8_t v_res_1359_; lean_object* v_r_1360_; 
v_res_1359_ = lp_tzap_x2dlean_TzapLean_commutesPastCz(v_g_1356_, v_a_1357_, v_b_1358_);
lean_dec(v_b_1358_);
lean_dec(v_a_1357_);
lean_dec_ref(v_g_1356_);
v_r_1360_ = lean_box(v_res_1359_);
return v_r_1360_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_pairCommutes(lean_object* v_x_1361_, lean_object* v_x_1362_){
_start:
{
switch(lean_obj_tag(v_x_1361_))
{
case 8:
{
lean_object* v_control_1363_; lean_object* v_target_1364_; uint8_t v___x_1365_; 
v_control_1363_ = lean_ctor_get(v_x_1361_, 0);
v_target_1364_ = lean_ctor_get(v_x_1361_, 1);
v___x_1365_ = lp_tzap_x2dlean_TzapLean_commutesPastCnot(v_x_1362_, v_control_1363_, v_target_1364_);
return v___x_1365_;
}
case 9:
{
lean_object* v_control_1366_; lean_object* v_target_1367_; uint8_t v___x_1368_; 
v_control_1366_ = lean_ctor_get(v_x_1361_, 0);
v_target_1367_ = lean_ctor_get(v_x_1361_, 1);
v___x_1368_ = lp_tzap_x2dlean_TzapLean_commutesPastCz(v_x_1362_, v_control_1366_, v_target_1367_);
return v___x_1368_;
}
default: 
{
uint8_t v___x_1369_; 
v___x_1369_ = 0;
return v___x_1369_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_pairCommutes___boxed(lean_object* v_x_1370_, lean_object* v_x_1371_){
_start:
{
uint8_t v_res_1372_; lean_object* v_r_1373_; 
v_res_1372_ = lp_tzap_x2dlean_TzapLean_pairCommutes(v_x_1370_, v_x_1371_);
lean_dec_ref(v_x_1371_);
lean_dec_ref(v_x_1370_);
v_r_1373_ = lean_box(v_res_1372_);
return v_r_1373_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isPair(lean_object* v_x_1374_){
_start:
{
switch(lean_obj_tag(v_x_1374_))
{
case 8:
{
uint8_t v___x_1375_; 
v___x_1375_ = 1;
return v___x_1375_;
}
case 9:
{
uint8_t v___x_1376_; 
v___x_1376_ = 1;
return v___x_1376_;
}
default: 
{
uint8_t v___x_1377_; 
v___x_1377_ = 0;
return v___x_1377_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isPair___boxed(lean_object* v_x_1378_){
_start:
{
uint8_t v_res_1379_; lean_object* v_r_1380_; 
v_res_1379_ = lp_tzap_x2dlean_TzapLean_isPair(v_x_1378_);
lean_dec_ref(v_x_1378_);
v_r_1380_ = lean_box(v_res_1379_);
return v_r_1380_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner(lean_object* v_p_1381_, lean_object* v_x_1382_){
_start:
{
if (lean_obj_tag(v_x_1382_) == 0)
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_box(0);
return v___x_1383_;
}
else
{
lean_object* v_head_1384_; lean_object* v_tail_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1405_; 
v_head_1384_ = lean_ctor_get(v_x_1382_, 0);
v_tail_1385_ = lean_ctor_get(v_x_1382_, 1);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_x_1382_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1387_ = v_x_1382_;
v_isShared_1388_ = v_isSharedCheck_1405_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_tail_1385_);
lean_inc(v_head_1384_);
lean_dec(v_x_1382_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1405_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
uint8_t v___x_1389_; 
v___x_1389_ = lp_tzap_x2dlean_TzapLean_gatesEqual(v_p_1381_, v_head_1384_);
if (v___x_1389_ == 0)
{
uint8_t v___x_1390_; 
v___x_1390_ = lp_tzap_x2dlean_TzapLean_pairCommutes(v_p_1381_, v_head_1384_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_del_object(v___x_1387_);
lean_dec(v_tail_1385_);
lean_dec(v_head_1384_);
v___x_1391_ = lean_box(0);
return v___x_1391_;
}
else
{
lean_object* v___x_1392_; 
v___x_1392_ = lp_tzap_x2dlean_TzapLean_findPartner(v_p_1381_, v_tail_1385_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_del_object(v___x_1387_);
lean_dec(v_head_1384_);
return v___x_1392_;
}
else
{
lean_object* v_val_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1403_; 
v_val_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_val_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v_val_1393_);
v___x_1398_ = v___x_1387_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_head_1384_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_val_1393_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1400_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1398_);
v___x_1400_ = v___x_1395_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
}
else
{
lean_object* v___x_1404_; 
lean_del_object(v___x_1387_);
lean_dec(v_head_1384_);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_tail_1385_);
return v___x_1404_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner___boxed(lean_object* v_p_1406_, lean_object* v_x_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = lp_tzap_x2dlean_TzapLean_findPartner(v_p_1406_, v_x_1407_);
lean_dec_ref(v_p_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingStep(lean_object* v_x_1409_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_box(0);
return v___x_1410_;
}
else
{
lean_object* v_head_1411_; lean_object* v_tail_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1442_; 
v_head_1411_ = lean_ctor_get(v_x_1409_, 0);
v_tail_1412_ = lean_ctor_get(v_x_1409_, 1);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_x_1409_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1414_ = v_x_1409_;
v_isShared_1415_ = v_isSharedCheck_1442_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_tail_1412_);
lean_inc(v_head_1411_);
lean_dec(v_x_1409_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1442_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
uint8_t v___x_1416_; 
v___x_1416_ = lp_tzap_x2dlean_TzapLean_isPair(v_head_1411_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_tail_1412_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_del_object(v___x_1414_);
lean_dec(v_head_1411_);
return v___x_1417_;
}
else
{
lean_object* v_val_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1428_; 
v_val_1418_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1420_ = v___x_1417_;
v_isShared_1421_ = v_isSharedCheck_1428_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_val_1418_);
lean_dec(v___x_1417_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1428_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 1, v_val_1418_);
v___x_1423_ = v___x_1414_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_head_1411_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v_val_1418_);
v___x_1423_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
lean_object* v___x_1425_; 
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 0, v___x_1423_);
v___x_1425_ = v___x_1420_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
else
{
lean_object* v___x_1429_; 
lean_inc(v_tail_1412_);
v___x_1429_ = lp_tzap_x2dlean_TzapLean_findPartner(v_head_1411_, v_tail_1412_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v___x_1430_; 
v___x_1430_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_tail_1412_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_del_object(v___x_1414_);
lean_dec(v_head_1411_);
return v___x_1430_;
}
else
{
lean_object* v_val_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1441_; 
v_val_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1441_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_val_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1441_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 1, v_val_1431_);
v___x_1436_ = v___x_1414_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_head_1411_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_val_1431_);
v___x_1436_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1436_);
v___x_1438_ = v___x_1433_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
else
{
lean_del_object(v___x_1414_);
lean_dec(v_tail_1412_);
lean_dec(v_head_1411_);
return v___x_1429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingFuel(lean_object* v_x_1443_, lean_object* v_x_1444_){
_start:
{
lean_object* v_zero_1445_; uint8_t v_isZero_1446_; 
v_zero_1445_ = lean_unsigned_to_nat(0u);
v_isZero_1446_ = lean_nat_dec_eq(v_x_1443_, v_zero_1445_);
if (v_isZero_1446_ == 1)
{
lean_dec(v_x_1443_);
return v_x_1444_;
}
else
{
lean_object* v___x_1447_; 
lean_inc(v_x_1444_);
v___x_1447_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_x_1444_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_dec(v_x_1443_);
return v_x_1444_;
}
else
{
lean_object* v_val_1448_; lean_object* v_one_1449_; lean_object* v_n_1450_; 
lean_dec(v_x_1444_);
v_val_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_val_1448_);
lean_dec_ref_known(v___x_1447_, 1);
v_one_1449_ = lean_unsigned_to_nat(1u);
v_n_1450_ = lean_nat_sub(v_x_1443_, v_one_1449_);
lean_dec(v_x_1443_);
v_x_1443_ = v_n_1450_;
v_x_1444_ = v_val_1448_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingPairs(lean_object* v_gs_1452_){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = l_List_lengthTR___redArg(v_gs_1452_);
v___x_1454_ = lp_tzap_x2dlean_TzapLean_cancelCommutingFuel(v___x_1453_, v_gs_1452_);
return v___x_1454_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_IsDiagGate(lean_object* v_x_1455_){
_start:
{
switch(lean_obj_tag(v_x_1455_))
{
case 2:
{
uint8_t v___x_1456_; 
v___x_1456_ = 1;
return v___x_1456_;
}
case 3:
{
uint8_t v___x_1457_; 
v___x_1457_ = 1;
return v___x_1457_;
}
case 4:
{
uint8_t v___x_1458_; 
v___x_1458_ = 1;
return v___x_1458_;
}
case 5:
{
uint8_t v___x_1459_; 
v___x_1459_ = 1;
return v___x_1459_;
}
case 6:
{
uint8_t v___x_1460_; 
v___x_1460_ = 1;
return v___x_1460_;
}
case 7:
{
uint8_t v___x_1461_; 
v___x_1461_ = 1;
return v___x_1461_;
}
case 9:
{
uint8_t v___x_1462_; 
v___x_1462_ = 1;
return v___x_1462_;
}
case 11:
{
uint8_t v___x_1463_; 
v___x_1463_ = 1;
return v___x_1463_;
}
default: 
{
uint8_t v___x_1464_; 
v___x_1464_ = 0;
return v___x_1464_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_IsDiagGate___boxed(lean_object* v_x_1465_){
_start:
{
uint8_t v_res_1466_; lean_object* v_r_1467_; 
v_res_1466_ = lp_tzap_x2dlean_TzapLean_IsDiagGate(v_x_1465_);
lean_dec_ref(v_x_1465_);
v_r_1467_ = lean_box(v_res_1466_);
return v_r_1467_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter___redArg(lean_object* v_x_1468_, lean_object* v_h__1_1469_, lean_object* v_h__2_1470_, lean_object* v_h__3_1471_, lean_object* v_h__4_1472_, lean_object* v_h__5_1473_, lean_object* v_h__6_1474_, lean_object* v_h__7_1475_, lean_object* v_h__8_1476_, lean_object* v_h__9_1477_){
_start:
{
switch(lean_obj_tag(v_x_1468_))
{
case 2:
{
lean_object* v_q_1478_; lean_object* v___x_1479_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
v_q_1478_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_q_1478_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1479_ = lean_apply_1(v_h__1_1469_, v_q_1478_);
return v___x_1479_;
}
case 3:
{
lean_object* v_q_1480_; lean_object* v___x_1481_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__1_1469_);
v_q_1480_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_q_1480_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1481_ = lean_apply_1(v_h__2_1470_, v_q_1480_);
return v___x_1481_;
}
case 4:
{
lean_object* v_q_1482_; lean_object* v___x_1483_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_q_1482_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_q_1482_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1483_ = lean_apply_1(v_h__3_1471_, v_q_1482_);
return v___x_1483_;
}
case 5:
{
lean_object* v_q_1484_; lean_object* v___x_1485_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_q_1484_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_q_1484_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1485_ = lean_apply_1(v_h__4_1472_, v_q_1484_);
return v___x_1485_;
}
case 6:
{
lean_object* v_q_1486_; lean_object* v___x_1487_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_q_1486_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_q_1486_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1487_ = lean_apply_1(v_h__5_1473_, v_q_1486_);
return v___x_1487_;
}
case 7:
{
lean_object* v_theta_1488_; lean_object* v_q_1489_; lean_object* v___x_1490_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_theta_1488_ = lean_ctor_get(v_x_1468_, 0);
lean_inc_ref(v_theta_1488_);
v_q_1489_ = lean_ctor_get(v_x_1468_, 1);
lean_inc(v_q_1489_);
lean_dec_ref_known(v_x_1468_, 2);
v___x_1490_ = lean_apply_2(v_h__6_1474_, v_theta_1488_, v_q_1489_);
return v___x_1490_;
}
case 9:
{
lean_object* v_control_1491_; lean_object* v_target_1492_; lean_object* v___x_1493_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__8_1476_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_control_1491_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_control_1491_);
v_target_1492_ = lean_ctor_get(v_x_1468_, 1);
lean_inc(v_target_1492_);
lean_dec_ref_known(v_x_1468_, 2);
v___x_1493_ = lean_apply_2(v_h__7_1475_, v_control_1491_, v_target_1492_);
return v___x_1493_;
}
case 11:
{
lean_object* v_control_u2081_1494_; lean_object* v_control_u2082_1495_; lean_object* v_target_1496_; lean_object* v___x_1497_; 
lean_dec(v_h__9_1477_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v_control_u2081_1494_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_control_u2081_1494_);
v_control_u2082_1495_ = lean_ctor_get(v_x_1468_, 1);
lean_inc(v_control_u2082_1495_);
v_target_1496_ = lean_ctor_get(v_x_1468_, 2);
lean_inc(v_target_1496_);
lean_dec_ref_known(v_x_1468_, 3);
v___x_1497_ = lean_apply_3(v_h__8_1476_, v_control_u2081_1494_, v_control_u2082_1495_, v_target_1496_);
return v___x_1497_;
}
default: 
{
lean_object* v___x_1498_; 
lean_dec(v_h__8_1476_);
lean_dec(v_h__7_1475_);
lean_dec(v_h__6_1474_);
lean_dec(v_h__5_1473_);
lean_dec(v_h__4_1472_);
lean_dec(v_h__3_1471_);
lean_dec(v_h__2_1470_);
lean_dec(v_h__1_1469_);
v___x_1498_ = lean_apply_9(v_h__9_1477_, v_x_1468_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1498_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter(lean_object* v_motive_1499_, lean_object* v_x_1500_, lean_object* v_h__1_1501_, lean_object* v_h__2_1502_, lean_object* v_h__3_1503_, lean_object* v_h__4_1504_, lean_object* v_h__5_1505_, lean_object* v_h__6_1506_, lean_object* v_h__7_1507_, lean_object* v_h__8_1508_, lean_object* v_h__9_1509_){
_start:
{
switch(lean_obj_tag(v_x_1500_))
{
case 2:
{
lean_object* v_q_1510_; lean_object* v___x_1511_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
v_q_1510_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_q_1510_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1511_ = lean_apply_1(v_h__1_1501_, v_q_1510_);
return v___x_1511_;
}
case 3:
{
lean_object* v_q_1512_; lean_object* v___x_1513_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__1_1501_);
v_q_1512_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_q_1512_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1513_ = lean_apply_1(v_h__2_1502_, v_q_1512_);
return v___x_1513_;
}
case 4:
{
lean_object* v_q_1514_; lean_object* v___x_1515_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_q_1514_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_q_1514_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1515_ = lean_apply_1(v_h__3_1503_, v_q_1514_);
return v___x_1515_;
}
case 5:
{
lean_object* v_q_1516_; lean_object* v___x_1517_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_q_1516_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_q_1516_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1517_ = lean_apply_1(v_h__4_1504_, v_q_1516_);
return v___x_1517_;
}
case 6:
{
lean_object* v_q_1518_; lean_object* v___x_1519_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_q_1518_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_q_1518_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1519_ = lean_apply_1(v_h__5_1505_, v_q_1518_);
return v___x_1519_;
}
case 7:
{
lean_object* v_theta_1520_; lean_object* v_q_1521_; lean_object* v___x_1522_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_theta_1520_ = lean_ctor_get(v_x_1500_, 0);
lean_inc_ref(v_theta_1520_);
v_q_1521_ = lean_ctor_get(v_x_1500_, 1);
lean_inc(v_q_1521_);
lean_dec_ref_known(v_x_1500_, 2);
v___x_1522_ = lean_apply_2(v_h__6_1506_, v_theta_1520_, v_q_1521_);
return v___x_1522_;
}
case 9:
{
lean_object* v_control_1523_; lean_object* v_target_1524_; lean_object* v___x_1525_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__8_1508_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_control_1523_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_control_1523_);
v_target_1524_ = lean_ctor_get(v_x_1500_, 1);
lean_inc(v_target_1524_);
lean_dec_ref_known(v_x_1500_, 2);
v___x_1525_ = lean_apply_2(v_h__7_1507_, v_control_1523_, v_target_1524_);
return v___x_1525_;
}
case 11:
{
lean_object* v_control_u2081_1526_; lean_object* v_control_u2082_1527_; lean_object* v_target_1528_; lean_object* v___x_1529_; 
lean_dec(v_h__9_1509_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v_control_u2081_1526_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_control_u2081_1526_);
v_control_u2082_1527_ = lean_ctor_get(v_x_1500_, 1);
lean_inc(v_control_u2082_1527_);
v_target_1528_ = lean_ctor_get(v_x_1500_, 2);
lean_inc(v_target_1528_);
lean_dec_ref_known(v_x_1500_, 3);
v___x_1529_ = lean_apply_3(v_h__8_1508_, v_control_u2081_1526_, v_control_u2082_1527_, v_target_1528_);
return v___x_1529_;
}
default: 
{
lean_object* v___x_1530_; 
lean_dec(v_h__8_1508_);
lean_dec(v_h__7_1507_);
lean_dec(v_h__6_1506_);
lean_dec(v_h__5_1505_);
lean_dec(v_h__4_1504_);
lean_dec(v_h__3_1503_);
lean_dec(v_h__2_1502_);
lean_dec(v_h__1_1501_);
v___x_1530_ = lean_apply_9(v_h__9_1509_, v_x_1500_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1530_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter___redArg(lean_object* v_g_1531_, lean_object* v_h__1_1532_, lean_object* v_h__2_1533_, lean_object* v_h__3_1534_, lean_object* v_h__4_1535_, lean_object* v_h__5_1536_, lean_object* v_h__6_1537_, lean_object* v_h__7_1538_, lean_object* v_h__8_1539_, lean_object* v_h__9_1540_, lean_object* v_h__10_1541_, lean_object* v_h__11_1542_, lean_object* v_h__12_1543_, lean_object* v_h__13_1544_, lean_object* v_h__14_1545_){
_start:
{
switch(lean_obj_tag(v_g_1531_))
{
case 0:
{
lean_object* v_q_1546_; lean_object* v___x_1547_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
v_q_1546_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1546_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1547_ = lean_apply_1(v_h__1_1532_, v_q_1546_);
return v___x_1547_;
}
case 1:
{
lean_object* v_q_1548_; lean_object* v___x_1549_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__1_1532_);
v_q_1548_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1548_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1549_ = lean_apply_1(v_h__2_1533_, v_q_1548_);
return v___x_1549_;
}
case 2:
{
lean_object* v_q_1550_; lean_object* v___x_1551_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1550_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1550_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1551_ = lean_apply_1(v_h__3_1534_, v_q_1550_);
return v___x_1551_;
}
case 3:
{
lean_object* v_q_1552_; lean_object* v___x_1553_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1552_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1552_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1553_ = lean_apply_1(v_h__4_1535_, v_q_1552_);
return v___x_1553_;
}
case 4:
{
lean_object* v_q_1554_; lean_object* v___x_1555_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1554_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1554_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1555_ = lean_apply_1(v_h__5_1536_, v_q_1554_);
return v___x_1555_;
}
case 5:
{
lean_object* v_q_1556_; lean_object* v___x_1557_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1556_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1556_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1557_ = lean_apply_1(v_h__6_1537_, v_q_1556_);
return v___x_1557_;
}
case 6:
{
lean_object* v_q_1558_; lean_object* v___x_1559_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1558_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1558_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1559_ = lean_apply_1(v_h__7_1538_, v_q_1558_);
return v___x_1559_;
}
case 7:
{
lean_object* v_theta_1560_; lean_object* v_q_1561_; lean_object* v___x_1562_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_theta_1560_ = lean_ctor_get(v_g_1531_, 0);
lean_inc_ref(v_theta_1560_);
v_q_1561_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_q_1561_);
lean_dec_ref_known(v_g_1531_, 2);
v___x_1562_ = lean_apply_2(v_h__8_1539_, v_theta_1560_, v_q_1561_);
return v___x_1562_;
}
case 8:
{
lean_object* v_control_1563_; lean_object* v_target_1564_; lean_object* v___x_1565_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_control_1563_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_control_1563_);
v_target_1564_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_target_1564_);
lean_dec_ref_known(v_g_1531_, 2);
v___x_1565_ = lean_apply_2(v_h__9_1540_, v_control_1563_, v_target_1564_);
return v___x_1565_;
}
case 9:
{
lean_object* v_control_1566_; lean_object* v_target_1567_; lean_object* v___x_1568_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_control_1566_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_control_1566_);
v_target_1567_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_target_1567_);
lean_dec_ref_known(v_g_1531_, 2);
v___x_1568_ = lean_apply_2(v_h__10_1541_, v_control_1566_, v_target_1567_);
return v___x_1568_;
}
case 10:
{
lean_object* v_control_u2081_1569_; lean_object* v_control_u2082_1570_; lean_object* v_target_1571_; lean_object* v___x_1572_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_control_u2081_1569_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_control_u2081_1569_);
v_control_u2082_1570_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_control_u2082_1570_);
v_target_1571_ = lean_ctor_get(v_g_1531_, 2);
lean_inc(v_target_1571_);
lean_dec_ref_known(v_g_1531_, 3);
v___x_1572_ = lean_apply_3(v_h__11_1542_, v_control_u2081_1569_, v_control_u2082_1570_, v_target_1571_);
return v___x_1572_;
}
case 11:
{
lean_object* v_control_u2081_1573_; lean_object* v_control_u2082_1574_; lean_object* v_target_1575_; lean_object* v___x_1576_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__13_1544_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_control_u2081_1573_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_control_u2081_1573_);
v_control_u2082_1574_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_control_u2082_1574_);
v_target_1575_ = lean_ctor_get(v_g_1531_, 2);
lean_inc(v_target_1575_);
lean_dec_ref_known(v_g_1531_, 3);
v___x_1576_ = lean_apply_3(v_h__12_1543_, v_control_u2081_1573_, v_control_u2082_1574_, v_target_1575_);
return v___x_1576_;
}
case 12:
{
lean_object* v_qubit_1577_; lean_object* v_cbit_1578_; lean_object* v___x_1579_; 
lean_dec(v_h__14_1545_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_qubit_1577_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_qubit_1577_);
v_cbit_1578_ = lean_ctor_get(v_g_1531_, 1);
lean_inc(v_cbit_1578_);
lean_dec_ref_known(v_g_1531_, 2);
v___x_1579_ = lean_apply_2(v_h__13_1544_, v_qubit_1577_, v_cbit_1578_);
return v___x_1579_;
}
default: 
{
lean_object* v_q_1580_; lean_object* v___x_1581_; 
lean_dec(v_h__13_1544_);
lean_dec(v_h__12_1543_);
lean_dec(v_h__11_1542_);
lean_dec(v_h__10_1541_);
lean_dec(v_h__9_1540_);
lean_dec(v_h__8_1539_);
lean_dec(v_h__7_1538_);
lean_dec(v_h__6_1537_);
lean_dec(v_h__5_1536_);
lean_dec(v_h__4_1535_);
lean_dec(v_h__3_1534_);
lean_dec(v_h__2_1533_);
lean_dec(v_h__1_1532_);
v_q_1580_ = lean_ctor_get(v_g_1531_, 0);
lean_inc(v_q_1580_);
lean_dec_ref_known(v_g_1531_, 1);
v___x_1581_ = lean_apply_1(v_h__14_1545_, v_q_1580_);
return v___x_1581_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter(lean_object* v_motive_1582_, lean_object* v_g_1583_, lean_object* v_h__1_1584_, lean_object* v_h__2_1585_, lean_object* v_h__3_1586_, lean_object* v_h__4_1587_, lean_object* v_h__5_1588_, lean_object* v_h__6_1589_, lean_object* v_h__7_1590_, lean_object* v_h__8_1591_, lean_object* v_h__9_1592_, lean_object* v_h__10_1593_, lean_object* v_h__11_1594_, lean_object* v_h__12_1595_, lean_object* v_h__13_1596_, lean_object* v_h__14_1597_){
_start:
{
switch(lean_obj_tag(v_g_1583_))
{
case 0:
{
lean_object* v_q_1598_; lean_object* v___x_1599_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
v_q_1598_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1598_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1599_ = lean_apply_1(v_h__1_1584_, v_q_1598_);
return v___x_1599_;
}
case 1:
{
lean_object* v_q_1600_; lean_object* v___x_1601_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__1_1584_);
v_q_1600_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1600_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1601_ = lean_apply_1(v_h__2_1585_, v_q_1600_);
return v___x_1601_;
}
case 2:
{
lean_object* v_q_1602_; lean_object* v___x_1603_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1602_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1602_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1603_ = lean_apply_1(v_h__3_1586_, v_q_1602_);
return v___x_1603_;
}
case 3:
{
lean_object* v_q_1604_; lean_object* v___x_1605_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1604_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1604_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1605_ = lean_apply_1(v_h__4_1587_, v_q_1604_);
return v___x_1605_;
}
case 4:
{
lean_object* v_q_1606_; lean_object* v___x_1607_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1606_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1606_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1607_ = lean_apply_1(v_h__5_1588_, v_q_1606_);
return v___x_1607_;
}
case 5:
{
lean_object* v_q_1608_; lean_object* v___x_1609_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1608_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1608_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1609_ = lean_apply_1(v_h__6_1589_, v_q_1608_);
return v___x_1609_;
}
case 6:
{
lean_object* v_q_1610_; lean_object* v___x_1611_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1610_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1610_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1611_ = lean_apply_1(v_h__7_1590_, v_q_1610_);
return v___x_1611_;
}
case 7:
{
lean_object* v_theta_1612_; lean_object* v_q_1613_; lean_object* v___x_1614_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_theta_1612_ = lean_ctor_get(v_g_1583_, 0);
lean_inc_ref(v_theta_1612_);
v_q_1613_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_q_1613_);
lean_dec_ref_known(v_g_1583_, 2);
v___x_1614_ = lean_apply_2(v_h__8_1591_, v_theta_1612_, v_q_1613_);
return v___x_1614_;
}
case 8:
{
lean_object* v_control_1615_; lean_object* v_target_1616_; lean_object* v___x_1617_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_control_1615_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_control_1615_);
v_target_1616_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_target_1616_);
lean_dec_ref_known(v_g_1583_, 2);
v___x_1617_ = lean_apply_2(v_h__9_1592_, v_control_1615_, v_target_1616_);
return v___x_1617_;
}
case 9:
{
lean_object* v_control_1618_; lean_object* v_target_1619_; lean_object* v___x_1620_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_control_1618_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_control_1618_);
v_target_1619_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_target_1619_);
lean_dec_ref_known(v_g_1583_, 2);
v___x_1620_ = lean_apply_2(v_h__10_1593_, v_control_1618_, v_target_1619_);
return v___x_1620_;
}
case 10:
{
lean_object* v_control_u2081_1621_; lean_object* v_control_u2082_1622_; lean_object* v_target_1623_; lean_object* v___x_1624_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_control_u2081_1621_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_control_u2081_1621_);
v_control_u2082_1622_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_control_u2082_1622_);
v_target_1623_ = lean_ctor_get(v_g_1583_, 2);
lean_inc(v_target_1623_);
lean_dec_ref_known(v_g_1583_, 3);
v___x_1624_ = lean_apply_3(v_h__11_1594_, v_control_u2081_1621_, v_control_u2082_1622_, v_target_1623_);
return v___x_1624_;
}
case 11:
{
lean_object* v_control_u2081_1625_; lean_object* v_control_u2082_1626_; lean_object* v_target_1627_; lean_object* v___x_1628_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__13_1596_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_control_u2081_1625_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_control_u2081_1625_);
v_control_u2082_1626_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_control_u2082_1626_);
v_target_1627_ = lean_ctor_get(v_g_1583_, 2);
lean_inc(v_target_1627_);
lean_dec_ref_known(v_g_1583_, 3);
v___x_1628_ = lean_apply_3(v_h__12_1595_, v_control_u2081_1625_, v_control_u2082_1626_, v_target_1627_);
return v___x_1628_;
}
case 12:
{
lean_object* v_qubit_1629_; lean_object* v_cbit_1630_; lean_object* v___x_1631_; 
lean_dec(v_h__14_1597_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_qubit_1629_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_qubit_1629_);
v_cbit_1630_ = lean_ctor_get(v_g_1583_, 1);
lean_inc(v_cbit_1630_);
lean_dec_ref_known(v_g_1583_, 2);
v___x_1631_ = lean_apply_2(v_h__13_1596_, v_qubit_1629_, v_cbit_1630_);
return v___x_1631_;
}
default: 
{
lean_object* v_q_1632_; lean_object* v___x_1633_; 
lean_dec(v_h__13_1596_);
lean_dec(v_h__12_1595_);
lean_dec(v_h__11_1594_);
lean_dec(v_h__10_1593_);
lean_dec(v_h__9_1592_);
lean_dec(v_h__8_1591_);
lean_dec(v_h__7_1590_);
lean_dec(v_h__6_1589_);
lean_dec(v_h__5_1588_);
lean_dec(v_h__4_1587_);
lean_dec(v_h__3_1586_);
lean_dec(v_h__2_1585_);
lean_dec(v_h__1_1584_);
v_q_1632_ = lean_ctor_get(v_g_1583_, 0);
lean_inc(v_q_1632_);
lean_dec_ref_known(v_g_1583_, 1);
v___x_1633_ = lean_apply_1(v_h__14_1597_, v_q_1632_);
return v___x_1633_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter___redArg(lean_object* v_g_1634_, lean_object* v_h__1_1635_, lean_object* v_h__2_1636_, lean_object* v_h__3_1637_, lean_object* v_h__4_1638_, lean_object* v_h__5_1639_, lean_object* v_h__6_1640_, lean_object* v_h__7_1641_, lean_object* v_h__8_1642_, lean_object* v_h__9_1643_, lean_object* v_h__10_1644_, lean_object* v_h__11_1645_, lean_object* v_h__12_1646_, lean_object* v_h__13_1647_, lean_object* v_h__14_1648_){
_start:
{
switch(lean_obj_tag(v_g_1634_))
{
case 0:
{
lean_object* v_q_1649_; lean_object* v___x_1650_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
v_q_1649_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1649_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1650_ = lean_apply_1(v_h__1_1635_, v_q_1649_);
return v___x_1650_;
}
case 1:
{
lean_object* v_q_1651_; lean_object* v___x_1652_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__1_1635_);
v_q_1651_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1651_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1652_ = lean_apply_1(v_h__2_1636_, v_q_1651_);
return v___x_1652_;
}
case 2:
{
lean_object* v_q_1653_; lean_object* v___x_1654_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1653_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1653_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1654_ = lean_apply_1(v_h__3_1637_, v_q_1653_);
return v___x_1654_;
}
case 3:
{
lean_object* v_q_1655_; lean_object* v___x_1656_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1655_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1655_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1656_ = lean_apply_1(v_h__4_1638_, v_q_1655_);
return v___x_1656_;
}
case 4:
{
lean_object* v_q_1657_; lean_object* v___x_1658_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1657_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1657_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1658_ = lean_apply_1(v_h__5_1639_, v_q_1657_);
return v___x_1658_;
}
case 5:
{
lean_object* v_q_1659_; lean_object* v___x_1660_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1659_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1659_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1660_ = lean_apply_1(v_h__6_1640_, v_q_1659_);
return v___x_1660_;
}
case 6:
{
lean_object* v_q_1661_; lean_object* v___x_1662_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1661_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1661_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1662_ = lean_apply_1(v_h__7_1641_, v_q_1661_);
return v___x_1662_;
}
case 7:
{
lean_object* v_theta_1663_; lean_object* v_q_1664_; lean_object* v___x_1665_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_theta_1663_ = lean_ctor_get(v_g_1634_, 0);
lean_inc_ref(v_theta_1663_);
v_q_1664_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_q_1664_);
lean_dec_ref_known(v_g_1634_, 2);
v___x_1665_ = lean_apply_2(v_h__8_1642_, v_theta_1663_, v_q_1664_);
return v___x_1665_;
}
case 8:
{
lean_object* v_control_1666_; lean_object* v_target_1667_; lean_object* v___x_1668_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_control_1666_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_control_1666_);
v_target_1667_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_target_1667_);
lean_dec_ref_known(v_g_1634_, 2);
v___x_1668_ = lean_apply_2(v_h__11_1645_, v_control_1666_, v_target_1667_);
return v___x_1668_;
}
case 9:
{
lean_object* v_control_1669_; lean_object* v_target_1670_; lean_object* v___x_1671_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_control_1669_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_control_1669_);
v_target_1670_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_target_1670_);
lean_dec_ref_known(v_g_1634_, 2);
v___x_1671_ = lean_apply_2(v_h__9_1643_, v_control_1669_, v_target_1670_);
return v___x_1671_;
}
case 10:
{
lean_object* v_control_u2081_1672_; lean_object* v_control_u2082_1673_; lean_object* v_target_1674_; lean_object* v___x_1675_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_control_u2081_1672_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_control_u2081_1672_);
v_control_u2082_1673_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_control_u2082_1673_);
v_target_1674_ = lean_ctor_get(v_g_1634_, 2);
lean_inc(v_target_1674_);
lean_dec_ref_known(v_g_1634_, 3);
v___x_1675_ = lean_apply_3(v_h__12_1646_, v_control_u2081_1672_, v_control_u2082_1673_, v_target_1674_);
return v___x_1675_;
}
case 11:
{
lean_object* v_control_u2081_1676_; lean_object* v_control_u2082_1677_; lean_object* v_target_1678_; lean_object* v___x_1679_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_control_u2081_1676_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_control_u2081_1676_);
v_control_u2082_1677_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_control_u2082_1677_);
v_target_1678_ = lean_ctor_get(v_g_1634_, 2);
lean_inc(v_target_1678_);
lean_dec_ref_known(v_g_1634_, 3);
v___x_1679_ = lean_apply_3(v_h__10_1644_, v_control_u2081_1676_, v_control_u2082_1677_, v_target_1678_);
return v___x_1679_;
}
case 12:
{
lean_object* v_qubit_1680_; lean_object* v_cbit_1681_; lean_object* v___x_1682_; 
lean_dec(v_h__14_1648_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_qubit_1680_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_qubit_1680_);
v_cbit_1681_ = lean_ctor_get(v_g_1634_, 1);
lean_inc(v_cbit_1681_);
lean_dec_ref_known(v_g_1634_, 2);
v___x_1682_ = lean_apply_2(v_h__13_1647_, v_qubit_1680_, v_cbit_1681_);
return v___x_1682_;
}
default: 
{
lean_object* v_q_1683_; lean_object* v___x_1684_; 
lean_dec(v_h__13_1647_);
lean_dec(v_h__12_1646_);
lean_dec(v_h__11_1645_);
lean_dec(v_h__10_1644_);
lean_dec(v_h__9_1643_);
lean_dec(v_h__8_1642_);
lean_dec(v_h__7_1641_);
lean_dec(v_h__6_1640_);
lean_dec(v_h__5_1639_);
lean_dec(v_h__4_1638_);
lean_dec(v_h__3_1637_);
lean_dec(v_h__2_1636_);
lean_dec(v_h__1_1635_);
v_q_1683_ = lean_ctor_get(v_g_1634_, 0);
lean_inc(v_q_1683_);
lean_dec_ref_known(v_g_1634_, 1);
v___x_1684_ = lean_apply_1(v_h__14_1648_, v_q_1683_);
return v___x_1684_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter(lean_object* v_motive_1685_, lean_object* v_g_1686_, lean_object* v_h__1_1687_, lean_object* v_h__2_1688_, lean_object* v_h__3_1689_, lean_object* v_h__4_1690_, lean_object* v_h__5_1691_, lean_object* v_h__6_1692_, lean_object* v_h__7_1693_, lean_object* v_h__8_1694_, lean_object* v_h__9_1695_, lean_object* v_h__10_1696_, lean_object* v_h__11_1697_, lean_object* v_h__12_1698_, lean_object* v_h__13_1699_, lean_object* v_h__14_1700_){
_start:
{
switch(lean_obj_tag(v_g_1686_))
{
case 0:
{
lean_object* v_q_1701_; lean_object* v___x_1702_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
v_q_1701_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1701_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1702_ = lean_apply_1(v_h__1_1687_, v_q_1701_);
return v___x_1702_;
}
case 1:
{
lean_object* v_q_1703_; lean_object* v___x_1704_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__1_1687_);
v_q_1703_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1703_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1704_ = lean_apply_1(v_h__2_1688_, v_q_1703_);
return v___x_1704_;
}
case 2:
{
lean_object* v_q_1705_; lean_object* v___x_1706_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1705_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1705_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1706_ = lean_apply_1(v_h__3_1689_, v_q_1705_);
return v___x_1706_;
}
case 3:
{
lean_object* v_q_1707_; lean_object* v___x_1708_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1707_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1707_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1708_ = lean_apply_1(v_h__4_1690_, v_q_1707_);
return v___x_1708_;
}
case 4:
{
lean_object* v_q_1709_; lean_object* v___x_1710_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1709_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1709_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1710_ = lean_apply_1(v_h__5_1691_, v_q_1709_);
return v___x_1710_;
}
case 5:
{
lean_object* v_q_1711_; lean_object* v___x_1712_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1711_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1711_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1712_ = lean_apply_1(v_h__6_1692_, v_q_1711_);
return v___x_1712_;
}
case 6:
{
lean_object* v_q_1713_; lean_object* v___x_1714_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1713_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1713_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1714_ = lean_apply_1(v_h__7_1693_, v_q_1713_);
return v___x_1714_;
}
case 7:
{
lean_object* v_theta_1715_; lean_object* v_q_1716_; lean_object* v___x_1717_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_theta_1715_ = lean_ctor_get(v_g_1686_, 0);
lean_inc_ref(v_theta_1715_);
v_q_1716_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_q_1716_);
lean_dec_ref_known(v_g_1686_, 2);
v___x_1717_ = lean_apply_2(v_h__8_1694_, v_theta_1715_, v_q_1716_);
return v___x_1717_;
}
case 8:
{
lean_object* v_control_1718_; lean_object* v_target_1719_; lean_object* v___x_1720_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_control_1718_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_control_1718_);
v_target_1719_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_target_1719_);
lean_dec_ref_known(v_g_1686_, 2);
v___x_1720_ = lean_apply_2(v_h__11_1697_, v_control_1718_, v_target_1719_);
return v___x_1720_;
}
case 9:
{
lean_object* v_control_1721_; lean_object* v_target_1722_; lean_object* v___x_1723_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_control_1721_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_control_1721_);
v_target_1722_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_target_1722_);
lean_dec_ref_known(v_g_1686_, 2);
v___x_1723_ = lean_apply_2(v_h__9_1695_, v_control_1721_, v_target_1722_);
return v___x_1723_;
}
case 10:
{
lean_object* v_control_u2081_1724_; lean_object* v_control_u2082_1725_; lean_object* v_target_1726_; lean_object* v___x_1727_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_control_u2081_1724_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_control_u2081_1724_);
v_control_u2082_1725_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_control_u2082_1725_);
v_target_1726_ = lean_ctor_get(v_g_1686_, 2);
lean_inc(v_target_1726_);
lean_dec_ref_known(v_g_1686_, 3);
v___x_1727_ = lean_apply_3(v_h__12_1698_, v_control_u2081_1724_, v_control_u2082_1725_, v_target_1726_);
return v___x_1727_;
}
case 11:
{
lean_object* v_control_u2081_1728_; lean_object* v_control_u2082_1729_; lean_object* v_target_1730_; lean_object* v___x_1731_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_control_u2081_1728_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_control_u2081_1728_);
v_control_u2082_1729_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_control_u2082_1729_);
v_target_1730_ = lean_ctor_get(v_g_1686_, 2);
lean_inc(v_target_1730_);
lean_dec_ref_known(v_g_1686_, 3);
v___x_1731_ = lean_apply_3(v_h__10_1696_, v_control_u2081_1728_, v_control_u2082_1729_, v_target_1730_);
return v___x_1731_;
}
case 12:
{
lean_object* v_qubit_1732_; lean_object* v_cbit_1733_; lean_object* v___x_1734_; 
lean_dec(v_h__14_1700_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_qubit_1732_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_qubit_1732_);
v_cbit_1733_ = lean_ctor_get(v_g_1686_, 1);
lean_inc(v_cbit_1733_);
lean_dec_ref_known(v_g_1686_, 2);
v___x_1734_ = lean_apply_2(v_h__13_1699_, v_qubit_1732_, v_cbit_1733_);
return v___x_1734_;
}
default: 
{
lean_object* v_q_1735_; lean_object* v___x_1736_; 
lean_dec(v_h__13_1699_);
lean_dec(v_h__12_1698_);
lean_dec(v_h__11_1697_);
lean_dec(v_h__10_1696_);
lean_dec(v_h__9_1695_);
lean_dec(v_h__8_1694_);
lean_dec(v_h__7_1693_);
lean_dec(v_h__6_1692_);
lean_dec(v_h__5_1691_);
lean_dec(v_h__4_1690_);
lean_dec(v_h__3_1689_);
lean_dec(v_h__2_1688_);
lean_dec(v_h__1_1687_);
v_q_1735_ = lean_ctor_get(v_g_1686_, 0);
lean_inc(v_q_1735_);
lean_dec_ref_known(v_g_1686_, 1);
v___x_1736_ = lean_apply_1(v_h__14_1700_, v_q_1735_);
return v___x_1736_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter___redArg(lean_object* v_x_1737_, lean_object* v_x_1738_, lean_object* v_h__1_1739_, lean_object* v_h__2_1740_, lean_object* v_h__3_1741_){
_start:
{
switch(lean_obj_tag(v_x_1737_))
{
case 8:
{
lean_object* v_control_1742_; lean_object* v_target_1743_; lean_object* v___x_1744_; 
lean_dec(v_h__3_1741_);
lean_dec(v_h__2_1740_);
v_control_1742_ = lean_ctor_get(v_x_1737_, 0);
lean_inc(v_control_1742_);
v_target_1743_ = lean_ctor_get(v_x_1737_, 1);
lean_inc(v_target_1743_);
lean_dec_ref_known(v_x_1737_, 2);
v___x_1744_ = lean_apply_3(v_h__1_1739_, v_control_1742_, v_target_1743_, v_x_1738_);
return v___x_1744_;
}
case 9:
{
lean_object* v_control_1745_; lean_object* v_target_1746_; lean_object* v___x_1747_; 
lean_dec(v_h__3_1741_);
lean_dec(v_h__1_1739_);
v_control_1745_ = lean_ctor_get(v_x_1737_, 0);
lean_inc(v_control_1745_);
v_target_1746_ = lean_ctor_get(v_x_1737_, 1);
lean_inc(v_target_1746_);
lean_dec_ref_known(v_x_1737_, 2);
v___x_1747_ = lean_apply_3(v_h__2_1740_, v_control_1745_, v_target_1746_, v_x_1738_);
return v___x_1747_;
}
default: 
{
lean_object* v___x_1748_; 
lean_dec(v_h__2_1740_);
lean_dec(v_h__1_1739_);
v___x_1748_ = lean_apply_4(v_h__3_1741_, v_x_1737_, v_x_1738_, lean_box(0), lean_box(0));
return v___x_1748_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter(lean_object* v_motive_1749_, lean_object* v_x_1750_, lean_object* v_x_1751_, lean_object* v_h__1_1752_, lean_object* v_h__2_1753_, lean_object* v_h__3_1754_){
_start:
{
switch(lean_obj_tag(v_x_1750_))
{
case 8:
{
lean_object* v_control_1755_; lean_object* v_target_1756_; lean_object* v___x_1757_; 
lean_dec(v_h__3_1754_);
lean_dec(v_h__2_1753_);
v_control_1755_ = lean_ctor_get(v_x_1750_, 0);
lean_inc(v_control_1755_);
v_target_1756_ = lean_ctor_get(v_x_1750_, 1);
lean_inc(v_target_1756_);
lean_dec_ref_known(v_x_1750_, 2);
v___x_1757_ = lean_apply_3(v_h__1_1752_, v_control_1755_, v_target_1756_, v_x_1751_);
return v___x_1757_;
}
case 9:
{
lean_object* v_control_1758_; lean_object* v_target_1759_; lean_object* v___x_1760_; 
lean_dec(v_h__3_1754_);
lean_dec(v_h__1_1752_);
v_control_1758_ = lean_ctor_get(v_x_1750_, 0);
lean_inc(v_control_1758_);
v_target_1759_ = lean_ctor_get(v_x_1750_, 1);
lean_inc(v_target_1759_);
lean_dec_ref_known(v_x_1750_, 2);
v___x_1760_ = lean_apply_3(v_h__2_1753_, v_control_1758_, v_target_1759_, v_x_1751_);
return v___x_1760_;
}
default: 
{
lean_object* v___x_1761_; 
lean_dec(v_h__2_1753_);
lean_dec(v_h__1_1752_);
v___x_1761_ = lean_apply_4(v_h__3_1754_, v_x_1750_, v_x_1751_, lean_box(0), lean_box(0));
return v___x_1761_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter___redArg(lean_object* v_x_1762_, lean_object* v_h__1_1763_, lean_object* v_h__2_1764_, lean_object* v_h__3_1765_, lean_object* v_h__4_1766_, lean_object* v_h__5_1767_){
_start:
{
switch(lean_obj_tag(v_x_1762_))
{
case 8:
{
lean_object* v_control_1768_; lean_object* v_target_1769_; lean_object* v___x_1770_; 
lean_dec(v_h__5_1767_);
lean_dec(v_h__4_1766_);
lean_dec(v_h__3_1765_);
lean_dec(v_h__2_1764_);
v_control_1768_ = lean_ctor_get(v_x_1762_, 0);
lean_inc(v_control_1768_);
v_target_1769_ = lean_ctor_get(v_x_1762_, 1);
lean_inc(v_target_1769_);
lean_dec_ref_known(v_x_1762_, 2);
v___x_1770_ = lean_apply_2(v_h__1_1763_, v_control_1768_, v_target_1769_);
return v___x_1770_;
}
case 9:
{
lean_object* v_control_1771_; lean_object* v_target_1772_; lean_object* v___x_1773_; 
lean_dec(v_h__5_1767_);
lean_dec(v_h__4_1766_);
lean_dec(v_h__3_1765_);
lean_dec(v_h__1_1763_);
v_control_1771_ = lean_ctor_get(v_x_1762_, 0);
lean_inc(v_control_1771_);
v_target_1772_ = lean_ctor_get(v_x_1762_, 1);
lean_inc(v_target_1772_);
lean_dec_ref_known(v_x_1762_, 2);
v___x_1773_ = lean_apply_2(v_h__2_1764_, v_control_1771_, v_target_1772_);
return v___x_1773_;
}
case 10:
{
lean_object* v_control_u2081_1774_; lean_object* v_control_u2082_1775_; lean_object* v_target_1776_; lean_object* v___x_1777_; 
lean_dec(v_h__5_1767_);
lean_dec(v_h__4_1766_);
lean_dec(v_h__2_1764_);
lean_dec(v_h__1_1763_);
v_control_u2081_1774_ = lean_ctor_get(v_x_1762_, 0);
lean_inc(v_control_u2081_1774_);
v_control_u2082_1775_ = lean_ctor_get(v_x_1762_, 1);
lean_inc(v_control_u2082_1775_);
v_target_1776_ = lean_ctor_get(v_x_1762_, 2);
lean_inc(v_target_1776_);
lean_dec_ref_known(v_x_1762_, 3);
v___x_1777_ = lean_apply_3(v_h__3_1765_, v_control_u2081_1774_, v_control_u2082_1775_, v_target_1776_);
return v___x_1777_;
}
case 11:
{
lean_object* v_control_u2081_1778_; lean_object* v_control_u2082_1779_; lean_object* v_target_1780_; lean_object* v___x_1781_; 
lean_dec(v_h__5_1767_);
lean_dec(v_h__3_1765_);
lean_dec(v_h__2_1764_);
lean_dec(v_h__1_1763_);
v_control_u2081_1778_ = lean_ctor_get(v_x_1762_, 0);
lean_inc(v_control_u2081_1778_);
v_control_u2082_1779_ = lean_ctor_get(v_x_1762_, 1);
lean_inc(v_control_u2082_1779_);
v_target_1780_ = lean_ctor_get(v_x_1762_, 2);
lean_inc(v_target_1780_);
lean_dec_ref_known(v_x_1762_, 3);
v___x_1781_ = lean_apply_3(v_h__4_1766_, v_control_u2081_1778_, v_control_u2082_1779_, v_target_1780_);
return v___x_1781_;
}
default: 
{
lean_object* v___x_1782_; 
lean_dec(v_h__4_1766_);
lean_dec(v_h__3_1765_);
lean_dec(v_h__2_1764_);
lean_dec(v_h__1_1763_);
v___x_1782_ = lean_apply_5(v_h__5_1767_, v_x_1762_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter(lean_object* v_motive_1783_, lean_object* v_x_1784_, lean_object* v_h__1_1785_, lean_object* v_h__2_1786_, lean_object* v_h__3_1787_, lean_object* v_h__4_1788_, lean_object* v_h__5_1789_){
_start:
{
switch(lean_obj_tag(v_x_1784_))
{
case 8:
{
lean_object* v_control_1790_; lean_object* v_target_1791_; lean_object* v___x_1792_; 
lean_dec(v_h__5_1789_);
lean_dec(v_h__4_1788_);
lean_dec(v_h__3_1787_);
lean_dec(v_h__2_1786_);
v_control_1790_ = lean_ctor_get(v_x_1784_, 0);
lean_inc(v_control_1790_);
v_target_1791_ = lean_ctor_get(v_x_1784_, 1);
lean_inc(v_target_1791_);
lean_dec_ref_known(v_x_1784_, 2);
v___x_1792_ = lean_apply_2(v_h__1_1785_, v_control_1790_, v_target_1791_);
return v___x_1792_;
}
case 9:
{
lean_object* v_control_1793_; lean_object* v_target_1794_; lean_object* v___x_1795_; 
lean_dec(v_h__5_1789_);
lean_dec(v_h__4_1788_);
lean_dec(v_h__3_1787_);
lean_dec(v_h__1_1785_);
v_control_1793_ = lean_ctor_get(v_x_1784_, 0);
lean_inc(v_control_1793_);
v_target_1794_ = lean_ctor_get(v_x_1784_, 1);
lean_inc(v_target_1794_);
lean_dec_ref_known(v_x_1784_, 2);
v___x_1795_ = lean_apply_2(v_h__2_1786_, v_control_1793_, v_target_1794_);
return v___x_1795_;
}
case 10:
{
lean_object* v_control_u2081_1796_; lean_object* v_control_u2082_1797_; lean_object* v_target_1798_; lean_object* v___x_1799_; 
lean_dec(v_h__5_1789_);
lean_dec(v_h__4_1788_);
lean_dec(v_h__2_1786_);
lean_dec(v_h__1_1785_);
v_control_u2081_1796_ = lean_ctor_get(v_x_1784_, 0);
lean_inc(v_control_u2081_1796_);
v_control_u2082_1797_ = lean_ctor_get(v_x_1784_, 1);
lean_inc(v_control_u2082_1797_);
v_target_1798_ = lean_ctor_get(v_x_1784_, 2);
lean_inc(v_target_1798_);
lean_dec_ref_known(v_x_1784_, 3);
v___x_1799_ = lean_apply_3(v_h__3_1787_, v_control_u2081_1796_, v_control_u2082_1797_, v_target_1798_);
return v___x_1799_;
}
case 11:
{
lean_object* v_control_u2081_1800_; lean_object* v_control_u2082_1801_; lean_object* v_target_1802_; lean_object* v___x_1803_; 
lean_dec(v_h__5_1789_);
lean_dec(v_h__3_1787_);
lean_dec(v_h__2_1786_);
lean_dec(v_h__1_1785_);
v_control_u2081_1800_ = lean_ctor_get(v_x_1784_, 0);
lean_inc(v_control_u2081_1800_);
v_control_u2082_1801_ = lean_ctor_get(v_x_1784_, 1);
lean_inc(v_control_u2082_1801_);
v_target_1802_ = lean_ctor_get(v_x_1784_, 2);
lean_inc(v_target_1802_);
lean_dec_ref_known(v_x_1784_, 3);
v___x_1803_ = lean_apply_3(v_h__4_1788_, v_control_u2081_1800_, v_control_u2082_1801_, v_target_1802_);
return v___x_1803_;
}
default: 
{
lean_object* v___x_1804_; 
lean_dec(v_h__4_1788_);
lean_dec(v_h__3_1787_);
lean_dec(v_h__2_1786_);
lean_dec(v_h__1_1785_);
v___x_1804_ = lean_apply_5(v_h__5_1789_, v_x_1784_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1804_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesLoop(lean_object* v_x_1805_, lean_object* v_x_1806_){
_start:
{
lean_object* v_zero_1807_; uint8_t v_isZero_1808_; 
v_zero_1807_ = lean_unsigned_to_nat(0u);
v_isZero_1808_ = lean_nat_dec_eq(v_x_1805_, v_zero_1807_);
if (v_isZero_1808_ == 1)
{
lean_dec(v_x_1805_);
return v_x_1806_;
}
else
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v_next_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
lean_inc_n(v_x_1806_, 2);
v___x_1809_ = lp_tzap_x2dlean_TzapLean_reduceHadamards(v_x_1806_);
v___x_1810_ = lp_tzap_x2dlean_TzapLean_cancelCommutingPairs(v___x_1809_);
v_next_1811_ = lp_tzap_x2dlean_TzapLean_cancelPairs(v___x_1810_);
v___x_1812_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed), 2, 0);
lean_inc(v_next_1811_);
v___x_1813_ = l_instDecidableEqList___redArg(v___x_1812_, v_next_1811_, v_x_1806_);
if (v___x_1813_ == 0)
{
lean_object* v_one_1814_; lean_object* v_n_1815_; 
lean_dec(v_x_1806_);
v_one_1814_ = lean_unsigned_to_nat(1u);
v_n_1815_ = lean_nat_sub(v_x_1805_, v_one_1814_);
lean_dec(v_x_1805_);
v_x_1805_ = v_n_1815_;
v_x_1806_ = v_next_1811_;
goto _start;
}
else
{
lean_dec(v_next_1811_);
lean_dec(v_x_1805_);
return v_x_1806_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGates(lean_object* v_gs_1817_){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1818_ = lean_unsigned_to_nat(2u);
v___x_1819_ = l_List_lengthTR___redArg(v_gs_1817_);
v___x_1820_ = lean_nat_mul(v___x_1818_, v___x_1819_);
lean_dec(v___x_1819_);
v___x_1821_ = lean_unsigned_to_nat(1u);
v___x_1822_ = lean_nat_add(v___x_1820_, v___x_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lp_tzap_x2dlean_TzapLean_cancelPairs(v_gs_1817_);
v___x_1824_ = lp_tzap_x2dlean_TzapLean_cancelGatesLoop(v___x_1822_, v___x_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesCircuit(lean_object* v_c_1825_){
_start:
{
lean_object* v_gates_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_gates_1826_ = lean_ctor_get(v_c_1825_, 2);
lean_inc(v_gates_1826_);
v___x_1827_ = lp_tzap_x2dlean_TzapLean_cancelGates(v_gates_1826_);
v___x_1828_ = lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(v_c_1825_, v___x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0(lean_object* v_n_1829_, lean_object* v_m_1830_, lean_object* v_c_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = lp_tzap_x2dlean_TzapLean_cancelGatesCircuit(v_c_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0___boxed(lean_object* v_n_1833_, lean_object* v_m_1834_, lean_object* v_c_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = lp_tzap_x2dlean_TzapLean_CancelGates___lam__0(v_n_1833_, v_m_1834_, v_c_1835_);
lean_dec(v_m_1834_);
lean_dec(v_n_1833_);
return v_res_1836_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic_IntervalCases(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic_FinCases(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_Pass(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_Cancel(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic_IntervalCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic_FinCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_Pass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
