// Lean compiler output
// Module: TzapLean.PhaseFold
// Imports: public import Init public meta import Init public import TzapLean.Merge public import TzapLean.CnotMin
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
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_lor(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_lxor(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_rotAngle(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_unbit(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_depthAux_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedGate_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_Gate_isUnitary(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_testBit(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_bit(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_io_get_random_bytes(size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_Gate_allocates(lean_object*);
lean_object* lp_mathlib_ZMod_commRing(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_signedAngle(uint8_t, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_emitRotation(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_ones___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_ones___closed__0;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_ones___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_ones___closed__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ones(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ones___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWordAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWordAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_onesTag(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_onesTag___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_tzap_x2dlean_TzapLean_TState_step___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_tzap_x2dlean_TzapLean_TState_step___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_TState_step___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_matchTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_matchTag___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_matchTag___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0;
static lean_once_cell_t lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_emitAll(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordsOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_randomSample___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_randomSample___closed__0;
static const lean_string_object lp_tzap_x2dlean_TzapLean_randomSample___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "phase-fold random sample is too large for this platform"};
static const lean_object* lp_tzap_x2dlean_TzapLean_randomSample___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_randomSample___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_randomSample___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_randomSample___closed__1_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_randomSample___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_randomSample___closed__2_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_tzap_x2dlean_TzapLean_ones___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(2u);
v___x_2_ = lp_mathlib_ZMod_commRing(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_ones___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_ones___closed__0, &lp_tzap_x2dlean_TzapLean_ones___closed__0_once, _init_lp_tzap_x2dlean_TzapLean_ones___closed__0);
v___x_4_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ones(lean_object* v_k_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; lean_object* v_toAddMonoidWithOne_8_; lean_object* v_toOne_9_; 
v___x_7_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_ones___closed__1, &lp_tzap_x2dlean_TzapLean_ones___closed__1_once, _init_lp_tzap_x2dlean_TzapLean_ones___closed__1);
v_toAddMonoidWithOne_8_ = lean_ctor_get(v___x_7_, 1);
v_toOne_9_ = lean_ctor_get(v_toAddMonoidWithOne_8_, 2);
lean_inc(v_toOne_9_);
return v_toOne_9_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ones___boxed(lean_object* v_k_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_tzap_x2dlean_TzapLean_ones(v_k_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec(v_k_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___redArg(lean_object* v_w_13_, lean_object* v_j_14_){
_start:
{
uint8_t v___x_15_; lean_object* v___x_16_; 
v___x_15_ = l_Nat_testBit(v_w_13_, v_j_14_);
v___x_16_ = lp_tzap_x2dlean_TzapLean_bit(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___redArg___boxed(lean_object* v_w_17_, lean_object* v_j_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = lp_tzap_x2dlean_TzapLean_wordToBits___redArg(v_w_17_, v_j_18_);
lean_dec(v_j_18_);
lean_dec(v_w_17_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits(lean_object* v_k_20_, lean_object* v_w_21_, lean_object* v_j_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lp_tzap_x2dlean_TzapLean_wordToBits___redArg(v_w_21_, v_j_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordToBits___boxed(lean_object* v_k_24_, lean_object* v_w_25_, lean_object* v_j_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lp_tzap_x2dlean_TzapLean_wordToBits(v_k_24_, v_w_25_, v_j_26_);
lean_dec(v_j_26_);
lean_dec(v_w_25_);
lean_dec(v_k_24_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWordAux(lean_object* v_t_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_zero_30_; uint8_t v_isZero_31_; 
v_zero_30_ = lean_unsigned_to_nat(0u);
v_isZero_31_ = lean_nat_dec_eq(v_x_29_, v_zero_30_);
if (v_isZero_31_ == 1)
{
lean_dec_ref(v_t_28_);
return v_zero_30_;
}
else
{
lean_object* v_one_32_; lean_object* v_n_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_one_32_ = lean_unsigned_to_nat(1u);
v_n_33_ = lean_nat_sub(v_x_29_, v_one_32_);
lean_inc_ref(v_t_28_);
v___x_34_ = lp_tzap_x2dlean_TzapLean_bitsToWordAux(v_t_28_, v_n_33_);
lean_inc(v_n_33_);
v___x_35_ = lean_apply_1(v_t_28_, v_n_33_);
v___x_36_ = lean_unbox(v___x_35_);
if (v___x_36_ == 0)
{
lean_dec(v_n_33_);
return v___x_34_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_unsigned_to_nat(2u);
v___x_38_ = lean_nat_pow(v___x_37_, v_n_33_);
lean_dec(v_n_33_);
v___x_39_ = lean_nat_lor(v___x_34_, v___x_38_);
lean_dec(v___x_38_);
lean_dec(v___x_34_);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWordAux___boxed(lean_object* v_t_40_, lean_object* v_x_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_tzap_x2dlean_TzapLean_bitsToWordAux(v_t_40_, v_x_41_);
lean_dec(v_x_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___redArg(lean_object* v_x_43_, lean_object* v_h__1_44_, lean_object* v_h__2_45_){
_start:
{
lean_object* v_zero_46_; uint8_t v_isZero_47_; 
v_zero_46_ = lean_unsigned_to_nat(0u);
v_isZero_47_ = lean_nat_dec_eq(v_x_43_, v_zero_46_);
if (v_isZero_47_ == 1)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v_h__2_45_);
v___x_48_ = lean_box(0);
v___x_49_ = lean_apply_1(v_h__1_44_, v___x_48_);
return v___x_49_;
}
else
{
lean_object* v_one_50_; lean_object* v_n_51_; lean_object* v___x_52_; 
lean_dec(v_h__1_44_);
v_one_50_ = lean_unsigned_to_nat(1u);
v_n_51_ = lean_nat_sub(v_x_43_, v_one_50_);
v___x_52_ = lean_apply_1(v_h__2_45_, v_n_51_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___redArg___boxed(lean_object* v_x_53_, lean_object* v_h__1_54_, lean_object* v_h__2_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___redArg(v_x_53_, v_h__1_54_, v_h__2_55_);
lean_dec(v_x_53_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter(lean_object* v_motive_57_, lean_object* v_x_58_, lean_object* v_h__1_59_, lean_object* v_h__2_60_){
_start:
{
lean_object* v_zero_61_; uint8_t v_isZero_62_; 
v_zero_61_ = lean_unsigned_to_nat(0u);
v_isZero_62_ = lean_nat_dec_eq(v_x_58_, v_zero_61_);
if (v_isZero_62_ == 1)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec(v_h__2_60_);
v___x_63_ = lean_box(0);
v___x_64_ = lean_apply_1(v_h__1_59_, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v_one_65_; lean_object* v_n_66_; lean_object* v___x_67_; 
lean_dec(v_h__1_59_);
v_one_65_ = lean_unsigned_to_nat(1u);
v_n_66_ = lean_nat_sub(v_x_58_, v_one_65_);
v___x_67_ = lean_apply_1(v_h__2_60_, v_n_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter___boxed(lean_object* v_motive_68_, lean_object* v_x_69_, lean_object* v_h__1_70_, lean_object* v_h__2_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_bitsToWordAux_match__1_splitter(v_motive_68_, v_x_69_, v_h__1_70_, v_h__2_71_);
lean_dec(v_x_69_);
return v_res_72_;
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0(lean_object* v_k_73_, lean_object* v_t_74_, lean_object* v_j_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_nat_dec_lt(v_j_75_, v_k_73_);
if (v___x_76_ == 0)
{
lean_dec(v_j_75_);
lean_dec_ref(v_t_74_);
return v___x_76_;
}
else
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = lean_apply_1(v_t_74_, v_j_75_);
v___x_78_ = lp_tzap_x2dlean_TzapLean_unbit(v___x_77_);
lean_dec(v___x_77_);
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0___boxed(lean_object* v_k_79_, lean_object* v_t_80_, lean_object* v_j_81_){
_start:
{
uint8_t v_res_82_; lean_object* v_r_83_; 
v_res_82_ = lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0(v_k_79_, v_t_80_, v_j_81_);
lean_dec(v_k_79_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_bitsToWord(lean_object* v_k_84_, lean_object* v_t_85_){
_start:
{
lean_object* v___f_86_; lean_object* v___x_87_; 
lean_inc(v_k_84_);
v___f_86_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_bitsToWord___lam__0___boxed), 3, 2);
lean_closure_set(v___f_86_, 0, v_k_84_);
lean_closure_set(v___f_86_, 1, v_t_85_);
v___x_87_ = lp_tzap_x2dlean_TzapLean_bitsToWordAux(v___f_86_, v_k_84_);
lean_dec(v_k_84_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_onesTag(lean_object* v_k_88_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_89_ = lean_unsigned_to_nat(2u);
v___x_90_ = lean_nat_pow(v___x_89_, v_k_88_);
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_sub(v___x_90_, v___x_91_);
lean_dec(v___x_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_onesTag___boxed(lean_object* v_k_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_93_);
lean_dec(v_k_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(lean_object* v_ts_95_, lean_object* v_q_96_){
_start:
{
lean_object* v_tags_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v_tags_97_ = lean_ctor_get(v_ts_95_, 0);
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = l_List_getD___redArg(v_tags_97_, v_q_96_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg___boxed(lean_object* v_ts_100_, lean_object* v_q_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_100_, v_q_101_);
lean_dec_ref(v_ts_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf(lean_object* v_k_103_, lean_object* v_ts_104_, lean_object* v_q_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_104_, v_q_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___boxed(lean_object* v_k_107_, lean_object* v_ts_108_, lean_object* v_q_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = lp_tzap_x2dlean_TzapLean_TState_tagOf(v_k_107_, v_ts_108_, v_q_109_);
lean_dec_ref(v_ts_108_);
lean_dec(v_k_107_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___redArg(lean_object* v_wdraws_111_, lean_object* v_n_112_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
lean_inc(v_n_112_);
v___x_113_ = l_List_range(v_n_112_);
v___x_114_ = lean_box(0);
v___x_115_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_depthAux_spec__0(v_wdraws_111_, v___x_113_, v___x_114_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v_n_112_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial(lean_object* v_k_117_, lean_object* v_wdraws_118_, lean_object* v_n_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_118_, v_n_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___boxed(lean_object* v_k_121_, lean_object* v_wdraws_122_, lean_object* v_n_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_tzap_x2dlean_TzapLean_TState_initial(v_k_121_, v_wdraws_122_, v_n_123_);
lean_dec(v_k_121_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step(lean_object* v_k_127_, lean_object* v_wdraws_128_, lean_object* v_ts_129_, lean_object* v_g_130_){
_start:
{
lean_object* v_q_132_; 
switch(lean_obj_tag(v_g_130_))
{
case 0:
{
lean_object* v_q_147_; lean_object* v_tags_148_; lean_object* v_fresh_149_; lean_object* v___x_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref(v_wdraws_128_);
v_q_147_ = lean_ctor_get(v_g_130_, 0);
lean_inc_n(v_q_147_, 2);
lean_dec_ref_known(v_g_130_, 1);
v_tags_148_ = lean_ctor_get(v_ts_129_, 0);
lean_inc(v_tags_148_);
v_fresh_149_ = lean_ctor_get(v_ts_129_, 1);
lean_inc(v_fresh_149_);
v___x_150_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_129_, v_q_147_);
v_isSharedCheck_161_ = !lean_is_exclusive(v_ts_129_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; lean_object* v_unused_163_; 
v_unused_162_ = lean_ctor_get(v_ts_129_, 1);
lean_dec(v_unused_162_);
v_unused_163_ = lean_ctor_get(v_ts_129_, 0);
lean_dec(v_unused_163_);
v___x_152_ = v_ts_129_;
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
else
{
lean_dec(v_ts_129_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_154_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_127_);
v___x_155_ = lean_nat_lxor(v___x_150_, v___x_154_);
lean_dec(v___x_154_);
lean_dec(v___x_150_);
v___x_156_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_TState_step___closed__0));
lean_inc(v_tags_148_);
v___x_157_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_tags_148_, v___x_155_, v_tags_148_, v_q_147_, v___x_156_);
lean_dec(v_tags_148_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_157_);
v___x_159_ = v___x_152_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_fresh_149_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
case 8:
{
lean_object* v_control_164_; lean_object* v_target_165_; lean_object* v_tags_166_; lean_object* v_fresh_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_179_; 
lean_dec_ref(v_wdraws_128_);
v_control_164_ = lean_ctor_get(v_g_130_, 0);
lean_inc(v_control_164_);
v_target_165_ = lean_ctor_get(v_g_130_, 1);
lean_inc_n(v_target_165_, 2);
lean_dec_ref_known(v_g_130_, 2);
v_tags_166_ = lean_ctor_get(v_ts_129_, 0);
lean_inc(v_tags_166_);
v_fresh_167_ = lean_ctor_get(v_ts_129_, 1);
lean_inc(v_fresh_167_);
v___x_168_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_129_, v_target_165_);
v___x_169_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_129_, v_control_164_);
v_isSharedCheck_179_ = !lean_is_exclusive(v_ts_129_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_180_ = lean_ctor_get(v_ts_129_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_ts_129_, 0);
lean_dec(v_unused_181_);
v___x_171_ = v_ts_129_;
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
else
{
lean_dec(v_ts_129_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_173_ = lean_nat_lxor(v___x_168_, v___x_169_);
lean_dec(v___x_169_);
lean_dec(v___x_168_);
v___x_174_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_TState_step___closed__0));
lean_inc(v_tags_166_);
v___x_175_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_tags_166_, v___x_173_, v_tags_166_, v_target_165_, v___x_174_);
lean_dec(v_tags_166_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_175_);
v___x_177_ = v___x_171_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_fresh_167_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
case 1:
{
lean_object* v_q_182_; 
v_q_182_ = lean_ctor_get(v_g_130_, 0);
lean_inc(v_q_182_);
lean_dec_ref_known(v_g_130_, 1);
v_q_132_ = v_q_182_;
goto v___jp_131_;
}
case 10:
{
lean_object* v_target_183_; lean_object* v_tags_184_; lean_object* v_fresh_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_197_; 
v_target_183_ = lean_ctor_get(v_g_130_, 2);
lean_inc(v_target_183_);
lean_dec_ref_known(v_g_130_, 3);
v_tags_184_ = lean_ctor_get(v_ts_129_, 0);
v_fresh_185_ = lean_ctor_get(v_ts_129_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_ts_129_);
if (v_isSharedCheck_197_ == 0)
{
v___x_187_ = v_ts_129_;
v_isShared_188_ = v_isSharedCheck_197_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_fresh_185_);
lean_inc(v_tags_184_);
lean_dec(v_ts_129_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_197_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
lean_inc(v_fresh_185_);
v___x_189_ = lean_apply_1(v_wdraws_128_, v_fresh_185_);
v___x_190_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_TState_step___closed__0));
lean_inc(v_tags_184_);
v___x_191_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_tags_184_, v___x_189_, v_tags_184_, v_target_183_, v___x_190_);
lean_dec(v_tags_184_);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_add(v_fresh_185_, v___x_192_);
lean_dec(v_fresh_185_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v___x_193_);
lean_ctor_set(v___x_187_, 0, v___x_191_);
v___x_195_ = v___x_187_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
case 13:
{
lean_object* v_q_198_; 
v_q_198_ = lean_ctor_get(v_g_130_, 0);
lean_inc(v_q_198_);
lean_dec_ref_known(v_g_130_, 1);
v_q_132_ = v_q_198_;
goto v___jp_131_;
}
default: 
{
lean_dec_ref(v_g_130_);
lean_dec_ref(v_wdraws_128_);
return v_ts_129_;
}
}
v___jp_131_:
{
lean_object* v_tags_133_; lean_object* v_fresh_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_146_; 
v_tags_133_ = lean_ctor_get(v_ts_129_, 0);
v_fresh_134_ = lean_ctor_get(v_ts_129_, 1);
v_isSharedCheck_146_ = !lean_is_exclusive(v_ts_129_);
if (v_isSharedCheck_146_ == 0)
{
v___x_136_ = v_ts_129_;
v_isShared_137_ = v_isSharedCheck_146_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_fresh_134_);
lean_inc(v_tags_133_);
lean_dec(v_ts_129_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_146_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
lean_inc(v_fresh_134_);
v___x_138_ = lean_apply_1(v_wdraws_128_, v_fresh_134_);
v___x_139_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_TState_step___closed__0));
lean_inc(v_tags_133_);
v___x_140_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_tags_133_, v___x_138_, v_tags_133_, v_q_132_, v___x_139_);
lean_dec(v_tags_133_);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_add(v_fresh_134_, v___x_141_);
lean_dec(v_fresh_134_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v___x_142_);
lean_ctor_set(v___x_136_, 0, v___x_140_);
v___x_144_ = v___x_136_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step___boxed(lean_object* v_k_199_, lean_object* v_wdraws_200_, lean_object* v_ts_201_, lean_object* v_g_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_199_, v_wdraws_200_, v_ts_201_, v_g_202_);
lean_dec(v_k_199_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps(lean_object* v_k_204_, lean_object* v_wdraws_205_, lean_object* v_ts_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
lean_dec_ref(v_wdraws_205_);
return v_ts_206_;
}
else
{
lean_object* v_head_208_; lean_object* v_tail_209_; lean_object* v___x_210_; 
v_head_208_ = lean_ctor_get(v_x_207_, 0);
lean_inc(v_head_208_);
v_tail_209_ = lean_ctor_get(v_x_207_, 1);
lean_inc(v_tail_209_);
lean_dec_ref_known(v_x_207_, 2);
lean_inc_ref(v_wdraws_205_);
v___x_210_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_204_, v_wdraws_205_, v_ts_206_, v_head_208_);
v_ts_206_ = v___x_210_;
v_x_207_ = v_tail_209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps___boxed(lean_object* v_k_212_, lean_object* v_wdraws_213_, lean_object* v_ts_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = lp_tzap_x2dlean_TzapLean_TState_steps(v_k_212_, v_wdraws_213_, v_ts_214_, v_x_215_);
lean_dec(v_k_212_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag(lean_object* v_k_220_, lean_object* v_pending_221_, lean_object* v_later_222_){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = lean_nat_dec_eq(v_later_222_, v_pending_221_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_224_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_220_);
v___x_225_ = lean_nat_lxor(v_pending_221_, v___x_224_);
lean_dec(v___x_224_);
v___x_226_ = lean_nat_dec_eq(v_later_222_, v___x_225_);
lean_dec(v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
v___x_227_ = lean_box(0);
return v___x_227_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(v___x_226_);
v___x_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
else
{
lean_object* v___x_230_; 
v___x_230_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_matchTag___closed__0));
return v___x_230_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag___boxed(lean_object* v_k_231_, lean_object* v_pending_232_, lean_object* v_later_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lp_tzap_x2dlean_TzapLean_matchTag(v_k_231_, v_pending_232_, v_later_233_);
lean_dec(v_later_233_);
lean_dec(v_pending_232_);
lean_dec(v_k_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto(lean_object* v_k_235_, lean_object* v_wdraws_236_, lean_object* v_ts_237_, lean_object* v_tag_238_, lean_object* v_00_u03b8_239_, lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
lean_object* v___x_241_; 
lean_dec_ref(v_00_u03b8_239_);
lean_dec_ref(v_ts_237_);
lean_dec_ref(v_wdraws_236_);
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v_head_242_; lean_object* v_tail_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_302_; 
v_head_242_ = lean_ctor_get(v_x_240_, 0);
v_tail_243_ = lean_ctor_get(v_x_240_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_240_);
if (v_isSharedCheck_302_ == 0)
{
v___x_245_ = v_x_240_;
v_isShared_246_ = v_isSharedCheck_302_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_tail_243_);
lean_inc(v_head_242_);
lean_dec(v_x_240_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_302_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
uint8_t v___x_247_; 
v___x_247_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v_head_242_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; 
lean_del_object(v___x_245_);
lean_dec(v_tail_243_);
lean_dec(v_head_242_);
lean_dec_ref(v_00_u03b8_239_);
lean_dec_ref(v_ts_237_);
lean_dec_ref(v_wdraws_236_);
v___x_248_ = lean_box(0);
return v___x_248_;
}
else
{
lean_object* v___x_249_; 
lean_inc(v_head_242_);
v___x_249_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_242_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_inc(v_head_242_);
lean_inc_ref(v_wdraws_236_);
v___x_250_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_235_, v_wdraws_236_, v_ts_237_, v_head_242_);
v___x_251_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_235_, v_wdraws_236_, v___x_250_, v_tag_238_, v_00_u03b8_239_, v_tail_243_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_del_object(v___x_245_);
lean_dec(v_head_242_);
return v___x_251_;
}
else
{
lean_object* v_val_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_262_; 
v_val_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_262_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_val_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v_val_252_);
v___x_257_ = v___x_245_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_head_242_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_val_252_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_259_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_257_);
v___x_259_ = v___x_254_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
else
{
lean_object* v_val_263_; lean_object* v_fst_264_; lean_object* v_snd_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_301_; 
v_val_263_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_val_263_);
lean_dec_ref_known(v___x_249_, 1);
v_fst_264_ = lean_ctor_get(v_val_263_, 0);
v_snd_265_ = lean_ctor_get(v_val_263_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v_val_263_);
if (v_isSharedCheck_301_ == 0)
{
v___x_267_ = v_val_263_;
v_isShared_268_ = v_isSharedCheck_301_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_snd_265_);
lean_inc(v_fst_264_);
lean_dec(v_val_263_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_301_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
lean_inc(v_snd_265_);
v___x_269_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_237_, v_snd_265_);
v___x_270_ = lp_tzap_x2dlean_TzapLean_matchTag(v_k_235_, v_tag_238_, v___x_269_);
lean_dec(v___x_269_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_del_object(v___x_267_);
lean_dec(v_snd_265_);
lean_dec(v_fst_264_);
lean_inc(v_head_242_);
lean_inc_ref(v_wdraws_236_);
v___x_271_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_235_, v_wdraws_236_, v_ts_237_, v_head_242_);
v___x_272_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_235_, v_wdraws_236_, v___x_271_, v_tag_238_, v_00_u03b8_239_, v_tail_243_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_del_object(v___x_245_);
lean_dec(v_head_242_);
return v___x_272_;
}
else
{
lean_object* v_val_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_283_; 
v_val_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_283_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_283_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_val_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_283_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v_val_273_);
v___x_278_ = v___x_245_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_head_242_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_val_273_);
v___x_278_ = v_reuseFailAlloc_282_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_278_);
v___x_280_ = v___x_275_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
}
else
{
lean_object* v_val_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_300_; 
lean_dec(v_head_242_);
lean_dec_ref(v_ts_237_);
lean_dec_ref(v_wdraws_236_);
v_val_284_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_300_ == 0)
{
v___x_286_ = v___x_270_;
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_val_284_);
lean_dec(v___x_270_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
uint8_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_288_ = lean_unbox(v_val_284_);
lean_dec(v_val_284_);
v___x_289_ = lp_tzap_x2dlean_TzapLean_signedAngle(v___x_288_, v_00_u03b8_239_);
v___x_290_ = l_Rat_add(v_fst_264_, v___x_289_);
if (v_isShared_268_ == 0)
{
lean_ctor_set_tag(v___x_267_, 7);
lean_ctor_set(v___x_267_, 0, v___x_290_);
v___x_292_ = v___x_267_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_snd_265_);
v___x_292_ = v_reuseFailAlloc_299_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_294_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_292_);
v___x_294_ = v___x_245_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_tail_243_);
v___x_294_ = v_reuseFailAlloc_298_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_296_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_294_);
v___x_296_ = v___x_286_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
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
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto___boxed(lean_object* v_k_303_, lean_object* v_wdraws_304_, lean_object* v_ts_305_, lean_object* v_tag_306_, lean_object* v_00_u03b8_307_, lean_object* v_x_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_303_, v_wdraws_304_, v_ts_305_, v_tag_306_, v_00_u03b8_307_, v_x_308_);
lean_dec(v_tag_306_);
lean_dec(v_k_303_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object* v_x_310_, lean_object* v_h__1_311_, lean_object* v_h__2_312_){
_start:
{
if (lean_obj_tag(v_x_310_) == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec(v_h__2_312_);
v___x_313_ = lean_box(0);
v___x_314_ = lean_apply_1(v_h__1_311_, v___x_313_);
return v___x_314_;
}
else
{
lean_object* v_head_315_; lean_object* v_tail_316_; lean_object* v___x_317_; 
lean_dec(v_h__1_311_);
v_head_315_ = lean_ctor_get(v_x_310_, 0);
lean_inc(v_head_315_);
v_tail_316_ = lean_ctor_get(v_x_310_, 1);
lean_inc(v_tail_316_);
lean_dec_ref_known(v_x_310_, 2);
v___x_317_ = lean_apply_2(v_h__2_312_, v_head_315_, v_tail_316_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter(lean_object* v_motive_318_, lean_object* v_x_319_, lean_object* v_h__1_320_, lean_object* v_h__2_321_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v_h__2_321_);
v___x_322_ = lean_box(0);
v___x_323_ = lean_apply_1(v_h__1_320_, v___x_322_);
return v___x_323_;
}
else
{
lean_object* v_head_324_; lean_object* v_tail_325_; lean_object* v___x_326_; 
lean_dec(v_h__1_320_);
v_head_324_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_head_324_);
v_tail_325_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_tail_325_);
lean_dec_ref_known(v_x_319_, 2);
v___x_326_ = lean_apply_2(v_h__2_321_, v_head_324_, v_tail_325_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object* v_x_327_, lean_object* v_h__1_328_, lean_object* v_h__2_329_){
_start:
{
if (lean_obj_tag(v_x_327_) == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec(v_h__1_328_);
v___x_330_ = lean_box(0);
v___x_331_ = lean_apply_1(v_h__2_329_, v___x_330_);
return v___x_331_;
}
else
{
lean_object* v_val_332_; lean_object* v_fst_333_; lean_object* v_snd_334_; lean_object* v___x_335_; 
lean_dec(v_h__2_329_);
v_val_332_ = lean_ctor_get(v_x_327_, 0);
lean_inc(v_val_332_);
lean_dec_ref_known(v_x_327_, 1);
v_fst_333_ = lean_ctor_get(v_val_332_, 0);
lean_inc(v_fst_333_);
v_snd_334_ = lean_ctor_get(v_val_332_, 1);
lean_inc(v_snd_334_);
lean_dec(v_val_332_);
v___x_335_ = lean_apply_2(v_h__1_328_, v_fst_333_, v_snd_334_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter(lean_object* v_motive_336_, lean_object* v_x_337_, lean_object* v_h__1_338_, lean_object* v_h__2_339_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_h__1_338_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_apply_1(v_h__2_339_, v___x_340_);
return v___x_341_;
}
else
{
lean_object* v_val_342_; lean_object* v_fst_343_; lean_object* v_snd_344_; lean_object* v___x_345_; 
lean_dec(v_h__2_339_);
v_val_342_ = lean_ctor_get(v_x_337_, 0);
lean_inc(v_val_342_);
lean_dec_ref_known(v_x_337_, 1);
v_fst_343_ = lean_ctor_get(v_val_342_, 0);
lean_inc(v_fst_343_);
v_snd_344_ = lean_ctor_get(v_val_342_, 1);
lean_inc(v_snd_344_);
lean_dec(v_val_342_);
v___x_345_ = lean_apply_2(v_h__1_338_, v_fst_343_, v_snd_344_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter___redArg(lean_object* v_x_346_, lean_object* v_h__1_347_, lean_object* v_h__2_348_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v_h__1_347_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_apply_1(v_h__2_348_, v___x_349_);
return v___x_350_;
}
else
{
lean_object* v_val_351_; lean_object* v___x_352_; 
lean_dec(v_h__2_348_);
v_val_351_ = lean_ctor_get(v_x_346_, 0);
lean_inc(v_val_351_);
lean_dec_ref_known(v_x_346_, 1);
v___x_352_ = lean_apply_1(v_h__1_347_, v_val_351_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter(lean_object* v_motive_353_, lean_object* v_x_354_, lean_object* v_h__1_355_, lean_object* v_h__2_356_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
lean_object* v___x_357_; lean_object* v___x_358_; 
lean_dec(v_h__1_355_);
v___x_357_ = lean_box(0);
v___x_358_ = lean_apply_1(v_h__2_356_, v___x_357_);
return v___x_358_;
}
else
{
lean_object* v_val_359_; lean_object* v___x_360_; 
lean_dec(v_h__2_356_);
v_val_359_ = lean_ctor_get(v_x_354_, 0);
lean_inc(v_val_359_);
lean_dec_ref_known(v_x_354_, 1);
v___x_360_ = lean_apply_1(v_h__1_355_, v_val_359_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag(lean_object* v_k_361_, lean_object* v_t_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_361_);
v___x_364_ = lean_nat_lxor(v_t_362_, v___x_363_);
lean_dec(v___x_363_);
v___x_365_ = lean_nat_dec_le(v_t_362_, v___x_364_);
if (v___x_365_ == 0)
{
return v___x_364_;
}
else
{
lean_dec(v___x_364_);
lean_inc(v_t_362_);
return v_t_362_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag___boxed(lean_object* v_k_366_, lean_object* v_t_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = lp_tzap_x2dlean_TzapLean_canonTag(v_k_366_, v_t_367_);
lean_dec(v_t_367_);
lean_dec(v_k_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(lean_object* v_arr_369_, lean_object* v_k_370_, lean_object* v_wdraws_371_, lean_object* v_range_372_, lean_object* v_b_373_, lean_object* v_i_374_){
_start:
{
lean_object* v_stop_375_; lean_object* v_step_376_; uint8_t v___x_377_; 
v_stop_375_ = lean_ctor_get(v_range_372_, 1);
v_step_376_ = lean_ctor_get(v_range_372_, 2);
v___x_377_ = lean_nat_dec_lt(v_i_374_, v_stop_375_);
if (v___x_377_ == 0)
{
lean_dec(v_i_374_);
lean_dec_ref(v_wdraws_371_);
return v_b_373_;
}
else
{
lean_object* v_fst_378_; lean_object* v_snd_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_405_; 
v_fst_378_ = lean_ctor_get(v_b_373_, 0);
v_snd_379_ = lean_ctor_get(v_b_373_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v_b_373_);
if (v_isSharedCheck_405_ == 0)
{
v___x_381_ = v_b_373_;
v_isShared_382_ = v_isSharedCheck_405_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_snd_379_);
lean_inc(v_fst_378_);
lean_dec(v_b_373_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_405_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_g_383_; lean_object* v_canons_385_; lean_object* v___x_392_; 
v_g_383_ = lean_array_fget_borrowed(v_arr_369_, v_i_374_);
lean_inc(v_g_383_);
v___x_392_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_g_383_);
if (lean_obj_tag(v___x_392_) == 0)
{
v_canons_385_ = v_fst_378_;
goto v___jp_384_;
}
else
{
lean_object* v_val_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_404_; 
v_val_393_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_404_ == 0)
{
v___x_395_ = v___x_392_;
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_val_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_snd_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; 
v_snd_397_ = lean_ctor_get(v_val_393_, 1);
lean_inc(v_snd_397_);
lean_dec(v_val_393_);
v___x_398_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_snd_379_, v_snd_397_);
v___x_399_ = lp_tzap_x2dlean_TzapLean_canonTag(v_k_370_, v___x_398_);
lean_dec(v___x_398_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_399_);
v___x_401_ = v___x_395_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_403_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v_canons_402_; 
v_canons_402_ = lean_array_set(v_fst_378_, v_i_374_, v___x_401_);
v_canons_385_ = v_canons_402_;
goto v___jp_384_;
}
}
}
v___jp_384_:
{
lean_object* v_ts_386_; lean_object* v___x_388_; 
lean_inc(v_g_383_);
lean_inc_ref(v_wdraws_371_);
v_ts_386_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_370_, v_wdraws_371_, v_snd_379_, v_g_383_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v_ts_386_);
lean_ctor_set(v___x_381_, 0, v_canons_385_);
v___x_388_ = v___x_381_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_canons_385_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_ts_386_);
v___x_388_ = v_reuseFailAlloc_391_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_389_; 
v___x_389_ = lean_nat_add(v_i_374_, v_step_376_);
lean_dec(v_i_374_);
v_b_373_ = v___x_388_;
v_i_374_ = v___x_389_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg___boxed(lean_object* v_arr_406_, lean_object* v_k_407_, lean_object* v_wdraws_408_, lean_object* v_range_409_, lean_object* v_b_410_, lean_object* v_i_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_406_, v_k_407_, v_wdraws_408_, v_range_409_, v_b_410_, v_i_411_);
lean_dec_ref(v_range_409_);
lean_dec(v_k_407_);
lean_dec_ref(v_arr_406_);
return v_res_412_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_box(0);
v___x_414_ = lean_unsigned_to_nat(16u);
v___x_415_ = lean_mk_array(v___x_414_, v___x_413_);
return v___x_415_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0);
v___x_417_ = lean_unsigned_to_nat(0u);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v___x_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(lean_object* v___x_419_, lean_object* v_arr_420_, lean_object* v___x_421_, lean_object* v_range_422_, lean_object* v_b_423_, lean_object* v_i_424_){
_start:
{
lean_object* v_stop_425_; lean_object* v_step_426_; lean_object* v_a_428_; uint8_t v___x_431_; 
v_stop_425_ = lean_ctor_get(v_range_422_, 1);
v_step_426_ = lean_ctor_get(v_range_422_, 2);
v___x_431_ = lean_nat_dec_lt(v_i_424_, v_stop_425_);
if (v___x_431_ == 0)
{
lean_dec(v_i_424_);
return v_b_423_;
}
else
{
lean_object* v_fst_432_; lean_object* v_snd_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_461_; 
v_fst_432_ = lean_ctor_get(v_b_423_, 0);
v_snd_433_ = lean_ctor_get(v_b_423_, 1);
v_isSharedCheck_461_ = !lean_is_exclusive(v_b_423_);
if (v_isSharedCheck_461_ == 0)
{
v___x_435_ = v_b_423_;
v_isShared_436_ = v_isSharedCheck_461_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_snd_433_);
lean_inc(v_fst_432_);
lean_dec(v_b_423_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_461_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lp_tzap_x2dlean_TzapLean_instInhabitedGate_default;
v___x_439_ = lean_nat_sub(v___x_419_, v___x_437_);
v___x_440_ = lean_nat_sub(v___x_439_, v_i_424_);
lean_dec(v___x_439_);
v___x_441_ = lean_array_get_borrowed(v___x_438_, v_arr_420_, v___x_440_);
v___x_442_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_445_; 
lean_dec(v___x_440_);
lean_dec(v_snd_433_);
v___x_443_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_443_);
v___x_445_ = v___x_435_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_fst_432_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
v_a_428_ = v___x_445_;
goto v___jp_427_;
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_box(0);
v___x_448_ = lean_array_get_borrowed(v___x_447_, v___x_421_, v___x_440_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_450_; 
lean_dec(v___x_440_);
if (v_isShared_436_ == 0)
{
v___x_450_ = v___x_435_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_fst_432_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_snd_433_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
v_a_428_ = v___x_450_;
goto v___jp_427_;
}
}
else
{
lean_object* v_val_452_; uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
v_val_452_ = lean_ctor_get(v___x_448_, 0);
v___x_453_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_snd_433_, v_val_452_);
v___x_454_ = lean_box(v___x_453_);
v___x_455_ = lean_array_set(v_fst_432_, v___x_440_, v___x_454_);
lean_dec(v___x_440_);
v___x_456_ = lean_box(0);
lean_inc(v_val_452_);
v___x_457_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_snd_433_, v_val_452_, v___x_456_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_457_);
lean_ctor_set(v___x_435_, 0, v___x_455_);
v___x_459_ = v___x_435_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
v_a_428_ = v___x_459_;
goto v___jp_427_;
}
}
}
}
}
v___jp_427_:
{
lean_object* v___x_429_; 
v___x_429_ = lean_nat_add(v_i_424_, v_step_426_);
lean_dec(v_i_424_);
v_b_423_ = v_a_428_;
v_i_424_ = v___x_429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___boxed(lean_object* v___x_462_, lean_object* v_arr_463_, lean_object* v___x_464_, lean_object* v_range_465_, lean_object* v_b_466_, lean_object* v_i_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_462_, v_arr_463_, v___x_464_, v_range_465_, v_b_466_, v_i_467_);
lean_dec_ref(v_range_465_);
lean_dec_ref(v___x_464_);
lean_dec_ref(v_arr_463_);
lean_dec(v___x_462_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets(lean_object* v_k_469_, lean_object* v_wdraws_470_, lean_object* v_n_471_, lean_object* v_gs_472_){
_start:
{
lean_object* v_arr_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v_canons_476_; lean_object* v_ts_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_fst_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_496_; 
v_arr_473_ = lean_array_mk(v_gs_472_);
v___x_474_ = lean_array_get_size(v_arr_473_);
v___x_475_ = lean_box(0);
v_canons_476_ = lean_mk_array(v___x_474_, v___x_475_);
lean_inc_ref(v_wdraws_470_);
v_ts_477_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_470_, v_n_471_);
v___x_478_ = lean_unsigned_to_nat(0u);
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_474_);
lean_ctor_set(v___x_480_, 2, v___x_479_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v_canons_476_);
lean_ctor_set(v___x_481_, 1, v_ts_477_);
v___x_482_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_473_, v_k_469_, v_wdraws_470_, v___x_480_, v___x_481_, v___x_478_);
v_fst_483_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v___x_482_, 1);
lean_dec(v_unused_497_);
v___x_485_ = v___x_482_;
v_isShared_486_ = v_isSharedCheck_496_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_fst_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_496_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_487_ = 0;
v___x_488_ = lean_box(v___x_487_);
v___x_489_ = lean_mk_array(v___x_474_, v___x_488_);
v___x_490_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 1, v___x_490_);
lean_ctor_set(v___x_485_, 0, v___x_489_);
v___x_492_ = v___x_485_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_495_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v_fst_494_; 
v___x_493_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_474_, v_arr_473_, v_fst_483_, v___x_480_, v___x_492_, v___x_478_);
lean_dec_ref_known(v___x_480_, 3);
lean_dec(v_fst_483_);
lean_dec_ref(v_arr_473_);
v_fst_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_fst_494_);
lean_dec_ref(v___x_493_);
return v_fst_494_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets___boxed(lean_object* v_k_498_, lean_object* v_wdraws_499_, lean_object* v_n_500_, lean_object* v_gs_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = lp_tzap_x2dlean_TzapLean_mergeTargets(v_k_498_, v_wdraws_499_, v_n_500_, v_gs_501_);
lean_dec(v_k_498_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0(lean_object* v_arr_503_, lean_object* v_k_504_, lean_object* v_wdraws_505_, lean_object* v_range_506_, lean_object* v_b_507_, lean_object* v_i_508_, lean_object* v_hs_509_, lean_object* v_hl_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_503_, v_k_504_, v_wdraws_505_, v_range_506_, v_b_507_, v_i_508_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___boxed(lean_object* v_arr_512_, lean_object* v_k_513_, lean_object* v_wdraws_514_, lean_object* v_range_515_, lean_object* v_b_516_, lean_object* v_i_517_, lean_object* v_hs_518_, lean_object* v_hl_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0(v_arr_512_, v_k_513_, v_wdraws_514_, v_range_515_, v_b_516_, v_i_517_, v_hs_518_, v_hl_519_);
lean_dec_ref(v_range_515_);
lean_dec(v_k_513_);
lean_dec_ref(v_arr_512_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1(lean_object* v___x_521_, lean_object* v_arr_522_, lean_object* v___x_523_, lean_object* v_range_524_, lean_object* v_b_525_, lean_object* v_i_526_, lean_object* v_hs_527_, lean_object* v_hl_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_521_, v_arr_522_, v___x_523_, v_range_524_, v_b_525_, v_i_526_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___boxed(lean_object* v___x_530_, lean_object* v_arr_531_, lean_object* v___x_532_, lean_object* v_range_533_, lean_object* v_b_534_, lean_object* v_i_535_, lean_object* v_hs_536_, lean_object* v_hl_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1(v___x_530_, v_arr_531_, v___x_532_, v_range_533_, v_b_534_, v_i_535_, v_hs_536_, v_hl_537_);
lean_dec_ref(v_range_533_);
lean_dec_ref(v___x_532_);
lean_dec_ref(v_arr_531_);
lean_dec(v___x_530_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom(lean_object* v_k_539_, lean_object* v_wdraws_540_, lean_object* v_targets_541_, lean_object* v_ts_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
if (lean_obj_tag(v_x_544_) == 0)
{
lean_dec(v_x_543_);
lean_dec_ref(v_ts_542_);
lean_dec_ref(v_wdraws_540_);
return v_x_544_;
}
else
{
lean_object* v_head_545_; lean_object* v_tail_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_590_; 
v_head_545_ = lean_ctor_get(v_x_544_, 0);
v_tail_546_ = lean_ctor_get(v_x_544_, 1);
v_isSharedCheck_590_ = !lean_is_exclusive(v_x_544_);
if (v_isSharedCheck_590_ == 0)
{
v___x_548_ = v_x_544_;
v_isShared_549_ = v_isSharedCheck_590_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_tail_546_);
lean_inc(v_head_545_);
lean_dec(v_x_544_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_590_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; 
lean_inc(v_head_545_);
v___x_550_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_545_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
lean_inc(v_head_545_);
lean_inc_ref(v_wdraws_540_);
v___x_551_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_539_, v_wdraws_540_, v_ts_542_, v_head_545_);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_nat_add(v_x_543_, v___x_552_);
lean_dec(v_x_543_);
v___x_554_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_539_, v_wdraws_540_, v_targets_541_, v___x_551_, v___x_553_, v_tail_546_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 1, v___x_554_);
v___x_556_ = v___x_548_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_head_545_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
else
{
lean_object* v_val_558_; lean_object* v_fst_559_; lean_object* v_snd_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_589_; 
v_val_558_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v___x_550_, 1);
v_fst_559_ = lean_ctor_get(v_val_558_, 0);
v_snd_560_ = lean_ctor_get(v_val_558_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v_val_558_);
if (v_isSharedCheck_589_ == 0)
{
v___x_562_ = v_val_558_;
v_isShared_563_ = v_isSharedCheck_589_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_snd_560_);
lean_inc(v_fst_559_);
lean_dec(v_val_558_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_589_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = lean_array_get_size(v_targets_541_);
v___x_579_ = lean_nat_dec_lt(v_x_543_, v___x_578_);
if (v___x_579_ == 0)
{
lean_del_object(v___x_562_);
goto v___jp_564_;
}
else
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = lean_array_fget_borrowed(v_targets_541_, v_x_543_);
v___x_581_ = lean_unbox(v___x_580_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
lean_dec(v_snd_560_);
lean_dec(v_fst_559_);
lean_del_object(v___x_548_);
lean_inc(v_head_545_);
lean_inc_ref(v_wdraws_540_);
v___x_582_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_539_, v_wdraws_540_, v_ts_542_, v_head_545_);
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = lean_nat_add(v_x_543_, v___x_583_);
lean_dec(v_x_543_);
v___x_585_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_539_, v_wdraws_540_, v_targets_541_, v___x_582_, v___x_584_, v_tail_546_);
if (v_isShared_563_ == 0)
{
lean_ctor_set_tag(v___x_562_, 1);
lean_ctor_set(v___x_562_, 1, v___x_585_);
lean_ctor_set(v___x_562_, 0, v_head_545_);
v___x_587_ = v___x_562_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_head_545_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
lean_del_object(v___x_562_);
goto v___jp_564_;
}
}
v___jp_564_:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_542_, v_snd_560_);
lean_inc(v_tail_546_);
lean_inc_ref(v_ts_542_);
lean_inc_ref(v_wdraws_540_);
v___x_566_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_539_, v_wdraws_540_, v_ts_542_, v___x_565_, v_fst_559_, v_tail_546_);
lean_dec(v___x_565_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_572_; 
lean_inc(v_head_545_);
lean_inc_ref(v_wdraws_540_);
v___x_567_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_539_, v_wdraws_540_, v_ts_542_, v_head_545_);
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_nat_add(v_x_543_, v___x_568_);
lean_dec(v_x_543_);
v___x_570_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_539_, v_wdraws_540_, v_targets_541_, v___x_567_, v___x_569_, v_tail_546_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 1, v___x_570_);
v___x_572_ = v___x_548_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_head_545_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v___x_570_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
else
{
lean_object* v_val_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
lean_del_object(v___x_548_);
lean_dec(v_tail_546_);
lean_dec(v_head_545_);
v_val_574_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_val_574_);
lean_dec_ref_known(v___x_566_, 1);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_add(v_x_543_, v___x_575_);
lean_dec(v_x_543_);
v_x_543_ = v___x_576_;
v_x_544_ = v_val_574_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom___boxed(lean_object* v_k_591_, lean_object* v_wdraws_592_, lean_object* v_targets_593_, lean_object* v_ts_594_, lean_object* v_x_595_, lean_object* v_x_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_591_, v_wdraws_592_, v_targets_593_, v_ts_594_, v_x_595_, v_x_596_);
lean_dec_ref(v_targets_593_);
lean_dec(v_k_591_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter___redArg(lean_object* v_x_598_, lean_object* v_x_599_, lean_object* v_h__1_600_, lean_object* v_h__2_601_){
_start:
{
if (lean_obj_tag(v_x_599_) == 0)
{
lean_object* v___x_602_; 
lean_dec(v_h__2_601_);
v___x_602_ = lean_apply_1(v_h__1_600_, v_x_598_);
return v___x_602_;
}
else
{
lean_object* v_head_603_; lean_object* v_tail_604_; lean_object* v___x_605_; 
lean_dec(v_h__1_600_);
v_head_603_ = lean_ctor_get(v_x_599_, 0);
lean_inc(v_head_603_);
v_tail_604_ = lean_ctor_get(v_x_599_, 1);
lean_inc(v_tail_604_);
lean_dec_ref_known(v_x_599_, 2);
v___x_605_ = lean_apply_3(v_h__2_601_, v_x_598_, v_head_603_, v_tail_604_);
return v___x_605_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter(lean_object* v_motive_606_, lean_object* v_x_607_, lean_object* v_x_608_, lean_object* v_h__1_609_, lean_object* v_h__2_610_){
_start:
{
if (lean_obj_tag(v_x_608_) == 0)
{
lean_object* v___x_611_; 
lean_dec(v_h__2_610_);
v___x_611_ = lean_apply_1(v_h__1_609_, v_x_607_);
return v___x_611_;
}
else
{
lean_object* v_head_612_; lean_object* v_tail_613_; lean_object* v___x_614_; 
lean_dec(v_h__1_609_);
v_head_612_ = lean_ctor_get(v_x_608_, 0);
lean_inc(v_head_612_);
v_tail_613_ = lean_ctor_get(v_x_608_, 1);
lean_inc(v_tail_613_);
lean_dec_ref_known(v_x_608_, 2);
v___x_614_ = lean_apply_3(v_h__2_610_, v_x_607_, v_head_612_, v_tail_613_);
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter___redArg(lean_object* v_x_615_, lean_object* v_h__1_616_, lean_object* v_h__2_617_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
lean_object* v___x_618_; 
lean_dec(v_h__1_616_);
v___x_618_ = lean_apply_1(v_h__2_617_, lean_box(0));
return v___x_618_;
}
else
{
lean_object* v_val_619_; lean_object* v___x_620_; 
lean_dec(v_h__2_617_);
v_val_619_ = lean_ctor_get(v_x_615_, 0);
lean_inc(v_val_619_);
lean_dec_ref_known(v_x_615_, 1);
v___x_620_ = lean_apply_2(v_h__1_616_, v_val_619_, lean_box(0));
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter(lean_object* v_motive_621_, lean_object* v_x_622_, lean_object* v_h__1_623_, lean_object* v_h__2_624_){
_start:
{
if (lean_obj_tag(v_x_622_) == 0)
{
lean_object* v___x_625_; 
lean_dec(v_h__1_623_);
v___x_625_ = lean_apply_1(v_h__2_624_, lean_box(0));
return v___x_625_;
}
else
{
lean_object* v_val_626_; lean_object* v___x_627_; 
lean_dec(v_h__2_624_);
v_val_626_ = lean_ctor_get(v_x_622_, 0);
lean_inc(v_val_626_);
lean_dec_ref_known(v_x_622_, 1);
v___x_627_ = lean_apply_2(v_h__1_623_, v_val_626_, lean_box(0));
return v___x_627_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_emitAll(lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
return v_x_628_;
}
else
{
lean_object* v_head_629_; lean_object* v_tail_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_647_; 
v_head_629_ = lean_ctor_get(v_x_628_, 0);
v_tail_630_ = lean_ctor_get(v_x_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_632_ = v_x_628_;
v_isShared_633_ = v_isSharedCheck_647_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_tail_630_);
lean_inc(v_head_629_);
lean_dec(v_x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_647_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___y_635_; lean_object* v___x_638_; 
lean_inc(v_head_629_);
v___x_638_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_629_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_639_ = lean_box(0);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_639_);
v___x_641_ = v___x_632_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_head_629_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
v___y_635_ = v___x_641_;
goto v___jp_634_;
}
}
else
{
lean_object* v_val_643_; lean_object* v_fst_644_; lean_object* v_snd_645_; lean_object* v___x_646_; 
lean_del_object(v___x_632_);
lean_dec(v_head_629_);
v_val_643_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_val_643_);
lean_dec_ref_known(v___x_638_, 1);
v_fst_644_ = lean_ctor_get(v_val_643_, 0);
lean_inc(v_fst_644_);
v_snd_645_ = lean_ctor_get(v_val_643_, 1);
lean_inc(v_snd_645_);
lean_dec(v_val_643_);
v___x_646_ = lp_tzap_x2dlean_TzapLean_emitRotation(v_snd_645_, v_fst_644_);
v___y_635_ = v___x_646_;
goto v___jp_634_;
}
v___jp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lp_tzap_x2dlean_TzapLean_emitAll(v_tail_630_);
v___x_637_ = l_List_appendTR___redArg(v___y_635_, v___x_636_);
return v___x_637_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates(lean_object* v_k_648_, lean_object* v_wdraws_649_, lean_object* v_n_650_, lean_object* v_gs_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_inc(v_gs_651_);
lean_inc(v_n_650_);
lean_inc_ref_n(v_wdraws_649_, 2);
v___x_652_ = lp_tzap_x2dlean_TzapLean_mergeTargets(v_k_648_, v_wdraws_649_, v_n_650_, v_gs_651_);
v___x_653_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_649_, v_n_650_);
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_648_, v_wdraws_649_, v___x_652_, v___x_653_, v___x_654_, v_gs_651_);
lean_dec_ref(v___x_652_);
v___x_656_ = lp_tzap_x2dlean_TzapLean_emitAll(v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates___boxed(lean_object* v_k_657_, lean_object* v_wdraws_658_, lean_object* v_n_659_, lean_object* v_gs_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = lp_tzap_x2dlean_TzapLean_phaseFoldGates(v_k_657_, v_wdraws_658_, v_n_659_, v_gs_660_);
lean_dec(v_k_657_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold(lean_object* v_k_662_, lean_object* v_wdraws_663_, lean_object* v_c_664_){
_start:
{
lean_object* v_numQubits_665_; lean_object* v_gates_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_numQubits_665_ = lean_ctor_get(v_c_664_, 0);
v_gates_666_ = lean_ctor_get(v_c_664_, 2);
lean_inc(v_gates_666_);
lean_inc(v_numQubits_665_);
v___x_667_ = lp_tzap_x2dlean_TzapLean_phaseFoldGates(v_k_662_, v_wdraws_663_, v_numQubits_665_, v_gates_666_);
v___x_668_ = lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(v_c_664_, v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold___boxed(lean_object* v_k_669_, lean_object* v_wdraws_670_, lean_object* v_c_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_669_, v_wdraws_670_, v_c_671_);
lean_dec(v_k_669_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
if (lean_obj_tag(v_a_673_) == 0)
{
return v_a_674_;
}
else
{
lean_object* v_head_675_; lean_object* v_tail_676_; uint8_t v___x_677_; 
v_head_675_ = lean_ctor_get(v_a_673_, 0);
v_tail_676_ = lean_ctor_get(v_a_673_, 1);
v___x_677_ = lp_tzap_x2dlean_TzapLean_Gate_allocates(v_head_675_);
if (v___x_677_ == 0)
{
v_a_673_ = v_tail_676_;
goto _start;
}
else
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = lean_nat_add(v_a_674_, v___x_679_);
lean_dec(v_a_674_);
v_a_673_ = v_tail_676_;
v_a_674_ = v___x_680_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0___boxed(lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(v_a_682_, v_a_683_);
lean_dec(v_a_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound(lean_object* v_c_685_){
_start:
{
lean_object* v_numQubits_686_; lean_object* v_gates_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_numQubits_686_ = lean_ctor_get(v_c_685_, 0);
v_gates_687_ = lean_ctor_get(v_c_685_, 2);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(v_gates_687_, v___x_688_);
v___x_690_ = lean_nat_add(v_numQubits_686_, v___x_689_);
lean_dec(v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound___boxed(lean_object* v_c_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_691_);
lean_dec_ref(v_c_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordsOf(lean_object* v_k_693_, lean_object* v_draws_694_, lean_object* v_i_695_){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_apply_1(v_draws_694_, v_i_695_);
v___x_697_ = lp_tzap_x2dlean_TzapLean_bitsToWord(v_k_693_, v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(lean_object* v_start_698_, lean_object* v_bytes_699_, lean_object* v_range_700_, lean_object* v_b_701_, lean_object* v_i_702_){
_start:
{
lean_object* v_stop_703_; lean_object* v_step_704_; uint8_t v___y_706_; uint8_t v___x_714_; 
v_stop_703_ = lean_ctor_get(v_range_700_, 1);
v_step_704_ = lean_ctor_get(v_range_700_, 2);
v___x_714_ = lean_nat_dec_lt(v_i_702_, v_stop_703_);
if (v___x_714_ == 0)
{
lean_dec(v_i_702_);
return v_b_701_;
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = lean_nat_add(v_start_698_, v_i_702_);
v___x_716_ = lean_byte_array_size(v_bytes_699_);
v___x_717_ = lean_nat_dec_lt(v___x_715_, v___x_716_);
if (v___x_717_ == 0)
{
uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
lean_dec(v___x_715_);
v___x_718_ = l_instInhabitedUInt8;
v___x_719_ = lean_box(v___x_718_);
v___x_720_ = l_outOfBounds___redArg(v___x_719_);
lean_dec(v___x_719_);
v___x_721_ = lean_unbox(v___x_720_);
lean_dec(v___x_720_);
v___y_706_ = v___x_721_;
goto v___jp_705_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_byte_array_fget(v_bytes_699_, v___x_715_);
lean_dec(v___x_715_);
v___y_706_ = v___x_722_;
goto v___jp_705_;
}
}
v___jp_705_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_707_ = lean_uint8_to_nat(v___y_706_);
v___x_708_ = lean_unsigned_to_nat(8u);
v___x_709_ = lean_nat_mul(v___x_708_, v_i_702_);
v___x_710_ = lean_nat_shiftl(v___x_707_, v___x_709_);
lean_dec(v___x_709_);
v___x_711_ = lean_nat_lor(v_b_701_, v___x_710_);
lean_dec(v___x_710_);
lean_dec(v_b_701_);
v___x_712_ = lean_nat_add(v_i_702_, v_step_704_);
lean_dec(v_i_702_);
v_b_701_ = v___x_711_;
v_i_702_ = v___x_712_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg___boxed(lean_object* v_start_723_, lean_object* v_bytes_724_, lean_object* v_range_725_, lean_object* v_b_726_, lean_object* v_i_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_723_, v_bytes_724_, v_range_725_, v_b_726_, v_i_727_);
lean_dec_ref(v_range_725_);
lean_dec_ref(v_bytes_724_);
lean_dec(v_start_723_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes(lean_object* v_bytes_729_, lean_object* v_start_730_, lean_object* v_count_731_){
_start:
{
lean_object* v_w_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_w_732_ = lean_unsigned_to_nat(0u);
v___x_733_ = lean_unsigned_to_nat(1u);
v___x_734_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_734_, 0, v_w_732_);
lean_ctor_set(v___x_734_, 1, v_count_731_);
lean_ctor_set(v___x_734_, 2, v___x_733_);
v___x_735_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_730_, v_bytes_729_, v___x_734_, v_w_732_, v_w_732_);
lean_dec_ref_known(v___x_734_, 3);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes___boxed(lean_object* v_bytes_736_, lean_object* v_start_737_, lean_object* v_count_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = lp_tzap_x2dlean_TzapLean_natOfBytes(v_bytes_736_, v_start_737_, v_count_738_);
lean_dec(v_start_737_);
lean_dec_ref(v_bytes_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0(lean_object* v_start_740_, lean_object* v_bytes_741_, lean_object* v_range_742_, lean_object* v_b_743_, lean_object* v_i_744_, lean_object* v_hs_745_, lean_object* v_hl_746_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_740_, v_bytes_741_, v_range_742_, v_b_743_, v_i_744_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___boxed(lean_object* v_start_748_, lean_object* v_bytes_749_, lean_object* v_range_750_, lean_object* v_b_751_, lean_object* v_i_752_, lean_object* v_hs_753_, lean_object* v_hl_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0(v_start_748_, v_bytes_749_, v_range_750_, v_b_751_, v_i_752_, v_hs_753_, v_hl_754_);
lean_dec_ref(v_range_750_);
lean_dec_ref(v_bytes_749_);
lean_dec(v_start_748_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0(lean_object* v___x_756_, lean_object* v_a_757_, lean_object* v_i_758_, lean_object* v_j_759_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_array_get_borrowed(v___x_756_, v_a_757_, v_i_758_);
v___x_761_ = l_Nat_testBit(v___x_760_, v_j_759_);
v___x_762_ = lp_tzap_x2dlean_TzapLean_bit(v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0___boxed(lean_object* v___x_763_, lean_object* v_a_764_, lean_object* v_i_765_, lean_object* v_j_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = lp_tzap_x2dlean_TzapLean_randomSample___lam__0(v___x_763_, v_a_764_, v_i_765_, v_j_766_);
lean_dec(v_j_766_);
lean_dec(v_i_765_);
lean_dec_ref(v_a_764_);
lean_dec(v___x_763_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(lean_object* v_bytesPerTag_768_, lean_object* v_a_769_, lean_object* v_range_770_, lean_object* v_b_771_, lean_object* v_i_772_){
_start:
{
lean_object* v_stop_774_; lean_object* v_step_775_; uint8_t v___x_776_; 
v_stop_774_ = lean_ctor_get(v_range_770_, 1);
v_step_775_ = lean_ctor_get(v_range_770_, 2);
v___x_776_ = lean_nat_dec_lt(v_i_772_, v_stop_774_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v_i_772_);
lean_dec(v_bytesPerTag_768_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v_b_771_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_778_ = lean_nat_mul(v_i_772_, v_bytesPerTag_768_);
lean_inc(v_bytesPerTag_768_);
v___x_779_ = lp_tzap_x2dlean_TzapLean_natOfBytes(v_a_769_, v___x_778_, v_bytesPerTag_768_);
lean_dec(v___x_778_);
v___x_780_ = lean_array_push(v_b_771_, v___x_779_);
v___x_781_ = lean_nat_add(v_i_772_, v_step_775_);
lean_dec(v_i_772_);
v_b_771_ = v___x_780_;
v_i_772_ = v___x_781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg___boxed(lean_object* v_bytesPerTag_783_, lean_object* v_a_784_, lean_object* v_range_785_, lean_object* v_b_786_, lean_object* v_i_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_783_, v_a_784_, v_range_785_, v_b_786_, v_i_787_);
lean_dec_ref(v_range_785_);
lean_dec_ref(v_a_784_);
return v_res_789_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_randomSample___closed__0(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = l_System_Platform_numBits;
v___x_791_ = lean_unsigned_to_nat(2u);
v___x_792_ = lean_nat_pow(v___x_791_, v___x_790_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample(lean_object* v_m_796_, lean_object* v_k_797_){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v_bytesPerTag_802_; lean_object* v_totalBytes_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_799_ = lean_unsigned_to_nat(7u);
v___x_800_ = lean_nat_add(v_k_797_, v___x_799_);
v___x_801_ = lean_unsigned_to_nat(3u);
v_bytesPerTag_802_ = lean_nat_shiftr(v___x_800_, v___x_801_);
lean_dec(v___x_800_);
v_totalBytes_803_ = lean_nat_mul(v_m_796_, v_bytesPerTag_802_);
v___x_804_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_randomSample___closed__0, &lp_tzap_x2dlean_TzapLean_randomSample___closed__0_once, _init_lp_tzap_x2dlean_TzapLean_randomSample___closed__0);
v___x_805_ = lean_nat_dec_le(v___x_804_, v_totalBytes_803_);
if (v___x_805_ == 0)
{
size_t v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_usize_of_nat(v_totalBytes_803_);
lean_dec(v_totalBytes_803_);
v___x_807_ = lean_io_get_random_bytes(v___x_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_822_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
v___x_809_ = lean_mk_empty_array_with_capacity(v_m_796_);
v___x_810_ = lean_unsigned_to_nat(0u);
v___x_811_ = lean_unsigned_to_nat(1u);
v___x_812_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v_m_796_);
lean_ctor_set(v___x_812_, 2, v___x_811_);
v___x_813_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_802_, v_a_808_, v___x_812_, v___x_809_, v___x_810_);
lean_dec_ref_known(v___x_812_, 3);
lean_dec(v_a_808_);
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_822_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_822_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_822_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___f_818_; lean_object* v___x_820_; 
v___f_818_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_randomSample___lam__0___boxed), 4, 2);
lean_closure_set(v___f_818_, 0, v___x_810_);
lean_closure_set(v___f_818_, 1, v_a_814_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v___f_818_);
v___x_820_ = v___x_816_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___f_818_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_bytesPerTag_802_);
lean_dec(v_m_796_);
v_a_823_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_807_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_807_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec(v_totalBytes_803_);
lean_dec(v_bytesPerTag_802_);
lean_dec(v_m_796_);
v___x_831_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_randomSample___closed__2));
v___x_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___boxed(lean_object* v_m_833_, lean_object* v_k_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = lp_tzap_x2dlean_TzapLean_randomSample(v_m_833_, v_k_834_);
lean_dec(v_k_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0(lean_object* v_bytesPerTag_837_, lean_object* v_a_838_, lean_object* v_range_839_, lean_object* v_b_840_, lean_object* v_i_841_, lean_object* v_hs_842_, lean_object* v_hl_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_837_, v_a_838_, v_range_839_, v_b_840_, v_i_841_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___boxed(lean_object* v_bytesPerTag_846_, lean_object* v_a_847_, lean_object* v_range_848_, lean_object* v_b_849_, lean_object* v_i_850_, lean_object* v_hs_851_, lean_object* v_hl_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0(v_bytesPerTag_846_, v_a_847_, v_range_848_, v_b_849_, v_i_850_, v_hs_851_, v_hl_852_);
lean_dec_ref(v_range_848_);
lean_dec_ref(v_a_847_);
return v_res_854_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_Merge(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_CnotMin(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFold(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_Merge(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_CnotMin(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
