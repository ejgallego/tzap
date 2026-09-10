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
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamardsFuel(lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
lean_object* v_zero_907_; uint8_t v_isZero_908_; 
v_zero_907_ = lean_unsigned_to_nat(0u);
v_isZero_908_ = lean_nat_dec_eq(v_x_905_, v_zero_907_);
if (v_isZero_908_ == 1)
{
lean_dec(v_x_905_);
return v_x_906_;
}
else
{
lean_object* v___x_909_; 
lean_inc(v_x_906_);
v___x_909_ = lp_tzap_x2dlean_TzapLean_reduceStep(v_x_906_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_dec(v_x_905_);
return v_x_906_;
}
else
{
lean_object* v_val_910_; lean_object* v_one_911_; lean_object* v_n_912_; 
lean_dec(v_x_906_);
v_val_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v___x_909_, 1);
v_one_911_ = lean_unsigned_to_nat(1u);
v_n_912_ = lean_nat_sub(v_x_905_, v_one_911_);
lean_dec(v_x_905_);
v_x_905_ = v_n_912_;
v_x_906_ = v_val_910_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_reduceHadamards(lean_object* v_gs_914_){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = l_List_lengthTR___redArg(v_gs_914_);
v___x_916_ = lp_tzap_x2dlean_TzapLean_reduceHadamardsFuel(v___x_915_, v_gs_914_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter___redArg(lean_object* v_x_917_, lean_object* v_h__1_918_, lean_object* v_h__2_919_, lean_object* v_h__3_920_, lean_object* v_h__4_921_, lean_object* v_h__5_922_, lean_object* v_h__6_923_, lean_object* v_h__7_924_, lean_object* v_h__8_925_, lean_object* v_h__9_926_){
_start:
{
switch(lean_obj_tag(v_x_917_))
{
case 1:
{
lean_object* v_q_927_; lean_object* v___x_928_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
v_q_927_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_927_);
lean_dec_ref_known(v_x_917_, 1);
v___x_928_ = lean_apply_1(v_h__1_918_, v_q_927_);
return v___x_928_;
}
case 0:
{
lean_object* v_q_929_; lean_object* v___x_930_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__1_918_);
v_q_929_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_929_);
lean_dec_ref_known(v_x_917_, 1);
v___x_930_ = lean_apply_1(v_h__2_919_, v_q_929_);
return v___x_930_;
}
case 2:
{
lean_object* v_q_931_; lean_object* v___x_932_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_q_931_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_931_);
lean_dec_ref_known(v_x_917_, 1);
v___x_932_ = lean_apply_1(v_h__3_920_, v_q_931_);
return v___x_932_;
}
case 3:
{
lean_object* v_q_933_; lean_object* v___x_934_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_q_933_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_933_);
lean_dec_ref_known(v_x_917_, 1);
v___x_934_ = lean_apply_1(v_h__4_921_, v_q_933_);
return v___x_934_;
}
case 4:
{
lean_object* v_q_935_; lean_object* v___x_936_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_q_935_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_935_);
lean_dec_ref_known(v_x_917_, 1);
v___x_936_ = lean_apply_1(v_h__5_922_, v_q_935_);
return v___x_936_;
}
case 5:
{
lean_object* v_q_937_; lean_object* v___x_938_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_q_937_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_937_);
lean_dec_ref_known(v_x_917_, 1);
v___x_938_ = lean_apply_1(v_h__6_923_, v_q_937_);
return v___x_938_;
}
case 6:
{
lean_object* v_q_939_; lean_object* v___x_940_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__8_925_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_q_939_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_q_939_);
lean_dec_ref_known(v_x_917_, 1);
v___x_940_ = lean_apply_1(v_h__7_924_, v_q_939_);
return v___x_940_;
}
case 7:
{
lean_object* v_theta_941_; lean_object* v_q_942_; lean_object* v___x_943_; 
lean_dec(v_h__9_926_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v_theta_941_ = lean_ctor_get(v_x_917_, 0);
lean_inc_ref(v_theta_941_);
v_q_942_ = lean_ctor_get(v_x_917_, 1);
lean_inc(v_q_942_);
lean_dec_ref_known(v_x_917_, 2);
v___x_943_ = lean_apply_2(v_h__8_925_, v_theta_941_, v_q_942_);
return v___x_943_;
}
default: 
{
lean_object* v___x_944_; 
lean_dec(v_h__8_925_);
lean_dec(v_h__7_924_);
lean_dec(v_h__6_923_);
lean_dec(v_h__5_922_);
lean_dec(v_h__4_921_);
lean_dec(v_h__3_920_);
lean_dec(v_h__2_919_);
lean_dec(v_h__1_918_);
v___x_944_ = lean_apply_9(v_h__9_926_, v_x_917_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_944_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_OnWire_match__1_splitter(lean_object* v_motive_945_, lean_object* v_x_946_, lean_object* v_h__1_947_, lean_object* v_h__2_948_, lean_object* v_h__3_949_, lean_object* v_h__4_950_, lean_object* v_h__5_951_, lean_object* v_h__6_952_, lean_object* v_h__7_953_, lean_object* v_h__8_954_, lean_object* v_h__9_955_){
_start:
{
switch(lean_obj_tag(v_x_946_))
{
case 1:
{
lean_object* v_q_956_; lean_object* v___x_957_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
v_q_956_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_956_);
lean_dec_ref_known(v_x_946_, 1);
v___x_957_ = lean_apply_1(v_h__1_947_, v_q_956_);
return v___x_957_;
}
case 0:
{
lean_object* v_q_958_; lean_object* v___x_959_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__1_947_);
v_q_958_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_958_);
lean_dec_ref_known(v_x_946_, 1);
v___x_959_ = lean_apply_1(v_h__2_948_, v_q_958_);
return v___x_959_;
}
case 2:
{
lean_object* v_q_960_; lean_object* v___x_961_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_q_960_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_960_);
lean_dec_ref_known(v_x_946_, 1);
v___x_961_ = lean_apply_1(v_h__3_949_, v_q_960_);
return v___x_961_;
}
case 3:
{
lean_object* v_q_962_; lean_object* v___x_963_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_q_962_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_962_);
lean_dec_ref_known(v_x_946_, 1);
v___x_963_ = lean_apply_1(v_h__4_950_, v_q_962_);
return v___x_963_;
}
case 4:
{
lean_object* v_q_964_; lean_object* v___x_965_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_q_964_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_964_);
lean_dec_ref_known(v_x_946_, 1);
v___x_965_ = lean_apply_1(v_h__5_951_, v_q_964_);
return v___x_965_;
}
case 5:
{
lean_object* v_q_966_; lean_object* v___x_967_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_q_966_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_966_);
lean_dec_ref_known(v_x_946_, 1);
v___x_967_ = lean_apply_1(v_h__6_952_, v_q_966_);
return v___x_967_;
}
case 6:
{
lean_object* v_q_968_; lean_object* v___x_969_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__8_954_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_q_968_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_q_968_);
lean_dec_ref_known(v_x_946_, 1);
v___x_969_ = lean_apply_1(v_h__7_953_, v_q_968_);
return v___x_969_;
}
case 7:
{
lean_object* v_theta_970_; lean_object* v_q_971_; lean_object* v___x_972_; 
lean_dec(v_h__9_955_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v_theta_970_ = lean_ctor_get(v_x_946_, 0);
lean_inc_ref(v_theta_970_);
v_q_971_ = lean_ctor_get(v_x_946_, 1);
lean_inc(v_q_971_);
lean_dec_ref_known(v_x_946_, 2);
v___x_972_ = lean_apply_2(v_h__8_954_, v_theta_970_, v_q_971_);
return v___x_972_;
}
default: 
{
lean_object* v___x_973_; 
lean_dec(v_h__8_954_);
lean_dec(v_h__7_953_);
lean_dec(v_h__6_952_);
lean_dec(v_h__5_951_);
lean_dec(v_h__4_950_);
lean_dec(v_h__3_949_);
lean_dec(v_h__2_948_);
lean_dec(v_h__1_947_);
v___x_973_ = lean_apply_9(v_h__9_955_, v_x_946_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_973_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object* v_x_974_, lean_object* v_x_975_, lean_object* v_h__1_976_, lean_object* v_h__2_977_, lean_object* v_h__3_978_, lean_object* v_h__4_979_, lean_object* v_h__5_980_, lean_object* v_h__6_981_, lean_object* v_h__7_982_, lean_object* v_h__8_983_, lean_object* v_h__9_984_){
_start:
{
lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_985_ = lean_unsigned_to_nat(0u);
v___x_986_ = lean_nat_dec_eq(v_x_974_, v___x_985_);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; uint8_t v___x_988_; 
lean_dec(v_h__1_976_);
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = lean_nat_dec_eq(v_x_974_, v___x_987_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; uint8_t v___x_990_; 
lean_dec(v_h__2_977_);
v___x_989_ = lean_unsigned_to_nat(2u);
v___x_990_ = lean_nat_dec_eq(v_x_974_, v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; uint8_t v___x_992_; 
lean_dec(v_h__3_978_);
v___x_991_ = lean_unsigned_to_nat(3u);
v___x_992_ = lean_nat_dec_eq(v_x_974_, v___x_991_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; uint8_t v___x_994_; 
lean_dec(v_h__4_979_);
v___x_993_ = lean_unsigned_to_nat(4u);
v___x_994_ = lean_nat_dec_eq(v_x_974_, v___x_993_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; uint8_t v___x_996_; 
lean_dec(v_h__5_980_);
v___x_995_ = lean_unsigned_to_nat(5u);
v___x_996_ = lean_nat_dec_eq(v_x_974_, v___x_995_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; uint8_t v___x_998_; 
lean_dec(v_h__6_981_);
v___x_997_ = lean_unsigned_to_nat(6u);
v___x_998_ = lean_nat_dec_eq(v_x_974_, v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
lean_dec(v_h__7_982_);
v___x_999_ = lean_unsigned_to_nat(7u);
v___x_1000_ = lean_nat_dec_eq(v_x_974_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
lean_dec(v_h__8_983_);
v___x_1001_ = lean_apply_10(v_h__9_984_, v_x_974_, v_x_975_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1001_;
}
else
{
lean_object* v___x_1002_; 
lean_dec(v_h__9_984_);
lean_dec(v_x_974_);
v___x_1002_ = lean_apply_1(v_h__8_983_, v_x_975_);
return v___x_1002_;
}
}
else
{
lean_object* v___x_1003_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_x_974_);
v___x_1003_ = lean_apply_1(v_h__7_982_, v_x_975_);
return v___x_1003_;
}
}
else
{
lean_object* v___x_1004_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_x_974_);
v___x_1004_ = lean_apply_1(v_h__6_981_, v_x_975_);
return v___x_1004_;
}
}
else
{
lean_object* v___x_1005_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_h__6_981_);
lean_dec(v_x_974_);
v___x_1005_ = lean_apply_1(v_h__5_980_, v_x_975_);
return v___x_1005_;
}
}
else
{
lean_object* v___x_1006_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_h__6_981_);
lean_dec(v_h__5_980_);
lean_dec(v_x_974_);
v___x_1006_ = lean_apply_1(v_h__4_979_, v_x_975_);
return v___x_1006_;
}
}
else
{
lean_object* v___x_1007_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_h__6_981_);
lean_dec(v_h__5_980_);
lean_dec(v_h__4_979_);
lean_dec(v_x_974_);
v___x_1007_ = lean_apply_1(v_h__3_978_, v_x_975_);
return v___x_1007_;
}
}
else
{
lean_object* v___x_1008_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_h__6_981_);
lean_dec(v_h__5_980_);
lean_dec(v_h__4_979_);
lean_dec(v_h__3_978_);
lean_dec(v_x_974_);
v___x_1008_ = lean_apply_1(v_h__2_977_, v_x_975_);
return v___x_1008_;
}
}
else
{
lean_object* v___x_1009_; 
lean_dec(v_h__9_984_);
lean_dec(v_h__8_983_);
lean_dec(v_h__7_982_);
lean_dec(v_h__6_981_);
lean_dec(v_h__5_980_);
lean_dec(v_h__4_979_);
lean_dec(v_h__3_978_);
lean_dec(v_h__2_977_);
lean_dec(v_x_974_);
v___x_1009_ = lean_apply_1(v_h__1_976_, v_x_975_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagRun_match__1_splitter(lean_object* v_motive_1010_, lean_object* v_x_1011_, lean_object* v_x_1012_, lean_object* v_h__1_1013_, lean_object* v_h__2_1014_, lean_object* v_h__3_1015_, lean_object* v_h__4_1016_, lean_object* v_h__5_1017_, lean_object* v_h__6_1018_, lean_object* v_h__7_1019_, lean_object* v_h__8_1020_, lean_object* v_h__9_1021_){
_start:
{
lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_nat_dec_eq(v_x_1011_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
lean_dec(v_h__1_1013_);
v___x_1024_ = lean_unsigned_to_nat(1u);
v___x_1025_ = lean_nat_dec_eq(v_x_1011_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; uint8_t v___x_1027_; 
lean_dec(v_h__2_1014_);
v___x_1026_ = lean_unsigned_to_nat(2u);
v___x_1027_ = lean_nat_dec_eq(v_x_1011_, v___x_1026_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
lean_dec(v_h__3_1015_);
v___x_1028_ = lean_unsigned_to_nat(3u);
v___x_1029_ = lean_nat_dec_eq(v_x_1011_, v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; uint8_t v___x_1031_; 
lean_dec(v_h__4_1016_);
v___x_1030_ = lean_unsigned_to_nat(4u);
v___x_1031_ = lean_nat_dec_eq(v_x_1011_, v___x_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
lean_dec(v_h__5_1017_);
v___x_1032_ = lean_unsigned_to_nat(5u);
v___x_1033_ = lean_nat_dec_eq(v_x_1011_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
lean_dec(v_h__6_1018_);
v___x_1034_ = lean_unsigned_to_nat(6u);
v___x_1035_ = lean_nat_dec_eq(v_x_1011_, v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
lean_dec(v_h__7_1019_);
v___x_1036_ = lean_unsigned_to_nat(7u);
v___x_1037_ = lean_nat_dec_eq(v_x_1011_, v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; 
lean_dec(v_h__8_1020_);
v___x_1038_ = lean_apply_10(v_h__9_1021_, v_x_1011_, v_x_1012_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1038_;
}
else
{
lean_object* v___x_1039_; 
lean_dec(v_h__9_1021_);
lean_dec(v_x_1011_);
v___x_1039_ = lean_apply_1(v_h__8_1020_, v_x_1012_);
return v___x_1039_;
}
}
else
{
lean_object* v___x_1040_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_x_1011_);
v___x_1040_ = lean_apply_1(v_h__7_1019_, v_x_1012_);
return v___x_1040_;
}
}
else
{
lean_object* v___x_1041_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_x_1011_);
v___x_1041_ = lean_apply_1(v_h__6_1018_, v_x_1012_);
return v___x_1041_;
}
}
else
{
lean_object* v___x_1042_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_x_1011_);
v___x_1042_ = lean_apply_1(v_h__5_1017_, v_x_1012_);
return v___x_1042_;
}
}
else
{
lean_object* v___x_1043_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_x_1011_);
v___x_1043_ = lean_apply_1(v_h__4_1016_, v_x_1012_);
return v___x_1043_;
}
}
else
{
lean_object* v___x_1044_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_x_1011_);
v___x_1044_ = lean_apply_1(v_h__3_1015_, v_x_1012_);
return v___x_1044_;
}
}
else
{
lean_object* v___x_1045_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_x_1011_);
v___x_1045_ = lean_apply_1(v_h__2_1014_, v_x_1012_);
return v___x_1045_;
}
}
else
{
lean_object* v___x_1046_; 
lean_dec(v_h__9_1021_);
lean_dec(v_h__8_1020_);
lean_dec(v_h__7_1019_);
lean_dec(v_h__6_1018_);
lean_dec(v_h__5_1017_);
lean_dec(v_h__4_1016_);
lean_dec(v_h__3_1015_);
lean_dec(v_h__2_1014_);
lean_dec(v_x_1011_);
v___x_1046_ = lean_apply_1(v_h__1_1013_, v_x_1012_);
return v___x_1046_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter___redArg(lean_object* v_g_1047_, lean_object* v_h__1_1048_, lean_object* v_h__2_1049_, lean_object* v_h__3_1050_, lean_object* v_h__4_1051_, lean_object* v_h__5_1052_, lean_object* v_h__6_1053_, lean_object* v_h__7_1054_){
_start:
{
switch(lean_obj_tag(v_g_1047_))
{
case 5:
{
lean_object* v_q_1055_; lean_object* v___x_1056_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__6_1053_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__2_1049_);
v_q_1055_ = lean_ctor_get(v_g_1047_, 0);
lean_inc(v_q_1055_);
lean_dec_ref_known(v_g_1047_, 1);
v___x_1056_ = lean_apply_1(v_h__1_1048_, v_q_1055_);
return v___x_1056_;
}
case 6:
{
lean_object* v_q_1057_; lean_object* v___x_1058_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__6_1053_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__1_1048_);
v_q_1057_ = lean_ctor_get(v_g_1047_, 0);
lean_inc(v_q_1057_);
lean_dec_ref_known(v_g_1047_, 1);
v___x_1058_ = lean_apply_1(v_h__2_1049_, v_q_1057_);
return v___x_1058_;
}
case 2:
{
lean_object* v_q_1059_; lean_object* v___x_1060_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__6_1053_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__2_1049_);
lean_dec(v_h__1_1048_);
v_q_1059_ = lean_ctor_get(v_g_1047_, 0);
lean_inc(v_q_1059_);
lean_dec_ref_known(v_g_1047_, 1);
v___x_1060_ = lean_apply_1(v_h__3_1050_, v_q_1059_);
return v___x_1060_;
}
case 3:
{
lean_object* v_q_1061_; lean_object* v___x_1062_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__6_1053_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__2_1049_);
lean_dec(v_h__1_1048_);
v_q_1061_ = lean_ctor_get(v_g_1047_, 0);
lean_inc(v_q_1061_);
lean_dec_ref_known(v_g_1047_, 1);
v___x_1062_ = lean_apply_1(v_h__4_1051_, v_q_1061_);
return v___x_1062_;
}
case 4:
{
lean_object* v_q_1063_; lean_object* v___x_1064_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__6_1053_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__2_1049_);
lean_dec(v_h__1_1048_);
v_q_1063_ = lean_ctor_get(v_g_1047_, 0);
lean_inc(v_q_1063_);
lean_dec_ref_known(v_g_1047_, 1);
v___x_1064_ = lean_apply_1(v_h__5_1052_, v_q_1063_);
return v___x_1064_;
}
case 7:
{
lean_object* v_theta_1065_; lean_object* v_q_1066_; lean_object* v___x_1067_; 
lean_dec(v_h__7_1054_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__2_1049_);
lean_dec(v_h__1_1048_);
v_theta_1065_ = lean_ctor_get(v_g_1047_, 0);
lean_inc_ref(v_theta_1065_);
v_q_1066_ = lean_ctor_get(v_g_1047_, 1);
lean_inc(v_q_1066_);
lean_dec_ref_known(v_g_1047_, 2);
v___x_1067_ = lean_apply_2(v_h__6_1053_, v_theta_1065_, v_q_1066_);
return v___x_1067_;
}
default: 
{
lean_object* v___x_1068_; 
lean_dec(v_h__6_1053_);
lean_dec(v_h__5_1052_);
lean_dec(v_h__4_1051_);
lean_dec(v_h__3_1050_);
lean_dec(v_h__2_1049_);
lean_dec(v_h__1_1048_);
v___x_1068_ = lean_apply_7(v_h__7_1054_, v_g_1047_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1068_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_diagonalK_match__1_splitter(lean_object* v_motive_1069_, lean_object* v_g_1070_, lean_object* v_h__1_1071_, lean_object* v_h__2_1072_, lean_object* v_h__3_1073_, lean_object* v_h__4_1074_, lean_object* v_h__5_1075_, lean_object* v_h__6_1076_, lean_object* v_h__7_1077_){
_start:
{
switch(lean_obj_tag(v_g_1070_))
{
case 5:
{
lean_object* v_q_1078_; lean_object* v___x_1079_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__6_1076_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__2_1072_);
v_q_1078_ = lean_ctor_get(v_g_1070_, 0);
lean_inc(v_q_1078_);
lean_dec_ref_known(v_g_1070_, 1);
v___x_1079_ = lean_apply_1(v_h__1_1071_, v_q_1078_);
return v___x_1079_;
}
case 6:
{
lean_object* v_q_1080_; lean_object* v___x_1081_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__6_1076_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__1_1071_);
v_q_1080_ = lean_ctor_get(v_g_1070_, 0);
lean_inc(v_q_1080_);
lean_dec_ref_known(v_g_1070_, 1);
v___x_1081_ = lean_apply_1(v_h__2_1072_, v_q_1080_);
return v___x_1081_;
}
case 2:
{
lean_object* v_q_1082_; lean_object* v___x_1083_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__6_1076_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__2_1072_);
lean_dec(v_h__1_1071_);
v_q_1082_ = lean_ctor_get(v_g_1070_, 0);
lean_inc(v_q_1082_);
lean_dec_ref_known(v_g_1070_, 1);
v___x_1083_ = lean_apply_1(v_h__3_1073_, v_q_1082_);
return v___x_1083_;
}
case 3:
{
lean_object* v_q_1084_; lean_object* v___x_1085_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__6_1076_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__2_1072_);
lean_dec(v_h__1_1071_);
v_q_1084_ = lean_ctor_get(v_g_1070_, 0);
lean_inc(v_q_1084_);
lean_dec_ref_known(v_g_1070_, 1);
v___x_1085_ = lean_apply_1(v_h__4_1074_, v_q_1084_);
return v___x_1085_;
}
case 4:
{
lean_object* v_q_1086_; lean_object* v___x_1087_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__6_1076_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__2_1072_);
lean_dec(v_h__1_1071_);
v_q_1086_ = lean_ctor_get(v_g_1070_, 0);
lean_inc(v_q_1086_);
lean_dec_ref_known(v_g_1070_, 1);
v___x_1087_ = lean_apply_1(v_h__5_1075_, v_q_1086_);
return v___x_1087_;
}
case 7:
{
lean_object* v_theta_1088_; lean_object* v_q_1089_; lean_object* v___x_1090_; 
lean_dec(v_h__7_1077_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__2_1072_);
lean_dec(v_h__1_1071_);
v_theta_1088_ = lean_ctor_get(v_g_1070_, 0);
lean_inc_ref(v_theta_1088_);
v_q_1089_ = lean_ctor_get(v_g_1070_, 1);
lean_inc(v_q_1089_);
lean_dec_ref_known(v_g_1070_, 2);
v___x_1090_ = lean_apply_2(v_h__6_1076_, v_theta_1088_, v_q_1089_);
return v___x_1090_;
}
default: 
{
lean_object* v___x_1091_; 
lean_dec(v_h__6_1076_);
lean_dec(v_h__5_1075_);
lean_dec(v_h__4_1074_);
lean_dec(v_h__3_1073_);
lean_dec(v_h__2_1072_);
lean_dec(v_h__1_1071_);
v___x_1091_ = lean_apply_7(v_h__7_1077_, v_g_1070_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1091_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter___redArg(lean_object* v_x_1092_, lean_object* v_h__1_1093_, lean_object* v_h__2_1094_){
_start:
{
if (lean_obj_tag(v_x_1092_) == 1)
{
lean_object* v_q_1095_; lean_object* v___x_1096_; 
lean_dec(v_h__2_1094_);
v_q_1095_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_q_1095_);
lean_dec_ref_known(v_x_1092_, 1);
v___x_1096_ = lean_apply_1(v_h__1_1093_, v_q_1095_);
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; 
lean_dec(v_h__1_1093_);
v___x_1097_ = lean_apply_2(v_h__2_1094_, v_x_1092_, lean_box(0));
return v___x_1097_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isH_match__1_splitter(lean_object* v_motive_1098_, lean_object* v_x_1099_, lean_object* v_h__1_1100_, lean_object* v_h__2_1101_){
_start:
{
if (lean_obj_tag(v_x_1099_) == 1)
{
lean_object* v_q_1102_; lean_object* v___x_1103_; 
lean_dec(v_h__2_1101_);
v_q_1102_ = lean_ctor_get(v_x_1099_, 0);
lean_inc(v_q_1102_);
lean_dec_ref_known(v_x_1099_, 1);
v___x_1103_ = lean_apply_1(v_h__1_1100_, v_q_1102_);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; 
lean_dec(v_h__1_1100_);
v___x_1104_ = lean_apply_2(v_h__2_1101_, v_x_1099_, lean_box(0));
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter___redArg(lean_object* v_x_1105_, lean_object* v_h__1_1106_, lean_object* v_h__2_1107_){
_start:
{
if (lean_obj_tag(v_x_1105_) == 0)
{
lean_object* v_q_1108_; lean_object* v___x_1109_; 
lean_dec(v_h__2_1107_);
v_q_1108_ = lean_ctor_get(v_x_1105_, 0);
lean_inc(v_q_1108_);
lean_dec_ref_known(v_x_1105_, 1);
v___x_1109_ = lean_apply_1(v_h__1_1106_, v_q_1108_);
return v___x_1109_;
}
else
{
lean_object* v___x_1110_; 
lean_dec(v_h__1_1106_);
v___x_1110_ = lean_apply_2(v_h__2_1107_, v_x_1105_, lean_box(0));
return v___x_1110_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_isX_match__1_splitter(lean_object* v_motive_1111_, lean_object* v_x_1112_, lean_object* v_h__1_1113_, lean_object* v_h__2_1114_){
_start:
{
if (lean_obj_tag(v_x_1112_) == 0)
{
lean_object* v_q_1115_; lean_object* v___x_1116_; 
lean_dec(v_h__2_1114_);
v_q_1115_ = lean_ctor_get(v_x_1112_, 0);
lean_inc(v_q_1115_);
lean_dec_ref_known(v_x_1112_, 1);
v___x_1116_ = lean_apply_1(v_h__1_1113_, v_q_1115_);
return v___x_1116_;
}
else
{
lean_object* v___x_1117_; 
lean_dec(v_h__1_1113_);
v___x_1117_ = lean_apply_2(v_h__2_1114_, v_x_1112_, lean_box(0));
return v___x_1117_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter___redArg(lean_object* v_x_1118_, lean_object* v_h__1_1119_, lean_object* v_h__2_1120_, lean_object* v_h__3_1121_){
_start:
{
if (lean_obj_tag(v_x_1118_) == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec(v_h__2_1120_);
lean_dec(v_h__1_1119_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_apply_1(v_h__3_1121_, v___x_1122_);
return v___x_1123_;
}
else
{
lean_object* v_val_1124_; 
lean_dec(v_h__3_1121_);
v_val_1124_ = lean_ctor_get(v_x_1118_, 0);
lean_inc(v_val_1124_);
lean_dec_ref_known(v_x_1118_, 1);
if (lean_obj_tag(v_val_1124_) == 0)
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
lean_dec(v_h__1_1119_);
v___x_1125_ = lean_box(0);
v___x_1126_ = lean_apply_1(v_h__2_1120_, v___x_1125_);
return v___x_1126_;
}
else
{
lean_object* v_val_1127_; lean_object* v___x_1128_; 
lean_dec(v_h__2_1120_);
v_val_1127_ = lean_ctor_get(v_val_1124_, 0);
lean_inc(v_val_1127_);
lean_dec_ref_known(v_val_1124_, 1);
v___x_1128_ = lean_apply_1(v_h__1_1119_, v_val_1127_);
return v___x_1128_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_scanH_match__1_splitter(lean_object* v_motive_1129_, lean_object* v_x_1130_, lean_object* v_h__1_1131_, lean_object* v_h__2_1132_, lean_object* v_h__3_1133_){
_start:
{
if (lean_obj_tag(v_x_1130_) == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec(v_h__2_1132_);
lean_dec(v_h__1_1131_);
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_apply_1(v_h__3_1133_, v___x_1134_);
return v___x_1135_;
}
else
{
lean_object* v_val_1136_; 
lean_dec(v_h__3_1133_);
v_val_1136_ = lean_ctor_get(v_x_1130_, 0);
lean_inc(v_val_1136_);
lean_dec_ref_known(v_x_1130_, 1);
if (lean_obj_tag(v_val_1136_) == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec(v_h__1_1131_);
v___x_1137_ = lean_box(0);
v___x_1138_ = lean_apply_1(v_h__2_1132_, v___x_1137_);
return v___x_1138_;
}
else
{
lean_object* v_val_1139_; lean_object* v___x_1140_; 
lean_dec(v_h__2_1132_);
v_val_1139_ = lean_ctor_get(v_val_1136_, 0);
lean_inc(v_val_1139_);
lean_dec_ref_known(v_val_1136_, 1);
v___x_1140_ = lean_apply_1(v_h__1_1131_, v_val_1139_);
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter___redArg(lean_object* v_x_1141_, lean_object* v_h__1_1142_, lean_object* v_h__2_1143_){
_start:
{
if (lean_obj_tag(v_x_1141_) == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_dec(v_h__1_1142_);
v___x_1144_ = lean_box(0);
v___x_1145_ = lean_apply_1(v_h__2_1143_, v___x_1144_);
return v___x_1145_;
}
else
{
lean_object* v_val_1146_; lean_object* v___x_1147_; 
lean_dec(v_h__2_1143_);
v_val_1146_ = lean_ctor_get(v_x_1141_, 0);
lean_inc(v_val_1146_);
lean_dec_ref_known(v_x_1141_, 1);
v___x_1147_ = lean_apply_1(v_h__1_1142_, v_val_1146_);
return v___x_1147_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceStep_match__1_splitter(lean_object* v_motive_1148_, lean_object* v_x_1149_, lean_object* v_h__1_1150_, lean_object* v_h__2_1151_){
_start:
{
if (lean_obj_tag(v_x_1149_) == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_dec(v_h__1_1150_);
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_apply_1(v_h__2_1151_, v___x_1152_);
return v___x_1153_;
}
else
{
lean_object* v_val_1154_; lean_object* v___x_1155_; 
lean_dec(v_h__2_1151_);
v_val_1154_ = lean_ctor_get(v_x_1149_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v_x_1149_, 1);
v___x_1155_ = lean_apply_1(v_h__1_1150_, v_val_1154_);
return v___x_1155_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg(lean_object* v_x_1156_, lean_object* v_x_1157_, lean_object* v_h__1_1158_, lean_object* v_h__2_1159_){
_start:
{
lean_object* v_zero_1160_; uint8_t v_isZero_1161_; 
v_zero_1160_ = lean_unsigned_to_nat(0u);
v_isZero_1161_ = lean_nat_dec_eq(v_x_1156_, v_zero_1160_);
if (v_isZero_1161_ == 1)
{
lean_object* v___x_1162_; 
lean_dec(v_h__2_1159_);
v___x_1162_ = lean_apply_1(v_h__1_1158_, v_x_1157_);
return v___x_1162_;
}
else
{
lean_object* v_one_1163_; lean_object* v_n_1164_; lean_object* v___x_1165_; 
lean_dec(v_h__1_1158_);
v_one_1163_ = lean_unsigned_to_nat(1u);
v_n_1164_ = lean_nat_sub(v_x_1156_, v_one_1163_);
v___x_1165_ = lean_apply_2(v_h__2_1159_, v_n_1164_, v_x_1157_);
return v___x_1165_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg___boxed(lean_object* v_x_1166_, lean_object* v_x_1167_, lean_object* v_h__1_1168_, lean_object* v_h__2_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___redArg(v_x_1166_, v_x_1167_, v_h__1_1168_, v_h__2_1169_);
lean_dec(v_x_1166_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter(lean_object* v_motive_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_h__1_1174_, lean_object* v_h__2_1175_){
_start:
{
lean_object* v_zero_1176_; uint8_t v_isZero_1177_; 
v_zero_1176_ = lean_unsigned_to_nat(0u);
v_isZero_1177_ = lean_nat_dec_eq(v_x_1172_, v_zero_1176_);
if (v_isZero_1177_ == 1)
{
lean_object* v___x_1178_; 
lean_dec(v_h__2_1175_);
v___x_1178_ = lean_apply_1(v_h__1_1174_, v_x_1173_);
return v___x_1178_;
}
else
{
lean_object* v_one_1179_; lean_object* v_n_1180_; lean_object* v___x_1181_; 
lean_dec(v_h__1_1174_);
v_one_1179_ = lean_unsigned_to_nat(1u);
v_n_1180_ = lean_nat_sub(v_x_1172_, v_one_1179_);
v___x_1181_ = lean_apply_2(v_h__2_1175_, v_n_1180_, v_x_1173_);
return v___x_1181_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter___boxed(lean_object* v_motive_1182_, lean_object* v_x_1183_, lean_object* v_x_1184_, lean_object* v_h__1_1185_, lean_object* v_h__2_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_reduceHadamardsFuel_match__1_splitter(v_motive_1182_, v_x_1183_, v_x_1184_, v_h__1_1185_, v_h__2_1186_);
lean_dec(v_x_1183_);
return v_res_1187_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCnot(lean_object* v_g_1188_, lean_object* v_c_1189_, lean_object* v_t_1190_){
_start:
{
lean_object* v_q_1192_; lean_object* v_q_1198_; 
switch(lean_obj_tag(v_g_1188_))
{
case 0:
{
lean_object* v_q_1202_; uint8_t v___x_1203_; 
v_q_1202_ = lean_ctor_get(v_g_1188_, 0);
v___x_1203_ = lean_nat_dec_eq(v_q_1202_, v_c_1189_);
if (v___x_1203_ == 0)
{
uint8_t v___x_1204_; 
v___x_1204_ = 1;
return v___x_1204_;
}
else
{
uint8_t v___x_1205_; 
v___x_1205_ = 0;
return v___x_1205_;
}
}
case 1:
{
lean_object* v_q_1206_; 
v_q_1206_ = lean_ctor_get(v_g_1188_, 0);
v_q_1192_ = v_q_1206_;
goto v___jp_1191_;
}
case 7:
{
lean_object* v_q_1207_; uint8_t v___x_1208_; 
v_q_1207_ = lean_ctor_get(v_g_1188_, 1);
v___x_1208_ = lean_nat_dec_eq(v_q_1207_, v_t_1190_);
if (v___x_1208_ == 0)
{
uint8_t v___x_1209_; 
v___x_1209_ = 1;
return v___x_1209_;
}
else
{
uint8_t v___x_1210_; 
v___x_1210_ = 0;
return v___x_1210_;
}
}
case 8:
{
lean_object* v_control_1211_; lean_object* v_target_1212_; uint8_t v___x_1213_; 
v_control_1211_ = lean_ctor_get(v_g_1188_, 0);
v_target_1212_ = lean_ctor_get(v_g_1188_, 1);
v___x_1213_ = lean_nat_dec_eq(v_control_1211_, v_t_1190_);
if (v___x_1213_ == 0)
{
uint8_t v___x_1214_; 
v___x_1214_ = lean_nat_dec_eq(v_target_1212_, v_c_1189_);
if (v___x_1214_ == 0)
{
uint8_t v___x_1215_; 
v___x_1215_ = 1;
return v___x_1215_;
}
else
{
return v___x_1213_;
}
}
else
{
uint8_t v___x_1216_; 
v___x_1216_ = 0;
return v___x_1216_;
}
}
case 9:
{
lean_object* v_control_1217_; lean_object* v_target_1218_; uint8_t v___x_1219_; 
v_control_1217_ = lean_ctor_get(v_g_1188_, 0);
v_target_1218_ = lean_ctor_get(v_g_1188_, 1);
v___x_1219_ = lean_nat_dec_eq(v_control_1217_, v_t_1190_);
if (v___x_1219_ == 0)
{
uint8_t v___x_1220_; 
v___x_1220_ = lean_nat_dec_eq(v_target_1218_, v_t_1190_);
if (v___x_1220_ == 0)
{
uint8_t v___x_1221_; 
v___x_1221_ = 1;
return v___x_1221_;
}
else
{
return v___x_1219_;
}
}
else
{
uint8_t v___x_1222_; 
v___x_1222_ = 0;
return v___x_1222_;
}
}
case 10:
{
lean_object* v_control_u2081_1223_; lean_object* v_control_u2082_1224_; lean_object* v_target_1225_; uint8_t v___x_1226_; 
v_control_u2081_1223_ = lean_ctor_get(v_g_1188_, 0);
v_control_u2082_1224_ = lean_ctor_get(v_g_1188_, 1);
v_target_1225_ = lean_ctor_get(v_g_1188_, 2);
v___x_1226_ = lean_nat_dec_eq(v_control_u2081_1223_, v_c_1189_);
if (v___x_1226_ == 0)
{
uint8_t v___x_1227_; 
v___x_1227_ = lean_nat_dec_eq(v_control_u2081_1223_, v_t_1190_);
if (v___x_1227_ == 0)
{
uint8_t v___x_1228_; 
v___x_1228_ = lean_nat_dec_eq(v_control_u2082_1224_, v_c_1189_);
if (v___x_1228_ == 0)
{
uint8_t v___x_1229_; 
v___x_1229_ = lean_nat_dec_eq(v_control_u2082_1224_, v_t_1190_);
if (v___x_1229_ == 0)
{
uint8_t v___x_1230_; 
v___x_1230_ = lean_nat_dec_eq(v_target_1225_, v_c_1189_);
if (v___x_1230_ == 0)
{
uint8_t v___x_1231_; 
v___x_1231_ = lean_nat_dec_eq(v_target_1225_, v_t_1190_);
if (v___x_1231_ == 0)
{
uint8_t v___x_1232_; 
v___x_1232_ = 1;
return v___x_1232_;
}
else
{
return v___x_1230_;
}
}
else
{
return v___x_1229_;
}
}
else
{
return v___x_1228_;
}
}
else
{
return v___x_1227_;
}
}
else
{
return v___x_1226_;
}
}
else
{
uint8_t v___x_1233_; 
v___x_1233_ = 0;
return v___x_1233_;
}
}
case 11:
{
lean_object* v_control_u2081_1234_; lean_object* v_control_u2082_1235_; lean_object* v_target_1236_; uint8_t v___x_1237_; 
v_control_u2081_1234_ = lean_ctor_get(v_g_1188_, 0);
v_control_u2082_1235_ = lean_ctor_get(v_g_1188_, 1);
v_target_1236_ = lean_ctor_get(v_g_1188_, 2);
v___x_1237_ = lean_nat_dec_eq(v_target_1236_, v_t_1190_);
if (v___x_1237_ == 0)
{
uint8_t v___x_1238_; 
v___x_1238_ = lean_nat_dec_eq(v_control_u2081_1234_, v_t_1190_);
if (v___x_1238_ == 0)
{
uint8_t v___x_1239_; 
v___x_1239_ = lean_nat_dec_eq(v_control_u2082_1235_, v_t_1190_);
if (v___x_1239_ == 0)
{
uint8_t v___x_1240_; 
v___x_1240_ = 1;
return v___x_1240_;
}
else
{
return v___x_1238_;
}
}
else
{
return v___x_1237_;
}
}
else
{
uint8_t v___x_1241_; 
v___x_1241_ = 0;
return v___x_1241_;
}
}
case 12:
{
lean_object* v_qubit_1242_; uint8_t v___x_1243_; 
v_qubit_1242_ = lean_ctor_get(v_g_1188_, 0);
v___x_1243_ = lean_nat_dec_eq(v_qubit_1242_, v_c_1189_);
if (v___x_1243_ == 0)
{
uint8_t v___x_1244_; 
v___x_1244_ = lean_nat_dec_eq(v_qubit_1242_, v_t_1190_);
if (v___x_1244_ == 0)
{
uint8_t v___x_1245_; 
v___x_1245_ = 1;
return v___x_1245_;
}
else
{
return v___x_1243_;
}
}
else
{
uint8_t v___x_1246_; 
v___x_1246_ = 0;
return v___x_1246_;
}
}
case 13:
{
lean_object* v_q_1247_; 
v_q_1247_ = lean_ctor_get(v_g_1188_, 0);
v_q_1192_ = v_q_1247_;
goto v___jp_1191_;
}
default: 
{
lean_object* v_q_1248_; 
v_q_1248_ = lean_ctor_get(v_g_1188_, 0);
v_q_1198_ = v_q_1248_;
goto v___jp_1197_;
}
}
v___jp_1191_:
{
uint8_t v___x_1193_; 
v___x_1193_ = lean_nat_dec_eq(v_q_1192_, v_c_1189_);
if (v___x_1193_ == 0)
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_nat_dec_eq(v_q_1192_, v_t_1190_);
if (v___x_1194_ == 0)
{
uint8_t v___x_1195_; 
v___x_1195_ = 1;
return v___x_1195_;
}
else
{
return v___x_1193_;
}
}
else
{
uint8_t v___x_1196_; 
v___x_1196_ = 0;
return v___x_1196_;
}
}
v___jp_1197_:
{
uint8_t v___x_1199_; 
v___x_1199_ = lean_nat_dec_eq(v_q_1198_, v_t_1190_);
if (v___x_1199_ == 0)
{
uint8_t v___x_1200_; 
v___x_1200_ = 1;
return v___x_1200_;
}
else
{
uint8_t v___x_1201_; 
v___x_1201_ = 0;
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCnot___boxed(lean_object* v_g_1249_, lean_object* v_c_1250_, lean_object* v_t_1251_){
_start:
{
uint8_t v_res_1252_; lean_object* v_r_1253_; 
v_res_1252_ = lp_tzap_x2dlean_TzapLean_commutesPastCnot(v_g_1249_, v_c_1250_, v_t_1251_);
lean_dec(v_t_1251_);
lean_dec(v_c_1250_);
lean_dec_ref(v_g_1249_);
v_r_1253_ = lean_box(v_res_1252_);
return v_r_1253_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_commutesPastCz(lean_object* v_g_1254_, lean_object* v_a_1255_, lean_object* v_b_1256_){
_start:
{
lean_object* v_q_1258_; 
switch(lean_obj_tag(v_g_1254_))
{
case 0:
{
lean_object* v_q_1263_; 
v_q_1263_ = lean_ctor_get(v_g_1254_, 0);
v_q_1258_ = v_q_1263_;
goto v___jp_1257_;
}
case 1:
{
lean_object* v_q_1264_; 
v_q_1264_ = lean_ctor_get(v_g_1254_, 0);
v_q_1258_ = v_q_1264_;
goto v___jp_1257_;
}
case 8:
{
lean_object* v_target_1265_; uint8_t v___x_1266_; 
v_target_1265_ = lean_ctor_get(v_g_1254_, 1);
v___x_1266_ = lean_nat_dec_eq(v_target_1265_, v_a_1255_);
if (v___x_1266_ == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_nat_dec_eq(v_target_1265_, v_b_1256_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; 
v___x_1268_ = 1;
return v___x_1268_;
}
else
{
return v___x_1266_;
}
}
else
{
uint8_t v___x_1269_; 
v___x_1269_ = 0;
return v___x_1269_;
}
}
case 10:
{
lean_object* v_target_1270_; uint8_t v___x_1271_; 
v_target_1270_ = lean_ctor_get(v_g_1254_, 2);
v___x_1271_ = lean_nat_dec_eq(v_target_1270_, v_a_1255_);
if (v___x_1271_ == 0)
{
uint8_t v___x_1272_; 
v___x_1272_ = lean_nat_dec_eq(v_target_1270_, v_b_1256_);
if (v___x_1272_ == 0)
{
uint8_t v___x_1273_; 
v___x_1273_ = 1;
return v___x_1273_;
}
else
{
return v___x_1271_;
}
}
else
{
uint8_t v___x_1274_; 
v___x_1274_ = 0;
return v___x_1274_;
}
}
case 12:
{
lean_object* v_qubit_1275_; uint8_t v___x_1276_; 
v_qubit_1275_ = lean_ctor_get(v_g_1254_, 0);
v___x_1276_ = lean_nat_dec_eq(v_qubit_1275_, v_a_1255_);
if (v___x_1276_ == 0)
{
uint8_t v___x_1277_; 
v___x_1277_ = lean_nat_dec_eq(v_qubit_1275_, v_b_1256_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; 
v___x_1278_ = 1;
return v___x_1278_;
}
else
{
return v___x_1276_;
}
}
else
{
uint8_t v___x_1279_; 
v___x_1279_ = 0;
return v___x_1279_;
}
}
case 13:
{
lean_object* v_q_1280_; 
v_q_1280_ = lean_ctor_get(v_g_1254_, 0);
v_q_1258_ = v_q_1280_;
goto v___jp_1257_;
}
default: 
{
uint8_t v___x_1281_; 
v___x_1281_ = 1;
return v___x_1281_;
}
}
v___jp_1257_:
{
uint8_t v___x_1259_; 
v___x_1259_ = lean_nat_dec_eq(v_q_1258_, v_a_1255_);
if (v___x_1259_ == 0)
{
uint8_t v___x_1260_; 
v___x_1260_ = lean_nat_dec_eq(v_q_1258_, v_b_1256_);
if (v___x_1260_ == 0)
{
uint8_t v___x_1261_; 
v___x_1261_ = 1;
return v___x_1261_;
}
else
{
return v___x_1259_;
}
}
else
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_commutesPastCz___boxed(lean_object* v_g_1282_, lean_object* v_a_1283_, lean_object* v_b_1284_){
_start:
{
uint8_t v_res_1285_; lean_object* v_r_1286_; 
v_res_1285_ = lp_tzap_x2dlean_TzapLean_commutesPastCz(v_g_1282_, v_a_1283_, v_b_1284_);
lean_dec(v_b_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_g_1282_);
v_r_1286_ = lean_box(v_res_1285_);
return v_r_1286_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_pairCommutes(lean_object* v_x_1287_, lean_object* v_x_1288_){
_start:
{
switch(lean_obj_tag(v_x_1287_))
{
case 8:
{
lean_object* v_control_1289_; lean_object* v_target_1290_; uint8_t v___x_1291_; 
v_control_1289_ = lean_ctor_get(v_x_1287_, 0);
v_target_1290_ = lean_ctor_get(v_x_1287_, 1);
v___x_1291_ = lp_tzap_x2dlean_TzapLean_commutesPastCnot(v_x_1288_, v_control_1289_, v_target_1290_);
return v___x_1291_;
}
case 9:
{
lean_object* v_control_1292_; lean_object* v_target_1293_; uint8_t v___x_1294_; 
v_control_1292_ = lean_ctor_get(v_x_1287_, 0);
v_target_1293_ = lean_ctor_get(v_x_1287_, 1);
v___x_1294_ = lp_tzap_x2dlean_TzapLean_commutesPastCz(v_x_1288_, v_control_1292_, v_target_1293_);
return v___x_1294_;
}
default: 
{
uint8_t v___x_1295_; 
v___x_1295_ = 0;
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_pairCommutes___boxed(lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
uint8_t v_res_1298_; lean_object* v_r_1299_; 
v_res_1298_ = lp_tzap_x2dlean_TzapLean_pairCommutes(v_x_1296_, v_x_1297_);
lean_dec_ref(v_x_1297_);
lean_dec_ref(v_x_1296_);
v_r_1299_ = lean_box(v_res_1298_);
return v_r_1299_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_isPair(lean_object* v_x_1300_){
_start:
{
switch(lean_obj_tag(v_x_1300_))
{
case 8:
{
uint8_t v___x_1301_; 
v___x_1301_ = 1;
return v___x_1301_;
}
case 9:
{
uint8_t v___x_1302_; 
v___x_1302_ = 1;
return v___x_1302_;
}
default: 
{
uint8_t v___x_1303_; 
v___x_1303_ = 0;
return v___x_1303_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_isPair___boxed(lean_object* v_x_1304_){
_start:
{
uint8_t v_res_1305_; lean_object* v_r_1306_; 
v_res_1305_ = lp_tzap_x2dlean_TzapLean_isPair(v_x_1304_);
lean_dec_ref(v_x_1304_);
v_r_1306_ = lean_box(v_res_1305_);
return v_r_1306_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner(lean_object* v_p_1307_, lean_object* v_x_1308_){
_start:
{
if (lean_obj_tag(v_x_1308_) == 0)
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_box(0);
return v___x_1309_;
}
else
{
lean_object* v_head_1310_; lean_object* v_tail_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1331_; 
v_head_1310_ = lean_ctor_get(v_x_1308_, 0);
v_tail_1311_ = lean_ctor_get(v_x_1308_, 1);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_x_1308_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1313_ = v_x_1308_;
v_isShared_1314_ = v_isSharedCheck_1331_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_tail_1311_);
lean_inc(v_head_1310_);
lean_dec(v_x_1308_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1331_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
uint8_t v___x_1315_; 
v___x_1315_ = lp_tzap_x2dlean_TzapLean_gatesEqual(v_p_1307_, v_head_1310_);
if (v___x_1315_ == 0)
{
uint8_t v___x_1316_; 
v___x_1316_ = lp_tzap_x2dlean_TzapLean_pairCommutes(v_p_1307_, v_head_1310_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; 
lean_del_object(v___x_1313_);
lean_dec(v_tail_1311_);
lean_dec(v_head_1310_);
v___x_1317_ = lean_box(0);
return v___x_1317_;
}
else
{
lean_object* v___x_1318_; 
v___x_1318_ = lp_tzap_x2dlean_TzapLean_findPartner(v_p_1307_, v_tail_1311_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_del_object(v___x_1313_);
lean_dec(v_head_1310_);
return v___x_1318_;
}
else
{
lean_object* v_val_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1329_; 
v_val_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_val_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v_val_1319_);
v___x_1324_ = v___x_1313_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_head_1310_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_val_1319_);
v___x_1324_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1326_; 
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 0, v___x_1324_);
v___x_1326_ = v___x_1321_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
}
else
{
lean_object* v___x_1330_; 
lean_del_object(v___x_1313_);
lean_dec(v_head_1310_);
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_tail_1311_);
return v___x_1330_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_findPartner___boxed(lean_object* v_p_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = lp_tzap_x2dlean_TzapLean_findPartner(v_p_1332_, v_x_1333_);
lean_dec_ref(v_p_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingStep(lean_object* v_x_1335_){
_start:
{
if (lean_obj_tag(v_x_1335_) == 0)
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_box(0);
return v___x_1336_;
}
else
{
lean_object* v_head_1337_; lean_object* v_tail_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1368_; 
v_head_1337_ = lean_ctor_get(v_x_1335_, 0);
v_tail_1338_ = lean_ctor_get(v_x_1335_, 1);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_x_1335_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1340_ = v_x_1335_;
v_isShared_1341_ = v_isSharedCheck_1368_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_tail_1338_);
lean_inc(v_head_1337_);
lean_dec(v_x_1335_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1368_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
uint8_t v___x_1342_; 
v___x_1342_ = lp_tzap_x2dlean_TzapLean_isPair(v_head_1337_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_tail_1338_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_del_object(v___x_1340_);
lean_dec(v_head_1337_);
return v___x_1343_;
}
else
{
lean_object* v_val_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1354_; 
v_val_1344_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1346_ = v___x_1343_;
v_isShared_1347_ = v_isSharedCheck_1354_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_val_1344_);
lean_dec(v___x_1343_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1354_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 1, v_val_1344_);
v___x_1349_ = v___x_1340_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_head_1337_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_val_1344_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 0, v___x_1349_);
v___x_1351_ = v___x_1346_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
else
{
lean_object* v___x_1355_; 
lean_inc(v_tail_1338_);
v___x_1355_ = lp_tzap_x2dlean_TzapLean_findPartner(v_head_1337_, v_tail_1338_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_tail_1338_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_del_object(v___x_1340_);
lean_dec(v_head_1337_);
return v___x_1356_;
}
else
{
lean_object* v_val_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1367_; 
v_val_1357_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1359_ = v___x_1356_;
v_isShared_1360_ = v_isSharedCheck_1367_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_val_1357_);
lean_dec(v___x_1356_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1367_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 1, v_val_1357_);
v___x_1362_ = v___x_1340_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_head_1337_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_val_1357_);
v___x_1362_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1364_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1362_);
v___x_1364_ = v___x_1359_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
else
{
lean_del_object(v___x_1340_);
lean_dec(v_tail_1338_);
lean_dec(v_head_1337_);
return v___x_1355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingFuel(lean_object* v_x_1369_, lean_object* v_x_1370_){
_start:
{
lean_object* v_zero_1371_; uint8_t v_isZero_1372_; 
v_zero_1371_ = lean_unsigned_to_nat(0u);
v_isZero_1372_ = lean_nat_dec_eq(v_x_1369_, v_zero_1371_);
if (v_isZero_1372_ == 1)
{
lean_dec(v_x_1369_);
return v_x_1370_;
}
else
{
lean_object* v___x_1373_; 
lean_inc(v_x_1370_);
v___x_1373_ = lp_tzap_x2dlean_TzapLean_cancelCommutingStep(v_x_1370_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_dec(v_x_1369_);
return v_x_1370_;
}
else
{
lean_object* v_val_1374_; lean_object* v_one_1375_; lean_object* v_n_1376_; 
lean_dec(v_x_1370_);
v_val_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_val_1374_);
lean_dec_ref_known(v___x_1373_, 1);
v_one_1375_ = lean_unsigned_to_nat(1u);
v_n_1376_ = lean_nat_sub(v_x_1369_, v_one_1375_);
lean_dec(v_x_1369_);
v_x_1369_ = v_n_1376_;
v_x_1370_ = v_val_1374_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelCommutingPairs(lean_object* v_gs_1378_){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = l_List_lengthTR___redArg(v_gs_1378_);
v___x_1380_ = lp_tzap_x2dlean_TzapLean_cancelCommutingFuel(v___x_1379_, v_gs_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_IsDiagGate(lean_object* v_x_1381_){
_start:
{
switch(lean_obj_tag(v_x_1381_))
{
case 2:
{
uint8_t v___x_1382_; 
v___x_1382_ = 1;
return v___x_1382_;
}
case 3:
{
uint8_t v___x_1383_; 
v___x_1383_ = 1;
return v___x_1383_;
}
case 4:
{
uint8_t v___x_1384_; 
v___x_1384_ = 1;
return v___x_1384_;
}
case 5:
{
uint8_t v___x_1385_; 
v___x_1385_ = 1;
return v___x_1385_;
}
case 6:
{
uint8_t v___x_1386_; 
v___x_1386_ = 1;
return v___x_1386_;
}
case 7:
{
uint8_t v___x_1387_; 
v___x_1387_ = 1;
return v___x_1387_;
}
case 9:
{
uint8_t v___x_1388_; 
v___x_1388_ = 1;
return v___x_1388_;
}
case 11:
{
uint8_t v___x_1389_; 
v___x_1389_ = 1;
return v___x_1389_;
}
default: 
{
uint8_t v___x_1390_; 
v___x_1390_ = 0;
return v___x_1390_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_IsDiagGate___boxed(lean_object* v_x_1391_){
_start:
{
uint8_t v_res_1392_; lean_object* v_r_1393_; 
v_res_1392_ = lp_tzap_x2dlean_TzapLean_IsDiagGate(v_x_1391_);
lean_dec_ref(v_x_1391_);
v_r_1393_ = lean_box(v_res_1392_);
return v_r_1393_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter___redArg(lean_object* v_x_1394_, lean_object* v_h__1_1395_, lean_object* v_h__2_1396_, lean_object* v_h__3_1397_, lean_object* v_h__4_1398_, lean_object* v_h__5_1399_, lean_object* v_h__6_1400_, lean_object* v_h__7_1401_, lean_object* v_h__8_1402_, lean_object* v_h__9_1403_){
_start:
{
switch(lean_obj_tag(v_x_1394_))
{
case 2:
{
lean_object* v_q_1404_; lean_object* v___x_1405_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
v_q_1404_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_q_1404_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1405_ = lean_apply_1(v_h__1_1395_, v_q_1404_);
return v___x_1405_;
}
case 3:
{
lean_object* v_q_1406_; lean_object* v___x_1407_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__1_1395_);
v_q_1406_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_q_1406_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1407_ = lean_apply_1(v_h__2_1396_, v_q_1406_);
return v___x_1407_;
}
case 4:
{
lean_object* v_q_1408_; lean_object* v___x_1409_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_q_1408_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_q_1408_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1409_ = lean_apply_1(v_h__3_1397_, v_q_1408_);
return v___x_1409_;
}
case 5:
{
lean_object* v_q_1410_; lean_object* v___x_1411_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_q_1410_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_q_1410_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1411_ = lean_apply_1(v_h__4_1398_, v_q_1410_);
return v___x_1411_;
}
case 6:
{
lean_object* v_q_1412_; lean_object* v___x_1413_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_q_1412_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_q_1412_);
lean_dec_ref_known(v_x_1394_, 1);
v___x_1413_ = lean_apply_1(v_h__5_1399_, v_q_1412_);
return v___x_1413_;
}
case 7:
{
lean_object* v_theta_1414_; lean_object* v_q_1415_; lean_object* v___x_1416_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_theta_1414_ = lean_ctor_get(v_x_1394_, 0);
lean_inc_ref(v_theta_1414_);
v_q_1415_ = lean_ctor_get(v_x_1394_, 1);
lean_inc(v_q_1415_);
lean_dec_ref_known(v_x_1394_, 2);
v___x_1416_ = lean_apply_2(v_h__6_1400_, v_theta_1414_, v_q_1415_);
return v___x_1416_;
}
case 9:
{
lean_object* v_control_1417_; lean_object* v_target_1418_; lean_object* v___x_1419_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__8_1402_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_control_1417_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_control_1417_);
v_target_1418_ = lean_ctor_get(v_x_1394_, 1);
lean_inc(v_target_1418_);
lean_dec_ref_known(v_x_1394_, 2);
v___x_1419_ = lean_apply_2(v_h__7_1401_, v_control_1417_, v_target_1418_);
return v___x_1419_;
}
case 11:
{
lean_object* v_control_u2081_1420_; lean_object* v_control_u2082_1421_; lean_object* v_target_1422_; lean_object* v___x_1423_; 
lean_dec(v_h__9_1403_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v_control_u2081_1420_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_control_u2081_1420_);
v_control_u2082_1421_ = lean_ctor_get(v_x_1394_, 1);
lean_inc(v_control_u2082_1421_);
v_target_1422_ = lean_ctor_get(v_x_1394_, 2);
lean_inc(v_target_1422_);
lean_dec_ref_known(v_x_1394_, 3);
v___x_1423_ = lean_apply_3(v_h__8_1402_, v_control_u2081_1420_, v_control_u2082_1421_, v_target_1422_);
return v___x_1423_;
}
default: 
{
lean_object* v___x_1424_; 
lean_dec(v_h__8_1402_);
lean_dec(v_h__7_1401_);
lean_dec(v_h__6_1400_);
lean_dec(v_h__5_1399_);
lean_dec(v_h__4_1398_);
lean_dec(v_h__3_1397_);
lean_dec(v_h__2_1396_);
lean_dec(v_h__1_1395_);
v___x_1424_ = lean_apply_9(v_h__9_1403_, v_x_1394_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1424_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_IsDiagGate_match__1_splitter(lean_object* v_motive_1425_, lean_object* v_x_1426_, lean_object* v_h__1_1427_, lean_object* v_h__2_1428_, lean_object* v_h__3_1429_, lean_object* v_h__4_1430_, lean_object* v_h__5_1431_, lean_object* v_h__6_1432_, lean_object* v_h__7_1433_, lean_object* v_h__8_1434_, lean_object* v_h__9_1435_){
_start:
{
switch(lean_obj_tag(v_x_1426_))
{
case 2:
{
lean_object* v_q_1436_; lean_object* v___x_1437_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
v_q_1436_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_q_1436_);
lean_dec_ref_known(v_x_1426_, 1);
v___x_1437_ = lean_apply_1(v_h__1_1427_, v_q_1436_);
return v___x_1437_;
}
case 3:
{
lean_object* v_q_1438_; lean_object* v___x_1439_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__1_1427_);
v_q_1438_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_q_1438_);
lean_dec_ref_known(v_x_1426_, 1);
v___x_1439_ = lean_apply_1(v_h__2_1428_, v_q_1438_);
return v___x_1439_;
}
case 4:
{
lean_object* v_q_1440_; lean_object* v___x_1441_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_q_1440_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_q_1440_);
lean_dec_ref_known(v_x_1426_, 1);
v___x_1441_ = lean_apply_1(v_h__3_1429_, v_q_1440_);
return v___x_1441_;
}
case 5:
{
lean_object* v_q_1442_; lean_object* v___x_1443_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_q_1442_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_q_1442_);
lean_dec_ref_known(v_x_1426_, 1);
v___x_1443_ = lean_apply_1(v_h__4_1430_, v_q_1442_);
return v___x_1443_;
}
case 6:
{
lean_object* v_q_1444_; lean_object* v___x_1445_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_q_1444_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_q_1444_);
lean_dec_ref_known(v_x_1426_, 1);
v___x_1445_ = lean_apply_1(v_h__5_1431_, v_q_1444_);
return v___x_1445_;
}
case 7:
{
lean_object* v_theta_1446_; lean_object* v_q_1447_; lean_object* v___x_1448_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_theta_1446_ = lean_ctor_get(v_x_1426_, 0);
lean_inc_ref(v_theta_1446_);
v_q_1447_ = lean_ctor_get(v_x_1426_, 1);
lean_inc(v_q_1447_);
lean_dec_ref_known(v_x_1426_, 2);
v___x_1448_ = lean_apply_2(v_h__6_1432_, v_theta_1446_, v_q_1447_);
return v___x_1448_;
}
case 9:
{
lean_object* v_control_1449_; lean_object* v_target_1450_; lean_object* v___x_1451_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__8_1434_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_control_1449_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_control_1449_);
v_target_1450_ = lean_ctor_get(v_x_1426_, 1);
lean_inc(v_target_1450_);
lean_dec_ref_known(v_x_1426_, 2);
v___x_1451_ = lean_apply_2(v_h__7_1433_, v_control_1449_, v_target_1450_);
return v___x_1451_;
}
case 11:
{
lean_object* v_control_u2081_1452_; lean_object* v_control_u2082_1453_; lean_object* v_target_1454_; lean_object* v___x_1455_; 
lean_dec(v_h__9_1435_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v_control_u2081_1452_ = lean_ctor_get(v_x_1426_, 0);
lean_inc(v_control_u2081_1452_);
v_control_u2082_1453_ = lean_ctor_get(v_x_1426_, 1);
lean_inc(v_control_u2082_1453_);
v_target_1454_ = lean_ctor_get(v_x_1426_, 2);
lean_inc(v_target_1454_);
lean_dec_ref_known(v_x_1426_, 3);
v___x_1455_ = lean_apply_3(v_h__8_1434_, v_control_u2081_1452_, v_control_u2082_1453_, v_target_1454_);
return v___x_1455_;
}
default: 
{
lean_object* v___x_1456_; 
lean_dec(v_h__8_1434_);
lean_dec(v_h__7_1433_);
lean_dec(v_h__6_1432_);
lean_dec(v_h__5_1431_);
lean_dec(v_h__4_1430_);
lean_dec(v_h__3_1429_);
lean_dec(v_h__2_1428_);
lean_dec(v_h__1_1427_);
v___x_1456_ = lean_apply_9(v_h__9_1435_, v_x_1426_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1456_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter___redArg(lean_object* v_g_1457_, lean_object* v_h__1_1458_, lean_object* v_h__2_1459_, lean_object* v_h__3_1460_, lean_object* v_h__4_1461_, lean_object* v_h__5_1462_, lean_object* v_h__6_1463_, lean_object* v_h__7_1464_, lean_object* v_h__8_1465_, lean_object* v_h__9_1466_, lean_object* v_h__10_1467_, lean_object* v_h__11_1468_, lean_object* v_h__12_1469_, lean_object* v_h__13_1470_, lean_object* v_h__14_1471_){
_start:
{
switch(lean_obj_tag(v_g_1457_))
{
case 0:
{
lean_object* v_q_1472_; lean_object* v___x_1473_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
v_q_1472_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1472_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1473_ = lean_apply_1(v_h__1_1458_, v_q_1472_);
return v___x_1473_;
}
case 1:
{
lean_object* v_q_1474_; lean_object* v___x_1475_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__1_1458_);
v_q_1474_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1474_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1475_ = lean_apply_1(v_h__2_1459_, v_q_1474_);
return v___x_1475_;
}
case 2:
{
lean_object* v_q_1476_; lean_object* v___x_1477_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1476_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1476_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1477_ = lean_apply_1(v_h__3_1460_, v_q_1476_);
return v___x_1477_;
}
case 3:
{
lean_object* v_q_1478_; lean_object* v___x_1479_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1478_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1478_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1479_ = lean_apply_1(v_h__4_1461_, v_q_1478_);
return v___x_1479_;
}
case 4:
{
lean_object* v_q_1480_; lean_object* v___x_1481_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1480_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1480_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1481_ = lean_apply_1(v_h__5_1462_, v_q_1480_);
return v___x_1481_;
}
case 5:
{
lean_object* v_q_1482_; lean_object* v___x_1483_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1482_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1482_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1483_ = lean_apply_1(v_h__6_1463_, v_q_1482_);
return v___x_1483_;
}
case 6:
{
lean_object* v_q_1484_; lean_object* v___x_1485_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1484_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1484_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1485_ = lean_apply_1(v_h__7_1464_, v_q_1484_);
return v___x_1485_;
}
case 7:
{
lean_object* v_theta_1486_; lean_object* v_q_1487_; lean_object* v___x_1488_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_theta_1486_ = lean_ctor_get(v_g_1457_, 0);
lean_inc_ref(v_theta_1486_);
v_q_1487_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_q_1487_);
lean_dec_ref_known(v_g_1457_, 2);
v___x_1488_ = lean_apply_2(v_h__8_1465_, v_theta_1486_, v_q_1487_);
return v___x_1488_;
}
case 8:
{
lean_object* v_control_1489_; lean_object* v_target_1490_; lean_object* v___x_1491_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_control_1489_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_control_1489_);
v_target_1490_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_target_1490_);
lean_dec_ref_known(v_g_1457_, 2);
v___x_1491_ = lean_apply_2(v_h__9_1466_, v_control_1489_, v_target_1490_);
return v___x_1491_;
}
case 9:
{
lean_object* v_control_1492_; lean_object* v_target_1493_; lean_object* v___x_1494_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_control_1492_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_control_1492_);
v_target_1493_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_target_1493_);
lean_dec_ref_known(v_g_1457_, 2);
v___x_1494_ = lean_apply_2(v_h__10_1467_, v_control_1492_, v_target_1493_);
return v___x_1494_;
}
case 10:
{
lean_object* v_control_u2081_1495_; lean_object* v_control_u2082_1496_; lean_object* v_target_1497_; lean_object* v___x_1498_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_control_u2081_1495_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_control_u2081_1495_);
v_control_u2082_1496_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_control_u2082_1496_);
v_target_1497_ = lean_ctor_get(v_g_1457_, 2);
lean_inc(v_target_1497_);
lean_dec_ref_known(v_g_1457_, 3);
v___x_1498_ = lean_apply_3(v_h__11_1468_, v_control_u2081_1495_, v_control_u2082_1496_, v_target_1497_);
return v___x_1498_;
}
case 11:
{
lean_object* v_control_u2081_1499_; lean_object* v_control_u2082_1500_; lean_object* v_target_1501_; lean_object* v___x_1502_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__13_1470_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_control_u2081_1499_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_control_u2081_1499_);
v_control_u2082_1500_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_control_u2082_1500_);
v_target_1501_ = lean_ctor_get(v_g_1457_, 2);
lean_inc(v_target_1501_);
lean_dec_ref_known(v_g_1457_, 3);
v___x_1502_ = lean_apply_3(v_h__12_1469_, v_control_u2081_1499_, v_control_u2082_1500_, v_target_1501_);
return v___x_1502_;
}
case 12:
{
lean_object* v_qubit_1503_; lean_object* v_cbit_1504_; lean_object* v___x_1505_; 
lean_dec(v_h__14_1471_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_qubit_1503_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_qubit_1503_);
v_cbit_1504_ = lean_ctor_get(v_g_1457_, 1);
lean_inc(v_cbit_1504_);
lean_dec_ref_known(v_g_1457_, 2);
v___x_1505_ = lean_apply_2(v_h__13_1470_, v_qubit_1503_, v_cbit_1504_);
return v___x_1505_;
}
default: 
{
lean_object* v_q_1506_; lean_object* v___x_1507_; 
lean_dec(v_h__13_1470_);
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
lean_dec(v_h__1_1458_);
v_q_1506_ = lean_ctor_get(v_g_1457_, 0);
lean_inc(v_q_1506_);
lean_dec_ref_known(v_g_1457_, 1);
v___x_1507_ = lean_apply_1(v_h__14_1471_, v_q_1506_);
return v___x_1507_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCnot_match__1_splitter(lean_object* v_motive_1508_, lean_object* v_g_1509_, lean_object* v_h__1_1510_, lean_object* v_h__2_1511_, lean_object* v_h__3_1512_, lean_object* v_h__4_1513_, lean_object* v_h__5_1514_, lean_object* v_h__6_1515_, lean_object* v_h__7_1516_, lean_object* v_h__8_1517_, lean_object* v_h__9_1518_, lean_object* v_h__10_1519_, lean_object* v_h__11_1520_, lean_object* v_h__12_1521_, lean_object* v_h__13_1522_, lean_object* v_h__14_1523_){
_start:
{
switch(lean_obj_tag(v_g_1509_))
{
case 0:
{
lean_object* v_q_1524_; lean_object* v___x_1525_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
v_q_1524_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1524_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1525_ = lean_apply_1(v_h__1_1510_, v_q_1524_);
return v___x_1525_;
}
case 1:
{
lean_object* v_q_1526_; lean_object* v___x_1527_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__1_1510_);
v_q_1526_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1526_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1527_ = lean_apply_1(v_h__2_1511_, v_q_1526_);
return v___x_1527_;
}
case 2:
{
lean_object* v_q_1528_; lean_object* v___x_1529_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1528_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1528_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1529_ = lean_apply_1(v_h__3_1512_, v_q_1528_);
return v___x_1529_;
}
case 3:
{
lean_object* v_q_1530_; lean_object* v___x_1531_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1530_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1530_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1531_ = lean_apply_1(v_h__4_1513_, v_q_1530_);
return v___x_1531_;
}
case 4:
{
lean_object* v_q_1532_; lean_object* v___x_1533_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1532_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1532_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1533_ = lean_apply_1(v_h__5_1514_, v_q_1532_);
return v___x_1533_;
}
case 5:
{
lean_object* v_q_1534_; lean_object* v___x_1535_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1534_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1534_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1535_ = lean_apply_1(v_h__6_1515_, v_q_1534_);
return v___x_1535_;
}
case 6:
{
lean_object* v_q_1536_; lean_object* v___x_1537_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1536_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1536_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1537_ = lean_apply_1(v_h__7_1516_, v_q_1536_);
return v___x_1537_;
}
case 7:
{
lean_object* v_theta_1538_; lean_object* v_q_1539_; lean_object* v___x_1540_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_theta_1538_ = lean_ctor_get(v_g_1509_, 0);
lean_inc_ref(v_theta_1538_);
v_q_1539_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_q_1539_);
lean_dec_ref_known(v_g_1509_, 2);
v___x_1540_ = lean_apply_2(v_h__8_1517_, v_theta_1538_, v_q_1539_);
return v___x_1540_;
}
case 8:
{
lean_object* v_control_1541_; lean_object* v_target_1542_; lean_object* v___x_1543_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_control_1541_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_control_1541_);
v_target_1542_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_target_1542_);
lean_dec_ref_known(v_g_1509_, 2);
v___x_1543_ = lean_apply_2(v_h__9_1518_, v_control_1541_, v_target_1542_);
return v___x_1543_;
}
case 9:
{
lean_object* v_control_1544_; lean_object* v_target_1545_; lean_object* v___x_1546_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_control_1544_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_control_1544_);
v_target_1545_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_target_1545_);
lean_dec_ref_known(v_g_1509_, 2);
v___x_1546_ = lean_apply_2(v_h__10_1519_, v_control_1544_, v_target_1545_);
return v___x_1546_;
}
case 10:
{
lean_object* v_control_u2081_1547_; lean_object* v_control_u2082_1548_; lean_object* v_target_1549_; lean_object* v___x_1550_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_control_u2081_1547_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_control_u2081_1547_);
v_control_u2082_1548_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_control_u2082_1548_);
v_target_1549_ = lean_ctor_get(v_g_1509_, 2);
lean_inc(v_target_1549_);
lean_dec_ref_known(v_g_1509_, 3);
v___x_1550_ = lean_apply_3(v_h__11_1520_, v_control_u2081_1547_, v_control_u2082_1548_, v_target_1549_);
return v___x_1550_;
}
case 11:
{
lean_object* v_control_u2081_1551_; lean_object* v_control_u2082_1552_; lean_object* v_target_1553_; lean_object* v___x_1554_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__13_1522_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_control_u2081_1551_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_control_u2081_1551_);
v_control_u2082_1552_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_control_u2082_1552_);
v_target_1553_ = lean_ctor_get(v_g_1509_, 2);
lean_inc(v_target_1553_);
lean_dec_ref_known(v_g_1509_, 3);
v___x_1554_ = lean_apply_3(v_h__12_1521_, v_control_u2081_1551_, v_control_u2082_1552_, v_target_1553_);
return v___x_1554_;
}
case 12:
{
lean_object* v_qubit_1555_; lean_object* v_cbit_1556_; lean_object* v___x_1557_; 
lean_dec(v_h__14_1523_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_qubit_1555_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_qubit_1555_);
v_cbit_1556_ = lean_ctor_get(v_g_1509_, 1);
lean_inc(v_cbit_1556_);
lean_dec_ref_known(v_g_1509_, 2);
v___x_1557_ = lean_apply_2(v_h__13_1522_, v_qubit_1555_, v_cbit_1556_);
return v___x_1557_;
}
default: 
{
lean_object* v_q_1558_; lean_object* v___x_1559_; 
lean_dec(v_h__13_1522_);
lean_dec(v_h__12_1521_);
lean_dec(v_h__11_1520_);
lean_dec(v_h__10_1519_);
lean_dec(v_h__9_1518_);
lean_dec(v_h__8_1517_);
lean_dec(v_h__7_1516_);
lean_dec(v_h__6_1515_);
lean_dec(v_h__5_1514_);
lean_dec(v_h__4_1513_);
lean_dec(v_h__3_1512_);
lean_dec(v_h__2_1511_);
lean_dec(v_h__1_1510_);
v_q_1558_ = lean_ctor_get(v_g_1509_, 0);
lean_inc(v_q_1558_);
lean_dec_ref_known(v_g_1509_, 1);
v___x_1559_ = lean_apply_1(v_h__14_1523_, v_q_1558_);
return v___x_1559_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter___redArg(lean_object* v_g_1560_, lean_object* v_h__1_1561_, lean_object* v_h__2_1562_, lean_object* v_h__3_1563_, lean_object* v_h__4_1564_, lean_object* v_h__5_1565_, lean_object* v_h__6_1566_, lean_object* v_h__7_1567_, lean_object* v_h__8_1568_, lean_object* v_h__9_1569_, lean_object* v_h__10_1570_, lean_object* v_h__11_1571_, lean_object* v_h__12_1572_, lean_object* v_h__13_1573_, lean_object* v_h__14_1574_){
_start:
{
switch(lean_obj_tag(v_g_1560_))
{
case 0:
{
lean_object* v_q_1575_; lean_object* v___x_1576_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
v_q_1575_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1575_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1576_ = lean_apply_1(v_h__1_1561_, v_q_1575_);
return v___x_1576_;
}
case 1:
{
lean_object* v_q_1577_; lean_object* v___x_1578_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__1_1561_);
v_q_1577_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1577_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1578_ = lean_apply_1(v_h__2_1562_, v_q_1577_);
return v___x_1578_;
}
case 2:
{
lean_object* v_q_1579_; lean_object* v___x_1580_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1579_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1579_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1580_ = lean_apply_1(v_h__3_1563_, v_q_1579_);
return v___x_1580_;
}
case 3:
{
lean_object* v_q_1581_; lean_object* v___x_1582_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1581_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1581_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1582_ = lean_apply_1(v_h__4_1564_, v_q_1581_);
return v___x_1582_;
}
case 4:
{
lean_object* v_q_1583_; lean_object* v___x_1584_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1583_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1583_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1584_ = lean_apply_1(v_h__5_1565_, v_q_1583_);
return v___x_1584_;
}
case 5:
{
lean_object* v_q_1585_; lean_object* v___x_1586_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1585_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1585_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1586_ = lean_apply_1(v_h__6_1566_, v_q_1585_);
return v___x_1586_;
}
case 6:
{
lean_object* v_q_1587_; lean_object* v___x_1588_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1587_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1587_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1588_ = lean_apply_1(v_h__7_1567_, v_q_1587_);
return v___x_1588_;
}
case 7:
{
lean_object* v_theta_1589_; lean_object* v_q_1590_; lean_object* v___x_1591_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_theta_1589_ = lean_ctor_get(v_g_1560_, 0);
lean_inc_ref(v_theta_1589_);
v_q_1590_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_q_1590_);
lean_dec_ref_known(v_g_1560_, 2);
v___x_1591_ = lean_apply_2(v_h__8_1568_, v_theta_1589_, v_q_1590_);
return v___x_1591_;
}
case 8:
{
lean_object* v_control_1592_; lean_object* v_target_1593_; lean_object* v___x_1594_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_control_1592_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_control_1592_);
v_target_1593_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_target_1593_);
lean_dec_ref_known(v_g_1560_, 2);
v___x_1594_ = lean_apply_2(v_h__11_1571_, v_control_1592_, v_target_1593_);
return v___x_1594_;
}
case 9:
{
lean_object* v_control_1595_; lean_object* v_target_1596_; lean_object* v___x_1597_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_control_1595_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_control_1595_);
v_target_1596_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_target_1596_);
lean_dec_ref_known(v_g_1560_, 2);
v___x_1597_ = lean_apply_2(v_h__9_1569_, v_control_1595_, v_target_1596_);
return v___x_1597_;
}
case 10:
{
lean_object* v_control_u2081_1598_; lean_object* v_control_u2082_1599_; lean_object* v_target_1600_; lean_object* v___x_1601_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_control_u2081_1598_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_control_u2081_1598_);
v_control_u2082_1599_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_control_u2082_1599_);
v_target_1600_ = lean_ctor_get(v_g_1560_, 2);
lean_inc(v_target_1600_);
lean_dec_ref_known(v_g_1560_, 3);
v___x_1601_ = lean_apply_3(v_h__12_1572_, v_control_u2081_1598_, v_control_u2082_1599_, v_target_1600_);
return v___x_1601_;
}
case 11:
{
lean_object* v_control_u2081_1602_; lean_object* v_control_u2082_1603_; lean_object* v_target_1604_; lean_object* v___x_1605_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_control_u2081_1602_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_control_u2081_1602_);
v_control_u2082_1603_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_control_u2082_1603_);
v_target_1604_ = lean_ctor_get(v_g_1560_, 2);
lean_inc(v_target_1604_);
lean_dec_ref_known(v_g_1560_, 3);
v___x_1605_ = lean_apply_3(v_h__10_1570_, v_control_u2081_1602_, v_control_u2082_1603_, v_target_1604_);
return v___x_1605_;
}
case 12:
{
lean_object* v_qubit_1606_; lean_object* v_cbit_1607_; lean_object* v___x_1608_; 
lean_dec(v_h__14_1574_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_qubit_1606_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_qubit_1606_);
v_cbit_1607_ = lean_ctor_get(v_g_1560_, 1);
lean_inc(v_cbit_1607_);
lean_dec_ref_known(v_g_1560_, 2);
v___x_1608_ = lean_apply_2(v_h__13_1573_, v_qubit_1606_, v_cbit_1607_);
return v___x_1608_;
}
default: 
{
lean_object* v_q_1609_; lean_object* v___x_1610_; 
lean_dec(v_h__13_1573_);
lean_dec(v_h__12_1572_);
lean_dec(v_h__11_1571_);
lean_dec(v_h__10_1570_);
lean_dec(v_h__9_1569_);
lean_dec(v_h__8_1568_);
lean_dec(v_h__7_1567_);
lean_dec(v_h__6_1566_);
lean_dec(v_h__5_1565_);
lean_dec(v_h__4_1564_);
lean_dec(v_h__3_1563_);
lean_dec(v_h__2_1562_);
lean_dec(v_h__1_1561_);
v_q_1609_ = lean_ctor_get(v_g_1560_, 0);
lean_inc(v_q_1609_);
lean_dec_ref_known(v_g_1560_, 1);
v___x_1610_ = lean_apply_1(v_h__14_1574_, v_q_1609_);
return v___x_1610_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_commutesPastCz_match__1_splitter(lean_object* v_motive_1611_, lean_object* v_g_1612_, lean_object* v_h__1_1613_, lean_object* v_h__2_1614_, lean_object* v_h__3_1615_, lean_object* v_h__4_1616_, lean_object* v_h__5_1617_, lean_object* v_h__6_1618_, lean_object* v_h__7_1619_, lean_object* v_h__8_1620_, lean_object* v_h__9_1621_, lean_object* v_h__10_1622_, lean_object* v_h__11_1623_, lean_object* v_h__12_1624_, lean_object* v_h__13_1625_, lean_object* v_h__14_1626_){
_start:
{
switch(lean_obj_tag(v_g_1612_))
{
case 0:
{
lean_object* v_q_1627_; lean_object* v___x_1628_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
v_q_1627_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1627_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1628_ = lean_apply_1(v_h__1_1613_, v_q_1627_);
return v___x_1628_;
}
case 1:
{
lean_object* v_q_1629_; lean_object* v___x_1630_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__1_1613_);
v_q_1629_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1629_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1630_ = lean_apply_1(v_h__2_1614_, v_q_1629_);
return v___x_1630_;
}
case 2:
{
lean_object* v_q_1631_; lean_object* v___x_1632_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1631_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1631_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1632_ = lean_apply_1(v_h__3_1615_, v_q_1631_);
return v___x_1632_;
}
case 3:
{
lean_object* v_q_1633_; lean_object* v___x_1634_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1633_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1633_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1634_ = lean_apply_1(v_h__4_1616_, v_q_1633_);
return v___x_1634_;
}
case 4:
{
lean_object* v_q_1635_; lean_object* v___x_1636_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1635_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1635_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1636_ = lean_apply_1(v_h__5_1617_, v_q_1635_);
return v___x_1636_;
}
case 5:
{
lean_object* v_q_1637_; lean_object* v___x_1638_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1637_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1637_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1638_ = lean_apply_1(v_h__6_1618_, v_q_1637_);
return v___x_1638_;
}
case 6:
{
lean_object* v_q_1639_; lean_object* v___x_1640_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1639_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1639_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1640_ = lean_apply_1(v_h__7_1619_, v_q_1639_);
return v___x_1640_;
}
case 7:
{
lean_object* v_theta_1641_; lean_object* v_q_1642_; lean_object* v___x_1643_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_theta_1641_ = lean_ctor_get(v_g_1612_, 0);
lean_inc_ref(v_theta_1641_);
v_q_1642_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_q_1642_);
lean_dec_ref_known(v_g_1612_, 2);
v___x_1643_ = lean_apply_2(v_h__8_1620_, v_theta_1641_, v_q_1642_);
return v___x_1643_;
}
case 8:
{
lean_object* v_control_1644_; lean_object* v_target_1645_; lean_object* v___x_1646_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_control_1644_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_control_1644_);
v_target_1645_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_target_1645_);
lean_dec_ref_known(v_g_1612_, 2);
v___x_1646_ = lean_apply_2(v_h__11_1623_, v_control_1644_, v_target_1645_);
return v___x_1646_;
}
case 9:
{
lean_object* v_control_1647_; lean_object* v_target_1648_; lean_object* v___x_1649_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_control_1647_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_control_1647_);
v_target_1648_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_target_1648_);
lean_dec_ref_known(v_g_1612_, 2);
v___x_1649_ = lean_apply_2(v_h__9_1621_, v_control_1647_, v_target_1648_);
return v___x_1649_;
}
case 10:
{
lean_object* v_control_u2081_1650_; lean_object* v_control_u2082_1651_; lean_object* v_target_1652_; lean_object* v___x_1653_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_control_u2081_1650_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_control_u2081_1650_);
v_control_u2082_1651_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_control_u2082_1651_);
v_target_1652_ = lean_ctor_get(v_g_1612_, 2);
lean_inc(v_target_1652_);
lean_dec_ref_known(v_g_1612_, 3);
v___x_1653_ = lean_apply_3(v_h__12_1624_, v_control_u2081_1650_, v_control_u2082_1651_, v_target_1652_);
return v___x_1653_;
}
case 11:
{
lean_object* v_control_u2081_1654_; lean_object* v_control_u2082_1655_; lean_object* v_target_1656_; lean_object* v___x_1657_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_control_u2081_1654_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_control_u2081_1654_);
v_control_u2082_1655_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_control_u2082_1655_);
v_target_1656_ = lean_ctor_get(v_g_1612_, 2);
lean_inc(v_target_1656_);
lean_dec_ref_known(v_g_1612_, 3);
v___x_1657_ = lean_apply_3(v_h__10_1622_, v_control_u2081_1654_, v_control_u2082_1655_, v_target_1656_);
return v___x_1657_;
}
case 12:
{
lean_object* v_qubit_1658_; lean_object* v_cbit_1659_; lean_object* v___x_1660_; 
lean_dec(v_h__14_1626_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_qubit_1658_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_qubit_1658_);
v_cbit_1659_ = lean_ctor_get(v_g_1612_, 1);
lean_inc(v_cbit_1659_);
lean_dec_ref_known(v_g_1612_, 2);
v___x_1660_ = lean_apply_2(v_h__13_1625_, v_qubit_1658_, v_cbit_1659_);
return v___x_1660_;
}
default: 
{
lean_object* v_q_1661_; lean_object* v___x_1662_; 
lean_dec(v_h__13_1625_);
lean_dec(v_h__12_1624_);
lean_dec(v_h__11_1623_);
lean_dec(v_h__10_1622_);
lean_dec(v_h__9_1621_);
lean_dec(v_h__8_1620_);
lean_dec(v_h__7_1619_);
lean_dec(v_h__6_1618_);
lean_dec(v_h__5_1617_);
lean_dec(v_h__4_1616_);
lean_dec(v_h__3_1615_);
lean_dec(v_h__2_1614_);
lean_dec(v_h__1_1613_);
v_q_1661_ = lean_ctor_get(v_g_1612_, 0);
lean_inc(v_q_1661_);
lean_dec_ref_known(v_g_1612_, 1);
v___x_1662_ = lean_apply_1(v_h__14_1626_, v_q_1661_);
return v___x_1662_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter___redArg(lean_object* v_x_1663_, lean_object* v_x_1664_, lean_object* v_h__1_1665_, lean_object* v_h__2_1666_, lean_object* v_h__3_1667_){
_start:
{
switch(lean_obj_tag(v_x_1663_))
{
case 8:
{
lean_object* v_control_1668_; lean_object* v_target_1669_; lean_object* v___x_1670_; 
lean_dec(v_h__3_1667_);
lean_dec(v_h__2_1666_);
v_control_1668_ = lean_ctor_get(v_x_1663_, 0);
lean_inc(v_control_1668_);
v_target_1669_ = lean_ctor_get(v_x_1663_, 1);
lean_inc(v_target_1669_);
lean_dec_ref_known(v_x_1663_, 2);
v___x_1670_ = lean_apply_3(v_h__1_1665_, v_control_1668_, v_target_1669_, v_x_1664_);
return v___x_1670_;
}
case 9:
{
lean_object* v_control_1671_; lean_object* v_target_1672_; lean_object* v___x_1673_; 
lean_dec(v_h__3_1667_);
lean_dec(v_h__1_1665_);
v_control_1671_ = lean_ctor_get(v_x_1663_, 0);
lean_inc(v_control_1671_);
v_target_1672_ = lean_ctor_get(v_x_1663_, 1);
lean_inc(v_target_1672_);
lean_dec_ref_known(v_x_1663_, 2);
v___x_1673_ = lean_apply_3(v_h__2_1666_, v_control_1671_, v_target_1672_, v_x_1664_);
return v___x_1673_;
}
default: 
{
lean_object* v___x_1674_; 
lean_dec(v_h__2_1666_);
lean_dec(v_h__1_1665_);
v___x_1674_ = lean_apply_4(v_h__3_1667_, v_x_1663_, v_x_1664_, lean_box(0), lean_box(0));
return v___x_1674_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_pairCommutes_match__1_splitter(lean_object* v_motive_1675_, lean_object* v_x_1676_, lean_object* v_x_1677_, lean_object* v_h__1_1678_, lean_object* v_h__2_1679_, lean_object* v_h__3_1680_){
_start:
{
switch(lean_obj_tag(v_x_1676_))
{
case 8:
{
lean_object* v_control_1681_; lean_object* v_target_1682_; lean_object* v___x_1683_; 
lean_dec(v_h__3_1680_);
lean_dec(v_h__2_1679_);
v_control_1681_ = lean_ctor_get(v_x_1676_, 0);
lean_inc(v_control_1681_);
v_target_1682_ = lean_ctor_get(v_x_1676_, 1);
lean_inc(v_target_1682_);
lean_dec_ref_known(v_x_1676_, 2);
v___x_1683_ = lean_apply_3(v_h__1_1678_, v_control_1681_, v_target_1682_, v_x_1677_);
return v___x_1683_;
}
case 9:
{
lean_object* v_control_1684_; lean_object* v_target_1685_; lean_object* v___x_1686_; 
lean_dec(v_h__3_1680_);
lean_dec(v_h__1_1678_);
v_control_1684_ = lean_ctor_get(v_x_1676_, 0);
lean_inc(v_control_1684_);
v_target_1685_ = lean_ctor_get(v_x_1676_, 1);
lean_inc(v_target_1685_);
lean_dec_ref_known(v_x_1676_, 2);
v___x_1686_ = lean_apply_3(v_h__2_1679_, v_control_1684_, v_target_1685_, v_x_1677_);
return v___x_1686_;
}
default: 
{
lean_object* v___x_1687_; 
lean_dec(v_h__2_1679_);
lean_dec(v_h__1_1678_);
v___x_1687_ = lean_apply_4(v_h__3_1680_, v_x_1676_, v_x_1677_, lean_box(0), lean_box(0));
return v___x_1687_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter___redArg(lean_object* v_x_1688_, lean_object* v_h__1_1689_, lean_object* v_h__2_1690_, lean_object* v_h__3_1691_, lean_object* v_h__4_1692_, lean_object* v_h__5_1693_){
_start:
{
switch(lean_obj_tag(v_x_1688_))
{
case 8:
{
lean_object* v_control_1694_; lean_object* v_target_1695_; lean_object* v___x_1696_; 
lean_dec(v_h__5_1693_);
lean_dec(v_h__4_1692_);
lean_dec(v_h__3_1691_);
lean_dec(v_h__2_1690_);
v_control_1694_ = lean_ctor_get(v_x_1688_, 0);
lean_inc(v_control_1694_);
v_target_1695_ = lean_ctor_get(v_x_1688_, 1);
lean_inc(v_target_1695_);
lean_dec_ref_known(v_x_1688_, 2);
v___x_1696_ = lean_apply_2(v_h__1_1689_, v_control_1694_, v_target_1695_);
return v___x_1696_;
}
case 9:
{
lean_object* v_control_1697_; lean_object* v_target_1698_; lean_object* v___x_1699_; 
lean_dec(v_h__5_1693_);
lean_dec(v_h__4_1692_);
lean_dec(v_h__3_1691_);
lean_dec(v_h__1_1689_);
v_control_1697_ = lean_ctor_get(v_x_1688_, 0);
lean_inc(v_control_1697_);
v_target_1698_ = lean_ctor_get(v_x_1688_, 1);
lean_inc(v_target_1698_);
lean_dec_ref_known(v_x_1688_, 2);
v___x_1699_ = lean_apply_2(v_h__2_1690_, v_control_1697_, v_target_1698_);
return v___x_1699_;
}
case 10:
{
lean_object* v_control_u2081_1700_; lean_object* v_control_u2082_1701_; lean_object* v_target_1702_; lean_object* v___x_1703_; 
lean_dec(v_h__5_1693_);
lean_dec(v_h__4_1692_);
lean_dec(v_h__2_1690_);
lean_dec(v_h__1_1689_);
v_control_u2081_1700_ = lean_ctor_get(v_x_1688_, 0);
lean_inc(v_control_u2081_1700_);
v_control_u2082_1701_ = lean_ctor_get(v_x_1688_, 1);
lean_inc(v_control_u2082_1701_);
v_target_1702_ = lean_ctor_get(v_x_1688_, 2);
lean_inc(v_target_1702_);
lean_dec_ref_known(v_x_1688_, 3);
v___x_1703_ = lean_apply_3(v_h__3_1691_, v_control_u2081_1700_, v_control_u2082_1701_, v_target_1702_);
return v___x_1703_;
}
case 11:
{
lean_object* v_control_u2081_1704_; lean_object* v_control_u2082_1705_; lean_object* v_target_1706_; lean_object* v___x_1707_; 
lean_dec(v_h__5_1693_);
lean_dec(v_h__3_1691_);
lean_dec(v_h__2_1690_);
lean_dec(v_h__1_1689_);
v_control_u2081_1704_ = lean_ctor_get(v_x_1688_, 0);
lean_inc(v_control_u2081_1704_);
v_control_u2082_1705_ = lean_ctor_get(v_x_1688_, 1);
lean_inc(v_control_u2082_1705_);
v_target_1706_ = lean_ctor_get(v_x_1688_, 2);
lean_inc(v_target_1706_);
lean_dec_ref_known(v_x_1688_, 3);
v___x_1707_ = lean_apply_3(v_h__4_1692_, v_control_u2081_1704_, v_control_u2082_1705_, v_target_1706_);
return v___x_1707_;
}
default: 
{
lean_object* v___x_1708_; 
lean_dec(v_h__4_1692_);
lean_dec(v_h__3_1691_);
lean_dec(v_h__2_1690_);
lean_dec(v_h__1_1689_);
v___x_1708_ = lean_apply_5(v_h__5_1693_, v_x_1688_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1708_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Cancel_0__TzapLean_Gate_Wf_match__1_splitter(lean_object* v_motive_1709_, lean_object* v_x_1710_, lean_object* v_h__1_1711_, lean_object* v_h__2_1712_, lean_object* v_h__3_1713_, lean_object* v_h__4_1714_, lean_object* v_h__5_1715_){
_start:
{
switch(lean_obj_tag(v_x_1710_))
{
case 8:
{
lean_object* v_control_1716_; lean_object* v_target_1717_; lean_object* v___x_1718_; 
lean_dec(v_h__5_1715_);
lean_dec(v_h__4_1714_);
lean_dec(v_h__3_1713_);
lean_dec(v_h__2_1712_);
v_control_1716_ = lean_ctor_get(v_x_1710_, 0);
lean_inc(v_control_1716_);
v_target_1717_ = lean_ctor_get(v_x_1710_, 1);
lean_inc(v_target_1717_);
lean_dec_ref_known(v_x_1710_, 2);
v___x_1718_ = lean_apply_2(v_h__1_1711_, v_control_1716_, v_target_1717_);
return v___x_1718_;
}
case 9:
{
lean_object* v_control_1719_; lean_object* v_target_1720_; lean_object* v___x_1721_; 
lean_dec(v_h__5_1715_);
lean_dec(v_h__4_1714_);
lean_dec(v_h__3_1713_);
lean_dec(v_h__1_1711_);
v_control_1719_ = lean_ctor_get(v_x_1710_, 0);
lean_inc(v_control_1719_);
v_target_1720_ = lean_ctor_get(v_x_1710_, 1);
lean_inc(v_target_1720_);
lean_dec_ref_known(v_x_1710_, 2);
v___x_1721_ = lean_apply_2(v_h__2_1712_, v_control_1719_, v_target_1720_);
return v___x_1721_;
}
case 10:
{
lean_object* v_control_u2081_1722_; lean_object* v_control_u2082_1723_; lean_object* v_target_1724_; lean_object* v___x_1725_; 
lean_dec(v_h__5_1715_);
lean_dec(v_h__4_1714_);
lean_dec(v_h__2_1712_);
lean_dec(v_h__1_1711_);
v_control_u2081_1722_ = lean_ctor_get(v_x_1710_, 0);
lean_inc(v_control_u2081_1722_);
v_control_u2082_1723_ = lean_ctor_get(v_x_1710_, 1);
lean_inc(v_control_u2082_1723_);
v_target_1724_ = lean_ctor_get(v_x_1710_, 2);
lean_inc(v_target_1724_);
lean_dec_ref_known(v_x_1710_, 3);
v___x_1725_ = lean_apply_3(v_h__3_1713_, v_control_u2081_1722_, v_control_u2082_1723_, v_target_1724_);
return v___x_1725_;
}
case 11:
{
lean_object* v_control_u2081_1726_; lean_object* v_control_u2082_1727_; lean_object* v_target_1728_; lean_object* v___x_1729_; 
lean_dec(v_h__5_1715_);
lean_dec(v_h__3_1713_);
lean_dec(v_h__2_1712_);
lean_dec(v_h__1_1711_);
v_control_u2081_1726_ = lean_ctor_get(v_x_1710_, 0);
lean_inc(v_control_u2081_1726_);
v_control_u2082_1727_ = lean_ctor_get(v_x_1710_, 1);
lean_inc(v_control_u2082_1727_);
v_target_1728_ = lean_ctor_get(v_x_1710_, 2);
lean_inc(v_target_1728_);
lean_dec_ref_known(v_x_1710_, 3);
v___x_1729_ = lean_apply_3(v_h__4_1714_, v_control_u2081_1726_, v_control_u2082_1727_, v_target_1728_);
return v___x_1729_;
}
default: 
{
lean_object* v___x_1730_; 
lean_dec(v_h__4_1714_);
lean_dec(v_h__3_1713_);
lean_dec(v_h__2_1712_);
lean_dec(v_h__1_1711_);
v___x_1730_ = lean_apply_5(v_h__5_1715_, v_x_1710_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1730_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesLoop(lean_object* v_x_1731_, lean_object* v_x_1732_){
_start:
{
lean_object* v_zero_1733_; uint8_t v_isZero_1734_; 
v_zero_1733_ = lean_unsigned_to_nat(0u);
v_isZero_1734_ = lean_nat_dec_eq(v_x_1731_, v_zero_1733_);
if (v_isZero_1734_ == 1)
{
lean_dec(v_x_1731_);
return v_x_1732_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v_next_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
lean_inc_n(v_x_1732_, 2);
v___x_1735_ = lp_tzap_x2dlean_TzapLean_reduceHadamards(v_x_1732_);
v___x_1736_ = lp_tzap_x2dlean_TzapLean_cancelCommutingPairs(v___x_1735_);
v_next_1737_ = lp_tzap_x2dlean_TzapLean_cancelPairs(v___x_1736_);
v___x_1738_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed), 2, 0);
lean_inc(v_next_1737_);
v___x_1739_ = l_instDecidableEqList___redArg(v___x_1738_, v_next_1737_, v_x_1732_);
if (v___x_1739_ == 0)
{
lean_object* v_one_1740_; lean_object* v_n_1741_; 
lean_dec(v_x_1732_);
v_one_1740_ = lean_unsigned_to_nat(1u);
v_n_1741_ = lean_nat_sub(v_x_1731_, v_one_1740_);
lean_dec(v_x_1731_);
v_x_1731_ = v_n_1741_;
v_x_1732_ = v_next_1737_;
goto _start;
}
else
{
lean_dec(v_next_1737_);
lean_dec(v_x_1731_);
return v_x_1732_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGates(lean_object* v_gs_1743_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1744_ = lean_unsigned_to_nat(2u);
v___x_1745_ = l_List_lengthTR___redArg(v_gs_1743_);
v___x_1746_ = lean_nat_mul(v___x_1744_, v___x_1745_);
lean_dec(v___x_1745_);
v___x_1747_ = lean_unsigned_to_nat(1u);
v___x_1748_ = lean_nat_add(v___x_1746_, v___x_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lp_tzap_x2dlean_TzapLean_cancelPairs(v_gs_1743_);
v___x_1750_ = lp_tzap_x2dlean_TzapLean_cancelGatesLoop(v___x_1748_, v___x_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_cancelGatesCircuit(lean_object* v_c_1751_){
_start:
{
lean_object* v_gates_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_gates_1752_ = lean_ctor_get(v_c_1751_, 2);
lean_inc(v_gates_1752_);
v___x_1753_ = lp_tzap_x2dlean_TzapLean_cancelGates(v_gates_1752_);
v___x_1754_ = lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(v_c_1751_, v___x_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0(lean_object* v_n_1755_, lean_object* v_m_1756_, lean_object* v_c_1757_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = lp_tzap_x2dlean_TzapLean_cancelGatesCircuit(v_c_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_CancelGates___lam__0___boxed(lean_object* v_n_1759_, lean_object* v_m_1760_, lean_object* v_c_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = lp_tzap_x2dlean_TzapLean_CancelGates___lam__0(v_n_1759_, v_m_1760_, v_c_1761_);
lean_dec(v_m_1760_);
lean_dec(v_n_1759_);
return v_res_1762_;
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
