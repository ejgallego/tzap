// Lean compiler output
// Module: TzapLean.Circuit
// Imports: public import Init public meta import Init public import Mathlib.Data.Rat.Defs public import Mathlib.Data.Fintype.Pi
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
uint8_t l_List_decidableBAll___redArg(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_x_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_x_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_h_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_h_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_s_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_s_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_sdg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_sdg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_z_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_z_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_t_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_t_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_tdg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_tdg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_rz_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_rz_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cnot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cnot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cz_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cz_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccz_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccz_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_measure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_measure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_reset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_reset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqGate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TzapLean.Gate.x"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__2_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TzapLean.Gate.h"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__6_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__7_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TzapLean.Gate.s"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__9_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__10_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Gate.sdg"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__11_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__11_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__12 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__12_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__13_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TzapLean.Gate.z"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__14_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__14_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__15 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__15_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__16 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__16_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TzapLean.Gate.t"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__17 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__17_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__17_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__18 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__18_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__19 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__19_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Gate.tdg"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__20 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__20_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__20_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__21 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__21_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__22 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__22_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TzapLean.Gate.rz"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__23 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__23_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__23_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__24 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__24_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__25 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__25_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__26 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__26_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " : Rat)/"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__27 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__27_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "TzapLean.Gate.cnot"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__29 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__29_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__29_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__30 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__30_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__31 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__31_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TzapLean.Gate.cz"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__32 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__32_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__32_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__33 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__33_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__33_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__34 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__34_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Gate.ccx"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__35 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__35_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__35_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__36 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__36_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__36_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__37 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__37_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Gate.ccz"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__38 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__38_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__38_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__39 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__39_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__39_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__40 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__40_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "TzapLean.Gate.measure"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__41 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__41_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__41_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__42 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__42_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__42_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__43 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__43_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "TzapLean.Gate.reset"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__44 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__44_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__44_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__45 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__45_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__45_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__46 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__46_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprGate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprGate_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprGate = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprGate___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedGate_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedGate_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedGate_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedGate_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedGate_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedGate = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedGate_default___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitOperands(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cbitsOf(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_mapQubits(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isToffoli(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isToffoli___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isCcz(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isCcz___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isMeasurement___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isUnitary(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isUnitary___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_isMeasurement_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_isMeasurement_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_cbitsOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_cbitsOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "x q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "h q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "s q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__2_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sdg q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "z q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__4_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "t q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__5_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tdg q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__6_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rz("};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__7_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "π) q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__8_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__9_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cnot q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__10_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ", q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cz q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__12 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__12_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ccx q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__13_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ccz q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__14_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "measure q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__15 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__15_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " -> c"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__16 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__16_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_Gate_toString___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reset q"};
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString___closed__17 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_toString___closed__17_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString(lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_Gate_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_Gate_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_Gate_instToString___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_Gate_instToString = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Gate_instToString___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numQubits"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__3_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__6_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numCbits"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__9_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "gates"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__11_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__11_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__12 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__12_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hasToffoli"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__14_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__14_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__15 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__15_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hasCcz"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__17 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__17_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__17_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__18 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__18_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hasMeasurement"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__20 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__20_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__20_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__21 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__21_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__23 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__23_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__26 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__26_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__23_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__27 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__27_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprRawCircuit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprRawCircuit___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedRawCircuit_default___closed__0_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_new(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withCbits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_apply(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_ofGates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_size(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_size___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed___boxed(lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___closed__0_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_Gate_isMeasurement___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__0_value;
static const lean_closure_object lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_Gate_isCcz___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__1_value;
static const lean_closure_object lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_Gate_isToffoli___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__2_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_mapGates(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableStructural(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableStructural___boxed(lean_object*);
static const lean_string_object lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__0 = (const lean_object*)&lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__1 = (const lean_object*)&lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__2 = (const lean_object*)&lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Circuit ("};
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " qubits, "};
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " gates):\n"};
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__2_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__3_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString(lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_RawCircuit_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_RawCircuit_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instToString___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instToString = (const lean_object*)&lp_tzap_x2dlean_TzapLean_RawCircuit_instToString___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_remapSubcircuit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapSubcircuit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
case 10:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
case 11:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(11u);
return v___x_13_;
}
case 12:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(12u);
return v___x_14_;
}
default: 
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(13u);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorIdx___boxed(lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_tzap_x2dlean_TzapLean_Gate_ctorIdx(v_x_16_);
lean_dec_ref(v_x_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(lean_object* v_t_18_, lean_object* v_k_19_){
_start:
{
switch(lean_obj_tag(v_t_18_))
{
case 7:
{
lean_object* v_theta_20_; lean_object* v_q_21_; lean_object* v___x_22_; 
v_theta_20_ = lean_ctor_get(v_t_18_, 0);
lean_inc_ref(v_theta_20_);
v_q_21_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_q_21_);
lean_dec_ref_known(v_t_18_, 2);
v___x_22_ = lean_apply_2(v_k_19_, v_theta_20_, v_q_21_);
return v___x_22_;
}
case 8:
{
lean_object* v_control_23_; lean_object* v_target_24_; lean_object* v___x_25_; 
v_control_23_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_control_23_);
v_target_24_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_target_24_);
lean_dec_ref_known(v_t_18_, 2);
v___x_25_ = lean_apply_2(v_k_19_, v_control_23_, v_target_24_);
return v___x_25_;
}
case 9:
{
lean_object* v_control_26_; lean_object* v_target_27_; lean_object* v___x_28_; 
v_control_26_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_control_26_);
v_target_27_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_target_27_);
lean_dec_ref_known(v_t_18_, 2);
v___x_28_ = lean_apply_2(v_k_19_, v_control_26_, v_target_27_);
return v___x_28_;
}
case 10:
{
lean_object* v_control_u2081_29_; lean_object* v_control_u2082_30_; lean_object* v_target_31_; lean_object* v___x_32_; 
v_control_u2081_29_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_control_u2081_29_);
v_control_u2082_30_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_control_u2082_30_);
v_target_31_ = lean_ctor_get(v_t_18_, 2);
lean_inc(v_target_31_);
lean_dec_ref_known(v_t_18_, 3);
v___x_32_ = lean_apply_3(v_k_19_, v_control_u2081_29_, v_control_u2082_30_, v_target_31_);
return v___x_32_;
}
case 11:
{
lean_object* v_control_u2081_33_; lean_object* v_control_u2082_34_; lean_object* v_target_35_; lean_object* v___x_36_; 
v_control_u2081_33_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_control_u2081_33_);
v_control_u2082_34_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_control_u2082_34_);
v_target_35_ = lean_ctor_get(v_t_18_, 2);
lean_inc(v_target_35_);
lean_dec_ref_known(v_t_18_, 3);
v___x_36_ = lean_apply_3(v_k_19_, v_control_u2081_33_, v_control_u2082_34_, v_target_35_);
return v___x_36_;
}
case 12:
{
lean_object* v_qubit_37_; lean_object* v_cbit_38_; lean_object* v___x_39_; 
v_qubit_37_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_qubit_37_);
v_cbit_38_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_cbit_38_);
lean_dec_ref_known(v_t_18_, 2);
v___x_39_ = lean_apply_2(v_k_19_, v_qubit_37_, v_cbit_38_);
return v___x_39_;
}
default: 
{
lean_object* v_q_40_; lean_object* v___x_41_; 
v_q_40_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_q_40_);
lean_dec_ref(v_t_18_);
v___x_41_ = lean_apply_1(v_k_19_, v_q_40_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim(lean_object* v_motive_42_, lean_object* v_ctorIdx_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_k_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_44_, v_k_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_50_, v_h_51_, v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_x_elim___redArg(lean_object* v_t_54_, lean_object* v_x_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_54_, v_x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_x_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_x_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_58_, v_x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_h_elim___redArg(lean_object* v_t_62_, lean_object* v_h_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_62_, v_h_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_h_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_h_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_66_, v_h_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_s_elim___redArg(lean_object* v_t_70_, lean_object* v_s_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_70_, v_s_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_s_elim(lean_object* v_motive_73_, lean_object* v_t_74_, lean_object* v_h_75_, lean_object* v_s_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_74_, v_s_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_sdg_elim___redArg(lean_object* v_t_78_, lean_object* v_sdg_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_78_, v_sdg_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_sdg_elim(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_sdg_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_82_, v_sdg_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_z_elim___redArg(lean_object* v_t_86_, lean_object* v_z_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_86_, v_z_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_z_elim(lean_object* v_motive_89_, lean_object* v_t_90_, lean_object* v_h_91_, lean_object* v_z_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_90_, v_z_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_t_elim___redArg(lean_object* v_t_94_, lean_object* v_t_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_94_, v_t_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_t_elim(lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_t_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_98_, v_t_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_tdg_elim___redArg(lean_object* v_t_102_, lean_object* v_tdg_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_102_, v_tdg_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_tdg_elim(lean_object* v_motive_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_tdg_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_106_, v_tdg_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_rz_elim___redArg(lean_object* v_t_110_, lean_object* v_rz_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_110_, v_rz_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_rz_elim(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_rz_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_114_, v_rz_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cnot_elim___redArg(lean_object* v_t_118_, lean_object* v_cnot_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_118_, v_cnot_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cnot_elim(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_cnot_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_122_, v_cnot_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cz_elim___redArg(lean_object* v_t_126_, lean_object* v_cz_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_126_, v_cz_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cz_elim(lean_object* v_motive_129_, lean_object* v_t_130_, lean_object* v_h_131_, lean_object* v_cz_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_130_, v_cz_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccx_elim___redArg(lean_object* v_t_134_, lean_object* v_ccx_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_134_, v_ccx_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccx_elim(lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_ccx_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_138_, v_ccx_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccz_elim___redArg(lean_object* v_t_142_, lean_object* v_ccz_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_142_, v_ccz_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_ccz_elim(lean_object* v_motive_145_, lean_object* v_t_146_, lean_object* v_h_147_, lean_object* v_ccz_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_146_, v_ccz_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_measure_elim___redArg(lean_object* v_t_150_, lean_object* v_measure_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_150_, v_measure_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_measure_elim(lean_object* v_motive_153_, lean_object* v_t_154_, lean_object* v_h_155_, lean_object* v_measure_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_154_, v_measure_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_reset_elim___redArg(lean_object* v_t_158_, lean_object* v_reset_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_158_, v_reset_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_reset_elim(lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_reset_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lp_tzap_x2dlean_TzapLean_Gate_ctorElim___redArg(v_t_162_, v_reset_164_);
return v___x_165_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq(lean_object* v_x_166_, lean_object* v_x_167_){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_168_ = lp_tzap_x2dlean_TzapLean_Gate_ctorIdx(v_x_166_);
v___x_169_ = lp_tzap_x2dlean_TzapLean_Gate_ctorIdx(v_x_167_);
v___x_170_ = lean_nat_dec_eq(v___x_168_, v___x_169_);
lean_dec(v___x_169_);
lean_dec(v___x_168_);
if (v___x_170_ == 0)
{
return v___x_170_;
}
else
{
switch(lean_obj_tag(v_x_166_))
{
case 7:
{
lean_object* v_theta_171_; lean_object* v_q_172_; lean_object* v_theta_173_; lean_object* v_q_174_; uint8_t v___x_175_; 
v_theta_171_ = lean_ctor_get(v_x_166_, 0);
v_q_172_ = lean_ctor_get(v_x_166_, 1);
v_theta_173_ = lean_ctor_get(v_x_167_, 0);
v_q_174_ = lean_ctor_get(v_x_167_, 1);
v___x_175_ = l_instDecidableEqRat_decEq(v_theta_171_, v_theta_173_);
if (v___x_175_ == 0)
{
return v___x_175_;
}
else
{
uint8_t v___x_176_; 
v___x_176_ = lean_nat_dec_eq(v_q_172_, v_q_174_);
return v___x_176_;
}
}
case 8:
{
lean_object* v_control_177_; lean_object* v_target_178_; lean_object* v_control_179_; lean_object* v_target_180_; uint8_t v___x_181_; 
v_control_177_ = lean_ctor_get(v_x_166_, 0);
v_target_178_ = lean_ctor_get(v_x_166_, 1);
v_control_179_ = lean_ctor_get(v_x_167_, 0);
v_target_180_ = lean_ctor_get(v_x_167_, 1);
v___x_181_ = lean_nat_dec_eq(v_control_177_, v_control_179_);
if (v___x_181_ == 0)
{
return v___x_181_;
}
else
{
uint8_t v___x_182_; 
v___x_182_ = lean_nat_dec_eq(v_target_178_, v_target_180_);
return v___x_182_;
}
}
case 9:
{
lean_object* v_control_183_; lean_object* v_target_184_; lean_object* v_control_185_; lean_object* v_target_186_; uint8_t v___x_187_; 
v_control_183_ = lean_ctor_get(v_x_166_, 0);
v_target_184_ = lean_ctor_get(v_x_166_, 1);
v_control_185_ = lean_ctor_get(v_x_167_, 0);
v_target_186_ = lean_ctor_get(v_x_167_, 1);
v___x_187_ = lean_nat_dec_eq(v_control_183_, v_control_185_);
if (v___x_187_ == 0)
{
return v___x_187_;
}
else
{
uint8_t v___x_188_; 
v___x_188_ = lean_nat_dec_eq(v_target_184_, v_target_186_);
return v___x_188_;
}
}
case 10:
{
lean_object* v_control_u2081_189_; lean_object* v_control_u2082_190_; lean_object* v_target_191_; lean_object* v_control_u2081_192_; lean_object* v_control_u2082_193_; lean_object* v_target_194_; uint8_t v___x_195_; 
v_control_u2081_189_ = lean_ctor_get(v_x_166_, 0);
v_control_u2082_190_ = lean_ctor_get(v_x_166_, 1);
v_target_191_ = lean_ctor_get(v_x_166_, 2);
v_control_u2081_192_ = lean_ctor_get(v_x_167_, 0);
v_control_u2082_193_ = lean_ctor_get(v_x_167_, 1);
v_target_194_ = lean_ctor_get(v_x_167_, 2);
v___x_195_ = lean_nat_dec_eq(v_control_u2081_189_, v_control_u2081_192_);
if (v___x_195_ == 0)
{
return v___x_195_;
}
else
{
uint8_t v___x_196_; 
v___x_196_ = lean_nat_dec_eq(v_control_u2082_190_, v_control_u2082_193_);
if (v___x_196_ == 0)
{
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = lean_nat_dec_eq(v_target_191_, v_target_194_);
return v___x_197_;
}
}
}
case 11:
{
lean_object* v_control_u2081_198_; lean_object* v_control_u2082_199_; lean_object* v_target_200_; lean_object* v_control_u2081_201_; lean_object* v_control_u2082_202_; lean_object* v_target_203_; uint8_t v___x_204_; 
v_control_u2081_198_ = lean_ctor_get(v_x_166_, 0);
v_control_u2082_199_ = lean_ctor_get(v_x_166_, 1);
v_target_200_ = lean_ctor_get(v_x_166_, 2);
v_control_u2081_201_ = lean_ctor_get(v_x_167_, 0);
v_control_u2082_202_ = lean_ctor_get(v_x_167_, 1);
v_target_203_ = lean_ctor_get(v_x_167_, 2);
v___x_204_ = lean_nat_dec_eq(v_control_u2081_198_, v_control_u2081_201_);
if (v___x_204_ == 0)
{
return v___x_204_;
}
else
{
uint8_t v___x_205_; 
v___x_205_ = lean_nat_dec_eq(v_control_u2082_199_, v_control_u2082_202_);
if (v___x_205_ == 0)
{
return v___x_205_;
}
else
{
uint8_t v___x_206_; 
v___x_206_ = lean_nat_dec_eq(v_target_200_, v_target_203_);
return v___x_206_;
}
}
}
case 12:
{
lean_object* v_qubit_207_; lean_object* v_cbit_208_; lean_object* v_qubit_209_; lean_object* v_cbit_210_; uint8_t v___x_211_; 
v_qubit_207_ = lean_ctor_get(v_x_166_, 0);
v_cbit_208_ = lean_ctor_get(v_x_166_, 1);
v_qubit_209_ = lean_ctor_get(v_x_167_, 0);
v_cbit_210_ = lean_ctor_get(v_x_167_, 1);
v___x_211_ = lean_nat_dec_eq(v_qubit_207_, v_qubit_209_);
if (v___x_211_ == 0)
{
return v___x_211_;
}
else
{
uint8_t v___x_212_; 
v___x_212_ = lean_nat_dec_eq(v_cbit_208_, v_cbit_210_);
return v___x_212_;
}
}
default: 
{
lean_object* v_q_213_; lean_object* v_q_214_; uint8_t v___x_215_; 
v_q_213_ = lean_ctor_get(v_x_166_, 0);
v_q_214_ = lean_ctor_get(v_x_167_, 0);
v___x_215_ = lean_nat_dec_eq(v_q_213_, v_q_214_);
return v___x_215_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq___boxed(lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq(v_x_216_, v_x_217_);
lean_dec_ref(v_x_217_);
lean_dec_ref(v_x_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqGate(lean_object* v_x_220_, lean_object* v_x_221_){
_start:
{
uint8_t v___x_222_; 
v___x_222_ = lp_tzap_x2dlean_TzapLean_instDecidableEqGate_decEq(v_x_220_, v_x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed(lean_object* v_x_223_, lean_object* v_x_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = lp_tzap_x2dlean_TzapLean_instDecidableEqGate(v_x_223_, v_x_224_);
lean_dec_ref(v_x_224_);
lean_dec_ref(v_x_223_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_unsigned_to_nat(2u);
v___x_234_ = lean_nat_to_int(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_to_int(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(0u);
v___x_282_ = lean_nat_to_int(v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr(lean_object* v_x_319_, lean_object* v_prec_320_){
_start:
{
switch(lean_obj_tag(v_x_319_))
{
case 0:
{
lean_object* v_q_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_341_; 
v_q_321_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_341_ == 0)
{
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_341_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_q_321_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_341_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___y_326_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(1024u);
v___x_338_ = lean_nat_dec_le(v___x_337_, v_prec_320_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
v___x_339_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_326_ = v___x_339_;
goto v___jp_325_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_326_ = v___x_340_;
goto v___jp_325_;
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_327_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__2));
v___x_328_ = l_Nat_reprFast(v_q_321_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 3);
lean_ctor_set(v___x_323_, 0, v___x_328_);
v___x_330_ = v___x_323_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_336_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_327_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
lean_inc(v___y_326_);
v___x_332_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_332_, 0, v___y_326_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = 0;
v___x_334_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set_uint8(v___x_334_, sizeof(void*)*1, v___x_333_);
v___x_335_ = l_Repr_addAppParen(v___x_334_, v_prec_320_);
return v___x_335_;
}
}
}
}
case 1:
{
lean_object* v_q_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_362_; 
v_q_342_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_362_ == 0)
{
v___x_344_ = v_x_319_;
v_isShared_345_ = v_isSharedCheck_362_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_q_342_);
lean_dec(v_x_319_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_362_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___y_347_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(1024u);
v___x_359_ = lean_nat_dec_le(v___x_358_, v_prec_320_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_347_ = v___x_360_;
goto v___jp_346_;
}
else
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_347_ = v___x_361_;
goto v___jp_346_;
}
v___jp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_348_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__7));
v___x_349_ = l_Nat_reprFast(v_q_342_);
if (v_isShared_345_ == 0)
{
lean_ctor_set_tag(v___x_344_, 3);
lean_ctor_set(v___x_344_, 0, v___x_349_);
v___x_351_ = v___x_344_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_349_);
v___x_351_ = v_reuseFailAlloc_357_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_348_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
lean_inc(v___y_347_);
v___x_353_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_353_, 0, v___y_347_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = 0;
v___x_355_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_355_, 0, v___x_353_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*1, v___x_354_);
v___x_356_ = l_Repr_addAppParen(v___x_355_, v_prec_320_);
return v___x_356_;
}
}
}
}
case 2:
{
lean_object* v_q_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_383_; 
v_q_363_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_383_ == 0)
{
v___x_365_ = v_x_319_;
v_isShared_366_ = v_isSharedCheck_383_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_q_363_);
lean_dec(v_x_319_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_383_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___y_368_; lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_unsigned_to_nat(1024u);
v___x_380_ = lean_nat_dec_le(v___x_379_, v_prec_320_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_368_ = v___x_381_;
goto v___jp_367_;
}
else
{
lean_object* v___x_382_; 
v___x_382_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_368_ = v___x_382_;
goto v___jp_367_;
}
v___jp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__10));
v___x_370_ = l_Nat_reprFast(v_q_363_);
if (v_isShared_366_ == 0)
{
lean_ctor_set_tag(v___x_365_, 3);
lean_ctor_set(v___x_365_, 0, v___x_370_);
v___x_372_ = v___x_365_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_378_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_373_; lean_object* v___x_374_; uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_369_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
lean_inc(v___y_368_);
v___x_374_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_374_, 0, v___y_368_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = 0;
v___x_376_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*1, v___x_375_);
v___x_377_ = l_Repr_addAppParen(v___x_376_, v_prec_320_);
return v___x_377_;
}
}
}
}
case 3:
{
lean_object* v_q_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_404_; 
v_q_384_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_404_ == 0)
{
v___x_386_ = v_x_319_;
v_isShared_387_ = v_isSharedCheck_404_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_q_384_);
lean_dec(v_x_319_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_404_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___y_389_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(1024u);
v___x_401_ = lean_nat_dec_le(v___x_400_, v_prec_320_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_389_ = v___x_402_;
goto v___jp_388_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_389_ = v___x_403_;
goto v___jp_388_;
}
v___jp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_390_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__13));
v___x_391_ = l_Nat_reprFast(v_q_384_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_391_);
v___x_393_ = v___x_386_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_399_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_390_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
lean_inc(v___y_389_);
v___x_395_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_395_, 0, v___y_389_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = 0;
v___x_397_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_397_, sizeof(void*)*1, v___x_396_);
v___x_398_ = l_Repr_addAppParen(v___x_397_, v_prec_320_);
return v___x_398_;
}
}
}
}
case 4:
{
lean_object* v_q_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_425_; 
v_q_405_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_425_ == 0)
{
v___x_407_ = v_x_319_;
v_isShared_408_ = v_isSharedCheck_425_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_q_405_);
lean_dec(v_x_319_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_425_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___y_410_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_421_ = lean_unsigned_to_nat(1024u);
v___x_422_ = lean_nat_dec_le(v___x_421_, v_prec_320_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; 
v___x_423_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_410_ = v___x_423_;
goto v___jp_409_;
}
else
{
lean_object* v___x_424_; 
v___x_424_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_410_ = v___x_424_;
goto v___jp_409_;
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_411_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__16));
v___x_412_ = l_Nat_reprFast(v_q_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 3);
lean_ctor_set(v___x_407_, 0, v___x_412_);
v___x_414_ = v___x_407_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_420_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_411_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
lean_inc(v___y_410_);
v___x_416_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_416_, 0, v___y_410_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = 0;
v___x_418_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*1, v___x_417_);
v___x_419_ = l_Repr_addAppParen(v___x_418_, v_prec_320_);
return v___x_419_;
}
}
}
}
case 5:
{
lean_object* v_q_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_446_; 
v_q_426_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_446_ == 0)
{
v___x_428_ = v_x_319_;
v_isShared_429_ = v_isSharedCheck_446_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_q_426_);
lean_dec(v_x_319_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_446_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___y_431_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lean_unsigned_to_nat(1024u);
v___x_443_ = lean_nat_dec_le(v___x_442_, v_prec_320_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; 
v___x_444_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_431_ = v___x_444_;
goto v___jp_430_;
}
else
{
lean_object* v___x_445_; 
v___x_445_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_431_ = v___x_445_;
goto v___jp_430_;
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_432_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__19));
v___x_433_ = l_Nat_reprFast(v_q_426_);
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 3);
lean_ctor_set(v___x_428_, 0, v___x_433_);
v___x_435_ = v___x_428_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_441_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_436_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_432_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
lean_inc(v___y_431_);
v___x_437_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_437_, 0, v___y_431_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = 0;
v___x_439_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set_uint8(v___x_439_, sizeof(void*)*1, v___x_438_);
v___x_440_ = l_Repr_addAppParen(v___x_439_, v_prec_320_);
return v___x_440_;
}
}
}
}
case 6:
{
lean_object* v_q_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_467_; 
v_q_447_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_467_ == 0)
{
v___x_449_ = v_x_319_;
v_isShared_450_ = v_isSharedCheck_467_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_q_447_);
lean_dec(v_x_319_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_467_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___y_452_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(1024u);
v___x_464_ = lean_nat_dec_le(v___x_463_, v_prec_320_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_452_ = v___x_465_;
goto v___jp_451_;
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_452_ = v___x_466_;
goto v___jp_451_;
}
v___jp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_453_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__22));
v___x_454_ = l_Nat_reprFast(v_q_447_);
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 3);
lean_ctor_set(v___x_449_, 0, v___x_454_);
v___x_456_ = v___x_449_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_462_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_453_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
lean_inc(v___y_452_);
v___x_458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_458_, 0, v___y_452_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = 0;
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_459_);
v___x_461_ = l_Repr_addAppParen(v___x_460_, v_prec_320_);
return v___x_461_;
}
}
}
}
case 7:
{
lean_object* v_theta_468_; lean_object* v_q_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_517_; 
v_theta_468_ = lean_ctor_get(v_x_319_, 0);
v_q_469_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_517_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_517_ == 0)
{
v___x_471_ = v_x_319_;
v_isShared_472_ = v_isSharedCheck_517_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_q_469_);
lean_inc(v_theta_468_);
lean_dec(v_x_319_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_517_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_490_; lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_513_ = lean_unsigned_to_nat(1024u);
v___x_514_ = lean_nat_dec_le(v___x_513_, v_prec_320_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; 
v___x_515_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_490_ = v___x_515_;
goto v___jp_489_;
}
else
{
lean_object* v___x_516_; 
v___x_516_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_490_ = v___x_516_;
goto v___jp_489_;
}
v___jp_473_:
{
lean_object* v___x_479_; 
lean_inc(v___y_475_);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 5);
lean_ctor_set(v___x_471_, 1, v___y_477_);
lean_ctor_set(v___x_471_, 0, v___y_475_);
v___x_479_ = v___x_471_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___y_475_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___y_477_);
v___x_479_ = v_reuseFailAlloc_488_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
lean_inc(v___y_476_);
v___x_480_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___y_476_);
v___x_481_ = l_Nat_reprFast(v_q_469_);
v___x_482_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
v___x_483_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_480_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
lean_inc(v___y_474_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_474_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_320_);
return v___x_487_;
}
}
v___jp_489_:
{
lean_object* v_num_491_; lean_object* v_den_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_num_491_ = lean_ctor_get(v_theta_468_, 0);
lean_inc(v_num_491_);
v_den_492_ = lean_ctor_get(v_theta_468_, 1);
lean_inc(v_den_492_);
lean_dec_ref(v_theta_468_);
v___x_493_ = lean_box(1);
v___x_494_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__25));
v___x_495_ = lean_unsigned_to_nat(1u);
v___x_496_ = lean_nat_dec_eq(v_den_492_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_497_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__26));
v___x_498_ = l_Int_repr(v_num_491_);
lean_dec(v_num_491_);
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__27));
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
v___x_502_ = l_Nat_reprFast(v_den_492_);
v___x_503_ = lean_string_append(v___x_501_, v___x_502_);
lean_dec_ref(v___x_502_);
v___x_504_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___y_474_ = v___y_490_;
v___y_475_ = v___x_494_;
v___y_476_ = v___x_493_;
v___y_477_ = v___x_504_;
goto v___jp_473_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
lean_dec(v_den_492_);
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__28);
v___x_507_ = lean_int_dec_lt(v_num_491_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = l_Int_repr(v_num_491_);
lean_dec(v_num_491_);
v___x_509_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
v___y_474_ = v___y_490_;
v___y_475_ = v___x_494_;
v___y_476_ = v___x_493_;
v___y_477_ = v___x_509_;
goto v___jp_473_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = l_Int_repr(v_num_491_);
lean_dec(v_num_491_);
v___x_511_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
v___x_512_ = l_Repr_addAppParen(v___x_511_, v___x_505_);
v___y_474_ = v___y_490_;
v___y_475_ = v___x_494_;
v___y_476_ = v___x_493_;
v___y_477_ = v___x_512_;
goto v___jp_473_;
}
}
}
}
}
case 8:
{
lean_object* v_control_518_; lean_object* v_target_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_544_; 
v_control_518_ = lean_ctor_get(v_x_319_, 0);
v_target_519_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_544_ == 0)
{
v___x_521_ = v_x_319_;
v_isShared_522_ = v_isSharedCheck_544_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_target_519_);
lean_inc(v_control_518_);
lean_dec(v_x_319_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_544_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___y_524_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(1024u);
v___x_541_ = lean_nat_dec_le(v___x_540_, v_prec_320_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_524_ = v___x_542_;
goto v___jp_523_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_524_ = v___x_543_;
goto v___jp_523_;
}
v___jp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_525_ = lean_box(1);
v___x_526_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__31));
v___x_527_ = l_Nat_reprFast(v_control_518_);
v___x_528_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 5);
lean_ctor_set(v___x_521_, 1, v___x_528_);
lean_ctor_set(v___x_521_, 0, v___x_526_);
v___x_530_ = v___x_521_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v___x_528_);
v___x_530_ = v_reuseFailAlloc_539_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
lean_ctor_set(v___x_531_, 1, v___x_525_);
v___x_532_ = l_Nat_reprFast(v_target_519_);
v___x_533_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
v___x_534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
lean_inc(v___y_524_);
v___x_535_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_535_, 0, v___y_524_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = 0;
v___x_537_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*1, v___x_536_);
v___x_538_ = l_Repr_addAppParen(v___x_537_, v_prec_320_);
return v___x_538_;
}
}
}
}
case 9:
{
lean_object* v_control_545_; lean_object* v_target_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_571_; 
v_control_545_ = lean_ctor_get(v_x_319_, 0);
v_target_546_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_571_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_571_ == 0)
{
v___x_548_ = v_x_319_;
v_isShared_549_ = v_isSharedCheck_571_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_target_546_);
lean_inc(v_control_545_);
lean_dec(v_x_319_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_571_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___y_551_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(1024u);
v___x_568_ = lean_nat_dec_le(v___x_567_, v_prec_320_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_551_ = v___x_569_;
goto v___jp_550_;
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_551_ = v___x_570_;
goto v___jp_550_;
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_552_ = lean_box(1);
v___x_553_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__34));
v___x_554_ = l_Nat_reprFast(v_control_545_);
v___x_555_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
if (v_isShared_549_ == 0)
{
lean_ctor_set_tag(v___x_548_, 5);
lean_ctor_set(v___x_548_, 1, v___x_555_);
lean_ctor_set(v___x_548_, 0, v___x_553_);
v___x_557_ = v___x_548_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_553_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v___x_555_);
v___x_557_ = v_reuseFailAlloc_566_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_552_);
v___x_559_ = l_Nat_reprFast(v_target_546_);
v___x_560_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
v___x_561_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_558_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
lean_inc(v___y_551_);
v___x_562_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_562_, 0, v___y_551_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = 0;
v___x_564_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set_uint8(v___x_564_, sizeof(void*)*1, v___x_563_);
v___x_565_ = l_Repr_addAppParen(v___x_564_, v_prec_320_);
return v___x_565_;
}
}
}
}
case 10:
{
lean_object* v_control_u2081_572_; lean_object* v_control_u2082_573_; lean_object* v_target_574_; lean_object* v___y_576_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_control_u2081_572_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_control_u2081_572_);
v_control_u2082_573_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_control_u2082_573_);
v_target_574_ = lean_ctor_get(v_x_319_, 2);
lean_inc(v_target_574_);
lean_dec_ref_known(v_x_319_, 3);
v___x_594_ = lean_unsigned_to_nat(1024u);
v___x_595_ = lean_nat_dec_le(v___x_594_, v_prec_320_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_576_ = v___x_596_;
goto v___jp_575_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_576_ = v___x_597_;
goto v___jp_575_;
}
v___jp_575_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_577_ = lean_box(1);
v___x_578_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__37));
v___x_579_ = l_Nat_reprFast(v_control_u2081_572_);
v___x_580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
v___x_581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_578_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_577_);
v___x_583_ = l_Nat_reprFast(v_control_u2082_573_);
v___x_584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_582_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___x_577_);
v___x_587_ = l_Nat_reprFast(v_target_574_);
v___x_588_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
v___x_589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_586_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
lean_inc(v___y_576_);
v___x_590_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_590_, 0, v___y_576_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = 0;
v___x_592_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set_uint8(v___x_592_, sizeof(void*)*1, v___x_591_);
v___x_593_ = l_Repr_addAppParen(v___x_592_, v_prec_320_);
return v___x_593_;
}
}
case 11:
{
lean_object* v_control_u2081_598_; lean_object* v_control_u2082_599_; lean_object* v_target_600_; lean_object* v___y_602_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_control_u2081_598_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_control_u2081_598_);
v_control_u2082_599_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_control_u2082_599_);
v_target_600_ = lean_ctor_get(v_x_319_, 2);
lean_inc(v_target_600_);
lean_dec_ref_known(v_x_319_, 3);
v___x_620_ = lean_unsigned_to_nat(1024u);
v___x_621_ = lean_nat_dec_le(v___x_620_, v_prec_320_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; 
v___x_622_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_602_ = v___x_622_;
goto v___jp_601_;
}
else
{
lean_object* v___x_623_; 
v___x_623_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_602_ = v___x_623_;
goto v___jp_601_;
}
v___jp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_603_ = lean_box(1);
v___x_604_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__40));
v___x_605_ = l_Nat_reprFast(v_control_u2081_598_);
v___x_606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
v___x_607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_604_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___x_603_);
v___x_609_ = l_Nat_reprFast(v_control_u2082_599_);
v___x_610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
v___x_611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_608_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v___x_603_);
v___x_613_ = l_Nat_reprFast(v_target_600_);
v___x_614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
v___x_615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_612_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
lean_inc(v___y_602_);
v___x_616_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_616_, 0, v___y_602_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = 0;
v___x_618_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set_uint8(v___x_618_, sizeof(void*)*1, v___x_617_);
v___x_619_ = l_Repr_addAppParen(v___x_618_, v_prec_320_);
return v___x_619_;
}
}
case 12:
{
lean_object* v_qubit_624_; lean_object* v_cbit_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_650_; 
v_qubit_624_ = lean_ctor_get(v_x_319_, 0);
v_cbit_625_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_650_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_650_ == 0)
{
v___x_627_ = v_x_319_;
v_isShared_628_ = v_isSharedCheck_650_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_cbit_625_);
lean_inc(v_qubit_624_);
lean_dec(v_x_319_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_650_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___y_630_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(1024u);
v___x_647_ = lean_nat_dec_le(v___x_646_, v_prec_320_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; 
v___x_648_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_630_ = v___x_648_;
goto v___jp_629_;
}
else
{
lean_object* v___x_649_; 
v___x_649_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_630_ = v___x_649_;
goto v___jp_629_;
}
v___jp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_631_ = lean_box(1);
v___x_632_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__43));
v___x_633_ = l_Nat_reprFast(v_qubit_624_);
v___x_634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 5);
lean_ctor_set(v___x_627_, 1, v___x_634_);
lean_ctor_set(v___x_627_, 0, v___x_632_);
v___x_636_ = v___x_627_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_634_);
v___x_636_ = v_reuseFailAlloc_645_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v___x_631_);
v___x_638_ = l_Nat_reprFast(v_cbit_625_);
v___x_639_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_637_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
lean_inc(v___y_630_);
v___x_641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_641_, 0, v___y_630_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = 0;
v___x_643_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*1, v___x_642_);
v___x_644_ = l_Repr_addAppParen(v___x_643_, v_prec_320_);
return v___x_644_;
}
}
}
}
default: 
{
lean_object* v_q_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_671_; 
v_q_651_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_671_ == 0)
{
v___x_653_ = v_x_319_;
v_isShared_654_ = v_isSharedCheck_671_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_q_651_);
lean_dec(v_x_319_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_671_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___y_656_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = lean_unsigned_to_nat(1024u);
v___x_668_ = lean_nat_dec_le(v___x_667_, v_prec_320_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
v___x_669_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__3);
v___y_656_ = v___x_669_;
goto v___jp_655_;
}
else
{
lean_object* v___x_670_; 
v___x_670_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4, &lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__4);
v___y_656_ = v___x_670_;
goto v___jp_655_;
}
v___jp_655_:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_657_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprGate_repr___closed__46));
v___x_658_ = l_Nat_reprFast(v_q_651_);
if (v_isShared_654_ == 0)
{
lean_ctor_set_tag(v___x_653_, 3);
lean_ctor_set(v___x_653_, 0, v___x_658_);
v___x_660_ = v___x_653_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_666_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_657_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
lean_inc(v___y_656_);
v___x_662_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_662_, 0, v___y_656_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = 0;
v___x_664_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*1, v___x_663_);
v___x_665_ = l_Repr_addAppParen(v___x_664_, v_prec_320_);
return v___x_665_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprGate_repr___boxed(lean_object* v_x_672_, lean_object* v_prec_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = lp_tzap_x2dlean_TzapLean_instReprGate_repr(v_x_672_, v_prec_673_);
lean_dec(v_prec_673_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(lean_object* v_x_681_){
_start:
{
lean_object* v_q_683_; lean_object* v_c_687_; lean_object* v_tgt_688_; lean_object* v_c_u2081_693_; lean_object* v_c_u2082_694_; lean_object* v_tgt_695_; 
switch(lean_obj_tag(v_x_681_))
{
case 7:
{
lean_object* v_q_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_708_; 
v_q_700_ = lean_ctor_get(v_x_681_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v_x_681_, 0);
lean_dec(v_unused_709_);
v___x_702_ = v_x_681_;
v_isShared_703_ = v_isSharedCheck_708_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_q_700_);
lean_dec(v_x_681_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_708_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_706_; 
v___x_704_ = lean_box(0);
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 1);
lean_ctor_set(v___x_702_, 1, v___x_704_);
lean_ctor_set(v___x_702_, 0, v_q_700_);
v___x_706_ = v___x_702_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_q_700_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
case 8:
{
lean_object* v_control_710_; lean_object* v_target_711_; 
v_control_710_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_control_710_);
v_target_711_ = lean_ctor_get(v_x_681_, 1);
lean_inc(v_target_711_);
lean_dec_ref_known(v_x_681_, 2);
v_c_687_ = v_control_710_;
v_tgt_688_ = v_target_711_;
goto v___jp_686_;
}
case 9:
{
lean_object* v_control_712_; lean_object* v_target_713_; 
v_control_712_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_control_712_);
v_target_713_ = lean_ctor_get(v_x_681_, 1);
lean_inc(v_target_713_);
lean_dec_ref_known(v_x_681_, 2);
v_c_687_ = v_control_712_;
v_tgt_688_ = v_target_713_;
goto v___jp_686_;
}
case 10:
{
lean_object* v_control_u2081_714_; lean_object* v_control_u2082_715_; lean_object* v_target_716_; 
v_control_u2081_714_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_control_u2081_714_);
v_control_u2082_715_ = lean_ctor_get(v_x_681_, 1);
lean_inc(v_control_u2082_715_);
v_target_716_ = lean_ctor_get(v_x_681_, 2);
lean_inc(v_target_716_);
lean_dec_ref_known(v_x_681_, 3);
v_c_u2081_693_ = v_control_u2081_714_;
v_c_u2082_694_ = v_control_u2082_715_;
v_tgt_695_ = v_target_716_;
goto v___jp_692_;
}
case 11:
{
lean_object* v_control_u2081_717_; lean_object* v_control_u2082_718_; lean_object* v_target_719_; 
v_control_u2081_717_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_control_u2081_717_);
v_control_u2082_718_ = lean_ctor_get(v_x_681_, 1);
lean_inc(v_control_u2082_718_);
v_target_719_ = lean_ctor_get(v_x_681_, 2);
lean_inc(v_target_719_);
lean_dec_ref_known(v_x_681_, 3);
v_c_u2081_693_ = v_control_u2081_717_;
v_c_u2082_694_ = v_control_u2082_718_;
v_tgt_695_ = v_target_719_;
goto v___jp_692_;
}
case 12:
{
lean_object* v_qubit_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_728_; 
v_qubit_720_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v_x_681_, 1);
lean_dec(v_unused_729_);
v___x_722_ = v_x_681_;
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_qubit_720_);
lean_dec(v_x_681_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = lean_box(0);
if (v_isShared_723_ == 0)
{
lean_ctor_set_tag(v___x_722_, 1);
lean_ctor_set(v___x_722_, 1, v___x_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_qubit_720_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
default: 
{
lean_object* v_q_730_; 
v_q_730_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_q_730_);
lean_dec_ref(v_x_681_);
v_q_683_ = v_q_730_;
goto v___jp_682_;
}
}
v___jp_682_:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_box(0);
v___x_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_685_, 0, v_q_683_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
return v___x_685_;
}
v___jp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_box(0);
v___x_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_690_, 0, v_tgt_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_691_, 0, v_c_687_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
return v___x_691_;
}
v___jp_692_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_696_ = lean_box(0);
v___x_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_697_, 0, v_tgt_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_698_, 0, v_c_u2082_694_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_699_, 0, v_c_u2081_693_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitOperands(lean_object* v_g_731_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(v_g_731_);
v___x_733_ = l_List_lengthTR___redArg(v___x_732_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v___x_732_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_cbitsOf(lean_object* v_x_735_){
_start:
{
if (lean_obj_tag(v_x_735_) == 12)
{
lean_object* v_cbit_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_744_; 
v_cbit_736_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_744_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; 
v_unused_745_ = lean_ctor_get(v_x_735_, 0);
lean_dec(v_unused_745_);
v___x_738_ = v_x_735_;
v_isShared_739_ = v_isSharedCheck_744_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_cbit_736_);
lean_dec(v_x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_744_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_742_; 
v___x_740_ = lean_box(0);
if (v_isShared_739_ == 0)
{
lean_ctor_set_tag(v___x_738_, 1);
lean_ctor_set(v___x_738_, 1, v___x_740_);
lean_ctor_set(v___x_738_, 0, v_cbit_736_);
v___x_742_ = v___x_738_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_cbit_736_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v___x_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
else
{
lean_object* v___x_746_; 
lean_dec_ref(v_x_735_);
v___x_746_ = lean_box(0);
return v___x_746_;
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf(lean_object* v_g_747_){
_start:
{
switch(lean_obj_tag(v_g_747_))
{
case 8:
{
lean_object* v_control_748_; lean_object* v_target_749_; uint8_t v___x_750_; 
v_control_748_ = lean_ctor_get(v_g_747_, 0);
v_target_749_ = lean_ctor_get(v_g_747_, 1);
v___x_750_ = lean_nat_dec_eq(v_control_748_, v_target_749_);
if (v___x_750_ == 0)
{
uint8_t v___x_751_; 
v___x_751_ = 1;
return v___x_751_;
}
else
{
uint8_t v___x_752_; 
v___x_752_ = 0;
return v___x_752_;
}
}
case 9:
{
lean_object* v_control_753_; lean_object* v_target_754_; uint8_t v___x_755_; 
v_control_753_ = lean_ctor_get(v_g_747_, 0);
v_target_754_ = lean_ctor_get(v_g_747_, 1);
v___x_755_ = lean_nat_dec_eq(v_control_753_, v_target_754_);
if (v___x_755_ == 0)
{
uint8_t v___x_756_; 
v___x_756_ = 1;
return v___x_756_;
}
else
{
uint8_t v___x_757_; 
v___x_757_ = 0;
return v___x_757_;
}
}
case 10:
{
lean_object* v_control_u2081_758_; lean_object* v_control_u2082_759_; lean_object* v_target_760_; uint8_t v___x_761_; 
v_control_u2081_758_ = lean_ctor_get(v_g_747_, 0);
v_control_u2082_759_ = lean_ctor_get(v_g_747_, 1);
v_target_760_ = lean_ctor_get(v_g_747_, 2);
v___x_761_ = lean_nat_dec_eq(v_control_u2081_758_, v_control_u2082_759_);
if (v___x_761_ == 0)
{
uint8_t v___x_762_; 
v___x_762_ = lean_nat_dec_eq(v_control_u2081_758_, v_target_760_);
if (v___x_762_ == 0)
{
uint8_t v___x_763_; 
v___x_763_ = lean_nat_dec_eq(v_control_u2082_759_, v_target_760_);
if (v___x_763_ == 0)
{
uint8_t v___x_764_; 
v___x_764_ = 1;
return v___x_764_;
}
else
{
return v___x_762_;
}
}
else
{
return v___x_761_;
}
}
else
{
uint8_t v___x_765_; 
v___x_765_ = 0;
return v___x_765_;
}
}
case 11:
{
lean_object* v_control_u2081_766_; lean_object* v_control_u2082_767_; lean_object* v_target_768_; uint8_t v___x_769_; 
v_control_u2081_766_ = lean_ctor_get(v_g_747_, 0);
v_control_u2082_767_ = lean_ctor_get(v_g_747_, 1);
v_target_768_ = lean_ctor_get(v_g_747_, 2);
v___x_769_ = lean_nat_dec_eq(v_control_u2081_766_, v_control_u2082_767_);
if (v___x_769_ == 0)
{
uint8_t v___x_770_; 
v___x_770_ = lean_nat_dec_eq(v_control_u2081_766_, v_target_768_);
if (v___x_770_ == 0)
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_eq(v_control_u2082_767_, v_target_768_);
if (v___x_771_ == 0)
{
uint8_t v___x_772_; 
v___x_772_ = 1;
return v___x_772_;
}
else
{
return v___x_770_;
}
}
else
{
return v___x_769_;
}
}
else
{
uint8_t v___x_773_; 
v___x_773_ = 0;
return v___x_773_;
}
}
default: 
{
uint8_t v___x_774_; 
v___x_774_ = 1;
return v___x_774_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf___boxed(lean_object* v_g_775_){
_start:
{
uint8_t v_res_776_; lean_object* v_r_777_; 
v_res_776_ = lp_tzap_x2dlean_TzapLean_Gate_instDecidableWf(v_g_775_);
lean_dec_ref(v_g_775_);
v_r_777_ = lean_box(v_res_776_);
return v_r_777_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0(lean_object* v_n_778_, lean_object* v_a_779_){
_start:
{
uint8_t v___x_780_; 
v___x_780_ = lean_nat_dec_lt(v_a_779_, v_n_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0___boxed(lean_object* v_n_781_, lean_object* v_a_782_){
_start:
{
uint8_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0(v_n_781_, v_a_782_);
lean_dec(v_a_782_);
lean_dec(v_n_781_);
v_r_784_ = lean_box(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1(lean_object* v_m_785_, lean_object* v_a_786_){
_start:
{
uint8_t v___x_787_; 
v___x_787_ = lean_nat_dec_lt(v_a_786_, v_m_785_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1___boxed(lean_object* v_m_788_, lean_object* v_a_789_){
_start:
{
uint8_t v_res_790_; lean_object* v_r_791_; 
v_res_790_ = lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1(v_m_788_, v_a_789_);
lean_dec(v_a_789_);
lean_dec(v_m_788_);
v_r_791_ = lean_box(v_res_790_);
return v_r_791_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange(lean_object* v_n_792_, lean_object* v_m_793_, lean_object* v_g_794_){
_start:
{
lean_object* v___f_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v___f_795_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__0___boxed), 2, 1);
lean_closure_set(v___f_795_, 0, v_n_792_);
lean_inc_ref(v_g_794_);
v___x_796_ = lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(v_g_794_);
v___x_797_ = l_List_decidableBAll___redArg(v___f_795_, v___x_796_);
if (v___x_797_ == 0)
{
lean_dec_ref(v_g_794_);
lean_dec(v_m_793_);
return v___x_797_;
}
else
{
lean_object* v___f_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___f_798_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___lam__1___boxed), 2, 1);
lean_closure_set(v___f_798_, 0, v_m_793_);
v___x_799_ = lp_tzap_x2dlean_TzapLean_Gate_cbitsOf(v_g_794_);
v___x_800_ = l_List_decidableBAll___redArg(v___f_798_, v___x_799_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___boxed(lean_object* v_n_801_, lean_object* v_m_802_, lean_object* v_g_803_){
_start:
{
uint8_t v_res_804_; lean_object* v_r_805_; 
v_res_804_ = lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange(v_n_801_, v_m_802_, v_g_803_);
v_r_805_ = lean_box(v_res_804_);
return v_r_805_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_mapQubits(lean_object* v_f_806_, lean_object* v_x_807_){
_start:
{
switch(lean_obj_tag(v_x_807_))
{
case 0:
{
lean_object* v_q_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_816_; 
v_q_808_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_816_ == 0)
{
v___x_810_ = v_x_807_;
v_isShared_811_ = v_isSharedCheck_816_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_q_808_);
lean_dec(v_x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_816_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_812_ = lean_apply_1(v_f_806_, v_q_808_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_812_);
v___x_814_ = v___x_810_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
case 1:
{
lean_object* v_q_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_q_817_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_825_ == 0)
{
v___x_819_ = v_x_807_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_q_817_);
lean_dec(v_x_807_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_821_ = lean_apply_1(v_f_806_, v_q_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_821_);
v___x_823_ = v___x_819_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
case 2:
{
lean_object* v_q_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_834_; 
v_q_826_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_834_ == 0)
{
v___x_828_ = v_x_807_;
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_q_826_);
lean_dec(v_x_807_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_apply_1(v_f_806_, v_q_826_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_830_);
v___x_832_ = v___x_828_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
case 3:
{
lean_object* v_q_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_q_835_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_843_ == 0)
{
v___x_837_ = v_x_807_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_q_835_);
lean_dec(v_x_807_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = lean_apply_1(v_f_806_, v_q_835_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_839_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
case 4:
{
lean_object* v_q_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_852_; 
v_q_844_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_852_ == 0)
{
v___x_846_ = v_x_807_;
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_q_844_);
lean_dec(v_x_807_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_848_ = lean_apply_1(v_f_806_, v_q_844_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v___x_848_);
v___x_850_ = v___x_846_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
case 5:
{
lean_object* v_q_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_861_; 
v_q_853_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_861_ == 0)
{
v___x_855_ = v_x_807_;
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_q_853_);
lean_dec(v_x_807_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = lean_apply_1(v_f_806_, v_q_853_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___x_857_);
v___x_859_ = v___x_855_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(5, 1, 0);
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
case 6:
{
lean_object* v_q_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
v_q_862_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_870_ == 0)
{
v___x_864_ = v_x_807_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_q_862_);
lean_dec(v_x_807_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_apply_1(v_f_806_, v_q_862_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
case 7:
{
lean_object* v_theta_871_; lean_object* v_q_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_880_; 
v_theta_871_ = lean_ctor_get(v_x_807_, 0);
v_q_872_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_880_ == 0)
{
v___x_874_ = v_x_807_;
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_q_872_);
lean_inc(v_theta_871_);
lean_dec(v_x_807_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = lean_apply_1(v_f_806_, v_q_872_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v___x_876_);
v___x_878_ = v___x_874_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_theta_871_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
case 8:
{
lean_object* v_control_881_; lean_object* v_target_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_891_; 
v_control_881_ = lean_ctor_get(v_x_807_, 0);
v_target_882_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_891_ == 0)
{
v___x_884_ = v_x_807_;
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_target_882_);
lean_inc(v_control_881_);
lean_dec(v_x_807_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
lean_inc_ref(v_f_806_);
v___x_886_ = lean_apply_1(v_f_806_, v_control_881_);
v___x_887_ = lean_apply_1(v_f_806_, v_target_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 1, v___x_887_);
lean_ctor_set(v___x_884_, 0, v___x_886_);
v___x_889_ = v___x_884_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
case 9:
{
lean_object* v_control_892_; lean_object* v_target_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_902_; 
v_control_892_ = lean_ctor_get(v_x_807_, 0);
v_target_893_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_902_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_902_ == 0)
{
v___x_895_ = v_x_807_;
v_isShared_896_ = v_isSharedCheck_902_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_target_893_);
lean_inc(v_control_892_);
lean_dec(v_x_807_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_902_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
lean_inc_ref(v_f_806_);
v___x_897_ = lean_apply_1(v_f_806_, v_control_892_);
v___x_898_ = lean_apply_1(v_f_806_, v_target_893_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v___x_898_);
lean_ctor_set(v___x_895_, 0, v___x_897_);
v___x_900_ = v___x_895_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_897_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
case 10:
{
lean_object* v_control_u2081_903_; lean_object* v_control_u2082_904_; lean_object* v_target_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_915_; 
v_control_u2081_903_ = lean_ctor_get(v_x_807_, 0);
v_control_u2082_904_ = lean_ctor_get(v_x_807_, 1);
v_target_905_ = lean_ctor_get(v_x_807_, 2);
v_isSharedCheck_915_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_915_ == 0)
{
v___x_907_ = v_x_807_;
v_isShared_908_ = v_isSharedCheck_915_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_target_905_);
lean_inc(v_control_u2082_904_);
lean_inc(v_control_u2081_903_);
lean_dec(v_x_807_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_915_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
lean_inc_ref_n(v_f_806_, 2);
v___x_909_ = lean_apply_1(v_f_806_, v_control_u2081_903_);
v___x_910_ = lean_apply_1(v_f_806_, v_control_u2082_904_);
v___x_911_ = lean_apply_1(v_f_806_, v_target_905_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 2, v___x_911_);
lean_ctor_set(v___x_907_, 1, v___x_910_);
lean_ctor_set(v___x_907_, 0, v___x_909_);
v___x_913_ = v___x_907_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v___x_910_);
lean_ctor_set(v_reuseFailAlloc_914_, 2, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
case 11:
{
lean_object* v_control_u2081_916_; lean_object* v_control_u2082_917_; lean_object* v_target_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_928_; 
v_control_u2081_916_ = lean_ctor_get(v_x_807_, 0);
v_control_u2082_917_ = lean_ctor_get(v_x_807_, 1);
v_target_918_ = lean_ctor_get(v_x_807_, 2);
v_isSharedCheck_928_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_928_ == 0)
{
v___x_920_ = v_x_807_;
v_isShared_921_ = v_isSharedCheck_928_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_target_918_);
lean_inc(v_control_u2082_917_);
lean_inc(v_control_u2081_916_);
lean_dec(v_x_807_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_928_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
lean_inc_ref_n(v_f_806_, 2);
v___x_922_ = lean_apply_1(v_f_806_, v_control_u2081_916_);
v___x_923_ = lean_apply_1(v_f_806_, v_control_u2082_917_);
v___x_924_ = lean_apply_1(v_f_806_, v_target_918_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 2, v___x_924_);
lean_ctor_set(v___x_920_, 1, v___x_923_);
lean_ctor_set(v___x_920_, 0, v___x_922_);
v___x_926_ = v___x_920_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_922_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
case 12:
{
lean_object* v_qubit_929_; lean_object* v_cbit_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_938_; 
v_qubit_929_ = lean_ctor_get(v_x_807_, 0);
v_cbit_930_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_938_ == 0)
{
v___x_932_ = v_x_807_;
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_cbit_930_);
lean_inc(v_qubit_929_);
lean_dec(v_x_807_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = lean_apply_1(v_f_806_, v_qubit_929_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 0, v___x_934_);
v___x_936_ = v___x_932_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_cbit_930_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
default: 
{
lean_object* v_q_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_947_; 
v_q_939_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_947_ == 0)
{
v___x_941_ = v_x_807_;
v_isShared_942_ = v_isSharedCheck_947_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_q_939_);
lean_dec(v_x_807_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_947_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_943_ = lean_apply_1(v_f_806_, v_q_939_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_945_ = v___x_941_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isToffoli(lean_object* v_x_948_){
_start:
{
if (lean_obj_tag(v_x_948_) == 10)
{
uint8_t v___x_949_; 
v___x_949_ = 1;
return v___x_949_;
}
else
{
uint8_t v___x_950_; 
v___x_950_ = 0;
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isToffoli___boxed(lean_object* v_x_951_){
_start:
{
uint8_t v_res_952_; lean_object* v_r_953_; 
v_res_952_ = lp_tzap_x2dlean_TzapLean_Gate_isToffoli(v_x_951_);
lean_dec_ref(v_x_951_);
v_r_953_ = lean_box(v_res_952_);
return v_r_953_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isCcz(lean_object* v_x_954_){
_start:
{
if (lean_obj_tag(v_x_954_) == 11)
{
uint8_t v___x_955_; 
v___x_955_ = 1;
return v___x_955_;
}
else
{
uint8_t v___x_956_; 
v___x_956_ = 0;
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isCcz___boxed(lean_object* v_x_957_){
_start:
{
uint8_t v_res_958_; lean_object* v_r_959_; 
v_res_958_ = lp_tzap_x2dlean_TzapLean_Gate_isCcz(v_x_957_);
lean_dec_ref(v_x_957_);
v_r_959_ = lean_box(v_res_958_);
return v_r_959_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(lean_object* v_x_960_){
_start:
{
switch(lean_obj_tag(v_x_960_))
{
case 12:
{
uint8_t v___x_961_; 
v___x_961_ = 1;
return v___x_961_;
}
case 13:
{
uint8_t v___x_962_; 
v___x_962_ = 1;
return v___x_962_;
}
default: 
{
uint8_t v___x_963_; 
v___x_963_ = 0;
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isMeasurement___boxed(lean_object* v_x_964_){
_start:
{
uint8_t v_res_965_; lean_object* v_r_966_; 
v_res_965_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v_x_964_);
lean_dec_ref(v_x_964_);
v_r_966_ = lean_box(v_res_965_);
return v_r_966_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Gate_isUnitary(lean_object* v_g_967_){
_start:
{
uint8_t v___x_968_; 
v___x_968_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v_g_967_);
if (v___x_968_ == 0)
{
uint8_t v___x_969_; 
v___x_969_ = 1;
return v___x_969_;
}
else
{
uint8_t v___x_970_; 
v___x_970_ = 0;
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_isUnitary___boxed(lean_object* v_g_971_){
_start:
{
uint8_t v_res_972_; lean_object* v_r_973_; 
v_res_972_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v_g_971_);
lean_dec_ref(v_g_971_);
v_r_973_ = lean_box(v_res_972_);
return v_r_973_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_isMeasurement_match__1_splitter___redArg(lean_object* v_x_974_, lean_object* v_h__1_975_, lean_object* v_h__2_976_, lean_object* v_h__3_977_){
_start:
{
switch(lean_obj_tag(v_x_974_))
{
case 12:
{
lean_object* v_qubit_978_; lean_object* v_cbit_979_; lean_object* v___x_980_; 
lean_dec(v_h__3_977_);
lean_dec(v_h__2_976_);
v_qubit_978_ = lean_ctor_get(v_x_974_, 0);
lean_inc(v_qubit_978_);
v_cbit_979_ = lean_ctor_get(v_x_974_, 1);
lean_inc(v_cbit_979_);
lean_dec_ref_known(v_x_974_, 2);
v___x_980_ = lean_apply_2(v_h__1_975_, v_qubit_978_, v_cbit_979_);
return v___x_980_;
}
case 13:
{
lean_object* v_q_981_; lean_object* v___x_982_; 
lean_dec(v_h__3_977_);
lean_dec(v_h__1_975_);
v_q_981_ = lean_ctor_get(v_x_974_, 0);
lean_inc(v_q_981_);
lean_dec_ref_known(v_x_974_, 1);
v___x_982_ = lean_apply_1(v_h__2_976_, v_q_981_);
return v___x_982_;
}
default: 
{
lean_object* v___x_983_; 
lean_dec(v_h__2_976_);
lean_dec(v_h__1_975_);
v___x_983_ = lean_apply_3(v_h__3_977_, v_x_974_, lean_box(0), lean_box(0));
return v___x_983_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_isMeasurement_match__1_splitter(lean_object* v_motive_984_, lean_object* v_x_985_, lean_object* v_h__1_986_, lean_object* v_h__2_987_, lean_object* v_h__3_988_){
_start:
{
switch(lean_obj_tag(v_x_985_))
{
case 12:
{
lean_object* v_qubit_989_; lean_object* v_cbit_990_; lean_object* v___x_991_; 
lean_dec(v_h__3_988_);
lean_dec(v_h__2_987_);
v_qubit_989_ = lean_ctor_get(v_x_985_, 0);
lean_inc(v_qubit_989_);
v_cbit_990_ = lean_ctor_get(v_x_985_, 1);
lean_inc(v_cbit_990_);
lean_dec_ref_known(v_x_985_, 2);
v___x_991_ = lean_apply_2(v_h__1_986_, v_qubit_989_, v_cbit_990_);
return v___x_991_;
}
case 13:
{
lean_object* v_q_992_; lean_object* v___x_993_; 
lean_dec(v_h__3_988_);
lean_dec(v_h__1_986_);
v_q_992_ = lean_ctor_get(v_x_985_, 0);
lean_inc(v_q_992_);
lean_dec_ref_known(v_x_985_, 1);
v___x_993_ = lean_apply_1(v_h__2_987_, v_q_992_);
return v___x_993_;
}
default: 
{
lean_object* v___x_994_; 
lean_dec(v_h__2_987_);
lean_dec(v_h__1_986_);
v___x_994_ = lean_apply_3(v_h__3_988_, v_x_985_, lean_box(0), lean_box(0));
return v___x_994_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_cbitsOf_match__1_splitter___redArg(lean_object* v_x_995_, lean_object* v_h__1_996_, lean_object* v_h__2_997_){
_start:
{
if (lean_obj_tag(v_x_995_) == 12)
{
lean_object* v_qubit_998_; lean_object* v_cbit_999_; lean_object* v___x_1000_; 
lean_dec(v_h__2_997_);
v_qubit_998_ = lean_ctor_get(v_x_995_, 0);
lean_inc(v_qubit_998_);
v_cbit_999_ = lean_ctor_get(v_x_995_, 1);
lean_inc(v_cbit_999_);
lean_dec_ref_known(v_x_995_, 2);
v___x_1000_ = lean_apply_2(v_h__1_996_, v_qubit_998_, v_cbit_999_);
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; 
lean_dec(v_h__1_996_);
v___x_1001_ = lean_apply_2(v_h__2_997_, v_x_995_, lean_box(0));
return v___x_1001_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Circuit_0__TzapLean_Gate_cbitsOf_match__1_splitter(lean_object* v_motive_1002_, lean_object* v_x_1003_, lean_object* v_h__1_1004_, lean_object* v_h__2_1005_){
_start:
{
if (lean_obj_tag(v_x_1003_) == 12)
{
lean_object* v_qubit_1006_; lean_object* v_cbit_1007_; lean_object* v___x_1008_; 
lean_dec(v_h__2_1005_);
v_qubit_1006_ = lean_ctor_get(v_x_1003_, 0);
lean_inc(v_qubit_1006_);
v_cbit_1007_ = lean_ctor_get(v_x_1003_, 1);
lean_inc(v_cbit_1007_);
lean_dec_ref_known(v_x_1003_, 2);
v___x_1008_ = lean_apply_2(v_h__1_1004_, v_qubit_1006_, v_cbit_1007_);
return v___x_1008_;
}
else
{
lean_object* v___x_1009_; 
lean_dec(v_h__1_1004_);
v___x_1009_ = lean_apply_2(v_h__2_1005_, v_x_1003_, lean_box(0));
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Gate_toString(lean_object* v_x_1028_){
_start:
{
switch(lean_obj_tag(v_x_1028_))
{
case 0:
{
lean_object* v_q_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_q_1029_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1029_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1030_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__0));
v___x_1031_ = l_Nat_reprFast(v_q_1029_);
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
lean_dec_ref(v___x_1031_);
return v___x_1032_;
}
case 1:
{
lean_object* v_q_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v_q_1033_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1033_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1034_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__1));
v___x_1035_ = l_Nat_reprFast(v_q_1033_);
v___x_1036_ = lean_string_append(v___x_1034_, v___x_1035_);
lean_dec_ref(v___x_1035_);
return v___x_1036_;
}
case 2:
{
lean_object* v_q_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_q_1037_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1037_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1038_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__2));
v___x_1039_ = l_Nat_reprFast(v_q_1037_);
v___x_1040_ = lean_string_append(v___x_1038_, v___x_1039_);
lean_dec_ref(v___x_1039_);
return v___x_1040_;
}
case 3:
{
lean_object* v_q_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v_q_1041_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1041_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1042_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__3));
v___x_1043_ = l_Nat_reprFast(v_q_1041_);
v___x_1044_ = lean_string_append(v___x_1042_, v___x_1043_);
lean_dec_ref(v___x_1043_);
return v___x_1044_;
}
case 4:
{
lean_object* v_q_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_q_1045_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1045_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1046_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__4));
v___x_1047_ = l_Nat_reprFast(v_q_1045_);
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
lean_dec_ref(v___x_1047_);
return v___x_1048_;
}
case 5:
{
lean_object* v_q_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_q_1049_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1049_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1050_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__5));
v___x_1051_ = l_Nat_reprFast(v_q_1049_);
v___x_1052_ = lean_string_append(v___x_1050_, v___x_1051_);
lean_dec_ref(v___x_1051_);
return v___x_1052_;
}
case 6:
{
lean_object* v_q_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_q_1053_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1053_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1054_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__6));
v___x_1055_ = l_Nat_reprFast(v_q_1053_);
v___x_1056_ = lean_string_append(v___x_1054_, v___x_1055_);
lean_dec_ref(v___x_1055_);
return v___x_1056_;
}
case 7:
{
lean_object* v_theta_1057_; lean_object* v_q_1058_; lean_object* v_num_1059_; lean_object* v_den_1060_; lean_object* v___x_1061_; lean_object* v___y_1063_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v_theta_1057_ = lean_ctor_get(v_x_1028_, 0);
lean_inc_ref(v_theta_1057_);
v_q_1058_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_q_1058_);
lean_dec_ref_known(v_x_1028_, 2);
v_num_1059_ = lean_ctor_get(v_theta_1057_, 0);
lean_inc(v_num_1059_);
v_den_1060_ = lean_ctor_get(v_theta_1057_, 1);
lean_inc(v_den_1060_);
lean_dec_ref(v_theta_1057_);
v___x_1061_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__7));
v___x_1069_ = lean_unsigned_to_nat(1u);
v___x_1070_ = lean_nat_dec_eq(v_den_1060_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1071_ = l_Int_repr(v_num_1059_);
lean_dec(v_num_1059_);
v___x_1072_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__9));
v___x_1073_ = lean_string_append(v___x_1071_, v___x_1072_);
v___x_1074_ = l_Nat_reprFast(v_den_1060_);
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
lean_dec_ref(v___x_1074_);
v___y_1063_ = v___x_1075_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1076_; 
lean_dec(v_den_1060_);
v___x_1076_ = l_Int_repr(v_num_1059_);
lean_dec(v_num_1059_);
v___y_1063_ = v___x_1076_;
goto v___jp_1062_;
}
v___jp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1064_ = lean_string_append(v___x_1061_, v___y_1063_);
lean_dec_ref(v___y_1063_);
v___x_1065_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__8));
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
v___x_1067_ = l_Nat_reprFast(v_q_1058_);
v___x_1068_ = lean_string_append(v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1067_);
return v___x_1068_;
}
}
case 8:
{
lean_object* v_control_1077_; lean_object* v_target_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v_control_1077_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_control_1077_);
v_target_1078_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_target_1078_);
lean_dec_ref_known(v_x_1028_, 2);
v___x_1079_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__10));
v___x_1080_ = l_Nat_reprFast(v_control_1077_);
v___x_1081_ = lean_string_append(v___x_1079_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11));
v___x_1083_ = lean_string_append(v___x_1081_, v___x_1082_);
v___x_1084_ = l_Nat_reprFast(v_target_1078_);
v___x_1085_ = lean_string_append(v___x_1083_, v___x_1084_);
lean_dec_ref(v___x_1084_);
return v___x_1085_;
}
case 9:
{
lean_object* v_control_1086_; lean_object* v_target_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_control_1086_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_control_1086_);
v_target_1087_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_target_1087_);
lean_dec_ref_known(v_x_1028_, 2);
v___x_1088_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__12));
v___x_1089_ = l_Nat_reprFast(v_control_1086_);
v___x_1090_ = lean_string_append(v___x_1088_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11));
v___x_1092_ = lean_string_append(v___x_1090_, v___x_1091_);
v___x_1093_ = l_Nat_reprFast(v_target_1087_);
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
lean_dec_ref(v___x_1093_);
return v___x_1094_;
}
case 10:
{
lean_object* v_control_u2081_1095_; lean_object* v_control_u2082_1096_; lean_object* v_target_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_control_u2081_1095_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_control_u2081_1095_);
v_control_u2082_1096_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_control_u2082_1096_);
v_target_1097_ = lean_ctor_get(v_x_1028_, 2);
lean_inc(v_target_1097_);
lean_dec_ref_known(v_x_1028_, 3);
v___x_1098_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__13));
v___x_1099_ = l_Nat_reprFast(v_control_u2081_1095_);
v___x_1100_ = lean_string_append(v___x_1098_, v___x_1099_);
lean_dec_ref(v___x_1099_);
v___x_1101_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11));
v___x_1102_ = lean_string_append(v___x_1100_, v___x_1101_);
v___x_1103_ = l_Nat_reprFast(v_control_u2082_1096_);
v___x_1104_ = lean_string_append(v___x_1102_, v___x_1103_);
lean_dec_ref(v___x_1103_);
v___x_1105_ = lean_string_append(v___x_1104_, v___x_1101_);
v___x_1106_ = l_Nat_reprFast(v_target_1097_);
v___x_1107_ = lean_string_append(v___x_1105_, v___x_1106_);
lean_dec_ref(v___x_1106_);
return v___x_1107_;
}
case 11:
{
lean_object* v_control_u2081_1108_; lean_object* v_control_u2082_1109_; lean_object* v_target_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_control_u2081_1108_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_control_u2081_1108_);
v_control_u2082_1109_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_control_u2082_1109_);
v_target_1110_ = lean_ctor_get(v_x_1028_, 2);
lean_inc(v_target_1110_);
lean_dec_ref_known(v_x_1028_, 3);
v___x_1111_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__14));
v___x_1112_ = l_Nat_reprFast(v_control_u2081_1108_);
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
lean_dec_ref(v___x_1112_);
v___x_1114_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__11));
v___x_1115_ = lean_string_append(v___x_1113_, v___x_1114_);
v___x_1116_ = l_Nat_reprFast(v_control_u2082_1109_);
v___x_1117_ = lean_string_append(v___x_1115_, v___x_1116_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = lean_string_append(v___x_1117_, v___x_1114_);
v___x_1119_ = l_Nat_reprFast(v_target_1110_);
v___x_1120_ = lean_string_append(v___x_1118_, v___x_1119_);
lean_dec_ref(v___x_1119_);
return v___x_1120_;
}
case 12:
{
lean_object* v_qubit_1121_; lean_object* v_cbit_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_qubit_1121_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_qubit_1121_);
v_cbit_1122_ = lean_ctor_get(v_x_1028_, 1);
lean_inc(v_cbit_1122_);
lean_dec_ref_known(v_x_1028_, 2);
v___x_1123_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__15));
v___x_1124_ = l_Nat_reprFast(v_qubit_1121_);
v___x_1125_ = lean_string_append(v___x_1123_, v___x_1124_);
lean_dec_ref(v___x_1124_);
v___x_1126_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__16));
v___x_1127_ = lean_string_append(v___x_1125_, v___x_1126_);
v___x_1128_ = l_Nat_reprFast(v_cbit_1122_);
v___x_1129_ = lean_string_append(v___x_1127_, v___x_1128_);
lean_dec_ref(v___x_1128_);
return v___x_1129_;
}
default: 
{
lean_object* v_q_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_q_1130_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_q_1130_);
lean_dec_ref_known(v_x_1028_, 1);
v___x_1131_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Gate_toString___closed__17));
v___x_1132_ = l_Nat_reprFast(v_q_1130_);
v___x_1133_ = lean_string_append(v___x_1131_, v___x_1132_);
lean_dec_ref(v___x_1132_);
return v___x_1133_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0___lam__0(lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_unsigned_to_nat(0u);
v___x_1138_ = lp_tzap_x2dlean_TzapLean_instReprGate_repr(v___y_1136_, v___x_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
if (lean_obj_tag(v_x_1141_) == 0)
{
lean_dec(v_x_1139_);
return v_x_1140_;
}
else
{
lean_object* v_head_1142_; lean_object* v_tail_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1154_; 
v_head_1142_ = lean_ctor_get(v_x_1141_, 0);
v_tail_1143_ = lean_ctor_get(v_x_1141_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_x_1141_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1145_ = v_x_1141_;
v_isShared_1146_ = v_isSharedCheck_1154_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_tail_1143_);
lean_inc(v_head_1142_);
lean_dec(v_x_1141_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1154_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
lean_inc(v_x_1139_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 5);
lean_ctor_set(v___x_1145_, 1, v_x_1139_);
lean_ctor_set(v___x_1145_, 0, v_x_1140_);
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_x_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_x_1139_);
v___x_1148_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = lean_unsigned_to_nat(0u);
v___x_1150_ = lp_tzap_x2dlean_TzapLean_instReprGate_repr(v_head_1142_, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1148_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v_x_1140_ = v___x_1151_;
v_x_1141_ = v_tail_1143_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1(lean_object* v_x_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_){
_start:
{
if (lean_obj_tag(v_x_1157_) == 0)
{
lean_dec(v_x_1155_);
return v_x_1156_;
}
else
{
lean_object* v_head_1158_; lean_object* v_tail_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1170_; 
v_head_1158_ = lean_ctor_get(v_x_1157_, 0);
v_tail_1159_ = lean_ctor_get(v_x_1157_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1157_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1161_ = v_x_1157_;
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_tail_1159_);
lean_inc(v_head_1158_);
lean_dec(v_x_1157_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
lean_inc(v_x_1155_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set_tag(v___x_1161_, 5);
lean_ctor_set(v___x_1161_, 1, v_x_1155_);
lean_ctor_set(v___x_1161_, 0, v_x_1156_);
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_x_1156_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_x_1155_);
v___x_1164_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lp_tzap_x2dlean_TzapLean_instReprGate_repr(v_head_1158_, v___x_1165_);
v___x_1167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1164_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
v___x_1168_ = lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1_spec__2(v_x_1155_, v___x_1167_, v_tail_1159_);
return v___x_1168_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0(lean_object* v_x_1171_, lean_object* v_x_1172_){
_start:
{
if (lean_obj_tag(v_x_1171_) == 0)
{
lean_object* v___x_1173_; 
lean_dec(v_x_1172_);
v___x_1173_ = lean_box(0);
return v___x_1173_;
}
else
{
lean_object* v_tail_1174_; 
v_tail_1174_ = lean_ctor_get(v_x_1171_, 1);
if (lean_obj_tag(v_tail_1174_) == 0)
{
lean_object* v_head_1175_; lean_object* v___x_1176_; 
lean_dec(v_x_1172_);
v_head_1175_ = lean_ctor_get(v_x_1171_, 0);
lean_inc(v_head_1175_);
lean_dec_ref_known(v_x_1171_, 2);
v___x_1176_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0___lam__0(v_head_1175_);
return v___x_1176_;
}
else
{
lean_object* v_head_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
lean_inc(v_tail_1174_);
v_head_1177_ = lean_ctor_get(v_x_1171_, 0);
lean_inc(v_head_1177_);
lean_dec_ref_known(v_x_1171_, 2);
v___x_1178_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0___lam__0(v_head_1177_);
v___x_1179_ = lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0_spec__1(v_x_1172_, v___x_1178_, v_tail_1174_);
return v___x_1179_;
}
}
}
}
static lean_object* _init_lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__2));
v___x_1192_ = lean_string_length(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_obj_once(&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7, &lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7_once, _init_lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__7);
v___x_1194_ = lean_nat_to_int(v___x_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(lean_object* v_a_1199_){
_start:
{
if (lean_obj_tag(v_a_1199_) == 0)
{
lean_object* v___x_1200_; 
v___x_1200_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__1));
return v___x_1200_;
}
else
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; lean_object* v___x_1210_; 
v___x_1201_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__5));
v___x_1202_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0_spec__0(v_a_1199_, v___x_1201_);
v___x_1203_ = lean_obj_once(&lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8, &lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8_once, _init_lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__8);
v___x_1204_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__9));
v___x_1205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1202_);
v___x_1206_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__10));
v___x_1207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1205_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
v___x_1208_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1203_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = 0;
v___x_1210_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1210_, 0, v___x_1208_);
lean_ctor_set_uint8(v___x_1210_, sizeof(void*)*1, v___x_1209_);
return v___x_1210_;
}
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = lean_unsigned_to_nat(13u);
v___x_1225_ = lean_nat_to_int(v___x_1224_);
return v___x_1225_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_unsigned_to_nat(12u);
v___x_1230_ = lean_nat_to_int(v___x_1229_);
return v___x_1230_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_unsigned_to_nat(9u);
v___x_1235_ = lean_nat_to_int(v___x_1234_);
return v___x_1235_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_unsigned_to_nat(14u);
v___x_1240_ = lean_nat_to_int(v___x_1239_);
return v___x_1240_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = lean_unsigned_to_nat(10u);
v___x_1245_ = lean_nat_to_int(v___x_1244_);
return v___x_1245_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = lean_unsigned_to_nat(18u);
v___x_1250_ = lean_nat_to_int(v___x_1249_);
return v___x_1250_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__0));
v___x_1253_ = lean_string_length(v___x_1252_);
return v___x_1253_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__24);
v___x_1255_ = lean_nat_to_int(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg(lean_object* v_x_1260_){
_start:
{
lean_object* v_numQubits_1261_; lean_object* v_numCbits_1262_; lean_object* v_gates_1263_; uint8_t v_hasToffoli_1264_; uint8_t v_hasCcz_1265_; uint8_t v_hasMeasurement_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_numQubits_1261_ = lean_ctor_get(v_x_1260_, 0);
lean_inc(v_numQubits_1261_);
v_numCbits_1262_ = lean_ctor_get(v_x_1260_, 1);
lean_inc(v_numCbits_1262_);
v_gates_1263_ = lean_ctor_get(v_x_1260_, 2);
lean_inc(v_gates_1263_);
v_hasToffoli_1264_ = lean_ctor_get_uint8(v_x_1260_, sizeof(void*)*3);
v_hasCcz_1265_ = lean_ctor_get_uint8(v_x_1260_, sizeof(void*)*3 + 1);
v_hasMeasurement_1266_ = lean_ctor_get_uint8(v_x_1260_, sizeof(void*)*3 + 2);
lean_dec_ref(v_x_1260_);
v___x_1267_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__5));
v___x_1268_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__6));
v___x_1269_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__7);
v___x_1270_ = l_Nat_reprFast(v_numQubits_1261_);
v___x_1271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
v___x_1272_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1269_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = 0;
v___x_1274_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set_uint8(v___x_1274_, sizeof(void*)*1, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1268_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg___closed__4));
v___x_1277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = lean_box(1);
v___x_1279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__9));
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___x_1267_);
v___x_1283_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__10);
v___x_1284_ = l_Nat_reprFast(v_numCbits_1262_);
v___x_1285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1283_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
lean_ctor_set_uint8(v___x_1287_, sizeof(void*)*1, v___x_1273_);
v___x_1288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1282_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___x_1276_);
v___x_1290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___x_1278_);
v___x_1291_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__12));
v___x_1292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v___x_1267_);
v___x_1294_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__13);
v___x_1295_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(v_gates_1263_);
v___x_1296_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1294_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
v___x_1297_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*1, v___x_1273_);
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1293_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1276_);
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
lean_ctor_set(v___x_1300_, 1, v___x_1278_);
v___x_1301_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__15));
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
lean_ctor_set(v___x_1303_, 1, v___x_1267_);
v___x_1304_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__16);
v___x_1305_ = l_Bool_repr___redArg(v_hasToffoli_1264_);
v___x_1306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1304_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*1, v___x_1273_);
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1303_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
lean_ctor_set(v___x_1309_, 1, v___x_1276_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1278_);
v___x_1311_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__18));
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1267_);
v___x_1314_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__19);
v___x_1315_ = l_Bool_repr___redArg(v_hasCcz_1265_);
v___x_1316_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set_uint8(v___x_1317_, sizeof(void*)*1, v___x_1273_);
v___x_1318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1313_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___x_1276_);
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1278_);
v___x_1321_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__21));
v___x_1322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1320_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v___x_1267_);
v___x_1324_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__22);
v___x_1325_ = l_Bool_repr___redArg(v_hasMeasurement_1266_);
v___x_1326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set_uint8(v___x_1327_, sizeof(void*)*1, v___x_1273_);
v___x_1328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1323_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25, &lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25_once, _init_lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__25);
v___x_1330_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__26));
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v___x_1328_);
v___x_1332_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg___closed__27));
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1329_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set_uint8(v___x_1335_, sizeof(void*)*1, v___x_1273_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr(lean_object* v_x_1336_, lean_object* v_prec_1337_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___redArg(v_x_1336_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr___boxed(lean_object* v_x_1339_, lean_object* v_prec_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = lp_tzap_x2dlean_TzapLean_instReprRawCircuit_repr(v_x_1339_, v_prec_1340_);
lean_dec(v_prec_1340_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0(lean_object* v_a_1342_, lean_object* v_n_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___redArg(v_a_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0___boxed(lean_object* v_a_1345_, lean_object* v_n_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = lp_tzap_x2dlean_List_repr___at___00TzapLean_instReprRawCircuit_repr_spec__0(v_a_1345_, v_n_1346_);
lean_dec(v_n_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq(lean_object* v_x_1356_, lean_object* v_x_1357_){
_start:
{
lean_object* v_numQubits_1358_; lean_object* v_numCbits_1359_; lean_object* v_gates_1360_; uint8_t v_hasToffoli_1361_; uint8_t v_hasCcz_1362_; uint8_t v_hasMeasurement_1363_; lean_object* v_numQubits_1364_; lean_object* v_numCbits_1365_; lean_object* v_gates_1366_; uint8_t v_hasToffoli_1367_; uint8_t v_hasCcz_1368_; uint8_t v_hasMeasurement_1369_; uint8_t v___x_1370_; 
v_numQubits_1358_ = lean_ctor_get(v_x_1356_, 0);
lean_inc(v_numQubits_1358_);
v_numCbits_1359_ = lean_ctor_get(v_x_1356_, 1);
lean_inc(v_numCbits_1359_);
v_gates_1360_ = lean_ctor_get(v_x_1356_, 2);
lean_inc(v_gates_1360_);
v_hasToffoli_1361_ = lean_ctor_get_uint8(v_x_1356_, sizeof(void*)*3);
v_hasCcz_1362_ = lean_ctor_get_uint8(v_x_1356_, sizeof(void*)*3 + 1);
v_hasMeasurement_1363_ = lean_ctor_get_uint8(v_x_1356_, sizeof(void*)*3 + 2);
lean_dec_ref(v_x_1356_);
v_numQubits_1364_ = lean_ctor_get(v_x_1357_, 0);
lean_inc(v_numQubits_1364_);
v_numCbits_1365_ = lean_ctor_get(v_x_1357_, 1);
lean_inc(v_numCbits_1365_);
v_gates_1366_ = lean_ctor_get(v_x_1357_, 2);
lean_inc(v_gates_1366_);
v_hasToffoli_1367_ = lean_ctor_get_uint8(v_x_1357_, sizeof(void*)*3);
v_hasCcz_1368_ = lean_ctor_get_uint8(v_x_1357_, sizeof(void*)*3 + 1);
v_hasMeasurement_1369_ = lean_ctor_get_uint8(v_x_1357_, sizeof(void*)*3 + 2);
lean_dec_ref(v_x_1357_);
v___x_1370_ = lean_nat_dec_eq(v_numQubits_1358_, v_numQubits_1364_);
lean_dec(v_numQubits_1364_);
lean_dec(v_numQubits_1358_);
if (v___x_1370_ == 0)
{
lean_dec(v_gates_1366_);
lean_dec(v_numCbits_1365_);
lean_dec(v_gates_1360_);
lean_dec(v_numCbits_1359_);
return v___x_1370_;
}
else
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_nat_dec_eq(v_numCbits_1359_, v_numCbits_1365_);
lean_dec(v_numCbits_1365_);
lean_dec(v_numCbits_1359_);
if (v___x_1371_ == 0)
{
lean_dec(v_gates_1366_);
lean_dec(v_gates_1360_);
return v___x_1371_;
}
else
{
lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_instDecidableEqGate___boxed), 2, 0);
v___x_1373_ = l_instDecidableEqList___redArg(v___x_1372_, v_gates_1360_, v_gates_1366_);
if (v___x_1373_ == 0)
{
return v___x_1373_;
}
else
{
if (v_hasToffoli_1361_ == 0)
{
if (v_hasToffoli_1367_ == 0)
{
goto v___jp_1375_;
}
else
{
return v_hasToffoli_1361_;
}
}
else
{
if (v_hasToffoli_1367_ == 0)
{
return v_hasToffoli_1367_;
}
else
{
goto v___jp_1375_;
}
}
}
v___jp_1374_:
{
if (v_hasMeasurement_1363_ == 0)
{
if (v_hasMeasurement_1369_ == 0)
{
return v___x_1373_;
}
else
{
return v_hasMeasurement_1363_;
}
}
else
{
return v_hasMeasurement_1369_;
}
}
v___jp_1375_:
{
if (v_hasCcz_1362_ == 0)
{
if (v_hasCcz_1368_ == 0)
{
goto v___jp_1374_;
}
else
{
return v_hasCcz_1362_;
}
}
else
{
if (v_hasCcz_1368_ == 0)
{
return v_hasCcz_1368_;
}
else
{
goto v___jp_1374_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq___boxed(lean_object* v_x_1376_, lean_object* v_x_1377_){
_start:
{
uint8_t v_res_1378_; lean_object* v_r_1379_; 
v_res_1378_ = lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq(v_x_1376_, v_x_1377_);
v_r_1379_ = lean_box(v_res_1378_);
return v_r_1379_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit(lean_object* v_x_1380_, lean_object* v_x_1381_){
_start:
{
uint8_t v___x_1382_; 
v___x_1382_ = lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit_decEq(v_x_1380_, v_x_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit___boxed(lean_object* v_x_1383_, lean_object* v_x_1384_){
_start:
{
uint8_t v_res_1385_; lean_object* v_r_1386_; 
v_res_1385_ = lp_tzap_x2dlean_TzapLean_instDecidableEqRawCircuit(v_x_1383_, v_x_1384_);
v_r_1386_ = lean_box(v_res_1385_);
return v_r_1386_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_new(lean_object* v_numQubits_1387_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; lean_object* v___x_1391_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_box(0);
v___x_1390_ = 0;
v___x_1391_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_1391_, 0, v_numQubits_1387_);
lean_ctor_set(v___x_1391_, 1, v___x_1388_);
lean_ctor_set(v___x_1391_, 2, v___x_1389_);
lean_ctor_set_uint8(v___x_1391_, sizeof(void*)*3, v___x_1390_);
lean_ctor_set_uint8(v___x_1391_, sizeof(void*)*3 + 1, v___x_1390_);
lean_ctor_set_uint8(v___x_1391_, sizeof(void*)*3 + 2, v___x_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withCbits(lean_object* v_numQubits_1392_, lean_object* v_numCbits_1393_){
_start:
{
lean_object* v___x_1394_; uint8_t v___x_1395_; lean_object* v___x_1396_; 
v___x_1394_ = lean_box(0);
v___x_1395_ = 0;
v___x_1396_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_1396_, 0, v_numQubits_1392_);
lean_ctor_set(v___x_1396_, 1, v_numCbits_1393_);
lean_ctor_set(v___x_1396_, 2, v___x_1394_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*3, v___x_1395_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*3 + 1, v___x_1395_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*3 + 2, v___x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_apply(lean_object* v_c_1397_, lean_object* v_g_1398_){
_start:
{
lean_object* v_numQubits_1399_; lean_object* v_numCbits_1400_; lean_object* v_gates_1401_; uint8_t v_hasToffoli_1402_; uint8_t v_hasCcz_1403_; uint8_t v_hasMeasurement_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1425_; 
v_numQubits_1399_ = lean_ctor_get(v_c_1397_, 0);
v_numCbits_1400_ = lean_ctor_get(v_c_1397_, 1);
v_gates_1401_ = lean_ctor_get(v_c_1397_, 2);
v_hasToffoli_1402_ = lean_ctor_get_uint8(v_c_1397_, sizeof(void*)*3);
v_hasCcz_1403_ = lean_ctor_get_uint8(v_c_1397_, sizeof(void*)*3 + 1);
v_hasMeasurement_1404_ = lean_ctor_get_uint8(v_c_1397_, sizeof(void*)*3 + 2);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_c_1397_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1406_ = v_c_1397_;
v_isShared_1407_ = v_isSharedCheck_1425_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_gates_1401_);
lean_inc(v_numCbits_1400_);
lean_inc(v_numQubits_1399_);
lean_dec(v_c_1397_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1425_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___y_1412_; uint8_t v___y_1413_; uint8_t v___y_1422_; 
v___x_1408_ = lean_box(0);
lean_inc_ref(v_g_1398_);
v___x_1409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_g_1398_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = l_List_appendTR___redArg(v_gates_1401_, v___x_1409_);
if (v_hasToffoli_1402_ == 0)
{
uint8_t v___x_1424_; 
v___x_1424_ = lp_tzap_x2dlean_TzapLean_Gate_isToffoli(v_g_1398_);
v___y_1422_ = v___x_1424_;
goto v___jp_1421_;
}
else
{
v___y_1422_ = v_hasToffoli_1402_;
goto v___jp_1421_;
}
v___jp_1411_:
{
if (v_hasMeasurement_1404_ == 0)
{
uint8_t v___x_1414_; lean_object* v___x_1416_; 
v___x_1414_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v_g_1398_);
lean_dec_ref(v_g_1398_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 2, v___x_1410_);
v___x_1416_ = v___x_1406_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_numQubits_1399_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_numCbits_1400_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v___x_1410_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3, v___y_1412_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3 + 1, v___y_1413_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3 + 2, v___x_1414_);
return v___x_1416_;
}
}
else
{
lean_object* v___x_1419_; 
lean_dec_ref(v_g_1398_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 2, v___x_1410_);
v___x_1419_ = v___x_1406_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_numQubits_1399_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v_numCbits_1400_);
lean_ctor_set(v_reuseFailAlloc_1420_, 2, v___x_1410_);
lean_ctor_set_uint8(v_reuseFailAlloc_1420_, sizeof(void*)*3 + 2, v_hasMeasurement_1404_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*3, v___y_1412_);
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*3 + 1, v___y_1413_);
return v___x_1419_;
}
}
}
v___jp_1421_:
{
if (v_hasCcz_1403_ == 0)
{
uint8_t v___x_1423_; 
v___x_1423_ = lp_tzap_x2dlean_TzapLean_Gate_isCcz(v_g_1398_);
v___y_1412_ = v___y_1422_;
v___y_1413_ = v___x_1423_;
goto v___jp_1411_;
}
else
{
v___y_1412_ = v___y_1422_;
v___y_1413_ = v_hasCcz_1403_;
goto v___jp_1411_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1(lean_object* v_x_1426_){
_start:
{
if (lean_obj_tag(v_x_1426_) == 0)
{
uint8_t v___x_1427_; 
v___x_1427_ = 0;
return v___x_1427_;
}
else
{
lean_object* v_head_1428_; lean_object* v_tail_1429_; uint8_t v___x_1430_; 
v_head_1428_ = lean_ctor_get(v_x_1426_, 0);
v_tail_1429_ = lean_ctor_get(v_x_1426_, 1);
v___x_1430_ = lp_tzap_x2dlean_TzapLean_Gate_isCcz(v_head_1428_);
if (v___x_1430_ == 0)
{
v_x_1426_ = v_tail_1429_;
goto _start;
}
else
{
return v___x_1430_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1___boxed(lean_object* v_x_1432_){
_start:
{
uint8_t v_res_1433_; lean_object* v_r_1434_; 
v_res_1433_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1(v_x_1432_);
lean_dec(v_x_1432_);
v_r_1434_ = lean_box(v_res_1433_);
return v_r_1434_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2(lean_object* v_x_1435_){
_start:
{
if (lean_obj_tag(v_x_1435_) == 0)
{
uint8_t v___x_1436_; 
v___x_1436_ = 0;
return v___x_1436_;
}
else
{
lean_object* v_head_1437_; lean_object* v_tail_1438_; uint8_t v___x_1439_; 
v_head_1437_ = lean_ctor_get(v_x_1435_, 0);
v_tail_1438_ = lean_ctor_get(v_x_1435_, 1);
v___x_1439_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v_head_1437_);
if (v___x_1439_ == 0)
{
v_x_1435_ = v_tail_1438_;
goto _start;
}
else
{
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2___boxed(lean_object* v_x_1441_){
_start:
{
uint8_t v_res_1442_; lean_object* v_r_1443_; 
v_res_1442_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2(v_x_1441_);
lean_dec(v_x_1441_);
v_r_1443_ = lean_box(v_res_1442_);
return v_r_1443_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0(lean_object* v_x_1444_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 0)
{
uint8_t v___x_1445_; 
v___x_1445_ = 0;
return v___x_1445_;
}
else
{
lean_object* v_head_1446_; lean_object* v_tail_1447_; uint8_t v___x_1448_; 
v_head_1446_ = lean_ctor_get(v_x_1444_, 0);
v_tail_1447_ = lean_ctor_get(v_x_1444_, 1);
v___x_1448_ = lp_tzap_x2dlean_TzapLean_Gate_isToffoli(v_head_1446_);
if (v___x_1448_ == 0)
{
v_x_1444_ = v_tail_1447_;
goto _start;
}
else
{
return v___x_1448_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0___boxed(lean_object* v_x_1450_){
_start:
{
uint8_t v_res_1451_; lean_object* v_r_1452_; 
v_res_1451_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0(v_x_1450_);
lean_dec(v_x_1450_);
v_r_1452_ = lean_box(v_res_1451_);
return v_r_1452_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_ofGates(lean_object* v_n_1453_, lean_object* v_m_1454_, lean_object* v_gs_1455_){
_start:
{
uint8_t v___x_1456_; uint8_t v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; 
v___x_1456_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0(v_gs_1455_);
v___x_1457_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1(v_gs_1455_);
v___x_1458_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2(v_gs_1455_);
v___x_1459_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_1459_, 0, v_n_1453_);
lean_ctor_set(v___x_1459_, 1, v_m_1454_);
lean_ctor_set(v___x_1459_, 2, v_gs_1455_);
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*3, v___x_1456_);
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*3 + 1, v___x_1457_);
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*3 + 2, v___x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_size(lean_object* v_c_1460_){
_start:
{
lean_object* v_gates_1461_; lean_object* v___x_1462_; 
v_gates_1461_ = lean_ctor_get(v_c_1460_, 2);
v___x_1462_ = l_List_lengthTR___redArg(v_gates_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_size___boxed(lean_object* v_c_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = lp_tzap_x2dlean_TzapLean_RawCircuit_size(v_c_1463_);
lean_dec_ref(v_c_1463_);
return v_res_1464_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed(lean_object* v_c_1465_){
_start:
{
lean_object* v_numQubits_1466_; lean_object* v_numCbits_1467_; lean_object* v_gates_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v_numQubits_1466_ = lean_ctor_get(v_c_1465_, 0);
lean_inc(v_numQubits_1466_);
v_numCbits_1467_ = lean_ctor_get(v_c_1465_, 1);
lean_inc(v_numCbits_1467_);
v_gates_1468_ = lean_ctor_get(v_c_1465_, 2);
lean_inc(v_gates_1468_);
lean_dec_ref(v_c_1465_);
v___x_1469_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_Gate_instDecidableInRange___boxed), 3, 2);
lean_closure_set(v___x_1469_, 0, v_numQubits_1466_);
lean_closure_set(v___x_1469_, 1, v_numCbits_1467_);
v___x_1470_ = l_List_decidableBAll___redArg(v___x_1469_, v_gates_1468_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed___boxed(lean_object* v_c_1471_){
_start:
{
uint8_t v_res_1472_; lean_object* v_r_1473_; 
v_res_1472_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed(v_c_1471_);
v_r_1473_ = lean_box(v_res_1472_);
return v_r_1473_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf(lean_object* v_c_1475_){
_start:
{
lean_object* v_gates_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v_gates_1476_ = lean_ctor_get(v_c_1475_, 2);
lean_inc(v_gates_1476_);
lean_dec_ref(v_c_1475_);
v___x_1477_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___closed__0));
v___x_1478_ = l_List_decidableBAll___redArg(v___x_1477_, v_gates_1476_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf___boxed(lean_object* v_c_1479_){
_start:
{
uint8_t v_res_1480_; lean_object* v_r_1481_; 
v_res_1480_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf(v_c_1479_);
v_r_1481_ = lean_box(v_res_1480_);
return v_r_1481_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___redArg(lean_object* v_c_1482_){
_start:
{
lean_inc_ref(v_c_1482_);
return v_c_1482_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___redArg___boxed(lean_object* v_c_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = lp_tzap_x2dlean_TzapLean_Circuit_of___redArg(v_c_1483_);
lean_dec_ref(v_c_1483_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of(lean_object* v_c_1485_, lean_object* v_hc_1486_){
_start:
{
lean_inc_ref(v_c_1485_);
return v_c_1485_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Circuit_of___boxed(lean_object* v_c_1487_, lean_object* v_hc_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = lp_tzap_x2dlean_TzapLean_Circuit_of(v_c_1487_, v_hc_1488_);
lean_dec_ref(v_c_1487_);
return v_res_1489_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk(lean_object* v_c_1493_){
_start:
{
lean_object* v_gates_1494_; uint8_t v_hasToffoli_1495_; uint8_t v_hasCcz_1496_; uint8_t v_hasMeasurement_1497_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v_gates_1494_ = lean_ctor_get(v_c_1493_, 2);
lean_inc_n(v_gates_1494_, 2);
v_hasToffoli_1495_ = lean_ctor_get_uint8(v_c_1493_, sizeof(void*)*3);
v_hasCcz_1496_ = lean_ctor_get_uint8(v_c_1493_, sizeof(void*)*3 + 1);
v_hasMeasurement_1497_ = lean_ctor_get_uint8(v_c_1493_, sizeof(void*)*3 + 2);
lean_dec_ref(v_c_1493_);
v___x_1505_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__2));
v___x_1506_ = l_List_any___redArg(v_gates_1494_, v___x_1505_);
if (v_hasToffoli_1495_ == 0)
{
if (v___x_1506_ == 0)
{
goto v___jp_1502_;
}
else
{
lean_dec(v_gates_1494_);
return v_hasToffoli_1495_;
}
}
else
{
if (v___x_1506_ == 0)
{
lean_dec(v_gates_1494_);
return v___x_1506_;
}
else
{
goto v___jp_1502_;
}
}
v___jp_1498_:
{
lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1499_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__0));
v___x_1500_ = l_List_any___redArg(v_gates_1494_, v___x_1499_);
if (v_hasMeasurement_1497_ == 0)
{
if (v___x_1500_ == 0)
{
uint8_t v___x_1501_; 
v___x_1501_ = 1;
return v___x_1501_;
}
else
{
return v_hasMeasurement_1497_;
}
}
else
{
return v___x_1500_;
}
}
v___jp_1502_:
{
lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1503_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___closed__1));
lean_inc(v_gates_1494_);
v___x_1504_ = l_List_any___redArg(v_gates_1494_, v___x_1503_);
if (v_hasCcz_1496_ == 0)
{
if (v___x_1504_ == 0)
{
goto v___jp_1498_;
}
else
{
lean_dec(v_gates_1494_);
return v_hasCcz_1496_;
}
}
else
{
if (v___x_1504_ == 0)
{
lean_dec(v_gates_1494_);
return v___x_1504_;
}
else
{
goto v___jp_1498_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk___boxed(lean_object* v_c_1507_){
_start:
{
uint8_t v_res_1508_; lean_object* v_r_1509_; 
v_res_1508_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk(v_c_1507_);
v_r_1509_ = lean_box(v_res_1508_);
return v_r_1509_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(lean_object* v_c_1510_, lean_object* v_gs_1511_){
_start:
{
lean_object* v_numQubits_1512_; lean_object* v_numCbits_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1523_; 
v_numQubits_1512_ = lean_ctor_get(v_c_1510_, 0);
v_numCbits_1513_ = lean_ctor_get(v_c_1510_, 1);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_c_1510_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v_c_1510_, 2);
lean_dec(v_unused_1524_);
v___x_1515_ = v_c_1510_;
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_numCbits_1513_);
lean_inc(v_numQubits_1512_);
lean_dec(v_c_1510_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1523_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
uint8_t v___x_1517_; uint8_t v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1521_; 
v___x_1517_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__0(v_gs_1511_);
v___x_1518_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__1(v_gs_1511_);
v___x_1519_ = lp_tzap_x2dlean_List_any___at___00TzapLean_RawCircuit_ofGates_spec__2(v_gs_1511_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 2, v_gs_1511_);
v___x_1521_ = v___x_1515_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_numQubits_1512_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_numCbits_1513_);
lean_ctor_set(v_reuseFailAlloc_1522_, 2, v_gs_1511_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*3, v___x_1517_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*3 + 1, v___x_1518_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*3 + 2, v___x_1519_);
return v___x_1521_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_mapGates(lean_object* v_c_1525_, lean_object* v_f_1526_){
_start:
{
lean_object* v_numQubits_1527_; lean_object* v_numCbits_1528_; lean_object* v_gates_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_numQubits_1527_ = lean_ctor_get(v_c_1525_, 0);
lean_inc_n(v_numQubits_1527_, 2);
v_numCbits_1528_ = lean_ctor_get(v_c_1525_, 1);
lean_inc(v_numCbits_1528_);
v_gates_1529_ = lean_ctor_get(v_c_1525_, 2);
lean_inc(v_gates_1529_);
lean_dec_ref(v_c_1525_);
v___x_1530_ = lean_apply_2(v_f_1526_, v_numQubits_1527_, v_gates_1529_);
v___x_1531_ = lp_tzap_x2dlean_TzapLean_RawCircuit_ofGates(v_numQubits_1527_, v_numCbits_1528_, v___x_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableStructural(lean_object* v_c_1532_){
_start:
{
uint8_t v___x_1533_; uint8_t v___x_1534_; 
lean_inc_ref(v_c_1532_);
v___x_1533_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableFlagsOk(v_c_1532_);
v___x_1534_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWellFormed(v_c_1532_);
if (v___x_1534_ == 0)
{
return v___x_1534_;
}
else
{
return v___x_1533_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableStructural___boxed(lean_object* v_c_1535_){
_start:
{
uint8_t v_res_1536_; lean_object* v_r_1537_; 
v_res_1536_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableStructural(v_c_1535_);
v_r_1537_ = lean_box(v_res_1536_);
return v_r_1537_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0(lean_object* v_x_1541_, lean_object* v_x_1542_){
_start:
{
if (lean_obj_tag(v_x_1542_) == 0)
{
return v_x_1541_;
}
else
{
lean_object* v_head_1543_; lean_object* v_tail_1544_; lean_object* v_fst_1545_; lean_object* v_snd_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_head_1543_ = lean_ctor_get(v_x_1542_, 0);
lean_inc(v_head_1543_);
v_tail_1544_ = lean_ctor_get(v_x_1542_, 1);
lean_inc(v_tail_1544_);
lean_dec_ref_known(v_x_1542_, 2);
v_fst_1545_ = lean_ctor_get(v_head_1543_, 0);
lean_inc(v_fst_1545_);
v_snd_1546_ = lean_ctor_get(v_head_1543_, 1);
lean_inc(v_snd_1546_);
lean_dec(v_head_1543_);
v___x_1547_ = ((lean_object*)(lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__0));
v___x_1548_ = l_Nat_reprFast(v_snd_1546_);
v___x_1549_ = lean_string_append(v___x_1547_, v___x_1548_);
lean_dec_ref(v___x_1548_);
v___x_1550_ = ((lean_object*)(lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__1));
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
v___x_1552_ = lp_tzap_x2dlean_TzapLean_Gate_toString(v_fst_1545_);
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
lean_dec_ref(v___x_1552_);
v___x_1554_ = ((lean_object*)(lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0___closed__2));
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
v___x_1556_ = lean_string_append(v_x_1541_, v___x_1555_);
lean_dec_ref(v___x_1555_);
v_x_1541_ = v___x_1556_;
v_x_1542_ = v_tail_1544_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_toString(lean_object* v_c_1562_){
_start:
{
lean_object* v_numQubits_1563_; lean_object* v_gates_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_header_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v_body_1578_; lean_object* v___x_1579_; 
v_numQubits_1563_ = lean_ctor_get(v_c_1562_, 0);
lean_inc(v_numQubits_1563_);
v_gates_1564_ = lean_ctor_get(v_c_1562_, 2);
lean_inc(v_gates_1564_);
lean_dec_ref(v_c_1562_);
v___x_1565_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__0));
v___x_1566_ = l_Nat_reprFast(v_numQubits_1563_);
v___x_1567_ = lean_string_append(v___x_1565_, v___x_1566_);
lean_dec_ref(v___x_1566_);
v___x_1568_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__1));
v___x_1569_ = lean_string_append(v___x_1567_, v___x_1568_);
v___x_1570_ = l_List_lengthTR___redArg(v_gates_1564_);
v___x_1571_ = l_Nat_reprFast(v___x_1570_);
v___x_1572_ = lean_string_append(v___x_1569_, v___x_1571_);
lean_dec_ref(v___x_1571_);
v___x_1573_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__2));
v_header_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
v___x_1575_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_RawCircuit_toString___closed__3));
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = l_List_zipIdxTR___redArg(v_gates_1564_, v___x_1576_);
v_body_1578_ = lp_tzap_x2dlean_List_foldl___at___00TzapLean_RawCircuit_toString_spec__0(v___x_1575_, v___x_1577_);
v___x_1579_ = lean_string_append(v_header_1574_, v_body_1578_);
lean_dec_ref(v_body_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0(lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
if (lean_obj_tag(v_a_1583_) == 0)
{
return v_a_1584_;
}
else
{
lean_object* v_head_1585_; lean_object* v_tail_1586_; uint8_t v___x_1587_; 
v_head_1585_ = lean_ctor_get(v_a_1583_, 0);
v_tail_1586_ = lean_ctor_get(v_a_1583_, 1);
v___x_1587_ = lean_nat_dec_eq(v_head_1585_, v_a_1582_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = lean_unsigned_to_nat(1u);
v___x_1589_ = lean_nat_add(v_a_1584_, v___x_1588_);
lean_dec(v_a_1584_);
v_a_1583_ = v_tail_1586_;
v_a_1584_ = v___x_1589_;
goto _start;
}
else
{
return v_a_1584_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0___boxed(lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0(v_a_1591_, v_a_1592_, v_a_1593_);
lean_dec(v_a_1592_);
lean_dec(v_a_1591_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0(lean_object* v_a_1595_, lean_object* v_l_1596_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_unsigned_to_nat(0u);
v___x_1598_ = lp_tzap_x2dlean_List_findIdx_go___at___00List_idxOf___at___00TzapLean_remapGate_spec__0_spec__0(v_a_1595_, v_l_1596_, v___x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0___boxed(lean_object* v_a_1599_, lean_object* v_l_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0(v_a_1599_, v_l_1600_);
lean_dec(v_l_1600_);
lean_dec(v_a_1599_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate___lam__0(lean_object* v_qubits_1602_, lean_object* v_q_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = lp_tzap_x2dlean_List_idxOf___at___00TzapLean_remapGate_spec__0(v_q_1603_, v_qubits_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate___lam__0___boxed(lean_object* v_qubits_1605_, lean_object* v_q_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = lp_tzap_x2dlean_TzapLean_remapGate___lam__0(v_qubits_1605_, v_q_1606_);
lean_dec(v_q_1606_);
lean_dec(v_qubits_1605_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapGate(lean_object* v_g_1608_, lean_object* v_qubits_1609_){
_start:
{
lean_object* v___f_1610_; lean_object* v___x_1611_; 
v___f_1610_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_remapGate___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1610_, 0, v_qubits_1609_);
v___x_1611_ = lp_tzap_x2dlean_TzapLean_Gate_mapQubits(v___f_1610_, v_g_1608_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_remapSubcircuit_spec__0(lean_object* v_qubits_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_){
_start:
{
if (lean_obj_tag(v_a_1613_) == 0)
{
lean_object* v___x_1615_; 
lean_dec(v_qubits_1612_);
v___x_1615_ = l_List_reverse___redArg(v_a_1614_);
return v___x_1615_;
}
else
{
lean_object* v_head_1616_; lean_object* v_tail_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1626_; 
v_head_1616_ = lean_ctor_get(v_a_1613_, 0);
v_tail_1617_ = lean_ctor_get(v_a_1613_, 1);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_a_1613_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1619_ = v_a_1613_;
v_isShared_1620_ = v_isSharedCheck_1626_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_tail_1617_);
lean_inc(v_head_1616_);
lean_dec(v_a_1613_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1626_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1621_; lean_object* v___x_1623_; 
lean_inc(v_qubits_1612_);
v___x_1621_ = lp_tzap_x2dlean_TzapLean_remapGate(v_head_1616_, v_qubits_1612_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 1, v_a_1614_);
lean_ctor_set(v___x_1619_, 0, v___x_1621_);
v___x_1623_ = v___x_1619_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v_a_1614_);
v___x_1623_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
v_a_1613_ = v_tail_1617_;
v_a_1614_ = v___x_1623_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_remapSubcircuit(lean_object* v_gs_1627_, lean_object* v_qubits_1628_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1629_ = l_List_lengthTR___redArg(v_qubits_1628_);
v___x_1630_ = lean_unsigned_to_nat(0u);
v___x_1631_ = lean_box(0);
v___x_1632_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_remapSubcircuit_spec__0(v_qubits_1628_, v_gs_1627_, v___x_1631_);
v___x_1633_ = lp_tzap_x2dlean_TzapLean_RawCircuit_ofGates(v___x_1629_, v___x_1630_, v___x_1632_);
return v___x_1633_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Rat_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_Pi(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_Circuit(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Rat_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_Pi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
