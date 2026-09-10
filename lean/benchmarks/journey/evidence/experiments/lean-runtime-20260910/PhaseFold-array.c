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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_rotAngle(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_unbit(lean_object*);
lean_object* lean_array_mk(lean_object*);
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
lean_object* v_tags_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v_tags_97_ = lean_ctor_get(v_ts_95_, 0);
v___x_98_ = lean_array_get_size(v_tags_97_);
v___x_99_ = lean_nat_dec_lt(v_q_96_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(0u);
return v___x_100_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_array_fget_borrowed(v_tags_97_, v_q_96_);
lean_inc(v___x_101_);
return v___x_101_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg___boxed(lean_object* v_ts_102_, lean_object* v_q_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_102_, v_q_103_);
lean_dec(v_q_103_);
lean_dec_ref(v_ts_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf(lean_object* v_k_105_, lean_object* v_ts_106_, lean_object* v_q_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_106_, v_q_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_tagOf___boxed(lean_object* v_k_109_, lean_object* v_ts_110_, lean_object* v_q_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_tzap_x2dlean_TzapLean_TState_tagOf(v_k_109_, v_ts_110_, v_q_111_);
lean_dec(v_q_111_);
lean_dec_ref(v_ts_110_);
lean_dec(v_k_109_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___redArg(lean_object* v_wdraws_113_, lean_object* v_n_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
lean_inc(v_n_114_);
v___x_115_ = l_List_range(v_n_114_);
v___x_116_ = lean_box(0);
v___x_117_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_depthAux_spec__0(v_wdraws_113_, v___x_115_, v___x_116_);
v___x_118_ = lean_array_mk(v___x_117_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v_n_114_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial(lean_object* v_k_120_, lean_object* v_wdraws_121_, lean_object* v_n_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_121_, v_n_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_initial___boxed(lean_object* v_k_124_, lean_object* v_wdraws_125_, lean_object* v_n_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = lp_tzap_x2dlean_TzapLean_TState_initial(v_k_124_, v_wdraws_125_, v_n_126_);
lean_dec(v_k_124_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step(lean_object* v_k_128_, lean_object* v_wdraws_129_, lean_object* v_ts_130_, lean_object* v_g_131_){
_start:
{
lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v_q_139_; 
switch(lean_obj_tag(v_g_131_))
{
case 0:
{
lean_object* v_q_146_; lean_object* v_tags_147_; lean_object* v_fresh_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
lean_dec_ref(v_wdraws_129_);
v_q_146_ = lean_ctor_get(v_g_131_, 0);
v_tags_147_ = lean_ctor_get(v_ts_130_, 0);
lean_inc_ref(v_tags_147_);
v_fresh_148_ = lean_ctor_get(v_ts_130_, 1);
lean_inc(v_fresh_148_);
v___x_149_ = lean_array_get_size(v_tags_147_);
v___x_150_ = lean_nat_dec_lt(v_q_146_, v___x_149_);
if (v___x_150_ == 0)
{
lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
v_isSharedCheck_157_ = !lean_is_exclusive(v_ts_130_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; lean_object* v_unused_159_; 
v_unused_158_ = lean_ctor_get(v_ts_130_, 1);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_ts_130_, 0);
lean_dec(v_unused_159_);
v___x_152_ = v_ts_130_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_dec(v_ts_130_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_tags_147_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_fresh_148_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_170_; 
v___x_160_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_130_, v_q_146_);
v_isSharedCheck_170_ = !lean_is_exclusive(v_ts_130_);
if (v_isSharedCheck_170_ == 0)
{
lean_object* v_unused_171_; lean_object* v_unused_172_; 
v_unused_171_ = lean_ctor_get(v_ts_130_, 1);
lean_dec(v_unused_171_);
v_unused_172_ = lean_ctor_get(v_ts_130_, 0);
lean_dec(v_unused_172_);
v___x_162_ = v_ts_130_;
v_isShared_163_ = v_isSharedCheck_170_;
goto v_resetjp_161_;
}
else
{
lean_dec(v_ts_130_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_170_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_164_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_128_);
v___x_165_ = lean_nat_lxor(v___x_160_, v___x_164_);
lean_dec(v___x_164_);
lean_dec(v___x_160_);
v___x_166_ = lean_array_fset(v_tags_147_, v_q_146_, v___x_165_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_166_);
v___x_168_ = v___x_162_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v_fresh_148_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
case 8:
{
lean_object* v_control_173_; lean_object* v_target_174_; lean_object* v_tags_175_; lean_object* v_fresh_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
lean_dec_ref(v_wdraws_129_);
v_control_173_ = lean_ctor_get(v_g_131_, 0);
v_target_174_ = lean_ctor_get(v_g_131_, 1);
v_tags_175_ = lean_ctor_get(v_ts_130_, 0);
lean_inc_ref(v_tags_175_);
v_fresh_176_ = lean_ctor_get(v_ts_130_, 1);
lean_inc(v_fresh_176_);
v___x_177_ = lean_array_get_size(v_tags_175_);
v___x_178_ = lean_nat_dec_lt(v_target_174_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
v_isSharedCheck_185_ = !lean_is_exclusive(v_ts_130_);
if (v_isSharedCheck_185_ == 0)
{
lean_object* v_unused_186_; lean_object* v_unused_187_; 
v_unused_186_ = lean_ctor_get(v_ts_130_, 1);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_ts_130_, 0);
lean_dec(v_unused_187_);
v___x_180_ = v_ts_130_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_dec(v_ts_130_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_tags_175_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_fresh_176_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_198_; 
v___x_188_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_130_, v_target_174_);
v___x_189_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_130_, v_control_173_);
v_isSharedCheck_198_ = !lean_is_exclusive(v_ts_130_);
if (v_isSharedCheck_198_ == 0)
{
lean_object* v_unused_199_; lean_object* v_unused_200_; 
v_unused_199_ = lean_ctor_get(v_ts_130_, 1);
lean_dec(v_unused_199_);
v_unused_200_ = lean_ctor_get(v_ts_130_, 0);
lean_dec(v_unused_200_);
v___x_191_ = v_ts_130_;
v_isShared_192_ = v_isSharedCheck_198_;
goto v_resetjp_190_;
}
else
{
lean_dec(v_ts_130_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_198_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_193_ = lean_nat_lxor(v___x_188_, v___x_189_);
lean_dec(v___x_189_);
lean_dec(v___x_188_);
v___x_194_ = lean_array_fset(v_tags_175_, v_target_174_, v___x_193_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_194_);
v___x_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_fresh_176_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
case 1:
{
lean_object* v_q_201_; 
v_q_201_ = lean_ctor_get(v_g_131_, 0);
v_q_139_ = v_q_201_;
goto v___jp_138_;
}
case 10:
{
lean_object* v_target_202_; lean_object* v_tags_203_; lean_object* v_fresh_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_219_; 
v_target_202_ = lean_ctor_get(v_g_131_, 2);
v_tags_203_ = lean_ctor_get(v_ts_130_, 0);
v_fresh_204_ = lean_ctor_get(v_ts_130_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_ts_130_);
if (v_isSharedCheck_219_ == 0)
{
v___x_206_ = v_ts_130_;
v_isShared_207_ = v_isSharedCheck_219_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_fresh_204_);
lean_inc(v_tags_203_);
lean_dec(v_ts_130_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_219_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___y_209_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_tags_203_);
v___x_216_ = lean_nat_dec_lt(v_target_202_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec_ref(v_wdraws_129_);
v___y_209_ = v_tags_203_;
goto v___jp_208_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; 
lean_inc(v_fresh_204_);
v___x_217_ = lean_apply_1(v_wdraws_129_, v_fresh_204_);
v___x_218_ = lean_array_fset(v_tags_203_, v_target_202_, v___x_217_);
v___y_209_ = v___x_218_;
goto v___jp_208_;
}
v___jp_208_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = lean_unsigned_to_nat(1u);
v___x_211_ = lean_nat_add(v_fresh_204_, v___x_210_);
lean_dec(v_fresh_204_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v___x_211_);
lean_ctor_set(v___x_206_, 0, v___y_209_);
v___x_213_ = v___x_206_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___y_209_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
case 13:
{
lean_object* v_q_220_; 
v_q_220_ = lean_ctor_get(v_g_131_, 0);
v_q_139_ = v_q_220_;
goto v___jp_138_;
}
default: 
{
lean_dec_ref(v_wdraws_129_);
return v_ts_130_;
}
}
v___jp_132_:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = lean_nat_add(v___y_133_, v___x_135_);
lean_dec(v___y_133_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___y_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
return v___x_137_;
}
v___jp_138_:
{
lean_object* v_tags_140_; lean_object* v_fresh_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_tags_140_ = lean_ctor_get(v_ts_130_, 0);
lean_inc_ref(v_tags_140_);
v_fresh_141_ = lean_ctor_get(v_ts_130_, 1);
lean_inc(v_fresh_141_);
lean_dec_ref(v_ts_130_);
v___x_142_ = lean_array_get_size(v_tags_140_);
v___x_143_ = lean_nat_dec_lt(v_q_139_, v___x_142_);
if (v___x_143_ == 0)
{
lean_dec_ref(v_wdraws_129_);
v___y_133_ = v_fresh_141_;
v___y_134_ = v_tags_140_;
goto v___jp_132_;
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_inc(v_fresh_141_);
v___x_144_ = lean_apply_1(v_wdraws_129_, v_fresh_141_);
v___x_145_ = lean_array_fset(v_tags_140_, v_q_139_, v___x_144_);
v___y_133_ = v_fresh_141_;
v___y_134_ = v___x_145_;
goto v___jp_132_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_step___boxed(lean_object* v_k_221_, lean_object* v_wdraws_222_, lean_object* v_ts_223_, lean_object* v_g_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_221_, v_wdraws_222_, v_ts_223_, v_g_224_);
lean_dec_ref(v_g_224_);
lean_dec(v_k_221_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps(lean_object* v_k_226_, lean_object* v_wdraws_227_, lean_object* v_ts_228_, lean_object* v_x_229_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_dec_ref(v_wdraws_227_);
return v_ts_228_;
}
else
{
lean_object* v_head_230_; lean_object* v_tail_231_; lean_object* v___x_232_; 
v_head_230_ = lean_ctor_get(v_x_229_, 0);
v_tail_231_ = lean_ctor_get(v_x_229_, 1);
lean_inc_ref(v_wdraws_227_);
v___x_232_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_226_, v_wdraws_227_, v_ts_228_, v_head_230_);
v_ts_228_ = v___x_232_;
v_x_229_ = v_tail_231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_TState_steps___boxed(lean_object* v_k_234_, lean_object* v_wdraws_235_, lean_object* v_ts_236_, lean_object* v_x_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = lp_tzap_x2dlean_TzapLean_TState_steps(v_k_234_, v_wdraws_235_, v_ts_236_, v_x_237_);
lean_dec(v_x_237_);
lean_dec(v_k_234_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag(lean_object* v_k_242_, lean_object* v_pending_243_, lean_object* v_later_244_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = lean_nat_dec_eq(v_later_244_, v_pending_243_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_246_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_242_);
v___x_247_ = lean_nat_lxor(v_pending_243_, v___x_246_);
lean_dec(v___x_246_);
v___x_248_ = lean_nat_dec_eq(v_later_244_, v___x_247_);
lean_dec(v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = lean_box(0);
return v___x_249_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_box(v___x_248_);
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
else
{
lean_object* v___x_252_; 
v___x_252_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_matchTag___closed__0));
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchTag___boxed(lean_object* v_k_253_, lean_object* v_pending_254_, lean_object* v_later_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_tzap_x2dlean_TzapLean_matchTag(v_k_253_, v_pending_254_, v_later_255_);
lean_dec(v_later_255_);
lean_dec(v_pending_254_);
lean_dec(v_k_253_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto(lean_object* v_k_257_, lean_object* v_wdraws_258_, lean_object* v_ts_259_, lean_object* v_tag_260_, lean_object* v_00_u03b8_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_object* v___x_263_; 
lean_dec_ref(v_00_u03b8_261_);
lean_dec_ref(v_ts_259_);
lean_dec_ref(v_wdraws_258_);
v___x_263_ = lean_box(0);
return v___x_263_;
}
else
{
lean_object* v_head_264_; lean_object* v_tail_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_324_; 
v_head_264_ = lean_ctor_get(v_x_262_, 0);
v_tail_265_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_324_ == 0)
{
v___x_267_ = v_x_262_;
v_isShared_268_ = v_isSharedCheck_324_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_tail_265_);
lean_inc(v_head_264_);
lean_dec(v_x_262_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_324_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
uint8_t v___x_269_; 
v___x_269_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v_head_264_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; 
lean_del_object(v___x_267_);
lean_dec(v_tail_265_);
lean_dec(v_head_264_);
lean_dec_ref(v_00_u03b8_261_);
lean_dec_ref(v_ts_259_);
lean_dec_ref(v_wdraws_258_);
v___x_270_ = lean_box(0);
return v___x_270_;
}
else
{
lean_object* v___x_271_; 
lean_inc(v_head_264_);
v___x_271_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_264_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_inc_ref(v_wdraws_258_);
v___x_272_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_257_, v_wdraws_258_, v_ts_259_, v_head_264_);
v___x_273_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_257_, v_wdraws_258_, v___x_272_, v_tag_260_, v_00_u03b8_261_, v_tail_265_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_del_object(v___x_267_);
lean_dec(v_head_264_);
return v___x_273_;
}
else
{
lean_object* v_val_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_284_; 
v_val_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_284_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_284_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_val_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_284_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_val_274_);
v___x_279_ = v___x_267_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_head_264_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_val_274_);
v___x_279_ = v_reuseFailAlloc_283_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_281_; 
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v___x_279_);
v___x_281_ = v___x_276_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
else
{
lean_object* v_val_285_; lean_object* v_fst_286_; lean_object* v_snd_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_323_; 
v_val_285_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_val_285_);
lean_dec_ref_known(v___x_271_, 1);
v_fst_286_ = lean_ctor_get(v_val_285_, 0);
v_snd_287_ = lean_ctor_get(v_val_285_, 1);
v_isSharedCheck_323_ = !lean_is_exclusive(v_val_285_);
if (v_isSharedCheck_323_ == 0)
{
v___x_289_ = v_val_285_;
v_isShared_290_ = v_isSharedCheck_323_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_snd_287_);
lean_inc(v_fst_286_);
lean_dec(v_val_285_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_323_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_259_, v_snd_287_);
v___x_292_ = lp_tzap_x2dlean_TzapLean_matchTag(v_k_257_, v_tag_260_, v___x_291_);
lean_dec(v___x_291_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_del_object(v___x_289_);
lean_dec(v_snd_287_);
lean_dec(v_fst_286_);
lean_inc_ref(v_wdraws_258_);
v___x_293_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_257_, v_wdraws_258_, v_ts_259_, v_head_264_);
v___x_294_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_257_, v_wdraws_258_, v___x_293_, v_tag_260_, v_00_u03b8_261_, v_tail_265_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_del_object(v___x_267_);
lean_dec(v_head_264_);
return v___x_294_;
}
else
{
lean_object* v_val_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_305_; 
v_val_295_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_305_ == 0)
{
v___x_297_ = v___x_294_;
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_val_295_);
lean_dec(v___x_294_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_val_295_);
v___x_300_ = v___x_267_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_head_264_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_val_295_);
v___x_300_ = v_reuseFailAlloc_304_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_302_; 
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_300_);
v___x_302_ = v___x_297_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
else
{
lean_object* v_val_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_322_; 
lean_dec(v_head_264_);
lean_dec_ref(v_ts_259_);
lean_dec_ref(v_wdraws_258_);
v_val_306_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_322_ == 0)
{
v___x_308_ = v___x_292_;
v_isShared_309_ = v_isSharedCheck_322_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_val_306_);
lean_dec(v___x_292_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_322_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_310_ = lean_unbox(v_val_306_);
lean_dec(v_val_306_);
v___x_311_ = lp_tzap_x2dlean_TzapLean_signedAngle(v___x_310_, v_00_u03b8_261_);
v___x_312_ = l_Rat_add(v_fst_286_, v___x_311_);
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 7);
lean_ctor_set(v___x_289_, 0, v___x_312_);
v___x_314_ = v___x_289_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_312_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_snd_287_);
v___x_314_ = v_reuseFailAlloc_321_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_316_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_314_);
v___x_316_ = v___x_267_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_314_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_tail_265_);
v___x_316_ = v_reuseFailAlloc_320_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_318_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 0, v___x_316_);
v___x_318_ = v___x_308_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeInto___boxed(lean_object* v_k_325_, lean_object* v_wdraws_326_, lean_object* v_ts_327_, lean_object* v_tag_328_, lean_object* v_00_u03b8_329_, lean_object* v_x_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_325_, v_wdraws_326_, v_ts_327_, v_tag_328_, v_00_u03b8_329_, v_x_330_);
lean_dec(v_tag_328_);
lean_dec(v_k_325_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object* v_x_332_, lean_object* v_h__1_333_, lean_object* v_h__2_334_){
_start:
{
if (lean_obj_tag(v_x_332_) == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v_h__2_334_);
v___x_335_ = lean_box(0);
v___x_336_ = lean_apply_1(v_h__1_333_, v___x_335_);
return v___x_336_;
}
else
{
lean_object* v_head_337_; lean_object* v_tail_338_; lean_object* v___x_339_; 
lean_dec(v_h__1_333_);
v_head_337_ = lean_ctor_get(v_x_332_, 0);
lean_inc(v_head_337_);
v_tail_338_ = lean_ctor_get(v_x_332_, 1);
lean_inc(v_tail_338_);
lean_dec_ref_known(v_x_332_, 2);
v___x_339_ = lean_apply_2(v_h__2_334_, v_head_337_, v_tail_338_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_TState_steps_match__1_splitter(lean_object* v_motive_340_, lean_object* v_x_341_, lean_object* v_h__1_342_, lean_object* v_h__2_343_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec(v_h__2_343_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_apply_1(v_h__1_342_, v___x_344_);
return v___x_345_;
}
else
{
lean_object* v_head_346_; lean_object* v_tail_347_; lean_object* v___x_348_; 
lean_dec(v_h__1_342_);
v_head_346_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_head_346_);
v_tail_347_ = lean_ctor_get(v_x_341_, 1);
lean_inc(v_tail_347_);
lean_dec_ref_known(v_x_341_, 2);
v___x_348_ = lean_apply_2(v_h__2_343_, v_head_346_, v_tail_347_);
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object* v_x_349_, lean_object* v_h__1_350_, lean_object* v_h__2_351_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; 
lean_dec(v_h__1_350_);
v___x_352_ = lean_box(0);
v___x_353_ = lean_apply_1(v_h__2_351_, v___x_352_);
return v___x_353_;
}
else
{
lean_object* v_val_354_; lean_object* v_fst_355_; lean_object* v_snd_356_; lean_object* v___x_357_; 
lean_dec(v_h__2_351_);
v_val_354_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_val_354_);
lean_dec_ref_known(v_x_349_, 1);
v_fst_355_ = lean_ctor_get(v_val_354_, 0);
lean_inc(v_fst_355_);
v_snd_356_ = lean_ctor_get(v_val_354_, 1);
lean_inc(v_snd_356_);
lean_dec(v_val_354_);
v___x_357_ = lean_apply_2(v_h__1_350_, v_fst_355_, v_snd_356_);
return v___x_357_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__3_splitter(lean_object* v_motive_358_, lean_object* v_x_359_, lean_object* v_h__1_360_, lean_object* v_h__2_361_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v_h__1_360_);
v___x_362_ = lean_box(0);
v___x_363_ = lean_apply_1(v_h__2_361_, v___x_362_);
return v___x_363_;
}
else
{
lean_object* v_val_364_; lean_object* v_fst_365_; lean_object* v_snd_366_; lean_object* v___x_367_; 
lean_dec(v_h__2_361_);
v_val_364_ = lean_ctor_get(v_x_359_, 0);
lean_inc(v_val_364_);
lean_dec_ref_known(v_x_359_, 1);
v_fst_365_ = lean_ctor_get(v_val_364_, 0);
lean_inc(v_fst_365_);
v_snd_366_ = lean_ctor_get(v_val_364_, 1);
lean_inc(v_snd_366_);
lean_dec(v_val_364_);
v___x_367_ = lean_apply_2(v_h__1_360_, v_fst_365_, v_snd_366_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter___redArg(lean_object* v_x_368_, lean_object* v_h__1_369_, lean_object* v_h__2_370_){
_start:
{
if (lean_obj_tag(v_x_368_) == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec(v_h__1_369_);
v___x_371_ = lean_box(0);
v___x_372_ = lean_apply_1(v_h__2_370_, v___x_371_);
return v___x_372_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_374_; 
lean_dec(v_h__2_370_);
v_val_373_ = lean_ctor_get(v_x_368_, 0);
lean_inc(v_val_373_);
lean_dec_ref_known(v_x_368_, 1);
v___x_374_ = lean_apply_1(v_h__1_369_, v_val_373_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_mergeInto_match__1_splitter(lean_object* v_motive_375_, lean_object* v_x_376_, lean_object* v_h__1_377_, lean_object* v_h__2_378_){
_start:
{
if (lean_obj_tag(v_x_376_) == 0)
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec(v_h__1_377_);
v___x_379_ = lean_box(0);
v___x_380_ = lean_apply_1(v_h__2_378_, v___x_379_);
return v___x_380_;
}
else
{
lean_object* v_val_381_; lean_object* v___x_382_; 
lean_dec(v_h__2_378_);
v_val_381_ = lean_ctor_get(v_x_376_, 0);
lean_inc(v_val_381_);
lean_dec_ref_known(v_x_376_, 1);
v___x_382_ = lean_apply_1(v_h__1_377_, v_val_381_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag(lean_object* v_k_383_, lean_object* v_t_384_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_385_ = lp_tzap_x2dlean_TzapLean_onesTag(v_k_383_);
v___x_386_ = lean_nat_lxor(v_t_384_, v___x_385_);
lean_dec(v___x_385_);
v___x_387_ = lean_nat_dec_le(v_t_384_, v___x_386_);
if (v___x_387_ == 0)
{
return v___x_386_;
}
else
{
lean_dec(v___x_386_);
lean_inc(v_t_384_);
return v_t_384_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonTag___boxed(lean_object* v_k_388_, lean_object* v_t_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = lp_tzap_x2dlean_TzapLean_canonTag(v_k_388_, v_t_389_);
lean_dec(v_t_389_);
lean_dec(v_k_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(lean_object* v_arr_391_, lean_object* v_k_392_, lean_object* v_wdraws_393_, lean_object* v_range_394_, lean_object* v_b_395_, lean_object* v_i_396_){
_start:
{
lean_object* v_stop_397_; lean_object* v_step_398_; uint8_t v___x_399_; 
v_stop_397_ = lean_ctor_get(v_range_394_, 1);
v_step_398_ = lean_ctor_get(v_range_394_, 2);
v___x_399_ = lean_nat_dec_lt(v_i_396_, v_stop_397_);
if (v___x_399_ == 0)
{
lean_dec(v_i_396_);
lean_dec_ref(v_wdraws_393_);
return v_b_395_;
}
else
{
lean_object* v_fst_400_; lean_object* v_snd_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_427_; 
v_fst_400_ = lean_ctor_get(v_b_395_, 0);
v_snd_401_ = lean_ctor_get(v_b_395_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_b_395_);
if (v_isSharedCheck_427_ == 0)
{
v___x_403_ = v_b_395_;
v_isShared_404_ = v_isSharedCheck_427_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_snd_401_);
lean_inc(v_fst_400_);
lean_dec(v_b_395_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_427_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_g_405_; lean_object* v_canons_407_; lean_object* v___x_414_; 
v_g_405_ = lean_array_fget_borrowed(v_arr_391_, v_i_396_);
lean_inc(v_g_405_);
v___x_414_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_g_405_);
if (lean_obj_tag(v___x_414_) == 0)
{
v_canons_407_ = v_fst_400_;
goto v___jp_406_;
}
else
{
lean_object* v_val_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_426_; 
v_val_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_426_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_val_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_snd_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v_snd_419_ = lean_ctor_get(v_val_415_, 1);
lean_inc(v_snd_419_);
lean_dec(v_val_415_);
v___x_420_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_snd_401_, v_snd_419_);
lean_dec(v_snd_419_);
v___x_421_ = lp_tzap_x2dlean_TzapLean_canonTag(v_k_392_, v___x_420_);
lean_dec(v___x_420_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_421_);
v___x_423_ = v___x_417_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_425_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v_canons_424_; 
v_canons_424_ = lean_array_set(v_fst_400_, v_i_396_, v___x_423_);
v_canons_407_ = v_canons_424_;
goto v___jp_406_;
}
}
}
v___jp_406_:
{
lean_object* v_ts_408_; lean_object* v___x_410_; 
lean_inc_ref(v_wdraws_393_);
v_ts_408_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_392_, v_wdraws_393_, v_snd_401_, v_g_405_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 1, v_ts_408_);
lean_ctor_set(v___x_403_, 0, v_canons_407_);
v___x_410_ = v___x_403_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_canons_407_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_ts_408_);
v___x_410_ = v_reuseFailAlloc_413_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; 
v___x_411_ = lean_nat_add(v_i_396_, v_step_398_);
lean_dec(v_i_396_);
v_b_395_ = v___x_410_;
v_i_396_ = v___x_411_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg___boxed(lean_object* v_arr_428_, lean_object* v_k_429_, lean_object* v_wdraws_430_, lean_object* v_range_431_, lean_object* v_b_432_, lean_object* v_i_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_428_, v_k_429_, v_wdraws_430_, v_range_431_, v_b_432_, v_i_433_);
lean_dec_ref(v_range_431_);
lean_dec(v_k_429_);
lean_dec_ref(v_arr_428_);
return v_res_434_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = lean_box(0);
v___x_436_ = lean_unsigned_to_nat(16u);
v___x_437_ = lean_mk_array(v___x_436_, v___x_435_);
return v___x_437_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__0);
v___x_439_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v___x_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(lean_object* v___x_441_, lean_object* v_arr_442_, lean_object* v___x_443_, lean_object* v_range_444_, lean_object* v_b_445_, lean_object* v_i_446_){
_start:
{
lean_object* v_stop_447_; lean_object* v_step_448_; lean_object* v_a_450_; uint8_t v___x_453_; 
v_stop_447_ = lean_ctor_get(v_range_444_, 1);
v_step_448_ = lean_ctor_get(v_range_444_, 2);
v___x_453_ = lean_nat_dec_lt(v_i_446_, v_stop_447_);
if (v___x_453_ == 0)
{
lean_dec(v_i_446_);
return v_b_445_;
}
else
{
lean_object* v_fst_454_; lean_object* v_snd_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_483_; 
v_fst_454_ = lean_ctor_get(v_b_445_, 0);
v_snd_455_ = lean_ctor_get(v_b_445_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_b_445_);
if (v_isSharedCheck_483_ == 0)
{
v___x_457_ = v_b_445_;
v_isShared_458_ = v_isSharedCheck_483_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_snd_455_);
lean_inc(v_fst_454_);
lean_dec(v_b_445_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_483_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_459_ = lean_unsigned_to_nat(1u);
v___x_460_ = lp_tzap_x2dlean_TzapLean_instInhabitedGate_default;
v___x_461_ = lean_nat_sub(v___x_441_, v___x_459_);
v___x_462_ = lean_nat_sub(v___x_461_, v_i_446_);
lean_dec(v___x_461_);
v___x_463_ = lean_array_get_borrowed(v___x_460_, v_arr_442_, v___x_462_);
v___x_464_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_467_; 
lean_dec(v___x_462_);
lean_dec(v_snd_455_);
v___x_465_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 1, v___x_465_);
v___x_467_ = v___x_457_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_fst_454_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
v_a_450_ = v___x_467_;
goto v___jp_449_;
}
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_box(0);
v___x_470_ = lean_array_get_borrowed(v___x_469_, v___x_443_, v___x_462_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_472_; 
lean_dec(v___x_462_);
if (v_isShared_458_ == 0)
{
v___x_472_ = v___x_457_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_fst_454_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_snd_455_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
v_a_450_ = v___x_472_;
goto v___jp_449_;
}
}
else
{
lean_object* v_val_474_; uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
v_val_474_ = lean_ctor_get(v___x_470_, 0);
v___x_475_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_snd_455_, v_val_474_);
v___x_476_ = lean_box(v___x_475_);
v___x_477_ = lean_array_set(v_fst_454_, v___x_462_, v___x_476_);
lean_dec(v___x_462_);
v___x_478_ = lean_box(0);
lean_inc(v_val_474_);
v___x_479_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_snd_455_, v_val_474_, v___x_478_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 1, v___x_479_);
lean_ctor_set(v___x_457_, 0, v___x_477_);
v___x_481_ = v___x_457_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
v_a_450_ = v___x_481_;
goto v___jp_449_;
}
}
}
}
}
v___jp_449_:
{
lean_object* v___x_451_; 
v___x_451_ = lean_nat_add(v_i_446_, v_step_448_);
lean_dec(v_i_446_);
v_b_445_ = v_a_450_;
v_i_446_ = v___x_451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___boxed(lean_object* v___x_484_, lean_object* v_arr_485_, lean_object* v___x_486_, lean_object* v_range_487_, lean_object* v_b_488_, lean_object* v_i_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_484_, v_arr_485_, v___x_486_, v_range_487_, v_b_488_, v_i_489_);
lean_dec_ref(v_range_487_);
lean_dec_ref(v___x_486_);
lean_dec_ref(v_arr_485_);
lean_dec(v___x_484_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets(lean_object* v_k_491_, lean_object* v_wdraws_492_, lean_object* v_n_493_, lean_object* v_gs_494_){
_start:
{
lean_object* v_arr_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v_canons_498_; lean_object* v_ts_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_fst_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_518_; 
v_arr_495_ = lean_array_mk(v_gs_494_);
v___x_496_ = lean_array_get_size(v_arr_495_);
v___x_497_ = lean_box(0);
v_canons_498_ = lean_mk_array(v___x_496_, v___x_497_);
lean_inc_ref(v_wdraws_492_);
v_ts_499_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_492_, v_n_493_);
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_496_);
lean_ctor_set(v___x_502_, 2, v___x_501_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v_canons_498_);
lean_ctor_set(v___x_503_, 1, v_ts_499_);
v___x_504_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_495_, v_k_491_, v_wdraws_492_, v___x_502_, v___x_503_, v___x_500_);
v_fst_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v___x_504_, 1);
lean_dec(v_unused_519_);
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_518_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_fst_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_518_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_514_; 
v___x_509_ = 0;
v___x_510_ = lean_box(v___x_509_);
v___x_511_ = lean_mk_array(v___x_496_, v___x_510_);
v___x_512_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg___closed__1);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v___x_512_);
lean_ctor_set(v___x_507_, 0, v___x_511_);
v___x_514_ = v___x_507_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_511_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v___x_512_);
v___x_514_ = v_reuseFailAlloc_517_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_515_; lean_object* v_fst_516_; 
v___x_515_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_496_, v_arr_495_, v_fst_505_, v___x_502_, v___x_514_, v___x_500_);
lean_dec_ref_known(v___x_502_, 3);
lean_dec(v_fst_505_);
lean_dec_ref(v_arr_495_);
v_fst_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_fst_516_);
lean_dec_ref(v___x_515_);
return v_fst_516_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeTargets___boxed(lean_object* v_k_520_, lean_object* v_wdraws_521_, lean_object* v_n_522_, lean_object* v_gs_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = lp_tzap_x2dlean_TzapLean_mergeTargets(v_k_520_, v_wdraws_521_, v_n_522_, v_gs_523_);
lean_dec(v_k_520_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0(lean_object* v_arr_525_, lean_object* v_k_526_, lean_object* v_wdraws_527_, lean_object* v_range_528_, lean_object* v_b_529_, lean_object* v_i_530_, lean_object* v_hs_531_, lean_object* v_hl_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___redArg(v_arr_525_, v_k_526_, v_wdraws_527_, v_range_528_, v_b_529_, v_i_530_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0___boxed(lean_object* v_arr_534_, lean_object* v_k_535_, lean_object* v_wdraws_536_, lean_object* v_range_537_, lean_object* v_b_538_, lean_object* v_i_539_, lean_object* v_hs_540_, lean_object* v_hl_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__0(v_arr_534_, v_k_535_, v_wdraws_536_, v_range_537_, v_b_538_, v_i_539_, v_hs_540_, v_hl_541_);
lean_dec_ref(v_range_537_);
lean_dec(v_k_535_);
lean_dec_ref(v_arr_534_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1(lean_object* v___x_543_, lean_object* v_arr_544_, lean_object* v___x_545_, lean_object* v_range_546_, lean_object* v_b_547_, lean_object* v_i_548_, lean_object* v_hs_549_, lean_object* v_hl_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___redArg(v___x_543_, v_arr_544_, v___x_545_, v_range_546_, v_b_547_, v_i_548_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1___boxed(lean_object* v___x_552_, lean_object* v_arr_553_, lean_object* v___x_554_, lean_object* v_range_555_, lean_object* v_b_556_, lean_object* v_i_557_, lean_object* v_hs_558_, lean_object* v_hl_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_mergeTargets_spec__1(v___x_552_, v_arr_553_, v___x_554_, v_range_555_, v_b_556_, v_i_557_, v_hs_558_, v_hl_559_);
lean_dec_ref(v_range_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v_arr_553_);
lean_dec(v___x_552_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom(lean_object* v_k_561_, lean_object* v_wdraws_562_, lean_object* v_targets_563_, lean_object* v_ts_564_, lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
if (lean_obj_tag(v_x_566_) == 0)
{
lean_dec(v_x_565_);
lean_dec_ref(v_ts_564_);
lean_dec_ref(v_wdraws_562_);
return v_x_566_;
}
else
{
lean_object* v_head_567_; lean_object* v_tail_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_612_; 
v_head_567_ = lean_ctor_get(v_x_566_, 0);
v_tail_568_ = lean_ctor_get(v_x_566_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_566_);
if (v_isSharedCheck_612_ == 0)
{
v___x_570_ = v_x_566_;
v_isShared_571_ = v_isSharedCheck_612_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_tail_568_);
lean_inc(v_head_567_);
lean_dec(v_x_566_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_612_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; 
lean_inc(v_head_567_);
v___x_572_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_567_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
lean_inc_ref(v_wdraws_562_);
v___x_573_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_561_, v_wdraws_562_, v_ts_564_, v_head_567_);
v___x_574_ = lean_unsigned_to_nat(1u);
v___x_575_ = lean_nat_add(v_x_565_, v___x_574_);
lean_dec(v_x_565_);
v___x_576_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_561_, v_wdraws_562_, v_targets_563_, v___x_573_, v___x_575_, v_tail_568_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 1, v___x_576_);
v___x_578_ = v___x_570_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_head_567_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
else
{
lean_object* v_val_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_611_; 
v_val_580_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v___x_572_, 1);
v_fst_581_ = lean_ctor_get(v_val_580_, 0);
v_snd_582_ = lean_ctor_get(v_val_580_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_val_580_);
if (v_isSharedCheck_611_ == 0)
{
v___x_584_ = v_val_580_;
v_isShared_585_ = v_isSharedCheck_611_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_snd_582_);
lean_inc(v_fst_581_);
lean_dec(v_val_580_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_611_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_array_get_size(v_targets_563_);
v___x_601_ = lean_nat_dec_lt(v_x_565_, v___x_600_);
if (v___x_601_ == 0)
{
lean_del_object(v___x_584_);
goto v___jp_586_;
}
else
{
lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_602_ = lean_array_fget_borrowed(v_targets_563_, v_x_565_);
v___x_603_ = lean_unbox(v___x_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
lean_dec(v_snd_582_);
lean_dec(v_fst_581_);
lean_del_object(v___x_570_);
lean_inc_ref(v_wdraws_562_);
v___x_604_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_561_, v_wdraws_562_, v_ts_564_, v_head_567_);
v___x_605_ = lean_unsigned_to_nat(1u);
v___x_606_ = lean_nat_add(v_x_565_, v___x_605_);
lean_dec(v_x_565_);
v___x_607_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_561_, v_wdraws_562_, v_targets_563_, v___x_604_, v___x_606_, v_tail_568_);
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 1);
lean_ctor_set(v___x_584_, 1, v___x_607_);
lean_ctor_set(v___x_584_, 0, v_head_567_);
v___x_609_ = v___x_584_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_head_567_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
else
{
lean_del_object(v___x_584_);
goto v___jp_586_;
}
}
v___jp_586_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lp_tzap_x2dlean_TzapLean_TState_tagOf___redArg(v_ts_564_, v_snd_582_);
lean_dec(v_snd_582_);
lean_inc(v_tail_568_);
lean_inc_ref(v_ts_564_);
lean_inc_ref(v_wdraws_562_);
v___x_588_ = lp_tzap_x2dlean_TzapLean_mergeInto(v_k_561_, v_wdraws_562_, v_ts_564_, v___x_587_, v_fst_581_, v_tail_568_);
lean_dec(v___x_587_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
lean_inc_ref(v_wdraws_562_);
v___x_589_ = lp_tzap_x2dlean_TzapLean_TState_step(v_k_561_, v_wdraws_562_, v_ts_564_, v_head_567_);
v___x_590_ = lean_unsigned_to_nat(1u);
v___x_591_ = lean_nat_add(v_x_565_, v___x_590_);
lean_dec(v_x_565_);
v___x_592_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_561_, v_wdraws_562_, v_targets_563_, v___x_589_, v___x_591_, v_tail_568_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 1, v___x_592_);
v___x_594_ = v___x_570_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_head_567_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
else
{
lean_object* v_val_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_del_object(v___x_570_);
lean_dec(v_tail_568_);
lean_dec(v_head_567_);
v_val_596_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_val_596_);
lean_dec_ref_known(v___x_588_, 1);
v___x_597_ = lean_unsigned_to_nat(1u);
v___x_598_ = lean_nat_add(v_x_565_, v___x_597_);
lean_dec(v_x_565_);
v_x_565_ = v___x_598_;
v_x_566_ = v_val_596_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFrom___boxed(lean_object* v_k_613_, lean_object* v_wdraws_614_, lean_object* v_targets_615_, lean_object* v_ts_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_613_, v_wdraws_614_, v_targets_615_, v_ts_616_, v_x_617_, v_x_618_);
lean_dec_ref(v_targets_615_);
lean_dec(v_k_613_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter___redArg(lean_object* v_x_620_, lean_object* v_x_621_, lean_object* v_h__1_622_, lean_object* v_h__2_623_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v___x_624_; 
lean_dec(v_h__2_623_);
v___x_624_ = lean_apply_1(v_h__1_622_, v_x_620_);
return v___x_624_;
}
else
{
lean_object* v_head_625_; lean_object* v_tail_626_; lean_object* v___x_627_; 
lean_dec(v_h__1_622_);
v_head_625_ = lean_ctor_get(v_x_621_, 0);
lean_inc(v_head_625_);
v_tail_626_ = lean_ctor_get(v_x_621_, 1);
lean_inc(v_tail_626_);
lean_dec_ref_known(v_x_621_, 2);
v___x_627_ = lean_apply_3(v_h__2_623_, v_x_620_, v_head_625_, v_tail_626_);
return v___x_627_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__3_splitter(lean_object* v_motive_628_, lean_object* v_x_629_, lean_object* v_x_630_, lean_object* v_h__1_631_, lean_object* v_h__2_632_){
_start:
{
if (lean_obj_tag(v_x_630_) == 0)
{
lean_object* v___x_633_; 
lean_dec(v_h__2_632_);
v___x_633_ = lean_apply_1(v_h__1_631_, v_x_629_);
return v___x_633_;
}
else
{
lean_object* v_head_634_; lean_object* v_tail_635_; lean_object* v___x_636_; 
lean_dec(v_h__1_631_);
v_head_634_ = lean_ctor_get(v_x_630_, 0);
lean_inc(v_head_634_);
v_tail_635_ = lean_ctor_get(v_x_630_, 1);
lean_inc(v_tail_635_);
lean_dec_ref_known(v_x_630_, 2);
v___x_636_ = lean_apply_3(v_h__2_632_, v_x_629_, v_head_634_, v_tail_635_);
return v___x_636_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter___redArg(lean_object* v_x_637_, lean_object* v_h__1_638_, lean_object* v_h__2_639_){
_start:
{
if (lean_obj_tag(v_x_637_) == 0)
{
lean_object* v___x_640_; 
lean_dec(v_h__1_638_);
v___x_640_ = lean_apply_1(v_h__2_639_, lean_box(0));
return v___x_640_;
}
else
{
lean_object* v_val_641_; lean_object* v___x_642_; 
lean_dec(v_h__2_639_);
v_val_641_ = lean_ctor_get(v_x_637_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v_x_637_, 1);
v___x_642_ = lean_apply_2(v_h__1_638_, v_val_641_, lean_box(0));
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFold_0__TzapLean_foldFrom_match__1_splitter(lean_object* v_motive_643_, lean_object* v_x_644_, lean_object* v_h__1_645_, lean_object* v_h__2_646_){
_start:
{
if (lean_obj_tag(v_x_644_) == 0)
{
lean_object* v___x_647_; 
lean_dec(v_h__1_645_);
v___x_647_ = lean_apply_1(v_h__2_646_, lean_box(0));
return v___x_647_;
}
else
{
lean_object* v_val_648_; lean_object* v___x_649_; 
lean_dec(v_h__2_646_);
v_val_648_ = lean_ctor_get(v_x_644_, 0);
lean_inc(v_val_648_);
lean_dec_ref_known(v_x_644_, 1);
v___x_649_ = lean_apply_2(v_h__1_645_, v_val_648_, lean_box(0));
return v___x_649_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_emitAll(lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
return v_x_650_;
}
else
{
lean_object* v_head_651_; lean_object* v_tail_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_669_; 
v_head_651_ = lean_ctor_get(v_x_650_, 0);
v_tail_652_ = lean_ctor_get(v_x_650_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_669_ == 0)
{
v___x_654_ = v_x_650_;
v_isShared_655_ = v_isSharedCheck_669_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_tail_652_);
lean_inc(v_head_651_);
lean_dec(v_x_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_669_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___y_657_; lean_object* v___x_660_; 
lean_inc(v_head_651_);
v___x_660_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_651_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = lean_box(0);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_661_);
v___x_663_ = v___x_654_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_head_651_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v___y_657_ = v___x_663_;
goto v___jp_656_;
}
}
else
{
lean_object* v_val_665_; lean_object* v_fst_666_; lean_object* v_snd_667_; lean_object* v___x_668_; 
lean_del_object(v___x_654_);
lean_dec(v_head_651_);
v_val_665_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_val_665_);
lean_dec_ref_known(v___x_660_, 1);
v_fst_666_ = lean_ctor_get(v_val_665_, 0);
lean_inc(v_fst_666_);
v_snd_667_ = lean_ctor_get(v_val_665_, 1);
lean_inc(v_snd_667_);
lean_dec(v_val_665_);
v___x_668_ = lp_tzap_x2dlean_TzapLean_emitRotation(v_snd_667_, v_fst_666_);
v___y_657_ = v___x_668_;
goto v___jp_656_;
}
v___jp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lp_tzap_x2dlean_TzapLean_emitAll(v_tail_652_);
v___x_659_ = l_List_appendTR___redArg(v___y_657_, v___x_658_);
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates(lean_object* v_k_670_, lean_object* v_wdraws_671_, lean_object* v_n_672_, lean_object* v_gs_673_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
lean_inc(v_gs_673_);
lean_inc(v_n_672_);
lean_inc_ref_n(v_wdraws_671_, 2);
v___x_674_ = lp_tzap_x2dlean_TzapLean_mergeTargets(v_k_670_, v_wdraws_671_, v_n_672_, v_gs_673_);
v___x_675_ = lp_tzap_x2dlean_TzapLean_TState_initial___redArg(v_wdraws_671_, v_n_672_);
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = lp_tzap_x2dlean_TzapLean_foldFrom(v_k_670_, v_wdraws_671_, v___x_674_, v___x_675_, v___x_676_, v_gs_673_);
lean_dec_ref(v___x_674_);
v___x_678_ = lp_tzap_x2dlean_TzapLean_emitAll(v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGates___boxed(lean_object* v_k_679_, lean_object* v_wdraws_680_, lean_object* v_n_681_, lean_object* v_gs_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = lp_tzap_x2dlean_TzapLean_phaseFoldGates(v_k_679_, v_wdraws_680_, v_n_681_, v_gs_682_);
lean_dec(v_k_679_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold(lean_object* v_k_684_, lean_object* v_wdraws_685_, lean_object* v_c_686_){
_start:
{
lean_object* v_numQubits_687_; lean_object* v_gates_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_numQubits_687_ = lean_ctor_get(v_c_686_, 0);
v_gates_688_ = lean_ctor_get(v_c_686_, 2);
lean_inc(v_gates_688_);
lean_inc(v_numQubits_687_);
v___x_689_ = lp_tzap_x2dlean_TzapLean_phaseFoldGates(v_k_684_, v_wdraws_685_, v_numQubits_687_, v_gates_688_);
v___x_690_ = lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(v_c_686_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFold___boxed(lean_object* v_k_691_, lean_object* v_wdraws_692_, lean_object* v_c_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_691_, v_wdraws_692_, v_c_693_);
lean_dec(v_k_691_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
if (lean_obj_tag(v_a_695_) == 0)
{
return v_a_696_;
}
else
{
lean_object* v_head_697_; lean_object* v_tail_698_; uint8_t v___x_699_; 
v_head_697_ = lean_ctor_get(v_a_695_, 0);
v_tail_698_ = lean_ctor_get(v_a_695_, 1);
v___x_699_ = lp_tzap_x2dlean_TzapLean_Gate_allocates(v_head_697_);
if (v___x_699_ == 0)
{
v_a_695_ = v_tail_698_;
goto _start;
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = lean_unsigned_to_nat(1u);
v___x_702_ = lean_nat_add(v_a_696_, v___x_701_);
lean_dec(v_a_696_);
v_a_695_ = v_tail_698_;
v_a_696_ = v___x_702_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0___boxed(lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(v_a_704_, v_a_705_);
lean_dec(v_a_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound(lean_object* v_c_707_){
_start:
{
lean_object* v_numQubits_708_; lean_object* v_gates_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v_numQubits_708_ = lean_ctor_get(v_c_707_, 0);
v_gates_709_ = lean_ctor_get(v_c_707_, 2);
v___x_710_ = lean_unsigned_to_nat(0u);
v___x_711_ = lp_tzap_x2dlean_List_countP_go___at___00TzapLean_varBound_spec__0(v_gates_709_, v___x_710_);
v___x_712_ = lean_nat_add(v_numQubits_708_, v___x_711_);
lean_dec(v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_varBound___boxed(lean_object* v_c_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_713_);
lean_dec_ref(v_c_713_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_wordsOf(lean_object* v_k_715_, lean_object* v_draws_716_, lean_object* v_i_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_apply_1(v_draws_716_, v_i_717_);
v___x_719_ = lp_tzap_x2dlean_TzapLean_bitsToWord(v_k_715_, v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(lean_object* v_start_720_, lean_object* v_bytes_721_, lean_object* v_range_722_, lean_object* v_b_723_, lean_object* v_i_724_){
_start:
{
lean_object* v_stop_725_; lean_object* v_step_726_; uint8_t v___y_728_; uint8_t v___x_736_; 
v_stop_725_ = lean_ctor_get(v_range_722_, 1);
v_step_726_ = lean_ctor_get(v_range_722_, 2);
v___x_736_ = lean_nat_dec_lt(v_i_724_, v_stop_725_);
if (v___x_736_ == 0)
{
lean_dec(v_i_724_);
return v_b_723_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_737_ = lean_nat_add(v_start_720_, v_i_724_);
v___x_738_ = lean_byte_array_size(v_bytes_721_);
v___x_739_ = lean_nat_dec_lt(v___x_737_, v___x_738_);
if (v___x_739_ == 0)
{
uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
lean_dec(v___x_737_);
v___x_740_ = l_instInhabitedUInt8;
v___x_741_ = lean_box(v___x_740_);
v___x_742_ = l_outOfBounds___redArg(v___x_741_);
lean_dec(v___x_741_);
v___x_743_ = lean_unbox(v___x_742_);
lean_dec(v___x_742_);
v___y_728_ = v___x_743_;
goto v___jp_727_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = lean_byte_array_fget(v_bytes_721_, v___x_737_);
lean_dec(v___x_737_);
v___y_728_ = v___x_744_;
goto v___jp_727_;
}
}
v___jp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_729_ = lean_uint8_to_nat(v___y_728_);
v___x_730_ = lean_unsigned_to_nat(8u);
v___x_731_ = lean_nat_mul(v___x_730_, v_i_724_);
v___x_732_ = lean_nat_shiftl(v___x_729_, v___x_731_);
lean_dec(v___x_731_);
v___x_733_ = lean_nat_lor(v_b_723_, v___x_732_);
lean_dec(v___x_732_);
lean_dec(v_b_723_);
v___x_734_ = lean_nat_add(v_i_724_, v_step_726_);
lean_dec(v_i_724_);
v_b_723_ = v___x_733_;
v_i_724_ = v___x_734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg___boxed(lean_object* v_start_745_, lean_object* v_bytes_746_, lean_object* v_range_747_, lean_object* v_b_748_, lean_object* v_i_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_745_, v_bytes_746_, v_range_747_, v_b_748_, v_i_749_);
lean_dec_ref(v_range_747_);
lean_dec_ref(v_bytes_746_);
lean_dec(v_start_745_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes(lean_object* v_bytes_751_, lean_object* v_start_752_, lean_object* v_count_753_){
_start:
{
lean_object* v_w_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_w_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_unsigned_to_nat(1u);
v___x_756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_756_, 0, v_w_754_);
lean_ctor_set(v___x_756_, 1, v_count_753_);
lean_ctor_set(v___x_756_, 2, v___x_755_);
v___x_757_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_752_, v_bytes_751_, v___x_756_, v_w_754_, v_w_754_);
lean_dec_ref_known(v___x_756_, 3);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_natOfBytes___boxed(lean_object* v_bytes_758_, lean_object* v_start_759_, lean_object* v_count_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = lp_tzap_x2dlean_TzapLean_natOfBytes(v_bytes_758_, v_start_759_, v_count_760_);
lean_dec(v_start_759_);
lean_dec_ref(v_bytes_758_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0(lean_object* v_start_762_, lean_object* v_bytes_763_, lean_object* v_range_764_, lean_object* v_b_765_, lean_object* v_i_766_, lean_object* v_hs_767_, lean_object* v_hl_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___redArg(v_start_762_, v_bytes_763_, v_range_764_, v_b_765_, v_i_766_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0___boxed(lean_object* v_start_770_, lean_object* v_bytes_771_, lean_object* v_range_772_, lean_object* v_b_773_, lean_object* v_i_774_, lean_object* v_hs_775_, lean_object* v_hl_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_natOfBytes_spec__0(v_start_770_, v_bytes_771_, v_range_772_, v_b_773_, v_i_774_, v_hs_775_, v_hl_776_);
lean_dec_ref(v_range_772_);
lean_dec_ref(v_bytes_771_);
lean_dec(v_start_770_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0(lean_object* v___x_778_, lean_object* v_a_779_, lean_object* v_i_780_, lean_object* v_j_781_){
_start:
{
lean_object* v___x_782_; uint8_t v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_array_get_borrowed(v___x_778_, v_a_779_, v_i_780_);
v___x_783_ = l_Nat_testBit(v___x_782_, v_j_781_);
v___x_784_ = lp_tzap_x2dlean_TzapLean_bit(v___x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___lam__0___boxed(lean_object* v___x_785_, lean_object* v_a_786_, lean_object* v_i_787_, lean_object* v_j_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = lp_tzap_x2dlean_TzapLean_randomSample___lam__0(v___x_785_, v_a_786_, v_i_787_, v_j_788_);
lean_dec(v_j_788_);
lean_dec(v_i_787_);
lean_dec_ref(v_a_786_);
lean_dec(v___x_785_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(lean_object* v_bytesPerTag_790_, lean_object* v_a_791_, lean_object* v_range_792_, lean_object* v_b_793_, lean_object* v_i_794_){
_start:
{
lean_object* v_stop_796_; lean_object* v_step_797_; uint8_t v___x_798_; 
v_stop_796_ = lean_ctor_get(v_range_792_, 1);
v_step_797_ = lean_ctor_get(v_range_792_, 2);
v___x_798_ = lean_nat_dec_lt(v_i_794_, v_stop_796_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
lean_dec(v_i_794_);
lean_dec(v_bytesPerTag_790_);
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v_b_793_);
return v___x_799_;
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_800_ = lean_nat_mul(v_i_794_, v_bytesPerTag_790_);
lean_inc(v_bytesPerTag_790_);
v___x_801_ = lp_tzap_x2dlean_TzapLean_natOfBytes(v_a_791_, v___x_800_, v_bytesPerTag_790_);
lean_dec(v___x_800_);
v___x_802_ = lean_array_push(v_b_793_, v___x_801_);
v___x_803_ = lean_nat_add(v_i_794_, v_step_797_);
lean_dec(v_i_794_);
v_b_793_ = v___x_802_;
v_i_794_ = v___x_803_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg___boxed(lean_object* v_bytesPerTag_805_, lean_object* v_a_806_, lean_object* v_range_807_, lean_object* v_b_808_, lean_object* v_i_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_805_, v_a_806_, v_range_807_, v_b_808_, v_i_809_);
lean_dec_ref(v_range_807_);
lean_dec_ref(v_a_806_);
return v_res_811_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_randomSample___closed__0(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_812_ = l_System_Platform_numBits;
v___x_813_ = lean_unsigned_to_nat(2u);
v___x_814_ = lean_nat_pow(v___x_813_, v___x_812_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample(lean_object* v_m_818_, lean_object* v_k_819_){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_bytesPerTag_824_; lean_object* v_totalBytes_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_821_ = lean_unsigned_to_nat(7u);
v___x_822_ = lean_nat_add(v_k_819_, v___x_821_);
v___x_823_ = lean_unsigned_to_nat(3u);
v_bytesPerTag_824_ = lean_nat_shiftr(v___x_822_, v___x_823_);
lean_dec(v___x_822_);
v_totalBytes_825_ = lean_nat_mul(v_m_818_, v_bytesPerTag_824_);
v___x_826_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_randomSample___closed__0, &lp_tzap_x2dlean_TzapLean_randomSample___closed__0_once, _init_lp_tzap_x2dlean_TzapLean_randomSample___closed__0);
v___x_827_ = lean_nat_dec_le(v___x_826_, v_totalBytes_825_);
if (v___x_827_ == 0)
{
size_t v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_usize_of_nat(v_totalBytes_825_);
lean_dec(v_totalBytes_825_);
v___x_829_ = lean_io_get_random_bytes(v___x_828_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_844_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_829_, 1);
v___x_831_ = lean_mk_empty_array_with_capacity(v_m_818_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_unsigned_to_nat(1u);
v___x_834_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v_m_818_);
lean_ctor_set(v___x_834_, 2, v___x_833_);
v___x_835_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_824_, v_a_830_, v___x_834_, v___x_831_, v___x_832_);
lean_dec_ref_known(v___x_834_, 3);
lean_dec(v_a_830_);
v_a_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_844_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___f_840_; lean_object* v___x_842_; 
v___f_840_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_randomSample___lam__0___boxed), 4, 2);
lean_closure_set(v___f_840_, 0, v___x_832_);
lean_closure_set(v___f_840_, 1, v_a_836_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___f_840_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___f_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_bytesPerTag_824_);
lean_dec(v_m_818_);
v_a_845_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_829_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_829_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
else
{
lean_object* v___x_853_; lean_object* v___x_854_; 
lean_dec(v_totalBytes_825_);
lean_dec(v_bytesPerTag_824_);
lean_dec(v_m_818_);
v___x_853_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_randomSample___closed__2));
v___x_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_randomSample___boxed(lean_object* v_m_855_, lean_object* v_k_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = lp_tzap_x2dlean_TzapLean_randomSample(v_m_855_, v_k_856_);
lean_dec(v_k_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0(lean_object* v_bytesPerTag_859_, lean_object* v_a_860_, lean_object* v_range_861_, lean_object* v_b_862_, lean_object* v_i_863_, lean_object* v_hs_864_, lean_object* v_hl_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___redArg(v_bytesPerTag_859_, v_a_860_, v_range_861_, v_b_862_, v_i_863_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0___boxed(lean_object* v_bytesPerTag_868_, lean_object* v_a_869_, lean_object* v_range_870_, lean_object* v_b_871_, lean_object* v_i_872_, lean_object* v_hs_873_, lean_object* v_hl_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_randomSample_spec__0(v_bytesPerTag_868_, v_a_869_, v_range_870_, v_b_871_, v_i_872_, v_hs_873_, v_hl_874_);
lean_dec_ref(v_range_870_);
lean_dec_ref(v_a_869_);
return v_res_876_;
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
