// Lean compiler output
// Module: TzapLean.Optimize
// Imports: public import Init public meta import Init public import TzapLean.SuperOptProof public import TzapLean.PhaseFoldRand public import TzapLean.Qasm public import TzapLean.TableCache public import TzapLean.Pipeline
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_CancelGates;
lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_CnotMin;
lean_object* lp_tzap_x2dlean_TzapLean_SuperOpt(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* l_IO_eprintln___at___00Lean_Elab_Command_elabDumpAsyncEnvState_spec__0(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lp_tzap_x2dlean_TzapLean_TableCache_loadOrBuild(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_WidthTable_size(lean_object*);
lean_object* l_IO_lazyPure___redArg(lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedSynthTable_default;
lean_object* lp_tzap_x2dlean_TzapLean_TableCache_isCached(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "gates"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__3_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__6_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "twoQubit"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__10_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__10_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__11_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "depth"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__13_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__13_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__14_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__15 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__15_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__15_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__16 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__16_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rz"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__18 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__18_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__18_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__19 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__19_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__21 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__21_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__21_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprMetrics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedMetrics = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Metrics_of___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Metrics_of___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Metrics_of___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Metrics_of___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Metrics_of___closed__3_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Level.O1"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Level.O2"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TzapLean.Level.O3"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__5_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprLevel___closed__0_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Level_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqLevel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqLevel___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instInhabitedLevel_default;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instInhabitedLevel;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "TzapLean.PassName.CancelGates"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "TzapLean.PassName.CnotMin"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "TzapLean.PassName.SuperOpt"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__5_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "TzapLean.PassName.PhaseFoldRand"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__6_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__6_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__7_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprPassName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprPassName_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprPassName___closed__0_value;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_PassName_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqPassName(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqPassName___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instInhabitedPassName_default;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instInhabitedPassName;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CancelGates"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Cancel adjacent self-inverse gate pairs and reduce Hadamards"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__0_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CnotMin"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__4_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Re-synthesize CNOT-dihedral blocks to cut CNOT count"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__6_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__4_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__6_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__7_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SuperOpt"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__8_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Peephole superoptimization against the exact synthesis table"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__9_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__9_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__10_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__8_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__10_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__11_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PhaseFoldRand"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__12 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__12_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Merge rotations on the same parity (randomized 128-bit tags)"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__13_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__13_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__14_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__12_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__14_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__15 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__15_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__16 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__16_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__11_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__16_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__17 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__17_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__7_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__17_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__18 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__18_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_PassName_all___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__3_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__18_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all___closed__19 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__19_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_PassName_all = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_all___closed__19_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_parse(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_parse___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_PassName_allNames_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__0_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_allNames;
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_PassName_verified(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_verified___boxed(lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "qubits"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__2_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__3_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "windowGates"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__5_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__6_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tableEntries"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__9_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedSuperOptBounds_default___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg(lean_object*);
static const lean_string_object lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__0 = (const lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__1 = (const lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__2 = (const lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__3 = (const lean_object*)&lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__2_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "passes"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__5_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fixpoint"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__6_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__6_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__7_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "superopt"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__8 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__8_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__8_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__9 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__9_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seed"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__10 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__10_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__10_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__11 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__11_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verbose"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__13 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__13_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__13_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__14 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__14_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprOptions_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprOptions___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedOptions = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedOptions_default___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_bounds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(200000) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_bounds___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_bounds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Level_bounds___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_bounds___closed__1_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_resolveBounds(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_tagBits;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__2_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__3_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__3_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__4_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_executableStep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_executableStep___closed__0;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_executableStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_executableStep___closed__1;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_executableStep___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_executableStep___closed__2;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_executableStep(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_executableStep___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_Level_maxRounds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_Level_maxRounds___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_Level_maxRounds___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_maxRounds(uint8_t);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_maxRounds___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_fmtNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_fmtNum___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_fmtNum___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtNum(lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_fmtSecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_fmtSecs___closed__0_value;
static const lean_array_object lp_tzap_x2dlean_TzapLean_fmtSecs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_fmtSecs___closed__1_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs___boxed(lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_fmtPct___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "0.0"};
static const lean_object* lp_tzap_x2dlean_TzapLean_fmtPct___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_fmtPct___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtPct(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtPct___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_force(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_force___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_roundFuel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_roundFuel___boxed(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "baseline"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__2_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__2_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__4_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__4_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_instReprReport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_instReprReport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instReprReport = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instReprReport___closed__0_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_instInhabitedReport_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedMetrics_default___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedReport_default___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedReport_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedReport_default = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedReport_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedReport = (const lean_object*)&lp_tzap_x2dlean_TzapLean_instInhabitedReport_default___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_runConfiguredChecked_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfiguredChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfiguredChecked___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfigured(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfigured___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " superoptimizer table ("};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__1_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " unitaries) in "};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__2_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__3 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__3_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__4 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__4_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Built"};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__5 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__5_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Loaded"};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__6 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__6_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_optimize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 71, .m_data = "  🔧 Building superoptimizer table (one-time — cached for future use)..."};
static const lean_object* lp_tzap_x2dlean_TzapLean_optimize___closed__7 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_optimize___closed__7_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(9u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(12u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(5u);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(6u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__0));
v___x_39_ = lean_string_length(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__22);
v___x_41_ = lean_nat_to_int(v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg(lean_object* v_x_46_){
_start:
{
lean_object* v_gates_47_; lean_object* v_twoQubit_48_; lean_object* v_depth_49_; lean_object* v_t_50_; lean_object* v_rz_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_gates_47_ = lean_ctor_get(v_x_46_, 0);
lean_inc(v_gates_47_);
v_twoQubit_48_ = lean_ctor_get(v_x_46_, 1);
lean_inc(v_twoQubit_48_);
v_depth_49_ = lean_ctor_get(v_x_46_, 2);
lean_inc(v_depth_49_);
v_t_50_ = lean_ctor_get(v_x_46_, 3);
lean_inc(v_t_50_);
v_rz_51_ = lean_ctor_get(v_x_46_, 4);
lean_inc(v_rz_51_);
lean_dec_ref(v_x_46_);
v___x_52_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5));
v___x_53_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__6));
v___x_54_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7);
v___x_55_ = l_Nat_reprFast(v_gates_47_);
v___x_56_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
v___x_57_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_54_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = 0;
v___x_59_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*1, v___x_58_);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_53_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_box(1);
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__11));
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_52_);
v___x_68_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12);
v___x_69_ = l_Nat_reprFast(v_twoQubit_48_);
v___x_70_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
v___x_71_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_68_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*1, v___x_58_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_67_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_61_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_63_);
v___x_76_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__14));
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_52_);
v___x_79_ = l_Nat_reprFast(v_depth_49_);
v___x_80_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_54_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_58_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_78_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_61_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_63_);
v___x_86_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__16));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_52_);
v___x_89_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__17);
v___x_90_ = l_Nat_reprFast(v_t_50_);
v___x_91_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_89_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_58_);
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_88_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_61_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_63_);
v___x_97_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__19));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_52_);
v___x_100_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__20);
v___x_101_ = l_Nat_reprFast(v_rz_51_);
v___x_102_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
v___x_103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_100_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set_uint8(v___x_104_, sizeof(void*)*1, v___x_58_);
v___x_105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_99_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23);
v___x_107_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24));
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_105_);
v___x_109_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25));
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_106_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_58_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr(lean_object* v_x_113_, lean_object* v_prec_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg(v_x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___boxed(lean_object* v_x_116_, lean_object* v_prec_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_tzap_x2dlean_TzapLean_instReprMetrics_repr(v_x_116_, v_prec_117_);
lean_dec(v_prec_117_);
return v_res_118_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
lean_object* v_gates_127_; lean_object* v_twoQubit_128_; lean_object* v_depth_129_; lean_object* v_t_130_; lean_object* v_rz_131_; lean_object* v_gates_132_; lean_object* v_twoQubit_133_; lean_object* v_depth_134_; lean_object* v_t_135_; lean_object* v_rz_136_; uint8_t v___x_137_; 
v_gates_127_ = lean_ctor_get(v_x_125_, 0);
v_twoQubit_128_ = lean_ctor_get(v_x_125_, 1);
v_depth_129_ = lean_ctor_get(v_x_125_, 2);
v_t_130_ = lean_ctor_get(v_x_125_, 3);
v_rz_131_ = lean_ctor_get(v_x_125_, 4);
v_gates_132_ = lean_ctor_get(v_x_126_, 0);
v_twoQubit_133_ = lean_ctor_get(v_x_126_, 1);
v_depth_134_ = lean_ctor_get(v_x_126_, 2);
v_t_135_ = lean_ctor_get(v_x_126_, 3);
v_rz_136_ = lean_ctor_get(v_x_126_, 4);
v___x_137_ = lean_nat_dec_eq(v_gates_127_, v_gates_132_);
if (v___x_137_ == 0)
{
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
v___x_138_ = lean_nat_dec_eq(v_twoQubit_128_, v_twoQubit_133_);
if (v___x_138_ == 0)
{
return v___x_138_;
}
else
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_eq(v_depth_129_, v_depth_134_);
if (v___x_139_ == 0)
{
return v___x_139_;
}
else
{
uint8_t v___x_140_; 
v___x_140_ = lean_nat_dec_eq(v_t_130_, v_t_135_);
if (v___x_140_ == 0)
{
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = lean_nat_dec_eq(v_rz_131_, v_rz_136_);
return v___x_141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq___boxed(lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
uint8_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq(v_x_142_, v_x_143_);
lean_dec_ref(v_x_143_);
lean_dec_ref(v_x_142_);
v_r_145_ = lean_box(v_res_144_);
return v_r_145_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v___x_148_; 
v___x_148_ = lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics_decEq(v_x_146_, v_x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics___boxed(lean_object* v_x_149_, lean_object* v_x_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = lp_tzap_x2dlean_TzapLean_instDecidableEqMetrics(v_x_149_, v_x_150_);
lean_dec_ref(v_x_150_);
lean_dec_ref(v_x_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg(lean_object* v___x_153_, lean_object* v_as_x27_154_, lean_object* v_b_155_){
_start:
{
if (lean_obj_tag(v_as_x27_154_) == 0)
{
lean_dec(v___x_153_);
return v_b_155_;
}
else
{
lean_object* v_head_156_; lean_object* v_tail_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_head_156_ = lean_ctor_get(v_as_x27_154_, 0);
v_tail_157_ = lean_ctor_get(v_as_x27_154_, 1);
v___x_158_ = lean_array_get_size(v_b_155_);
v___x_159_ = lean_nat_dec_lt(v_head_156_, v___x_158_);
if (v___x_159_ == 0)
{
v_as_x27_154_ = v_tail_157_;
goto _start;
}
else
{
lean_object* v___x_161_; 
lean_inc(v___x_153_);
v___x_161_ = lean_array_set(v_b_155_, v_head_156_, v___x_153_);
v_as_x27_154_ = v_tail_157_;
v_b_155_ = v___x_161_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg___boxed(lean_object* v___x_163_, lean_object* v_as_x27_164_, lean_object* v_b_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg(v___x_163_, v_as_x27_164_, v_b_165_);
lean_dec(v_as_x27_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg(lean_object* v___x_167_, lean_object* v_as_x27_168_, lean_object* v_b_169_){
_start:
{
if (lean_obj_tag(v_as_x27_168_) == 0)
{
return v_b_169_;
}
else
{
lean_object* v_head_170_; lean_object* v_tail_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_head_170_ = lean_ctor_get(v_as_x27_168_, 0);
v_tail_171_ = lean_ctor_get(v_as_x27_168_, 1);
v___x_172_ = lean_array_get_size(v___x_167_);
v___x_173_ = lean_nat_dec_lt(v_head_170_, v___x_172_);
if (v___x_173_ == 0)
{
v_as_x27_168_ = v_tail_171_;
goto _start;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_array_get_borrowed(v___x_176_, v___x_167_, v_head_170_);
v___x_178_ = lean_nat_add(v___x_177_, v___x_175_);
v___x_179_ = lean_nat_dec_le(v_b_169_, v___x_178_);
if (v___x_179_ == 0)
{
lean_dec(v___x_178_);
v_as_x27_168_ = v_tail_171_;
goto _start;
}
else
{
lean_dec(v_b_169_);
v_as_x27_168_ = v_tail_171_;
v_b_169_ = v___x_178_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg___boxed(lean_object* v___x_182_, lean_object* v_as_x27_183_, lean_object* v_b_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg(v___x_182_, v_as_x27_183_, v_b_184_);
lean_dec(v_as_x27_183_);
lean_dec_ref(v___x_182_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg(lean_object* v_as_x27_186_, lean_object* v_b_187_){
_start:
{
if (lean_obj_tag(v_as_x27_186_) == 0)
{
return v_b_187_;
}
else
{
lean_object* v_snd_188_; lean_object* v_snd_189_; lean_object* v_snd_190_; lean_object* v_snd_191_; lean_object* v_head_192_; lean_object* v_tail_193_; lean_object* v_fst_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_259_; 
v_snd_188_ = lean_ctor_get(v_b_187_, 1);
lean_inc(v_snd_188_);
v_snd_189_ = lean_ctor_get(v_snd_188_, 1);
lean_inc(v_snd_189_);
v_snd_190_ = lean_ctor_get(v_snd_189_, 1);
lean_inc(v_snd_190_);
v_snd_191_ = lean_ctor_get(v_snd_190_, 1);
lean_inc(v_snd_191_);
v_head_192_ = lean_ctor_get(v_as_x27_186_, 0);
v_tail_193_ = lean_ctor_get(v_as_x27_186_, 1);
v_fst_194_ = lean_ctor_get(v_b_187_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_b_187_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; 
v_unused_260_ = lean_ctor_get(v_b_187_, 1);
lean_dec(v_unused_260_);
v___x_196_ = v_b_187_;
v_isShared_197_ = v_isSharedCheck_259_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_fst_194_);
lean_dec(v_b_187_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_259_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v_fst_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_257_; 
v_fst_198_ = lean_ctor_get(v_snd_188_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v_snd_188_);
if (v_isSharedCheck_257_ == 0)
{
lean_object* v_unused_258_; 
v_unused_258_ = lean_ctor_get(v_snd_188_, 1);
lean_dec(v_unused_258_);
v___x_200_ = v_snd_188_;
v_isShared_201_ = v_isSharedCheck_257_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_fst_198_);
lean_dec(v_snd_188_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_257_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v_fst_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_255_; 
v_fst_202_ = lean_ctor_get(v_snd_189_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_snd_189_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v_snd_189_, 1);
lean_dec(v_unused_256_);
v___x_204_ = v_snd_189_;
v_isShared_205_ = v_isSharedCheck_255_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_fst_202_);
lean_dec(v_snd_189_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_255_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v_fst_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_253_; 
v_fst_206_ = lean_ctor_get(v_snd_190_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v_snd_190_);
if (v_isSharedCheck_253_ == 0)
{
lean_object* v_unused_254_; 
v_unused_254_ = lean_ctor_get(v_snd_190_, 1);
lean_dec(v_unused_254_);
v___x_208_ = v_snd_190_;
v_isShared_209_ = v_isSharedCheck_253_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_fst_206_);
lean_dec(v_snd_190_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_253_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_fst_210_; lean_object* v_snd_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_252_; 
v_fst_210_ = lean_ctor_get(v_snd_191_, 0);
v_snd_211_ = lean_ctor_get(v_snd_191_, 1);
v_isSharedCheck_252_ = !lean_is_exclusive(v_snd_191_);
if (v_isSharedCheck_252_ == 0)
{
v___x_213_ = v_snd_191_;
v_isShared_214_ = v_isSharedCheck_252_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_snd_211_);
lean_inc(v_fst_210_);
lean_dec(v_snd_191_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_252_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v_twoQubit_240_; lean_object* v_t_241_; lean_object* v_rz_242_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_fst_198_, v___x_215_);
lean_dec(v_fst_198_);
switch(lean_obj_tag(v_head_192_))
{
case 8:
{
goto v___jp_247_;
}
case 9:
{
goto v___jp_247_;
}
case 5:
{
goto v___jp_249_;
}
case 6:
{
goto v___jp_249_;
}
case 7:
{
lean_object* v___x_251_; 
v___x_251_ = lean_nat_add(v_snd_211_, v___x_215_);
lean_dec(v_snd_211_);
v_twoQubit_240_ = v_fst_202_;
v_t_241_ = v_fst_210_;
v_rz_242_ = v___x_251_;
goto v___jp_239_;
}
default: 
{
v_twoQubit_240_ = v_fst_202_;
v_t_241_ = v_fst_210_;
v_rz_242_ = v_snd_211_;
goto v___jp_239_;
}
}
v___jp_217_:
{
lean_object* v___x_224_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___y_219_);
lean_ctor_set(v___x_213_, 0, v___y_221_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___y_221_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___y_219_);
v___x_224_ = v_reuseFailAlloc_238_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
lean_object* v___x_226_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_224_);
lean_ctor_set(v___x_208_, 0, v___y_222_);
v___x_226_ = v___x_208_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___y_222_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_224_);
v___x_226_ = v_reuseFailAlloc_237_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_228_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 1, v___x_226_);
lean_ctor_set(v___x_204_, 0, v___y_218_);
v___x_228_ = v___x_204_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___y_218_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v___x_226_);
v___x_228_ = v_reuseFailAlloc_236_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_230_; 
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 1, v___x_228_);
lean_ctor_set(v___x_200_, 0, v___x_216_);
v___x_230_ = v___x_200_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_228_);
v___x_230_ = v_reuseFailAlloc_235_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_232_; 
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 1, v___x_230_);
lean_ctor_set(v___x_196_, 0, v___y_220_);
v___x_232_ = v___x_196_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___y_220_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_230_);
v___x_232_ = v_reuseFailAlloc_234_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
v_as_x27_186_ = v_tail_193_;
v_b_187_ = v___x_232_;
goto _start;
}
}
}
}
}
}
v___jp_239_:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
lean_inc(v_head_192_);
v___x_243_ = lp_tzap_x2dlean_TzapLean_Gate_qubitsOf(v_head_192_);
v___x_244_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg(v_fst_194_, v___x_243_, v___x_215_);
lean_inc(v___x_244_);
v___x_245_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg(v___x_244_, v___x_243_, v_fst_194_);
lean_dec(v___x_243_);
v___x_246_ = lean_nat_dec_le(v_fst_206_, v___x_244_);
if (v___x_246_ == 0)
{
lean_dec(v___x_244_);
v___y_218_ = v_twoQubit_240_;
v___y_219_ = v_rz_242_;
v___y_220_ = v___x_245_;
v___y_221_ = v_t_241_;
v___y_222_ = v_fst_206_;
goto v___jp_217_;
}
else
{
lean_dec(v_fst_206_);
v___y_218_ = v_twoQubit_240_;
v___y_219_ = v_rz_242_;
v___y_220_ = v___x_245_;
v___y_221_ = v_t_241_;
v___y_222_ = v___x_244_;
goto v___jp_217_;
}
}
v___jp_247_:
{
lean_object* v___x_248_; 
v___x_248_ = lean_nat_add(v_fst_202_, v___x_215_);
lean_dec(v_fst_202_);
v_twoQubit_240_ = v___x_248_;
v_t_241_ = v_fst_210_;
v_rz_242_ = v_snd_211_;
goto v___jp_239_;
}
v___jp_249_:
{
lean_object* v___x_250_; 
v___x_250_ = lean_nat_add(v_fst_210_, v___x_215_);
lean_dec(v_fst_210_);
v_twoQubit_240_ = v_fst_202_;
v_t_241_ = v___x_250_;
v_rz_242_ = v_snd_211_;
goto v___jp_239_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg___boxed(lean_object* v_as_x27_261_, lean_object* v_b_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg(v_as_x27_261_, v_b_262_);
lean_dec(v_as_x27_261_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Metrics_of(lean_object* v_c_275_){
_start:
{
lean_object* v_numQubits_276_; lean_object* v_gates_277_; lean_object* v_gates_278_; lean_object* v_next_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_snd_283_; lean_object* v_snd_284_; lean_object* v_snd_285_; lean_object* v_snd_286_; lean_object* v_fst_287_; lean_object* v_fst_288_; lean_object* v_fst_289_; lean_object* v_fst_290_; lean_object* v_snd_291_; lean_object* v___x_292_; 
v_numQubits_276_ = lean_ctor_get(v_c_275_, 0);
lean_inc(v_numQubits_276_);
v_gates_277_ = lean_ctor_get(v_c_275_, 2);
lean_inc(v_gates_277_);
lean_dec_ref(v_c_275_);
v_gates_278_ = lean_unsigned_to_nat(0u);
v_next_279_ = lean_mk_array(v_numQubits_276_, v_gates_278_);
v___x_280_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Metrics_of___closed__3));
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v_next_279_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg(v_gates_277_, v___x_281_);
lean_dec(v_gates_277_);
v_snd_283_ = lean_ctor_get(v___x_282_, 1);
lean_inc(v_snd_283_);
lean_dec_ref(v___x_282_);
v_snd_284_ = lean_ctor_get(v_snd_283_, 1);
lean_inc(v_snd_284_);
v_snd_285_ = lean_ctor_get(v_snd_284_, 1);
lean_inc(v_snd_285_);
v_snd_286_ = lean_ctor_get(v_snd_285_, 1);
lean_inc(v_snd_286_);
v_fst_287_ = lean_ctor_get(v_snd_283_, 0);
lean_inc(v_fst_287_);
lean_dec(v_snd_283_);
v_fst_288_ = lean_ctor_get(v_snd_284_, 0);
lean_inc(v_fst_288_);
lean_dec(v_snd_284_);
v_fst_289_ = lean_ctor_get(v_snd_285_, 0);
lean_inc(v_fst_289_);
lean_dec(v_snd_285_);
v_fst_290_ = lean_ctor_get(v_snd_286_, 0);
lean_inc(v_fst_290_);
v_snd_291_ = lean_ctor_get(v_snd_286_, 1);
lean_inc(v_snd_291_);
lean_dec(v_snd_286_);
v___x_292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_292_, 0, v_fst_287_);
lean_ctor_set(v___x_292_, 1, v_fst_288_);
lean_ctor_set(v___x_292_, 2, v_fst_289_);
lean_ctor_set(v___x_292_, 3, v_fst_290_);
lean_ctor_set(v___x_292_, 4, v_snd_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0(lean_object* v___x_293_, lean_object* v_as_294_, lean_object* v_as_x27_295_, lean_object* v_b_296_, lean_object* v_a_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___redArg(v___x_293_, v_as_x27_295_, v_b_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0___boxed(lean_object* v___x_299_, lean_object* v_as_300_, lean_object* v_as_x27_301_, lean_object* v_b_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__0(v___x_299_, v_as_300_, v_as_x27_301_, v_b_302_, v_a_303_);
lean_dec(v_as_x27_301_);
lean_dec(v_as_300_);
lean_dec_ref(v___x_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1(lean_object* v___x_305_, lean_object* v_as_306_, lean_object* v_as_x27_307_, lean_object* v_b_308_, lean_object* v_a_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___redArg(v___x_305_, v_as_x27_307_, v_b_308_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1___boxed(lean_object* v___x_311_, lean_object* v_as_312_, lean_object* v_as_x27_313_, lean_object* v_b_314_, lean_object* v_a_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__1(v___x_311_, v_as_312_, v_as_x27_313_, v_b_314_, v_a_315_);
lean_dec(v_as_x27_313_);
lean_dec(v_as_312_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2(lean_object* v_as_317_, lean_object* v_as_x27_318_, lean_object* v_b_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___redArg(v_as_x27_318_, v_b_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2___boxed(lean_object* v_as_322_, lean_object* v_as_x27_323_, lean_object* v_b_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = lp_tzap_x2dlean_List_forIn_x27_loop___at___00TzapLean_Metrics_of_spec__2(v_as_322_, v_as_x27_323_, v_b_324_, v_a_325_);
lean_dec(v_as_x27_323_);
lean_dec(v_as_322_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorIdx(uint8_t v_x_327_){
_start:
{
switch(v_x_327_)
{
case 0:
{
lean_object* v___x_328_; 
v___x_328_ = lean_unsigned_to_nat(0u);
return v___x_328_;
}
case 1:
{
lean_object* v___x_329_; 
v___x_329_ = lean_unsigned_to_nat(1u);
return v___x_329_;
}
default: 
{
lean_object* v___x_330_; 
v___x_330_ = lean_unsigned_to_nat(2u);
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorIdx___boxed(lean_object* v_x_331_){
_start:
{
uint8_t v_x_boxed_332_; lean_object* v_res_333_; 
v_x_boxed_332_ = lean_unbox(v_x_331_);
v_res_333_ = lp_tzap_x2dlean_TzapLean_Level_ctorIdx(v_x_boxed_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_toCtorIdx(uint8_t v_x_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lp_tzap_x2dlean_TzapLean_Level_ctorIdx(v_x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_toCtorIdx___boxed(lean_object* v_x_336_){
_start:
{
uint8_t v_x_4__boxed_337_; lean_object* v_res_338_; 
v_x_4__boxed_337_ = lean_unbox(v_x_336_);
v_res_338_ = lp_tzap_x2dlean_TzapLean_Level_toCtorIdx(v_x_4__boxed_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___redArg(lean_object* v_k_339_){
_start:
{
lean_inc(v_k_339_);
return v_k_339_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___redArg___boxed(lean_object* v_k_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = lp_tzap_x2dlean_TzapLean_Level_ctorElim___redArg(v_k_340_);
lean_dec(v_k_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim(lean_object* v_motive_342_, lean_object* v_ctorIdx_343_, uint8_t v_t_344_, lean_object* v_h_345_, lean_object* v_k_346_){
_start:
{
lean_inc(v_k_346_);
return v_k_346_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ctorElim___boxed(lean_object* v_motive_347_, lean_object* v_ctorIdx_348_, lean_object* v_t_349_, lean_object* v_h_350_, lean_object* v_k_351_){
_start:
{
uint8_t v_t_boxed_352_; lean_object* v_res_353_; 
v_t_boxed_352_ = lean_unbox(v_t_349_);
v_res_353_ = lp_tzap_x2dlean_TzapLean_Level_ctorElim(v_motive_347_, v_ctorIdx_348_, v_t_boxed_352_, v_h_350_, v_k_351_);
lean_dec(v_k_351_);
lean_dec(v_ctorIdx_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___redArg(lean_object* v_O1_354_){
_start:
{
lean_inc(v_O1_354_);
return v_O1_354_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___redArg___boxed(lean_object* v_O1_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = lp_tzap_x2dlean_TzapLean_Level_O1_elim___redArg(v_O1_355_);
lean_dec(v_O1_355_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim(lean_object* v_motive_357_, uint8_t v_t_358_, lean_object* v_h_359_, lean_object* v_O1_360_){
_start:
{
lean_inc(v_O1_360_);
return v_O1_360_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O1_elim___boxed(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_O1_364_){
_start:
{
uint8_t v_t_boxed_365_; lean_object* v_res_366_; 
v_t_boxed_365_ = lean_unbox(v_t_362_);
v_res_366_ = lp_tzap_x2dlean_TzapLean_Level_O1_elim(v_motive_361_, v_t_boxed_365_, v_h_363_, v_O1_364_);
lean_dec(v_O1_364_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___redArg(lean_object* v_O2_367_){
_start:
{
lean_inc(v_O2_367_);
return v_O2_367_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___redArg___boxed(lean_object* v_O2_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = lp_tzap_x2dlean_TzapLean_Level_O2_elim___redArg(v_O2_368_);
lean_dec(v_O2_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim(lean_object* v_motive_370_, uint8_t v_t_371_, lean_object* v_h_372_, lean_object* v_O2_373_){
_start:
{
lean_inc(v_O2_373_);
return v_O2_373_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O2_elim___boxed(lean_object* v_motive_374_, lean_object* v_t_375_, lean_object* v_h_376_, lean_object* v_O2_377_){
_start:
{
uint8_t v_t_boxed_378_; lean_object* v_res_379_; 
v_t_boxed_378_ = lean_unbox(v_t_375_);
v_res_379_ = lp_tzap_x2dlean_TzapLean_Level_O2_elim(v_motive_374_, v_t_boxed_378_, v_h_376_, v_O2_377_);
lean_dec(v_O2_377_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___redArg(lean_object* v_O3_380_){
_start:
{
lean_inc(v_O3_380_);
return v_O3_380_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___redArg___boxed(lean_object* v_O3_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = lp_tzap_x2dlean_TzapLean_Level_O3_elim___redArg(v_O3_381_);
lean_dec(v_O3_381_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim(lean_object* v_motive_383_, uint8_t v_t_384_, lean_object* v_h_385_, lean_object* v_O3_386_){
_start:
{
lean_inc(v_O3_386_);
return v_O3_386_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_O3_elim___boxed(lean_object* v_motive_387_, lean_object* v_t_388_, lean_object* v_h_389_, lean_object* v_O3_390_){
_start:
{
uint8_t v_t_boxed_391_; lean_object* v_res_392_; 
v_t_boxed_391_ = lean_unbox(v_t_388_);
v_res_392_ = lp_tzap_x2dlean_TzapLean_Level_O3_elim(v_motive_387_, v_t_boxed_391_, v_h_389_, v_O3_390_);
lean_dec(v_O3_390_);
return v_res_392_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(2u);
v___x_403_ = lean_nat_to_int(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(1u);
v___x_405_ = lean_nat_to_int(v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr(uint8_t v_x_406_, lean_object* v_prec_407_){
_start:
{
lean_object* v___y_409_; lean_object* v___y_416_; lean_object* v___y_423_; 
switch(v_x_406_)
{
case 0:
{
lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_429_ = lean_unsigned_to_nat(1024u);
v___x_430_ = lean_nat_dec_le(v___x_429_, v_prec_407_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
v___x_431_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_409_ = v___x_431_;
goto v___jp_408_;
}
else
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_409_ = v___x_432_;
goto v___jp_408_;
}
}
case 1:
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = lean_unsigned_to_nat(1024u);
v___x_434_ = lean_nat_dec_le(v___x_433_, v_prec_407_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
v___x_435_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_416_ = v___x_435_;
goto v___jp_415_;
}
else
{
lean_object* v___x_436_; 
v___x_436_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_416_ = v___x_436_;
goto v___jp_415_;
}
}
default: 
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_unsigned_to_nat(1024u);
v___x_438_ = lean_nat_dec_le(v___x_437_, v_prec_407_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_423_ = v___x_439_;
goto v___jp_422_;
}
else
{
lean_object* v___x_440_; 
v___x_440_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_423_ = v___x_440_;
goto v___jp_422_;
}
}
}
v___jp_408_:
{
lean_object* v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_410_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__1));
lean_inc(v___y_409_);
v___x_411_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_411_, 0, v___y_409_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = 0;
v___x_413_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*1, v___x_412_);
v___x_414_ = l_Repr_addAppParen(v___x_413_, v_prec_407_);
return v___x_414_;
}
v___jp_415_:
{
lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_417_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__3));
lean_inc(v___y_416_);
v___x_418_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_418_, 0, v___y_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = 0;
v___x_420_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*1, v___x_419_);
v___x_421_ = l_Repr_addAppParen(v___x_420_, v_prec_407_);
return v___x_421_;
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_424_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__5));
lean_inc(v___y_423_);
v___x_425_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_425_, 0, v___y_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = 0;
v___x_427_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*1, v___x_426_);
v___x_428_ = l_Repr_addAppParen(v___x_427_, v_prec_407_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprLevel_repr___boxed(lean_object* v_x_441_, lean_object* v_prec_442_){
_start:
{
uint8_t v_x_177__boxed_443_; lean_object* v_res_444_; 
v_x_177__boxed_443_ = lean_unbox(v_x_441_);
v_res_444_ = lp_tzap_x2dlean_TzapLean_instReprLevel_repr(v_x_177__boxed_443_, v_prec_442_);
lean_dec(v_prec_442_);
return v_res_444_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Level_ofNat(lean_object* v_n_447_){
_start:
{
lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = lean_nat_dec_le(v_n_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = lean_nat_dec_le(v_n_447_, v___x_450_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 2;
return v___x_452_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = 1;
return v___x_453_;
}
}
else
{
uint8_t v___x_454_; 
v___x_454_ = 0;
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_ofNat___boxed(lean_object* v_n_455_){
_start:
{
uint8_t v_res_456_; lean_object* v_r_457_; 
v_res_456_ = lp_tzap_x2dlean_TzapLean_Level_ofNat(v_n_455_);
lean_dec(v_n_455_);
v_r_457_ = lean_box(v_res_456_);
return v_r_457_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqLevel(uint8_t v_x_458_, uint8_t v_y_459_){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = lp_tzap_x2dlean_TzapLean_Level_ctorIdx(v_x_458_);
v___x_461_ = lp_tzap_x2dlean_TzapLean_Level_ctorIdx(v_y_459_);
v___x_462_ = lean_nat_dec_eq(v___x_460_, v___x_461_);
lean_dec(v___x_461_);
lean_dec(v___x_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqLevel___boxed(lean_object* v_x_463_, lean_object* v_y_464_){
_start:
{
uint8_t v_x_13__boxed_465_; uint8_t v_y_14__boxed_466_; uint8_t v_res_467_; lean_object* v_r_468_; 
v_x_13__boxed_465_ = lean_unbox(v_x_463_);
v_y_14__boxed_466_ = lean_unbox(v_y_464_);
v_res_467_ = lp_tzap_x2dlean_TzapLean_instDecidableEqLevel(v_x_13__boxed_465_, v_y_14__boxed_466_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
static uint8_t _init_lp_tzap_x2dlean_TzapLean_instInhabitedLevel_default(void){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = 0;
return v___x_469_;
}
}
static uint8_t _init_lp_tzap_x2dlean_TzapLean_instInhabitedLevel(void){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = 0;
return v___x_470_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(uint8_t v_x_471_){
_start:
{
switch(v_x_471_)
{
case 0:
{
lean_object* v___x_472_; 
v___x_472_ = lean_unsigned_to_nat(0u);
return v___x_472_;
}
case 1:
{
lean_object* v___x_473_; 
v___x_473_ = lean_unsigned_to_nat(1u);
return v___x_473_;
}
case 2:
{
lean_object* v___x_474_; 
v___x_474_ = lean_unsigned_to_nat(2u);
return v___x_474_;
}
default: 
{
lean_object* v___x_475_; 
v___x_475_ = lean_unsigned_to_nat(3u);
return v___x_475_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorIdx___boxed(lean_object* v_x_476_){
_start:
{
uint8_t v_x_boxed_477_; lean_object* v_res_478_; 
v_x_boxed_477_ = lean_unbox(v_x_476_);
v_res_478_ = lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(v_x_boxed_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_toCtorIdx(uint8_t v_x_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(v_x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_toCtorIdx___boxed(lean_object* v_x_481_){
_start:
{
uint8_t v_x_4__boxed_482_; lean_object* v_res_483_; 
v_x_4__boxed_482_ = lean_unbox(v_x_481_);
v_res_483_ = lp_tzap_x2dlean_TzapLean_PassName_toCtorIdx(v_x_4__boxed_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___redArg(lean_object* v_k_484_){
_start:
{
lean_inc(v_k_484_);
return v_k_484_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___redArg___boxed(lean_object* v_k_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = lp_tzap_x2dlean_TzapLean_PassName_ctorElim___redArg(v_k_485_);
lean_dec(v_k_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim(lean_object* v_motive_487_, lean_object* v_ctorIdx_488_, uint8_t v_t_489_, lean_object* v_h_490_, lean_object* v_k_491_){
_start:
{
lean_inc(v_k_491_);
return v_k_491_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ctorElim___boxed(lean_object* v_motive_492_, lean_object* v_ctorIdx_493_, lean_object* v_t_494_, lean_object* v_h_495_, lean_object* v_k_496_){
_start:
{
uint8_t v_t_boxed_497_; lean_object* v_res_498_; 
v_t_boxed_497_ = lean_unbox(v_t_494_);
v_res_498_ = lp_tzap_x2dlean_TzapLean_PassName_ctorElim(v_motive_492_, v_ctorIdx_493_, v_t_boxed_497_, v_h_495_, v_k_496_);
lean_dec(v_k_496_);
lean_dec(v_ctorIdx_493_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___redArg(lean_object* v_CancelGates_499_){
_start:
{
lean_inc(v_CancelGates_499_);
return v_CancelGates_499_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___redArg___boxed(lean_object* v_CancelGates_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___redArg(v_CancelGates_500_);
lean_dec(v_CancelGates_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim(lean_object* v_motive_502_, uint8_t v_t_503_, lean_object* v_h_504_, lean_object* v_CancelGates_505_){
_start:
{
lean_inc(v_CancelGates_505_);
return v_CancelGates_505_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim___boxed(lean_object* v_motive_506_, lean_object* v_t_507_, lean_object* v_h_508_, lean_object* v_CancelGates_509_){
_start:
{
uint8_t v_t_boxed_510_; lean_object* v_res_511_; 
v_t_boxed_510_ = lean_unbox(v_t_507_);
v_res_511_ = lp_tzap_x2dlean_TzapLean_PassName_CancelGates_elim(v_motive_506_, v_t_boxed_510_, v_h_508_, v_CancelGates_509_);
lean_dec(v_CancelGates_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___redArg(lean_object* v_CnotMin_512_){
_start:
{
lean_inc(v_CnotMin_512_);
return v_CnotMin_512_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___redArg___boxed(lean_object* v_CnotMin_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___redArg(v_CnotMin_513_);
lean_dec(v_CnotMin_513_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim(lean_object* v_motive_515_, uint8_t v_t_516_, lean_object* v_h_517_, lean_object* v_CnotMin_518_){
_start:
{
lean_inc(v_CnotMin_518_);
return v_CnotMin_518_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim___boxed(lean_object* v_motive_519_, lean_object* v_t_520_, lean_object* v_h_521_, lean_object* v_CnotMin_522_){
_start:
{
uint8_t v_t_boxed_523_; lean_object* v_res_524_; 
v_t_boxed_523_ = lean_unbox(v_t_520_);
v_res_524_ = lp_tzap_x2dlean_TzapLean_PassName_CnotMin_elim(v_motive_519_, v_t_boxed_523_, v_h_521_, v_CnotMin_522_);
lean_dec(v_CnotMin_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___redArg(lean_object* v_SuperOpt_525_){
_start:
{
lean_inc(v_SuperOpt_525_);
return v_SuperOpt_525_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___redArg___boxed(lean_object* v_SuperOpt_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___redArg(v_SuperOpt_526_);
lean_dec(v_SuperOpt_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim(lean_object* v_motive_528_, uint8_t v_t_529_, lean_object* v_h_530_, lean_object* v_SuperOpt_531_){
_start:
{
lean_inc(v_SuperOpt_531_);
return v_SuperOpt_531_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim___boxed(lean_object* v_motive_532_, lean_object* v_t_533_, lean_object* v_h_534_, lean_object* v_SuperOpt_535_){
_start:
{
uint8_t v_t_boxed_536_; lean_object* v_res_537_; 
v_t_boxed_536_ = lean_unbox(v_t_533_);
v_res_537_ = lp_tzap_x2dlean_TzapLean_PassName_SuperOpt_elim(v_motive_532_, v_t_boxed_536_, v_h_534_, v_SuperOpt_535_);
lean_dec(v_SuperOpt_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___redArg(lean_object* v_PhaseFoldRand_538_){
_start:
{
lean_inc(v_PhaseFoldRand_538_);
return v_PhaseFoldRand_538_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___redArg___boxed(lean_object* v_PhaseFoldRand_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___redArg(v_PhaseFoldRand_539_);
lean_dec(v_PhaseFoldRand_539_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim(lean_object* v_motive_541_, uint8_t v_t_542_, lean_object* v_h_543_, lean_object* v_PhaseFoldRand_544_){
_start:
{
lean_inc(v_PhaseFoldRand_544_);
return v_PhaseFoldRand_544_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim___boxed(lean_object* v_motive_545_, lean_object* v_t_546_, lean_object* v_h_547_, lean_object* v_PhaseFoldRand_548_){
_start:
{
uint8_t v_t_boxed_549_; lean_object* v_res_550_; 
v_t_boxed_549_ = lean_unbox(v_t_546_);
v_res_550_ = lp_tzap_x2dlean_TzapLean_PassName_PhaseFoldRand_elim(v_motive_545_, v_t_boxed_549_, v_h_547_, v_PhaseFoldRand_548_);
lean_dec(v_PhaseFoldRand_548_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr(uint8_t v_x_563_, lean_object* v_prec_564_){
_start:
{
lean_object* v___y_566_; lean_object* v___y_573_; lean_object* v___y_580_; lean_object* v___y_587_; 
switch(v_x_563_)
{
case 0:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(1024u);
v___x_594_ = lean_nat_dec_le(v___x_593_, v_prec_564_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_566_ = v___x_595_;
goto v___jp_565_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_566_ = v___x_596_;
goto v___jp_565_;
}
}
case 1:
{
lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_597_ = lean_unsigned_to_nat(1024u);
v___x_598_ = lean_nat_dec_le(v___x_597_, v_prec_564_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_573_ = v___x_599_;
goto v___jp_572_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_573_ = v___x_600_;
goto v___jp_572_;
}
}
case 2:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = lean_unsigned_to_nat(1024u);
v___x_602_ = lean_nat_dec_le(v___x_601_, v_prec_564_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_580_ = v___x_603_;
goto v___jp_579_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_580_ = v___x_604_;
goto v___jp_579_;
}
}
default: 
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(1024u);
v___x_606_ = lean_nat_dec_le(v___x_605_, v_prec_564_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
v___x_607_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__6);
v___y_587_ = v___x_607_;
goto v___jp_586_;
}
else
{
lean_object* v___x_608_; 
v___x_608_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7, &lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprLevel_repr___closed__7);
v___y_587_ = v___x_608_;
goto v___jp_586_;
}
}
}
v___jp_565_:
{
lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_567_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__1));
lean_inc(v___y_566_);
v___x_568_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_568_, 0, v___y_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = 0;
v___x_570_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*1, v___x_569_);
v___x_571_ = l_Repr_addAppParen(v___x_570_, v_prec_564_);
return v___x_571_;
}
v___jp_572_:
{
lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_574_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__3));
lean_inc(v___y_573_);
v___x_575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_575_, 0, v___y_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = 0;
v___x_577_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set_uint8(v___x_577_, sizeof(void*)*1, v___x_576_);
v___x_578_ = l_Repr_addAppParen(v___x_577_, v_prec_564_);
return v___x_578_;
}
v___jp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_581_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__5));
lean_inc(v___y_580_);
v___x_582_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_582_, 0, v___y_580_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = 0;
v___x_584_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set_uint8(v___x_584_, sizeof(void*)*1, v___x_583_);
v___x_585_ = l_Repr_addAppParen(v___x_584_, v_prec_564_);
return v___x_585_;
}
v___jp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_588_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprPassName_repr___closed__7));
lean_inc(v___y_587_);
v___x_589_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_589_, 0, v___y_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = 0;
v___x_591_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set_uint8(v___x_591_, sizeof(void*)*1, v___x_590_);
v___x_592_ = l_Repr_addAppParen(v___x_591_, v_prec_564_);
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprPassName_repr___boxed(lean_object* v_x_609_, lean_object* v_prec_610_){
_start:
{
uint8_t v_x_229__boxed_611_; lean_object* v_res_612_; 
v_x_229__boxed_611_ = lean_unbox(v_x_609_);
v_res_612_ = lp_tzap_x2dlean_TzapLean_instReprPassName_repr(v_x_229__boxed_611_, v_prec_610_);
lean_dec(v_prec_610_);
return v_res_612_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_PassName_ofNat(lean_object* v_n_615_){
_start:
{
lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(1u);
v___x_617_ = lean_nat_dec_le(v_n_615_, v___x_616_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_618_ = lean_unsigned_to_nat(2u);
v___x_619_ = lean_nat_dec_le(v_n_615_, v___x_618_);
if (v___x_619_ == 0)
{
uint8_t v___x_620_; 
v___x_620_ = 3;
return v___x_620_;
}
else
{
uint8_t v___x_621_; 
v___x_621_ = 2;
return v___x_621_;
}
}
else
{
lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = lean_nat_dec_le(v_n_615_, v___x_622_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; 
v___x_624_ = 1;
return v___x_624_;
}
else
{
uint8_t v___x_625_; 
v___x_625_ = 0;
return v___x_625_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_ofNat___boxed(lean_object* v_n_626_){
_start:
{
uint8_t v_res_627_; lean_object* v_r_628_; 
v_res_627_ = lp_tzap_x2dlean_TzapLean_PassName_ofNat(v_n_626_);
lean_dec(v_n_626_);
v_r_628_ = lean_box(v_res_627_);
return v_r_628_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_instDecidableEqPassName(uint8_t v_x_629_, uint8_t v_y_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_631_ = lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(v_x_629_);
v___x_632_ = lp_tzap_x2dlean_TzapLean_PassName_ctorIdx(v_y_630_);
v___x_633_ = lean_nat_dec_eq(v___x_631_, v___x_632_);
lean_dec(v___x_632_);
lean_dec(v___x_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instDecidableEqPassName___boxed(lean_object* v_x_634_, lean_object* v_y_635_){
_start:
{
uint8_t v_x_13__boxed_636_; uint8_t v_y_14__boxed_637_; uint8_t v_res_638_; lean_object* v_r_639_; 
v_x_13__boxed_636_ = lean_unbox(v_x_634_);
v_y_14__boxed_637_ = lean_unbox(v_y_635_);
v_res_638_ = lp_tzap_x2dlean_TzapLean_instDecidableEqPassName(v_x_13__boxed_636_, v_y_14__boxed_637_);
v_r_639_ = lean_box(v_res_638_);
return v_r_639_;
}
}
static uint8_t _init_lp_tzap_x2dlean_TzapLean_instInhabitedPassName_default(void){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = 0;
return v___x_640_;
}
}
static uint8_t _init_lp_tzap_x2dlean_TzapLean_instInhabitedPassName(void){
_start:
{
uint8_t v___x_641_; 
v___x_641_ = 0;
return v___x_641_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0(lean_object* v_s_691_, lean_object* v_x_692_){
_start:
{
if (lean_obj_tag(v_x_692_) == 0)
{
lean_object* v___x_693_; 
v___x_693_ = lean_box(0);
return v___x_693_;
}
else
{
lean_object* v_head_694_; lean_object* v_tail_695_; lean_object* v_fst_696_; uint8_t v___x_697_; 
v_head_694_ = lean_ctor_get(v_x_692_, 0);
v_tail_695_ = lean_ctor_get(v_x_692_, 1);
v_fst_696_ = lean_ctor_get(v_head_694_, 0);
v___x_697_ = lean_string_dec_eq(v_fst_696_, v_s_691_);
if (v___x_697_ == 0)
{
v_x_692_ = v_tail_695_;
goto _start;
}
else
{
lean_object* v___x_699_; 
lean_inc(v_head_694_);
v___x_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_699_, 0, v_head_694_);
return v___x_699_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0___boxed(lean_object* v_s_700_, lean_object* v_x_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0(v_s_700_, v_x_701_);
lean_dec(v_x_701_);
lean_dec_ref(v_s_700_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_parse(lean_object* v_s_703_){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_PassName_all));
v___x_705_ = lp_tzap_x2dlean_List_find_x3f___at___00TzapLean_PassName_parse_spec__0(v_s_703_, v___x_704_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v___x_706_; 
v___x_706_ = lean_box(0);
return v___x_706_;
}
else
{
lean_object* v_val_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_716_; 
v_val_707_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_716_ == 0)
{
v___x_709_ = v___x_705_;
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_val_707_);
lean_dec(v___x_705_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_716_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v_snd_711_; lean_object* v_fst_712_; lean_object* v___x_714_; 
v_snd_711_ = lean_ctor_get(v_val_707_, 1);
lean_inc(v_snd_711_);
lean_dec(v_val_707_);
v_fst_712_ = lean_ctor_get(v_snd_711_, 0);
lean_inc(v_fst_712_);
lean_dec(v_snd_711_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v_fst_712_);
v___x_714_ = v___x_709_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_fst_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_parse___boxed(lean_object* v_s_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = lp_tzap_x2dlean_TzapLean_PassName_parse(v_s_717_);
lean_dec_ref(v_s_717_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_PassName_allNames_spec__0(lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
if (lean_obj_tag(v_a_719_) == 0)
{
lean_object* v___x_721_; 
v___x_721_ = l_List_reverse___redArg(v_a_720_);
return v___x_721_;
}
else
{
lean_object* v_head_722_; lean_object* v_tail_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_732_; 
v_head_722_ = lean_ctor_get(v_a_719_, 0);
v_tail_723_ = lean_ctor_get(v_a_719_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_732_ == 0)
{
v___x_725_ = v_a_719_;
v_isShared_726_ = v_isSharedCheck_732_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_tail_723_);
lean_inc(v_head_722_);
lean_dec(v_a_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_732_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_fst_727_; lean_object* v___x_729_; 
v_fst_727_ = lean_ctor_get(v_head_722_, 0);
lean_inc(v_fst_727_);
lean_dec(v_head_722_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 1, v_a_720_);
lean_ctor_set(v___x_725_, 0, v_fst_727_);
v___x_729_ = v___x_725_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_fst_727_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_a_720_);
v___x_729_ = v_reuseFailAlloc_731_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v_a_719_ = v_tail_723_;
v_a_720_ = v___x_729_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_box(0);
v___x_735_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_PassName_all));
v___x_736_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_PassName_allNames_spec__0(v___x_735_, v___x_734_);
return v___x_736_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_737_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1, &lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1_once, _init_lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__1);
v___x_738_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__0));
v___x_739_ = l_String_intercalate(v___x_738_, v___x_737_);
return v___x_739_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_PassName_allNames(void){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2, &lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2_once, _init_lp_tzap_x2dlean_TzapLean_PassName_allNames___closed__2);
return v___x_740_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_PassName_verified(uint8_t v_x_741_){
_start:
{
if (v_x_741_ == 3)
{
uint8_t v___x_742_; 
v___x_742_ = 0;
return v___x_742_;
}
else
{
uint8_t v___x_743_; 
v___x_743_ = 1;
return v___x_743_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PassName_verified___boxed(lean_object* v_x_744_){
_start:
{
uint8_t v_x_21__boxed_745_; uint8_t v_res_746_; lean_object* v_r_747_; 
v_x_21__boxed_745_ = lean_unbox(v_x_744_);
v_res_746_ = lp_tzap_x2dlean_TzapLean_PassName_verified(v_x_21__boxed_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_unsigned_to_nat(10u);
v___x_758_ = lean_nat_to_int(v___x_757_);
return v___x_758_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_unsigned_to_nat(15u);
v___x_763_ = lean_nat_to_int(v___x_762_);
return v___x_763_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = lean_unsigned_to_nat(16u);
v___x_768_ = lean_nat_to_int(v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg(lean_object* v_x_769_){
_start:
{
lean_object* v_qubits_770_; lean_object* v_windowGates_771_; lean_object* v_tableEntries_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_qubits_770_ = lean_ctor_get(v_x_769_, 0);
lean_inc(v_qubits_770_);
v_windowGates_771_ = lean_ctor_get(v_x_769_, 1);
lean_inc(v_windowGates_771_);
v_tableEntries_772_ = lean_ctor_get(v_x_769_, 2);
lean_inc(v_tableEntries_772_);
lean_dec_ref(v_x_769_);
v___x_773_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5));
v___x_774_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__3));
v___x_775_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4, &lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_qubits_770_, v___x_776_);
v___x_778_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_775_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = 0;
v___x_780_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*1, v___x_779_);
v___x_781_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_774_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9));
v___x_783_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_box(1);
v___x_785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__6));
v___x_787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
lean_ctor_set(v___x_788_, 1, v___x_773_);
v___x_789_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7, &lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__7);
v___x_790_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_windowGates_771_, v___x_776_);
v___x_791_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
v___x_792_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*1, v___x_779_);
v___x_793_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_788_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
lean_ctor_set(v___x_794_, 1, v___x_782_);
v___x_795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v___x_784_);
v___x_796_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__9));
v___x_797_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v___x_773_);
v___x_799_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10, &lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10_once, _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__10);
v___x_800_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_tableEntries_772_, v___x_776_);
v___x_801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_802_, 0, v___x_801_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*1, v___x_779_);
v___x_803_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_798_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23);
v___x_805_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24));
v___x_806_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set(v___x_806_, 1, v___x_803_);
v___x_807_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25));
v___x_808_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_804_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_810_, 0, v___x_809_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*1, v___x_779_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr(lean_object* v_x_811_, lean_object* v_prec_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg(v_x_811_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___boxed(lean_object* v_x_814_, lean_object* v_prec_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr(v_x_814_, v_prec_815_);
lean_dec(v_prec_815_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_823_, lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
if (lean_obj_tag(v_x_825_) == 0)
{
lean_dec(v_x_823_);
return v_x_824_;
}
else
{
lean_object* v_head_826_; lean_object* v_tail_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_839_; 
v_head_826_ = lean_ctor_get(v_x_825_, 0);
v_tail_827_ = lean_ctor_get(v_x_825_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_x_825_);
if (v_isSharedCheck_839_ == 0)
{
v___x_829_ = v_x_825_;
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_tail_827_);
lean_inc(v_head_826_);
lean_dec(v_x_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
lean_inc(v_x_823_);
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 5);
lean_ctor_set(v___x_829_, 1, v_x_823_);
lean_ctor_set(v___x_829_, 0, v_x_824_);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_x_824_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_x_823_);
v___x_832_ = v_reuseFailAlloc_838_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_833_; uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = lean_unbox(v_head_826_);
lean_dec(v_head_826_);
v___x_835_ = lp_tzap_x2dlean_TzapLean_instReprPassName_repr(v___x_834_, v___x_833_);
v___x_836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_832_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v_x_824_ = v___x_836_;
v_x_825_ = v_tail_827_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_840_, lean_object* v_x_841_, lean_object* v_x_842_){
_start:
{
if (lean_obj_tag(v_x_842_) == 0)
{
lean_dec(v_x_840_);
return v_x_841_;
}
else
{
lean_object* v_head_843_; lean_object* v_tail_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_856_; 
v_head_843_ = lean_ctor_get(v_x_842_, 0);
v_tail_844_ = lean_ctor_get(v_x_842_, 1);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_842_);
if (v_isSharedCheck_856_ == 0)
{
v___x_846_ = v_x_842_;
v_isShared_847_ = v_isSharedCheck_856_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_tail_844_);
lean_inc(v_head_843_);
lean_dec(v_x_842_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_856_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
lean_inc(v_x_840_);
if (v_isShared_847_ == 0)
{
lean_ctor_set_tag(v___x_846_, 5);
lean_ctor_set(v___x_846_, 1, v_x_840_);
lean_ctor_set(v___x_846_, 0, v_x_841_);
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_x_841_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_x_840_);
v___x_849_ = v_reuseFailAlloc_855_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = lean_unbox(v_head_843_);
lean_dec(v_head_843_);
v___x_852_ = lp_tzap_x2dlean_TzapLean_instReprPassName_repr(v___x_851_, v___x_850_);
v___x_853_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_849_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = lp_tzap_x2dlean_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2_spec__3(v_x_840_, v___x_853_, v_tail_844_);
return v___x_854_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0(uint8_t v___y_857_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = lp_tzap_x2dlean_TzapLean_instReprPassName_repr(v___y_857_, v___x_858_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_860_){
_start:
{
uint8_t v___y_634__boxed_861_; lean_object* v_res_862_; 
v___y_634__boxed_861_ = lean_unbox(v___y_860_);
v_res_862_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0(v___y_634__boxed_861_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1(lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
if (lean_obj_tag(v_x_863_) == 0)
{
lean_object* v___x_865_; 
lean_dec(v_x_864_);
v___x_865_ = lean_box(0);
return v___x_865_;
}
else
{
lean_object* v_tail_866_; 
v_tail_866_ = lean_ctor_get(v_x_863_, 1);
if (lean_obj_tag(v_tail_866_) == 0)
{
lean_object* v_head_867_; uint8_t v___x_868_; lean_object* v___x_869_; 
lean_dec(v_x_864_);
v_head_867_ = lean_ctor_get(v_x_863_, 0);
lean_inc(v_head_867_);
lean_dec_ref_known(v_x_863_, 2);
v___x_868_ = lean_unbox(v_head_867_);
lean_dec(v_head_867_);
v___x_869_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0(v___x_868_);
return v___x_869_;
}
else
{
lean_object* v_head_870_; uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_inc(v_tail_866_);
v_head_870_ = lean_ctor_get(v_x_863_, 0);
lean_inc(v_head_870_);
lean_dec_ref_known(v_x_863_, 2);
v___x_871_ = lean_unbox(v_head_870_);
lean_dec(v_head_870_);
v___x_872_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1___lam__0(v___x_871_);
v___x_873_ = lp_tzap_x2dlean_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1_spec__2(v_x_864_, v___x_872_, v_tail_866_);
return v___x_873_;
}
}
}
}
static lean_object* _init_lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__2));
v___x_883_ = lean_string_length(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = lean_obj_once(&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5, &lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5_once, _init_lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__5);
v___x_885_ = lean_nat_to_int(v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg(lean_object* v_a_890_){
_start:
{
if (lean_obj_tag(v_a_890_) == 0)
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__1));
return v___x_891_;
}
else
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; 
v___x_892_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__3));
v___x_893_ = lp_tzap_x2dlean_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0_spec__1(v_a_890_, v___x_892_);
v___x_894_ = lean_obj_once(&lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6, &lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6_once, _init_lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__6);
v___x_895_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__7));
v___x_896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v___x_893_);
v___x_897_ = ((lean_object*)(lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg___closed__8));
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_896_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_894_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = 0;
v___x_901_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set_uint8(v___x_901_, sizeof(void*)*1, v___x_900_);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0(lean_object* v_x_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_908_) == 0)
{
lean_object* v___x_910_; 
v___x_910_ = ((lean_object*)(lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__1));
return v___x_910_;
}
else
{
lean_object* v_val_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_val_911_ = lean_ctor_get(v_x_908_, 0);
lean_inc(v_val_911_);
lean_dec_ref_known(v_x_908_, 1);
v___x_912_ = ((lean_object*)(lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___closed__3));
v___x_913_ = lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg(v_val_911_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = l_Repr_addAppParen(v___x_914_, v_x_909_);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0___boxed(lean_object* v_x_916_, lean_object* v_x_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0(v_x_916_, v_x_917_);
lean_dec(v_x_917_);
return v_res_918_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(8u);
v___x_941_ = lean_nat_to_int(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_unsigned_to_nat(11u);
v___x_946_ = lean_nat_to_int(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg(lean_object* v_x_947_){
_start:
{
uint8_t v_level_948_; lean_object* v_passes_949_; uint8_t v_fixpoint_950_; lean_object* v_superopt_951_; lean_object* v_seed_952_; uint8_t v_verbose_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v_level_948_ = lean_ctor_get_uint8(v_x_947_, sizeof(void*)*3);
v_passes_949_ = lean_ctor_get(v_x_947_, 0);
lean_inc(v_passes_949_);
v_fixpoint_950_ = lean_ctor_get_uint8(v_x_947_, sizeof(void*)*3 + 1);
v_superopt_951_ = lean_ctor_get(v_x_947_, 1);
lean_inc_ref(v_superopt_951_);
v_seed_952_ = lean_ctor_get(v_x_947_, 2);
lean_inc(v_seed_952_);
v_verbose_953_ = lean_ctor_get_uint8(v_x_947_, sizeof(void*)*3 + 2);
lean_dec_ref(v_x_947_);
v___x_954_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5));
v___x_955_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__3));
v___x_956_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__7);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lp_tzap_x2dlean_TzapLean_instReprLevel_repr(v_level_948_, v___x_957_);
v___x_959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_956_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = 0;
v___x_961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set_uint8(v___x_961_, sizeof(void*)*1, v___x_960_);
v___x_962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_955_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9));
v___x_964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
v___x_965_ = lean_box(1);
v___x_966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__5));
v___x_968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
lean_ctor_set(v___x_969_, 1, v___x_954_);
v___x_970_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4, &lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4);
v___x_971_ = lp_tzap_x2dlean_Option_repr___at___00TzapLean_instReprOptions_repr_spec__0(v_passes_949_, v___x_957_);
v___x_972_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set_uint8(v___x_973_, sizeof(void*)*1, v___x_960_);
v___x_974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_969_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v___x_963_);
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v___x_965_);
v___x_977_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__7));
v___x_978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
lean_ctor_set(v___x_979_, 1, v___x_954_);
v___x_980_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12);
v___x_981_ = l_Bool_repr___redArg(v_fixpoint_950_);
v___x_982_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*1, v___x_960_);
v___x_984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_979_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set(v___x_985_, 1, v___x_963_);
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_965_);
v___x_987_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__9));
v___x_988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
lean_ctor_set(v___x_989_, 1, v___x_954_);
v___x_990_ = lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg(v_superopt_951_);
v___x_991_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_980_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set_uint8(v___x_992_, sizeof(void*)*1, v___x_960_);
v___x_993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_989_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_963_);
v___x_995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v___x_965_);
v___x_996_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__11));
v___x_997_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set(v___x_998_, 1, v___x_954_);
v___x_999_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12, &lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12_once, _init_lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__12);
v___x_1000_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_seed_952_, v___x_957_);
v___x_1001_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_999_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set_uint8(v___x_1002_, sizeof(void*)*1, v___x_960_);
v___x_1003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_998_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_963_);
v___x_1005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_965_);
v___x_1006_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__14));
v___x_1007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___x_954_);
v___x_1009_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15, &lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15_once, _init_lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg___closed__15);
v___x_1010_ = l_Bool_repr___redArg(v_verbose_953_);
v___x_1011_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*1, v___x_960_);
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1008_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23);
v___x_1015_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24));
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1013_);
v___x_1017_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25));
v___x_1018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1014_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
lean_ctor_set_uint8(v___x_1020_, sizeof(void*)*1, v___x_960_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr(lean_object* v_x_1021_, lean_object* v_prec_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = lp_tzap_x2dlean_TzapLean_instReprOptions_repr___redArg(v_x_1021_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprOptions_repr___boxed(lean_object* v_x_1024_, lean_object* v_prec_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = lp_tzap_x2dlean_TzapLean_instReprOptions_repr(v_x_1024_, v_prec_1025_);
lean_dec(v_prec_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0(lean_object* v_a_1027_, lean_object* v_n_1028_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___redArg(v_a_1027_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0___boxed(lean_object* v_a_1030_, lean_object* v_n_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = lp_tzap_x2dlean_List_repr___at___00Option_repr___at___00TzapLean_instReprOptions_repr_spec__0_spec__0(v_a_1030_, v_n_1031_);
lean_dec(v_n_1031_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds(uint8_t v_x_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Level_bounds___closed__1));
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_bounds___boxed(lean_object* v_x_1052_){
_start:
{
uint8_t v_x_38__boxed_1053_; lean_object* v_res_1054_; 
v_x_38__boxed_1053_ = lean_unbox(v_x_1052_);
v_res_1054_ = lp_tzap_x2dlean_TzapLean_Level_bounds(v_x_38__boxed_1053_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_resolveBounds(lean_object* v_o_1055_){
_start:
{
lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; uint8_t v_level_1065_; lean_object* v_superopt_1066_; lean_object* v___x_1067_; lean_object* v_snd_1068_; lean_object* v_fst_1069_; lean_object* v_fst_1070_; lean_object* v_snd_1071_; lean_object* v_qubits_1072_; lean_object* v_windowGates_1073_; lean_object* v_tableEntries_1074_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1080_; 
v_level_1065_ = lean_ctor_get_uint8(v_o_1055_, sizeof(void*)*3);
v_superopt_1066_ = lean_ctor_get(v_o_1055_, 1);
lean_inc_ref(v_superopt_1066_);
lean_dec_ref(v_o_1055_);
v___x_1067_ = lp_tzap_x2dlean_TzapLean_Level_bounds(v_level_1065_);
v_snd_1068_ = lean_ctor_get(v___x_1067_, 1);
lean_inc(v_snd_1068_);
v_fst_1069_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_fst_1069_);
lean_dec_ref(v___x_1067_);
v_fst_1070_ = lean_ctor_get(v_snd_1068_, 0);
lean_inc(v_fst_1070_);
v_snd_1071_ = lean_ctor_get(v_snd_1068_, 1);
lean_inc(v_snd_1071_);
lean_dec(v_snd_1068_);
v_qubits_1072_ = lean_ctor_get(v_superopt_1066_, 0);
lean_inc(v_qubits_1072_);
v_windowGates_1073_ = lean_ctor_get(v_superopt_1066_, 1);
lean_inc(v_windowGates_1073_);
v_tableEntries_1074_ = lean_ctor_get(v_superopt_1066_, 2);
lean_inc(v_tableEntries_1074_);
lean_dec_ref(v_superopt_1066_);
if (lean_obj_tag(v_qubits_1072_) == 0)
{
v___y_1080_ = v_fst_1069_;
goto v___jp_1079_;
}
else
{
lean_object* v_val_1082_; 
lean_dec(v_fst_1069_);
v_val_1082_ = lean_ctor_get(v_qubits_1072_, 0);
lean_inc(v_val_1082_);
lean_dec_ref_known(v_qubits_1072_, 1);
v___y_1080_ = v_val_1082_;
goto v___jp_1079_;
}
v___jp_1056_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
lean_inc(v___y_1058_);
lean_inc(v___y_1057_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___y_1057_);
lean_ctor_set(v___x_1060_, 1, v___y_1058_);
v___x_1061_ = lean_unsigned_to_nat(1u);
v___x_1062_ = lean_nat_sub(v___y_1058_, v___x_1061_);
lean_dec(v___y_1058_);
v___x_1063_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1063_, 0, v___y_1057_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
lean_ctor_set(v___x_1063_, 2, v___y_1059_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1060_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
return v___x_1064_;
}
v___jp_1075_:
{
if (lean_obj_tag(v_tableEntries_1074_) == 0)
{
v___y_1057_ = v___y_1076_;
v___y_1058_ = v___y_1077_;
v___y_1059_ = v_snd_1071_;
goto v___jp_1056_;
}
else
{
lean_object* v_val_1078_; 
lean_dec(v_snd_1071_);
v_val_1078_ = lean_ctor_get(v_tableEntries_1074_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v_tableEntries_1074_, 1);
v___y_1057_ = v___y_1076_;
v___y_1058_ = v___y_1077_;
v___y_1059_ = v_val_1078_;
goto v___jp_1056_;
}
}
v___jp_1079_:
{
if (lean_obj_tag(v_windowGates_1073_) == 0)
{
v___y_1076_ = v___y_1080_;
v___y_1077_ = v_fst_1070_;
goto v___jp_1075_;
}
else
{
lean_object* v_val_1081_; 
lean_dec(v_fst_1070_);
v_val_1081_ = lean_ctor_get(v_windowGates_1073_, 0);
lean_inc(v_val_1081_);
lean_dec_ref_known(v_windowGates_1073_, 1);
v___y_1076_ = v___y_1080_;
v___y_1077_ = v_val_1081_;
goto v___jp_1075_;
}
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt(uint8_t v_x_1083_){
_start:
{
if (v_x_1083_ == 0)
{
uint8_t v___x_1084_; 
v___x_1084_ = 0;
return v___x_1084_;
}
else
{
uint8_t v___x_1085_; 
v___x_1085_ = 1;
return v___x_1085_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt___boxed(lean_object* v_x_1086_){
_start:
{
uint8_t v_x_21__boxed_1087_; uint8_t v_res_1088_; lean_object* v_r_1089_; 
v_x_21__boxed_1087_ = lean_unbox(v_x_1086_);
v_res_1088_ = lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt(v_x_21__boxed_1087_);
v_r_1089_ = lean_box(v_res_1088_);
return v_r_1089_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_tagBits(void){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_unsigned_to_nat(128u);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline(uint8_t v_x_1111_){
_start:
{
if (v_x_1111_ == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__1));
return v___x_1112_;
}
else
{
lean_object* v___x_1113_; 
v___x_1113_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Level_pipeline___closed__4));
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_pipeline___boxed(lean_object* v_x_1114_){
_start:
{
uint8_t v_x_78__boxed_1115_; lean_object* v_res_1116_; 
v_x_78__boxed_1115_ = lean_unbox(v_x_1114_);
v_res_1116_ = lp_tzap_x2dlean_TzapLean_Level_pipeline(v_x_78__boxed_1115_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___redArg(uint8_t v_x_1117_, lean_object* v_h__1_1118_, lean_object* v_h__2_1119_, lean_object* v_h__3_1120_, lean_object* v_h__4_1121_){
_start:
{
switch(v_x_1117_)
{
case 0:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec(v_h__4_1121_);
lean_dec(v_h__3_1120_);
lean_dec(v_h__2_1119_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_apply_1(v_h__1_1118_, v___x_1122_);
return v___x_1123_;
}
case 1:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v_h__4_1121_);
lean_dec(v_h__3_1120_);
lean_dec(v_h__1_1118_);
v___x_1124_ = lean_box(0);
v___x_1125_ = lean_apply_1(v_h__2_1119_, v___x_1124_);
return v___x_1125_;
}
case 2:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_dec(v_h__4_1121_);
lean_dec(v_h__2_1119_);
lean_dec(v_h__1_1118_);
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_apply_1(v_h__3_1120_, v___x_1126_);
return v___x_1127_;
}
default: 
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec(v_h__3_1120_);
lean_dec(v_h__2_1119_);
lean_dec(v_h__1_1118_);
v___x_1128_ = lean_box(0);
v___x_1129_ = lean_apply_1(v_h__4_1121_, v___x_1128_);
return v___x_1129_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___redArg___boxed(lean_object* v_x_1130_, lean_object* v_h__1_1131_, lean_object* v_h__2_1132_, lean_object* v_h__3_1133_, lean_object* v_h__4_1134_){
_start:
{
uint8_t v_x_42__boxed_1135_; lean_object* v_res_1136_; 
v_x_42__boxed_1135_ = lean_unbox(v_x_1130_);
v_res_1136_ = lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___redArg(v_x_42__boxed_1135_, v_h__1_1131_, v_h__2_1132_, v_h__3_1133_, v_h__4_1134_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter(lean_object* v_motive_1137_, uint8_t v_x_1138_, lean_object* v_h__1_1139_, lean_object* v_h__2_1140_, lean_object* v_h__3_1141_, lean_object* v_h__4_1142_){
_start:
{
switch(v_x_1138_)
{
case 0:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
lean_dec(v_h__4_1142_);
lean_dec(v_h__3_1141_);
lean_dec(v_h__2_1140_);
v___x_1143_ = lean_box(0);
v___x_1144_ = lean_apply_1(v_h__1_1139_, v___x_1143_);
return v___x_1144_;
}
case 1:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_dec(v_h__4_1142_);
lean_dec(v_h__3_1141_);
lean_dec(v_h__1_1139_);
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_apply_1(v_h__2_1140_, v___x_1145_);
return v___x_1146_;
}
case 2:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec(v_h__4_1142_);
lean_dec(v_h__2_1140_);
lean_dec(v_h__1_1139_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_apply_1(v_h__3_1141_, v___x_1147_);
return v___x_1148_;
}
default: 
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_dec(v_h__3_1141_);
lean_dec(v_h__2_1140_);
lean_dec(v_h__1_1139_);
v___x_1149_ = lean_box(0);
v___x_1150_ = lean_apply_1(v_h__4_1142_, v___x_1149_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter___boxed(lean_object* v_motive_1151_, lean_object* v_x_1152_, lean_object* v_h__1_1153_, lean_object* v_h__2_1154_, lean_object* v_h__3_1155_, lean_object* v_h__4_1156_){
_start:
{
uint8_t v_x_61__boxed_1157_; lean_object* v_res_1158_; 
v_x_61__boxed_1157_ = lean_unbox(v_x_1152_);
v_res_1158_ = lp_tzap_x2dlean___private_TzapLean_Optimize_0__TzapLean_instReprPassName_repr_match__1_splitter(v_motive_1151_, v_x_61__boxed_1157_, v_h__1_1153_, v_h__2_1154_, v_h__3_1155_, v_h__4_1156_);
return v_res_1158_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__0(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = lp_tzap_x2dlean_TzapLean_CancelGates;
v___x_1160_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(v___x_1159_);
return v___x_1160_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__1(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lp_tzap_x2dlean_TzapLean_CnotMin;
v___x_1162_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(v___x_1161_);
return v___x_1162_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__2(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_unsigned_to_nat(128u);
v___x_1164_ = lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec(v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_executableStep(lean_object* v_cfg_1165_, lean_object* v_tbl_1166_, uint8_t v_x_1167_){
_start:
{
switch(v_x_1167_)
{
case 0:
{
lean_object* v___x_1168_; 
lean_dec_ref(v_tbl_1166_);
lean_dec_ref(v_cfg_1165_);
v___x_1168_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_executableStep___closed__0, &lp_tzap_x2dlean_TzapLean_executableStep___closed__0_once, _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__0);
return v___x_1168_;
}
case 1:
{
lean_object* v___x_1169_; 
lean_dec_ref(v_tbl_1166_);
lean_dec_ref(v_cfg_1165_);
v___x_1169_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_executableStep___closed__1, &lp_tzap_x2dlean_TzapLean_executableStep___closed__1_once, _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__1);
return v___x_1169_;
}
case 2:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lp_tzap_x2dlean_TzapLean_SuperOpt(v_cfg_1165_, v_tbl_1166_);
v___x_1171_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(v___x_1170_);
return v___x_1171_;
}
default: 
{
lean_object* v___x_1172_; 
lean_dec_ref(v_tbl_1166_);
lean_dec_ref(v_cfg_1165_);
v___x_1172_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_executableStep___closed__2, &lp_tzap_x2dlean_TzapLean_executableStep___closed__2_once, _init_lp_tzap_x2dlean_TzapLean_executableStep___closed__2);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_executableStep___boxed(lean_object* v_cfg_1173_, lean_object* v_tbl_1174_, lean_object* v_x_1175_){
_start:
{
uint8_t v_x_53__boxed_1176_; lean_object* v_res_1177_; 
v_x_53__boxed_1176_ = lean_unbox(v_x_1175_);
v_res_1177_ = lp_tzap_x2dlean_TzapLean_executableStep(v_cfg_1173_, v_tbl_1174_, v_x_53__boxed_1176_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_maxRounds(uint8_t v_x_1180_){
_start:
{
if (v_x_1180_ == 1)
{
lean_object* v___x_1181_; 
v___x_1181_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_Level_maxRounds___closed__0));
return v___x_1181_;
}
else
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_box(0);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_Level_maxRounds___boxed(lean_object* v_x_1183_){
_start:
{
uint8_t v_x_30__boxed_1184_; lean_object* v_res_1185_; 
v_x_30__boxed_1184_ = lean_unbox(v_x_1183_);
v_res_1185_ = lp_tzap_x2dlean_TzapLean_Level_maxRounds(v_x_30__boxed_1184_);
return v_res_1185_;
}
}
static lean_object* _init_lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = 44;
v___x_1187_ = lean_box_uint32(v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0(lean_object* v_x_1188_, lean_object* v_x_1189_){
_start:
{
if (lean_obj_tag(v_x_1189_) == 0)
{
return v_x_1188_;
}
else
{
lean_object* v_head_1190_; lean_object* v_tail_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1221_; 
v_head_1190_ = lean_ctor_get(v_x_1189_, 0);
v_tail_1191_ = lean_ctor_get(v_x_1189_, 1);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_x_1189_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1193_ = v_x_1189_;
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_tail_1191_);
lean_inc(v_head_1190_);
lean_dec(v_x_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v_fst_1195_; lean_object* v_snd_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1220_; 
v_fst_1195_ = lean_ctor_get(v_x_1188_, 0);
v_snd_1196_ = lean_ctor_get(v_x_1188_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1198_ = v_x_1188_;
v_isShared_1199_ = v_isSharedCheck_1220_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_snd_1196_);
lean_inc(v_fst_1195_);
lean_dec(v_x_1188_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1220_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___y_1201_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1212_ = lean_unsigned_to_nat(0u);
v___x_1213_ = lean_nat_dec_eq(v_snd_1196_, v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1214_ = lean_unsigned_to_nat(3u);
v___x_1215_ = lean_nat_mod(v_snd_1196_, v___x_1214_);
v___x_1216_ = lean_nat_dec_eq(v___x_1215_, v___x_1212_);
lean_dec(v___x_1215_);
if (v___x_1216_ == 0)
{
goto v___jp_1208_;
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
lean_del_object(v___x_1193_);
v___x_1217_ = lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1;
v___x_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v_fst_1195_);
v___x_1219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1219_, 0, v_head_1190_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___y_1201_ = v___x_1219_;
goto v___jp_1200_;
}
}
else
{
goto v___jp_1208_;
}
v___jp_1200_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1205_; 
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_nat_add(v_snd_1196_, v___x_1202_);
lean_dec(v_snd_1196_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v___x_1203_);
lean_ctor_set(v___x_1198_, 0, v___y_1201_);
v___x_1205_ = v___x_1198_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___y_1201_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v___x_1203_);
v___x_1205_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
v_x_1188_ = v___x_1205_;
v_x_1189_ = v_tail_1191_;
goto _start;
}
}
v___jp_1208_:
{
lean_object* v___x_1210_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 1, v_fst_1195_);
v___x_1210_ = v___x_1193_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_head_1190_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_fst_1195_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
v___y_1201_ = v___x_1210_;
goto v___jp_1200_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtNum(lean_object* v_n_1225_){
_start:
{
lean_object* v___x_1226_; lean_object* v_ds_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v_fst_1231_; lean_object* v___x_1232_; 
v___x_1226_ = l_Nat_reprFast(v_n_1225_);
v_ds_1227_ = lean_string_data(v___x_1226_);
v___x_1228_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_fmtNum___closed__0));
v___x_1229_ = l_List_reverse___redArg(v_ds_1227_);
v___x_1230_ = lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0(v___x_1228_, v___x_1229_);
v_fst_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_fst_1231_);
lean_dec_ref(v___x_1230_);
v___x_1232_ = lean_string_mk(v_fst_1231_);
return v___x_1232_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1(void){
_start:
{
uint32_t v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = 48;
v___x_1237_ = lean_box_uint32(v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs(lean_object* v_nanos_1238_){
_start:
{
lean_object* v___x_1239_; lean_object* v_ms_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1239_ = lean_unsigned_to_nat(1000000u);
v_ms_1240_ = lean_nat_div(v_nanos_1238_, v___x_1239_);
v___x_1241_ = lean_unsigned_to_nat(1000u);
v___x_1242_ = lean_nat_div(v_ms_1240_, v___x_1241_);
v___x_1243_ = l_Nat_reprFast(v___x_1242_);
v___x_1244_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_fmtSecs___closed__0));
v___x_1245_ = lean_string_append(v___x_1243_, v___x_1244_);
v___x_1246_ = lean_unsigned_to_nat(3u);
v___x_1247_ = lean_nat_mod(v_ms_1240_, v___x_1241_);
lean_dec(v_ms_1240_);
v___x_1248_ = l_Nat_reprFast(v___x_1247_);
v___x_1249_ = lean_string_data(v___x_1248_);
v___x_1250_ = l_List_reverse___redArg(v___x_1249_);
v___x_1251_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_fmtSecs___closed__1));
lean_inc(v___x_1250_);
v___x_1252_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1250_, v___x_1250_, v___x_1246_, v___x_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = l_List_reverse___redArg(v___x_1252_);
v___x_1254_ = lean_string_mk(v___x_1253_);
v___x_1255_ = lean_string_length(v___x_1254_);
v___x_1256_ = lean_nat_sub(v___x_1246_, v___x_1255_);
v___x_1257_ = lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1;
v___x_1258_ = l_List_replicateTR___redArg(v___x_1256_, v___x_1257_);
v___x_1259_ = lean_string_mk(v___x_1258_);
v___x_1260_ = lean_string_append(v___x_1259_, v___x_1254_);
lean_dec_ref(v___x_1254_);
v___x_1261_ = lean_string_append(v___x_1245_, v___x_1260_);
lean_dec_ref(v___x_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtSecs___boxed(lean_object* v_nanos_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = lp_tzap_x2dlean_TzapLean_fmtSecs(v_nanos_1262_);
lean_dec(v_nanos_1262_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtPct(lean_object* v_before_1265_, lean_object* v_after_1266_){
_start:
{
lean_object* v___y_1268_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_nat_dec_eq(v_before_1265_, v___x_1281_);
if (v___x_1282_ == 0)
{
uint8_t v___x_1283_; 
v___x_1283_ = lean_nat_dec_le(v_before_1265_, v_after_1266_);
if (v___x_1283_ == 0)
{
v___y_1268_ = v_after_1266_;
goto v___jp_1267_;
}
else
{
v___y_1268_ = v_before_1265_;
goto v___jp_1267_;
}
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_fmtPct___closed__0));
return v___x_1284_;
}
v___jp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v_tenths_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1269_ = lean_nat_sub(v_before_1265_, v___y_1268_);
v___x_1270_ = lean_unsigned_to_nat(1000u);
v___x_1271_ = lean_nat_mul(v___x_1269_, v___x_1270_);
lean_dec(v___x_1269_);
v_tenths_1272_ = lean_nat_div(v___x_1271_, v_before_1265_);
lean_dec(v___x_1271_);
v___x_1273_ = lean_unsigned_to_nat(10u);
v___x_1274_ = lean_nat_div(v_tenths_1272_, v___x_1273_);
v___x_1275_ = l_Nat_reprFast(v___x_1274_);
v___x_1276_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_fmtSecs___closed__0));
v___x_1277_ = lean_string_append(v___x_1275_, v___x_1276_);
v___x_1278_ = lean_nat_mod(v_tenths_1272_, v___x_1273_);
lean_dec(v_tenths_1272_);
v___x_1279_ = l_Nat_reprFast(v___x_1278_);
v___x_1280_ = lean_string_append(v___x_1277_, v___x_1279_);
lean_dec_ref(v___x_1279_);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_fmtPct___boxed(lean_object* v_before_1285_, lean_object* v_after_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = lp_tzap_x2dlean_TzapLean_fmtPct(v_before_1285_, v_after_1286_);
lean_dec(v_after_1286_);
lean_dec(v_before_1285_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_force(lean_object* v_n_1288_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1298_; 
v___x_1290_ = l_IO_lazyPure___redArg(v_n_1288_);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1298_ == 0)
{
lean_object* v_unused_1299_; 
v_unused_1299_ = lean_ctor_get(v___x_1290_, 0);
lean_dec(v_unused_1299_);
v___x_1292_ = v___x_1290_;
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
else
{
lean_dec(v___x_1290_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1294_ = lean_box(0);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1294_);
v___x_1296_ = v___x_1292_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_force___boxed(lean_object* v_n_1300_, lean_object* v_a_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = lp_tzap_x2dlean_TzapLean_force(v_n_1300_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_roundFuel(lean_object* v_maxRounds_1303_, lean_object* v_c_1304_){
_start:
{
if (lean_obj_tag(v_maxRounds_1303_) == 0)
{
lean_object* v_gates_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_gates_1305_ = lean_ctor_get(v_c_1304_, 2);
v___x_1306_ = l_List_lengthTR___redArg(v_gates_1305_);
v___x_1307_ = lean_unsigned_to_nat(1u);
v___x_1308_ = lean_nat_add(v___x_1306_, v___x_1307_);
lean_dec(v___x_1306_);
return v___x_1308_;
}
else
{
lean_object* v_val_1309_; 
v_val_1309_ = lean_ctor_get(v_maxRounds_1303_, 0);
lean_inc(v_val_1309_);
return v_val_1309_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_roundFuel___boxed(lean_object* v_maxRounds_1310_, lean_object* v_c_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = lp_tzap_x2dlean_TzapLean_roundFuel(v_maxRounds_1310_, v_c_1311_);
lean_dec_ref(v_c_1311_);
lean_dec(v_maxRounds_1310_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg(lean_object* v_x_1325_){
_start:
{
lean_object* v_baseline_1326_; lean_object* v_output_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1360_; 
v_baseline_1326_ = lean_ctor_get(v_x_1325_, 0);
v_output_1327_ = lean_ctor_get(v_x_1325_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_x_1325_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1329_ = v_x_1325_;
v_isShared_1330_ = v_isSharedCheck_1360_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_output_1327_);
lean_inc(v_baseline_1326_);
lean_dec(v_x_1325_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1360_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1331_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__5));
v___x_1332_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__3));
v___x_1333_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__12);
v___x_1334_ = lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg(v_baseline_1326_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set_tag(v___x_1329_, 4);
lean_ctor_set(v___x_1329_, 1, v___x_1334_);
lean_ctor_set(v___x_1329_, 0, v___x_1333_);
v___x_1336_ = v___x_1329_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
uint8_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1337_ = 0;
v___x_1338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*1, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1332_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__9));
v___x_1341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = lean_box(1);
v___x_1343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg___closed__5));
v___x_1345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1343_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
v___x_1346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
lean_ctor_set(v___x_1346_, 1, v___x_1331_);
v___x_1347_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4, &lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4_once, _init_lp_tzap_x2dlean_TzapLean_instReprSuperOptBounds_repr___redArg___closed__4);
v___x_1348_ = lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg(v_output_1327_);
v___x_1349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*1, v___x_1337_);
v___x_1351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1346_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23, &lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23_once, _init_lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__23);
v___x_1353_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__24));
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v___x_1351_);
v___x_1355_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_instReprMetrics_repr___redArg___closed__25));
v___x_1356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1352_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
lean_ctor_set_uint8(v___x_1358_, sizeof(void*)*1, v___x_1337_);
return v___x_1358_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr(lean_object* v_x_1361_, lean_object* v_prec_1362_){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = lp_tzap_x2dlean_TzapLean_instReprReport_repr___redArg(v_x_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_instReprReport_repr___boxed(lean_object* v_x_1364_, lean_object* v_prec_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = lp_tzap_x2dlean_TzapLean_instReprReport_repr(v_x_1364_, v_prec_1365_);
lean_dec(v_prec_1365_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_runConfiguredChecked_spec__0(lean_object* v_cfg_1373_, lean_object* v_tbl_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_){
_start:
{
if (lean_obj_tag(v_a_1375_) == 0)
{
lean_object* v___x_1377_; 
lean_dec_ref(v_tbl_1374_);
lean_dec_ref(v_cfg_1373_);
v___x_1377_ = l_List_reverse___redArg(v_a_1376_);
return v___x_1377_;
}
else
{
lean_object* v_head_1378_; lean_object* v_tail_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1389_; 
v_head_1378_ = lean_ctor_get(v_a_1375_, 0);
v_tail_1379_ = lean_ctor_get(v_a_1375_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1375_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1381_ = v_a_1375_;
v_isShared_1382_ = v_isSharedCheck_1389_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_tail_1379_);
lean_inc(v_head_1378_);
lean_dec(v_a_1375_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1389_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
uint8_t v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1383_ = lean_unbox(v_head_1378_);
lean_dec(v_head_1378_);
lean_inc_ref(v_tbl_1374_);
lean_inc_ref(v_cfg_1373_);
v___x_1384_ = lp_tzap_x2dlean_TzapLean_executableStep(v_cfg_1373_, v_tbl_1374_, v___x_1383_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 1, v_a_1376_);
lean_ctor_set(v___x_1381_, 0, v___x_1384_);
v___x_1386_ = v___x_1381_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_a_1376_);
v___x_1386_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
v_a_1375_ = v_tail_1379_;
v_a_1376_ = v___x_1386_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfiguredChecked(lean_object* v_n_1390_, lean_object* v_m_1391_, lean_object* v_cfg_1392_, lean_object* v_tbl_1393_, lean_object* v_c_1394_, lean_object* v_o_1395_){
_start:
{
uint8_t v_level_1397_; lean_object* v_passes_1398_; uint8_t v_fixpoint_1399_; lean_object* v___y_1401_; 
v_level_1397_ = lean_ctor_get_uint8(v_o_1395_, sizeof(void*)*3);
v_passes_1398_ = lean_ctor_get(v_o_1395_, 0);
lean_inc(v_passes_1398_);
v_fixpoint_1399_ = lean_ctor_get_uint8(v_o_1395_, sizeof(void*)*3 + 1);
lean_dec_ref(v_o_1395_);
if (lean_obj_tag(v_passes_1398_) == 0)
{
lean_object* v___x_1419_; 
v___x_1419_ = lp_tzap_x2dlean_TzapLean_Level_pipeline(v_level_1397_);
v___y_1401_ = v___x_1419_;
goto v___jp_1400_;
}
else
{
lean_object* v_val_1420_; 
v_val_1420_ = lean_ctor_get(v_passes_1398_, 0);
lean_inc(v_val_1420_);
v___y_1401_ = v_val_1420_;
goto v___jp_1400_;
}
v___jp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v_round_1404_; 
v___x_1402_ = lean_box(0);
v___x_1403_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_runConfiguredChecked_spec__0(v_cfg_1392_, v_tbl_1393_, v___y_1401_, v___x_1402_);
v_round_1404_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(v___x_1403_);
if (lean_obj_tag(v_passes_1398_) == 0)
{
uint8_t v___x_1405_; 
v___x_1405_ = lp_tzap_x2dlean_TzapLean_Level_usesSuperOpt(v_level_1397_);
if (v___x_1405_ == 0)
{
if (v_fixpoint_1399_ == 0)
{
lean_object* v_run_1406_; lean_object* v___x_1407_; 
v_run_1406_ = lean_ctor_get(v_round_1404_, 1);
lean_inc_ref(v_run_1406_);
lean_dec_ref(v_round_1404_);
v___x_1407_ = lean_apply_4(v_run_1406_, v_n_1390_, v_m_1391_, v_c_1394_, lean_box(0));
return v___x_1407_;
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1408_ = lean_box(0);
v___x_1409_ = lp_tzap_x2dlean_TzapLean_roundFuel(v___x_1408_, v_c_1394_);
v___x_1410_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(v_n_1390_, v_m_1391_, v_round_1404_, v___x_1409_, v_c_1394_);
return v___x_1410_;
}
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = lp_tzap_x2dlean_TzapLean_Level_maxRounds(v_level_1397_);
v___x_1412_ = lp_tzap_x2dlean_TzapLean_roundFuel(v___x_1411_, v_c_1394_);
lean_dec(v___x_1411_);
v___x_1413_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(v_n_1390_, v_m_1391_, v_round_1404_, v___x_1412_, v_c_1394_);
return v___x_1413_;
}
}
else
{
lean_dec_ref_known(v_passes_1398_, 1);
if (v_fixpoint_1399_ == 0)
{
lean_object* v_run_1414_; lean_object* v___x_1415_; 
v_run_1414_ = lean_ctor_get(v_round_1404_, 1);
lean_inc_ref(v_run_1414_);
lean_dec_ref(v_round_1404_);
v___x_1415_ = lean_apply_4(v_run_1414_, v_n_1390_, v_m_1391_, v_c_1394_, lean_box(0));
return v___x_1415_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1416_ = lean_box(0);
v___x_1417_ = lp_tzap_x2dlean_TzapLean_roundFuel(v___x_1416_, v_c_1394_);
v___x_1418_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(v_n_1390_, v_m_1391_, v_round_1404_, v___x_1417_, v_c_1394_);
return v___x_1418_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfiguredChecked___boxed(lean_object* v_n_1421_, lean_object* v_m_1422_, lean_object* v_cfg_1423_, lean_object* v_tbl_1424_, lean_object* v_c_1425_, lean_object* v_o_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = lp_tzap_x2dlean_TzapLean_runConfiguredChecked(v_n_1421_, v_m_1422_, v_cfg_1423_, v_tbl_1424_, v_c_1425_, v_o_1426_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfigured(lean_object* v_cfg_1429_, lean_object* v_tbl_1430_, lean_object* v_c_1431_, lean_object* v_o_1432_){
_start:
{
uint8_t v___x_1434_; 
lean_inc_ref(v_c_1431_);
v___x_1434_ = lp_tzap_x2dlean_TzapLean_RawCircuit_instDecidableWf(v_c_1431_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
lean_dec_ref(v_o_1432_);
lean_dec_ref(v_tbl_1430_);
lean_dec_ref(v_cfg_1429_);
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_c_1431_);
return v___x_1435_;
}
else
{
lean_object* v_numQubits_1436_; lean_object* v_numCbits_1437_; lean_object* v___x_1438_; 
v_numQubits_1436_ = lean_ctor_get(v_c_1431_, 0);
lean_inc(v_numQubits_1436_);
v_numCbits_1437_ = lean_ctor_get(v_c_1431_, 1);
lean_inc(v_numCbits_1437_);
v___x_1438_ = lp_tzap_x2dlean_TzapLean_runConfiguredChecked(v_numQubits_1436_, v_numCbits_1437_, v_cfg_1429_, v_tbl_1430_, v_c_1431_, v_o_1432_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
v_a_1447_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1438_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1438_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_runConfigured___boxed(lean_object* v_cfg_1455_, lean_object* v_tbl_1456_, lean_object* v_c_1457_, lean_object* v_o_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = lp_tzap_x2dlean_TzapLean_runConfigured(v_cfg_1455_, v_tbl_1456_, v_c_1457_, v_o_1458_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___lam__0(lean_object* v___x_1461_, lean_object* v_x_1462_){
_start:
{
lean_inc(v___x_1461_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___lam__0___boxed(lean_object* v___x_1463_, lean_object* v_x_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = lp_tzap_x2dlean_TzapLean_optimize___lam__0(v___x_1463_, v_x_1464_);
lean_dec(v___x_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1(lean_object* v_fst_1466_, lean_object* v_x_1467_, lean_object* v_x_1468_){
_start:
{
if (lean_obj_tag(v_x_1468_) == 0)
{
return v_x_1467_;
}
else
{
lean_object* v_head_1469_; lean_object* v_tail_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v_head_1469_ = lean_ctor_get(v_x_1468_, 0);
v_tail_1470_ = lean_ctor_get(v_x_1468_, 1);
v___x_1471_ = lean_array_get_size(v_fst_1466_);
v___x_1472_ = lean_nat_dec_lt(v_head_1469_, v___x_1471_);
if (v___x_1472_ == 0)
{
v_x_1468_ = v_tail_1470_;
goto _start;
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_array_fget_borrowed(v_fst_1466_, v_head_1469_);
v___x_1475_ = lp_tzap_x2dlean_TzapLean_WidthTable_size(v___x_1474_);
v___x_1476_ = lean_nat_add(v_x_1467_, v___x_1475_);
lean_dec(v___x_1475_);
lean_dec(v_x_1467_);
v_x_1467_ = v___x_1476_;
v_x_1468_ = v_tail_1470_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1___boxed(lean_object* v_fst_1478_, lean_object* v_x_1479_, lean_object* v_x_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1(v_fst_1478_, v_x_1479_, v_x_1480_);
lean_dec(v_x_1480_);
lean_dec_ref(v_fst_1478_);
return v_res_1481_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0(uint8_t v_a_1482_, lean_object* v_x_1483_){
_start:
{
if (lean_obj_tag(v_x_1483_) == 0)
{
uint8_t v___x_1484_; 
v___x_1484_ = 0;
return v___x_1484_;
}
else
{
lean_object* v_head_1485_; lean_object* v_tail_1486_; uint8_t v___x_1487_; uint8_t v___x_1488_; 
v_head_1485_ = lean_ctor_get(v_x_1483_, 0);
v_tail_1486_ = lean_ctor_get(v_x_1483_, 1);
v___x_1487_ = lean_unbox(v_head_1485_);
v___x_1488_ = lp_tzap_x2dlean_TzapLean_instDecidableEqPassName(v_a_1482_, v___x_1487_);
if (v___x_1488_ == 0)
{
v_x_1483_ = v_tail_1486_;
goto _start;
}
else
{
return v___x_1488_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0___boxed(lean_object* v_a_1490_, lean_object* v_x_1491_){
_start:
{
uint8_t v_a_boxed_1492_; uint8_t v_res_1493_; lean_object* v_r_1494_; 
v_a_boxed_1492_ = lean_unbox(v_a_1490_);
v_res_1493_ = lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0(v_a_boxed_1492_, v_x_1491_);
lean_dec(v_x_1491_);
v_r_1494_ = lean_box(v_res_1493_);
return v_r_1494_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize(lean_object* v_c_1503_, lean_object* v_o_1504_){
_start:
{
lean_object* v___y_1507_; lean_object* v_tbl_1508_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; uint8_t v_level_1576_; lean_object* v_passes_1577_; uint8_t v_verbose_1578_; lean_object* v___y_1580_; lean_object* v___y_1581_; uint8_t v___y_1582_; lean_object* v___y_1617_; 
v_level_1576_ = lean_ctor_get_uint8(v_o_1504_, sizeof(void*)*3);
v_passes_1577_ = lean_ctor_get(v_o_1504_, 0);
v_verbose_1578_ = lean_ctor_get_uint8(v_o_1504_, sizeof(void*)*3 + 2);
if (lean_obj_tag(v_passes_1577_) == 0)
{
lean_object* v___x_1645_; 
v___x_1645_ = lp_tzap_x2dlean_TzapLean_Level_pipeline(v_level_1576_);
v___y_1617_ = v___x_1645_;
goto v___jp_1616_;
}
else
{
lean_object* v_val_1646_; 
v_val_1646_ = lean_ctor_get(v_passes_1577_, 0);
lean_inc(v_val_1646_);
v___y_1617_ = v_val_1646_;
goto v___jp_1616_;
}
v___jp_1506_:
{
lean_object* v_baseline_1509_; lean_object* v___x_1510_; 
lean_inc_ref(v_c_1503_);
v_baseline_1509_ = lp_tzap_x2dlean_TzapLean_Metrics_of(v_c_1503_);
v___x_1510_ = lp_tzap_x2dlean_TzapLean_runConfigured(v___y_1507_, v_tbl_1508_, v_c_1503_, v_o_1504_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1521_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1513_ = v___x_1510_;
v_isShared_1514_ = v_isSharedCheck_1521_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1521_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1519_; 
lean_inc(v_a_1511_);
v___x_1515_ = lp_tzap_x2dlean_TzapLean_Metrics_of(v_a_1511_);
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v_baseline_1509_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
v___x_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1517_, 0, v_a_1511_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1517_);
v___x_1519_ = v___x_1513_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec_ref(v_baseline_1509_);
v_a_1522_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1510_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1510_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
v___jp_1530_:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1537_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__0));
v___x_1538_ = lean_string_append(v___x_1537_, v___y_1536_);
v___x_1539_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__1));
v___x_1540_ = lean_string_append(v___x_1538_, v___x_1539_);
v___x_1541_ = lp_tzap_x2dlean_TzapLean_fmtNum(v___y_1535_);
v___x_1542_ = lean_string_append(v___x_1540_, v___x_1541_);
lean_dec_ref(v___x_1541_);
v___x_1543_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__2));
v___x_1544_ = lean_string_append(v___x_1542_, v___x_1543_);
v___x_1545_ = lean_nat_sub(v___y_1533_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec(v___y_1533_);
v___x_1546_ = lp_tzap_x2dlean_TzapLean_fmtSecs(v___x_1545_);
lean_dec(v___x_1545_);
v___x_1547_ = lean_string_append(v___x_1544_, v___x_1546_);
lean_dec_ref(v___x_1546_);
v___x_1548_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__3));
v___x_1549_ = lean_string_append(v___x_1547_, v___x_1548_);
v___x_1550_ = l_IO_eprintln___at___00Lean_Elab_Command_elabDumpAsyncEnvState_spec__0(v___x_1549_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec_ref_known(v___x_1550_, 1);
v___x_1551_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__4));
v___x_1552_ = l_IO_eprintln___at___00Lean_Elab_Command_elabDumpAsyncEnvState_spec__0(v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_dec_ref_known(v___x_1552_, 1);
v___y_1507_ = v___y_1534_;
v_tbl_1508_ = v___y_1531_;
goto v___jp_1506_;
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec_ref(v___y_1534_);
lean_dec_ref(v___y_1531_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1552_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1552_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v___y_1534_);
lean_dec_ref(v___y_1531_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1561_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1550_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1550_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
v___jp_1569_:
{
lean_object* v___x_1575_; 
v___x_1575_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__5));
v___y_1531_ = v___y_1570_;
v___y_1532_ = v___y_1571_;
v___y_1533_ = v___y_1572_;
v___y_1534_ = v___y_1573_;
v___y_1535_ = v___y_1574_;
v___y_1536_ = v___x_1575_;
goto v___jp_1530_;
}
v___jp_1579_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_io_mono_nanos_now();
lean_inc_ref(v___y_1580_);
v___x_1584_ = lp_tzap_x2dlean_TzapLean_TableCache_loadOrBuild(v___y_1580_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v_fst_1586_; lean_object* v_snd_1587_; lean_object* v_maxQubits_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___f_1594_; lean_object* v___x_1595_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
v_fst_1586_ = lean_ctor_get(v_a_1585_, 0);
lean_inc(v_fst_1586_);
v_snd_1587_ = lean_ctor_get(v_a_1585_, 1);
lean_inc(v_snd_1587_);
lean_dec(v_a_1585_);
v_maxQubits_1588_ = lean_ctor_get(v___y_1580_, 0);
lean_inc(v_maxQubits_1588_);
lean_dec_ref(v___y_1580_);
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = lean_unsigned_to_nat(1u);
v___x_1591_ = lean_nat_add(v_maxQubits_1588_, v___x_1590_);
lean_dec(v_maxQubits_1588_);
v___x_1592_ = l_List_range(v___x_1591_);
v___x_1593_ = lp_tzap_x2dlean_List_foldl___at___00TzapLean_optimize_spec__1(v_fst_1586_, v___x_1589_, v___x_1592_);
lean_dec(v___x_1592_);
lean_inc(v___x_1593_);
v___f_1594_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_optimize___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1594_, 0, v___x_1593_);
v___x_1595_ = lp_tzap_x2dlean_TzapLean_force(v___f_1594_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v___x_1596_; 
lean_dec_ref_known(v___x_1595_, 1);
v___x_1596_ = lean_io_mono_nanos_now();
if (v_verbose_1578_ == 0)
{
uint8_t v___x_1597_; 
v___x_1597_ = lean_unbox(v_snd_1587_);
lean_dec(v_snd_1587_);
if (v___x_1597_ == 0)
{
if (v___y_1582_ == 0)
{
lean_dec(v___x_1596_);
lean_dec(v___x_1593_);
lean_dec(v___x_1583_);
v___y_1507_ = v___y_1581_;
v_tbl_1508_ = v_fst_1586_;
goto v___jp_1506_;
}
else
{
v___y_1570_ = v_fst_1586_;
v___y_1571_ = v___x_1583_;
v___y_1572_ = v___x_1596_;
v___y_1573_ = v___y_1581_;
v___y_1574_ = v___x_1593_;
goto v___jp_1569_;
}
}
else
{
lean_dec(v___x_1596_);
lean_dec(v___x_1593_);
lean_dec(v___x_1583_);
v___y_1507_ = v___y_1581_;
v_tbl_1508_ = v_fst_1586_;
goto v___jp_1506_;
}
}
else
{
uint8_t v___x_1598_; 
v___x_1598_ = lean_unbox(v_snd_1587_);
lean_dec(v_snd_1587_);
if (v___x_1598_ == 0)
{
v___y_1570_ = v_fst_1586_;
v___y_1571_ = v___x_1583_;
v___y_1572_ = v___x_1596_;
v___y_1573_ = v___y_1581_;
v___y_1574_ = v___x_1593_;
goto v___jp_1569_;
}
else
{
lean_object* v___x_1599_; 
v___x_1599_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__6));
v___y_1531_ = v_fst_1586_;
v___y_1532_ = v___x_1583_;
v___y_1533_ = v___x_1596_;
v___y_1534_ = v___y_1581_;
v___y_1535_ = v___x_1593_;
v___y_1536_ = v___x_1599_;
goto v___jp_1530_;
}
}
}
else
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_dec(v___x_1593_);
lean_dec(v_snd_1587_);
lean_dec(v_fst_1586_);
lean_dec(v___x_1583_);
lean_dec_ref(v___y_1581_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1600_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1595_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1595_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v___x_1583_);
lean_dec_ref(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1608_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1584_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1584_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
v___jp_1616_:
{
lean_object* v___x_1618_; lean_object* v_fst_1619_; lean_object* v_snd_1620_; uint8_t v___x_1621_; uint8_t v_needsTable_1622_; 
lean_inc_ref(v_o_1504_);
v___x_1618_ = lp_tzap_x2dlean_TzapLean_resolveBounds(v_o_1504_);
v_fst_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_fst_1619_);
v_snd_1620_ = lean_ctor_get(v___x_1618_, 1);
lean_inc(v_snd_1620_);
lean_dec_ref(v___x_1618_);
v___x_1621_ = 2;
v_needsTable_1622_ = lp_tzap_x2dlean_List_elem___at___00TzapLean_optimize_spec__0(v___x_1621_, v___y_1617_);
lean_dec(v___y_1617_);
if (v_needsTable_1622_ == 0)
{
lean_object* v___x_1623_; 
lean_dec(v_snd_1620_);
v___x_1623_ = lp_tzap_x2dlean_TzapLean_instInhabitedSynthTable_default;
v___y_1507_ = v_fst_1619_;
v_tbl_1508_ = v___x_1623_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1624_; 
lean_inc(v_snd_1620_);
v___x_1624_ = lp_tzap_x2dlean_TzapLean_TableCache_isCached(v_snd_1620_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; uint8_t v___x_1626_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1626_ = lean_unbox(v_a_1625_);
lean_dec(v_a_1625_);
if (v___x_1626_ == 0)
{
if (v_needsTable_1622_ == 0)
{
v___y_1580_ = v_snd_1620_;
v___y_1581_ = v_fst_1619_;
v___y_1582_ = v_needsTable_1622_;
goto v___jp_1579_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_optimize___closed__7));
v___x_1628_ = l_IO_eprintln___at___00Lean_Elab_Command_elabDumpAsyncEnvState_spec__0(v___x_1627_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_dec_ref_known(v___x_1628_, 1);
v___y_1580_ = v_snd_1620_;
v___y_1581_ = v_fst_1619_;
v___y_1582_ = v_needsTable_1622_;
goto v___jp_1579_;
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_snd_1620_);
lean_dec(v_fst_1619_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1628_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1628_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
}
else
{
v___y_1580_ = v_snd_1620_;
v___y_1581_ = v_fst_1619_;
v___y_1582_ = v_needsTable_1622_;
goto v___jp_1579_;
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec(v_snd_1620_);
lean_dec(v_fst_1619_);
lean_dec_ref(v_o_1504_);
lean_dec_ref(v_c_1503_);
v_a_1637_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1624_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1624_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_optimize___boxed(lean_object* v_c_1647_, lean_object* v_o_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = lp_tzap_x2dlean_TzapLean_optimize(v_c_1647_, v_o_1648_);
return v_res_1650_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_SuperOptProof(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFoldRand(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_Qasm(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_TableCache(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_Pipeline(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_Optimize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_SuperOptProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_PhaseFoldRand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_Qasm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_TableCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_tzap_x2dlean_TzapLean_instInhabitedLevel_default = _init_lp_tzap_x2dlean_TzapLean_instInhabitedLevel_default();
lp_tzap_x2dlean_TzapLean_instInhabitedLevel = _init_lp_tzap_x2dlean_TzapLean_instInhabitedLevel();
lp_tzap_x2dlean_TzapLean_instInhabitedPassName_default = _init_lp_tzap_x2dlean_TzapLean_instInhabitedPassName_default();
lp_tzap_x2dlean_TzapLean_instInhabitedPassName = _init_lp_tzap_x2dlean_TzapLean_instInhabitedPassName();
lp_tzap_x2dlean_TzapLean_PassName_allNames = _init_lp_tzap_x2dlean_TzapLean_PassName_allNames();
lean_mark_persistent(lp_tzap_x2dlean_TzapLean_PassName_allNames);
lp_tzap_x2dlean_TzapLean_tagBits = _init_lp_tzap_x2dlean_TzapLean_tagBits();
lean_mark_persistent(lp_tzap_x2dlean_TzapLean_tagBits);
lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1 = _init_lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1();
lean_mark_persistent(lp_tzap_x2dlean_List_foldl___at___00TzapLean_fmtNum_spec__0___boxed__const__1);
lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1 = _init_lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1();
lean_mark_persistent(lp_tzap_x2dlean_TzapLean_fmtSecs___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
