// Lean compiler output
// Module: TzapLean.PhaseFoldNonlinear
// Imports: public import Init public meta import Init public import TzapLean.PhaseFoldProof public import TzapLean.GF128
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_Fingerprint_zero;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_Fingerprint_one;
lean_object* lp_tzap_x2dlean_TzapLean_Fingerprint_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_Fingerprint_fresh(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_Fingerprint_mul_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_GF128_add(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_rotAngle(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* lp_tzap_x2dlean_TzapLean_instInhabitedGate_default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_Gate_isUnitary(lean_object*);
uint8_t lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_signedAngle(uint8_t, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_emitAll(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_fpOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_fpOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_tagOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_tagOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_NState_initial_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_initial(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_step(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_step___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_steps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_steps___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_matchFingerprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_tzap_x2dlean_TzapLean_matchFingerprint___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_matchFingerprint___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchFingerprint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchFingerprint___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_NState_steps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_NState_steps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonicalFingerprint(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonicalFingerprint___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0;
static lean_once_cell_t lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_nonlinearMergeTargets(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFromNonlinear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFromNonlinear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGatesNonlinear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldNonlinear(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_diagRun_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_TState_steps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeInto_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_fpOf(lean_object* v_st_1_, lean_object* v_q_2_){
_start:
{
lean_object* v_fingerprints_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v_fingerprints_3_ = lean_ctor_get(v_st_1_, 0);
v___x_4_ = lean_array_get_size(v_fingerprints_3_);
v___x_5_ = lean_nat_dec_lt(v_q_2_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lp_tzap_x2dlean_TzapLean_Fingerprint_zero;
return v___x_6_;
}
else
{
lean_object* v___x_7_; 
v___x_7_ = lean_array_fget_borrowed(v_fingerprints_3_, v_q_2_);
lean_inc(v___x_7_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_fpOf___boxed(lean_object* v_st_8_, lean_object* v_q_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_8_, v_q_9_);
lean_dec(v_q_9_);
lean_dec_ref(v_st_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_tagOf(lean_object* v_st_11_, lean_object* v_q_12_){
_start:
{
lean_object* v___x_13_; lean_object* v_value_14_; 
v___x_13_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_11_, v_q_12_);
v_value_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_value_14_);
lean_dec_ref(v___x_13_);
return v_value_14_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_tagOf___boxed(lean_object* v_st_15_, lean_object* v_q_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_tzap_x2dlean_TzapLean_NState_tagOf(v_st_15_, v_q_16_);
lean_dec(v_q_16_);
lean_dec_ref(v_st_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_NState_initial_spec__0(lean_object* v_draws_18_, lean_object* v_a_19_, lean_object* v_a_20_){
_start:
{
if (lean_obj_tag(v_a_19_) == 0)
{
lean_object* v___x_21_; 
lean_dec_ref(v_draws_18_);
v___x_21_ = l_List_reverse___redArg(v_a_20_);
return v___x_21_;
}
else
{
lean_object* v_head_22_; lean_object* v_tail_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_33_; 
v_head_22_ = lean_ctor_get(v_a_19_, 0);
v_tail_23_ = lean_ctor_get(v_a_19_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v_a_19_);
if (v_isSharedCheck_33_ == 0)
{
v___x_25_ = v_a_19_;
v_isShared_26_ = v_isSharedCheck_33_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_tail_23_);
lean_inc(v_head_22_);
lean_dec(v_a_19_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_33_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_inc_ref(v_draws_18_);
v___x_27_ = lean_apply_1(v_draws_18_, v_head_22_);
v___x_28_ = lp_tzap_x2dlean_TzapLean_Fingerprint_fresh(v___x_27_);
lean_dec(v___x_27_);
if (v_isShared_26_ == 0)
{
lean_ctor_set(v___x_25_, 1, v_a_20_);
lean_ctor_set(v___x_25_, 0, v___x_28_);
v___x_30_ = v___x_25_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v_a_20_);
v___x_30_ = v_reuseFailAlloc_32_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
v_a_19_ = v_tail_23_;
v_a_20_ = v___x_30_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_initial(lean_object* v_draws_34_, lean_object* v_n_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
lean_inc(v_n_35_);
v___x_36_ = l_List_range(v_n_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lp_tzap_x2dlean_List_mapTR_loop___at___00TzapLean_NState_initial_spec__0(v_draws_34_, v___x_36_, v___x_37_);
v___x_39_ = lean_array_mk(v___x_38_);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v_n_35_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_step(lean_object* v_draws_41_, lean_object* v_st_42_, lean_object* v_g_43_){
_start:
{
switch(lean_obj_tag(v_g_43_))
{
case 0:
{
lean_object* v_q_44_; lean_object* v_fingerprints_45_; lean_object* v_fresh_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
lean_dec_ref(v_draws_41_);
v_q_44_ = lean_ctor_get(v_g_43_, 0);
v_fingerprints_45_ = lean_ctor_get(v_st_42_, 0);
v_fresh_46_ = lean_ctor_get(v_st_42_, 1);
v___x_47_ = lean_array_get_size(v_fingerprints_45_);
v___x_48_ = lean_nat_dec_lt(v_q_44_, v___x_47_);
if (v___x_48_ == 0)
{
return v_st_42_;
}
else
{
lean_object* v___x_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_59_; 
lean_inc(v_fresh_46_);
lean_inc_ref(v_fingerprints_45_);
v___x_49_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_q_44_);
v_isSharedCheck_59_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_59_ == 0)
{
lean_object* v_unused_60_; lean_object* v_unused_61_; 
v_unused_60_ = lean_ctor_get(v_st_42_, 1);
lean_dec(v_unused_60_);
v_unused_61_ = lean_ctor_get(v_st_42_, 0);
lean_dec(v_unused_61_);
v___x_51_ = v_st_42_;
v_isShared_52_ = v_isSharedCheck_59_;
goto v_resetjp_50_;
}
else
{
lean_dec(v_st_42_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_59_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_57_; 
v___x_53_ = lp_tzap_x2dlean_TzapLean_Fingerprint_one;
v___x_54_ = lp_tzap_x2dlean_TzapLean_Fingerprint_add(v___x_49_, v___x_53_);
lean_dec_ref(v___x_49_);
v___x_55_ = lean_array_fset(v_fingerprints_45_, v_q_44_, v___x_54_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 0, v___x_55_);
v___x_57_ = v___x_51_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v___x_55_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v_fresh_46_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
}
case 8:
{
lean_object* v_control_62_; lean_object* v_target_63_; lean_object* v_fingerprints_64_; lean_object* v_fresh_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
lean_dec_ref(v_draws_41_);
v_control_62_ = lean_ctor_get(v_g_43_, 0);
v_target_63_ = lean_ctor_get(v_g_43_, 1);
v_fingerprints_64_ = lean_ctor_get(v_st_42_, 0);
v_fresh_65_ = lean_ctor_get(v_st_42_, 1);
v___x_66_ = lean_array_get_size(v_fingerprints_64_);
v___x_67_ = lean_nat_dec_lt(v_target_63_, v___x_66_);
if (v___x_67_ == 0)
{
return v_st_42_;
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_78_; 
lean_inc(v_fresh_65_);
lean_inc_ref(v_fingerprints_64_);
v___x_68_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_target_63_);
v___x_69_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_control_62_);
v_isSharedCheck_78_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_78_ == 0)
{
lean_object* v_unused_79_; lean_object* v_unused_80_; 
v_unused_79_ = lean_ctor_get(v_st_42_, 1);
lean_dec(v_unused_79_);
v_unused_80_ = lean_ctor_get(v_st_42_, 0);
lean_dec(v_unused_80_);
v___x_71_ = v_st_42_;
v_isShared_72_ = v_isSharedCheck_78_;
goto v_resetjp_70_;
}
else
{
lean_dec(v_st_42_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_78_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_73_ = lp_tzap_x2dlean_TzapLean_Fingerprint_add(v___x_68_, v___x_69_);
lean_dec_ref(v___x_68_);
v___x_74_ = lean_array_fset(v_fingerprints_64_, v_target_63_, v___x_73_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_74_);
v___x_76_ = v___x_71_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v_fresh_65_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
case 1:
{
lean_object* v_q_81_; lean_object* v_fingerprints_82_; lean_object* v_fresh_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_99_; 
v_q_81_ = lean_ctor_get(v_g_43_, 0);
v_fingerprints_82_ = lean_ctor_get(v_st_42_, 0);
v_fresh_83_ = lean_ctor_get(v_st_42_, 1);
v_isSharedCheck_99_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_99_ == 0)
{
v___x_85_ = v_st_42_;
v_isShared_86_ = v_isSharedCheck_99_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_fresh_83_);
lean_inc(v_fingerprints_82_);
lean_dec(v_st_42_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_99_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___y_88_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = lean_array_get_size(v_fingerprints_82_);
v___x_95_ = lean_nat_dec_lt(v_q_81_, v___x_94_);
if (v___x_95_ == 0)
{
lean_dec_ref(v_draws_41_);
v___y_88_ = v_fingerprints_82_;
goto v___jp_87_;
}
else
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
lean_inc(v_fresh_83_);
v___x_96_ = lean_apply_1(v_draws_41_, v_fresh_83_);
v___x_97_ = lp_tzap_x2dlean_TzapLean_Fingerprint_fresh(v___x_96_);
lean_dec(v___x_96_);
v___x_98_ = lean_array_fset(v_fingerprints_82_, v_q_81_, v___x_97_);
v___y_88_ = v___x_98_;
goto v___jp_87_;
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_89_ = lean_unsigned_to_nat(1u);
v___x_90_ = lean_nat_add(v_fresh_83_, v___x_89_);
lean_dec(v_fresh_83_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v___x_90_);
lean_ctor_set(v___x_85_, 0, v___y_88_);
v___x_92_ = v___x_85_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___y_88_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
case 10:
{
lean_object* v_control_u2081_100_; lean_object* v_control_u2082_101_; lean_object* v_target_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_control_u2081_100_ = lean_ctor_get(v_g_43_, 0);
v_control_u2082_101_ = lean_ctor_get(v_g_43_, 1);
v_target_102_ = lean_ctor_get(v_g_43_, 2);
v___x_103_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_control_u2081_100_);
v___x_104_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_control_u2082_101_);
v___x_105_ = lp_tzap_x2dlean_TzapLean_Fingerprint_mul_x3f(v___x_103_, v___x_104_);
lean_dec_ref(v___x_103_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_fingerprints_106_; lean_object* v_fresh_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
v_fingerprints_106_ = lean_ctor_get(v_st_42_, 0);
v_fresh_107_ = lean_ctor_get(v_st_42_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_123_ == 0)
{
v___x_109_ = v_st_42_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_fresh_107_);
lean_inc(v_fingerprints_106_);
lean_dec(v_st_42_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___y_112_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = lean_array_get_size(v_fingerprints_106_);
v___x_119_ = lean_nat_dec_lt(v_target_102_, v___x_118_);
if (v___x_119_ == 0)
{
lean_dec_ref(v_draws_41_);
v___y_112_ = v_fingerprints_106_;
goto v___jp_111_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_inc(v_fresh_107_);
v___x_120_ = lean_apply_1(v_draws_41_, v_fresh_107_);
v___x_121_ = lp_tzap_x2dlean_TzapLean_Fingerprint_fresh(v___x_120_);
lean_dec(v___x_120_);
v___x_122_ = lean_array_fset(v_fingerprints_106_, v_target_102_, v___x_121_);
v___y_112_ = v___x_122_;
goto v___jp_111_;
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_113_ = lean_unsigned_to_nat(1u);
v___x_114_ = lean_nat_add(v_fresh_107_, v___x_113_);
lean_dec(v_fresh_107_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___x_114_);
lean_ctor_set(v___x_109_, 0, v___y_112_);
v___x_116_ = v___x_109_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___y_112_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
else
{
lean_object* v_val_124_; lean_object* v_fingerprints_125_; lean_object* v_fresh_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
lean_dec_ref(v_draws_41_);
v_val_124_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_val_124_);
lean_dec_ref_known(v___x_105_, 1);
v_fingerprints_125_ = lean_ctor_get(v_st_42_, 0);
v_fresh_126_ = lean_ctor_get(v_st_42_, 1);
v___x_127_ = lean_array_get_size(v_fingerprints_125_);
v___x_128_ = lean_nat_dec_lt(v_target_102_, v___x_127_);
if (v___x_128_ == 0)
{
lean_dec(v_val_124_);
return v_st_42_;
}
else
{
lean_object* v___x_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_138_; 
lean_inc(v_fresh_126_);
lean_inc_ref(v_fingerprints_125_);
v___x_129_ = lp_tzap_x2dlean_TzapLean_NState_fpOf(v_st_42_, v_target_102_);
v_isSharedCheck_138_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; lean_object* v_unused_140_; 
v_unused_139_ = lean_ctor_get(v_st_42_, 1);
lean_dec(v_unused_139_);
v_unused_140_ = lean_ctor_get(v_st_42_, 0);
lean_dec(v_unused_140_);
v___x_131_ = v_st_42_;
v_isShared_132_ = v_isSharedCheck_138_;
goto v_resetjp_130_;
}
else
{
lean_dec(v_st_42_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_138_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_133_ = lp_tzap_x2dlean_TzapLean_Fingerprint_add(v___x_129_, v_val_124_);
lean_dec_ref(v___x_129_);
v___x_134_ = lean_array_fset(v_fingerprints_125_, v_target_102_, v___x_133_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 0, v___x_134_);
v___x_136_ = v___x_131_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_fresh_126_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
}
case 13:
{
lean_object* v_q_141_; lean_object* v_fingerprints_142_; lean_object* v_fresh_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
lean_dec_ref(v_draws_41_);
v_q_141_ = lean_ctor_get(v_g_43_, 0);
v_fingerprints_142_ = lean_ctor_get(v_st_42_, 0);
v_fresh_143_ = lean_ctor_get(v_st_42_, 1);
v___x_144_ = lean_array_get_size(v_fingerprints_142_);
v___x_145_ = lean_nat_dec_lt(v_q_141_, v___x_144_);
if (v___x_145_ == 0)
{
return v_st_42_;
}
else
{
lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_154_; 
lean_inc(v_fresh_143_);
lean_inc_ref(v_fingerprints_142_);
v_isSharedCheck_154_ = !lean_is_exclusive(v_st_42_);
if (v_isSharedCheck_154_ == 0)
{
lean_object* v_unused_155_; lean_object* v_unused_156_; 
v_unused_155_ = lean_ctor_get(v_st_42_, 1);
lean_dec(v_unused_155_);
v_unused_156_ = lean_ctor_get(v_st_42_, 0);
lean_dec(v_unused_156_);
v___x_147_ = v_st_42_;
v_isShared_148_ = v_isSharedCheck_154_;
goto v_resetjp_146_;
}
else
{
lean_dec(v_st_42_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_154_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_149_ = lp_tzap_x2dlean_TzapLean_Fingerprint_zero;
v___x_150_ = lean_array_fset(v_fingerprints_142_, v_q_141_, v___x_149_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_150_);
v___x_152_ = v___x_147_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_fresh_143_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
default: 
{
lean_dec_ref(v_draws_41_);
return v_st_42_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_step___boxed(lean_object* v_draws_157_, lean_object* v_st_158_, lean_object* v_g_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_157_, v_st_158_, v_g_159_);
lean_dec_ref(v_g_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_steps(lean_object* v_draws_161_, lean_object* v_st_162_, lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_dec_ref(v_draws_161_);
return v_st_162_;
}
else
{
lean_object* v_head_164_; lean_object* v_tail_165_; lean_object* v___x_166_; 
v_head_164_ = lean_ctor_get(v_x_163_, 0);
v_tail_165_ = lean_ctor_get(v_x_163_, 1);
lean_inc_ref(v_draws_161_);
v___x_166_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_161_, v_st_162_, v_head_164_);
v_st_162_ = v___x_166_;
v_x_163_ = v_tail_165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_NState_steps___boxed(lean_object* v_draws_168_, lean_object* v_st_169_, lean_object* v_x_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = lp_tzap_x2dlean_TzapLean_NState_steps(v_draws_168_, v_st_169_, v_x_170_);
lean_dec(v_x_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchFingerprint(lean_object* v_pending_175_, lean_object* v_later_176_){
_start:
{
uint8_t v___x_177_; 
v___x_177_ = lean_nat_dec_eq(v_later_176_, v_pending_175_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lp_tzap_x2dlean_TzapLean_GF128_add(v_pending_175_, v___x_178_);
v___x_180_ = lean_nat_dec_eq(v_later_176_, v___x_179_);
lean_dec(v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
v___x_181_ = lean_box(0);
return v___x_181_;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_box(v___x_180_);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
else
{
lean_object* v___x_184_; 
v___x_184_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_matchFingerprint___closed__0));
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_matchFingerprint___boxed(lean_object* v_pending_185_, lean_object* v_later_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = lp_tzap_x2dlean_TzapLean_matchFingerprint(v_pending_185_, v_later_186_);
lean_dec(v_later_186_);
lean_dec(v_pending_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(lean_object* v_draws_188_, lean_object* v_st_189_, lean_object* v_tag_190_, lean_object* v_00_u03b8_191_, lean_object* v_x_192_){
_start:
{
if (lean_obj_tag(v_x_192_) == 0)
{
lean_object* v___x_193_; 
lean_dec_ref(v_00_u03b8_191_);
lean_dec_ref(v_st_189_);
lean_dec_ref(v_draws_188_);
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v_head_194_; lean_object* v_tail_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_257_; 
v_head_194_ = lean_ctor_get(v_x_192_, 0);
v_tail_195_ = lean_ctor_get(v_x_192_, 1);
v_isSharedCheck_257_ = !lean_is_exclusive(v_x_192_);
if (v_isSharedCheck_257_ == 0)
{
v___x_197_ = v_x_192_;
v_isShared_198_ = v_isSharedCheck_257_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_tail_195_);
lean_inc(v_head_194_);
lean_dec(v_x_192_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_257_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
uint8_t v___y_200_; uint8_t v___x_255_; 
v___x_255_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v_head_194_);
if (v___x_255_ == 0)
{
uint8_t v___x_256_; 
v___x_256_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v_head_194_);
v___y_200_ = v___x_256_;
goto v___jp_199_;
}
else
{
v___y_200_ = v___x_255_;
goto v___jp_199_;
}
v___jp_199_:
{
if (v___y_200_ == 0)
{
lean_object* v___x_201_; 
lean_del_object(v___x_197_);
lean_dec(v_tail_195_);
lean_dec(v_head_194_);
lean_dec_ref(v_00_u03b8_191_);
lean_dec_ref(v_st_189_);
lean_dec_ref(v_draws_188_);
v___x_201_ = lean_box(0);
return v___x_201_;
}
else
{
lean_object* v___x_202_; 
lean_inc(v_head_194_);
v___x_202_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_194_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_inc_ref(v_draws_188_);
v___x_203_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_188_, v_st_189_, v_head_194_);
v___x_204_ = lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(v_draws_188_, v___x_203_, v_tag_190_, v_00_u03b8_191_, v_tail_195_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_del_object(v___x_197_);
lean_dec(v_head_194_);
return v___x_204_;
}
else
{
lean_object* v_val_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_215_; 
v_val_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_215_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_215_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_val_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_215_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_val_205_);
v___x_210_ = v___x_197_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_head_194_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_val_205_);
v___x_210_ = v_reuseFailAlloc_214_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_212_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
else
{
lean_object* v_val_216_; lean_object* v_fst_217_; lean_object* v_snd_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_254_; 
v_val_216_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_val_216_);
lean_dec_ref_known(v___x_202_, 1);
v_fst_217_ = lean_ctor_get(v_val_216_, 0);
v_snd_218_ = lean_ctor_get(v_val_216_, 1);
v_isSharedCheck_254_ = !lean_is_exclusive(v_val_216_);
if (v_isSharedCheck_254_ == 0)
{
v___x_220_ = v_val_216_;
v_isShared_221_ = v_isSharedCheck_254_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_snd_218_);
lean_inc(v_fst_217_);
lean_dec(v_val_216_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_254_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lp_tzap_x2dlean_TzapLean_NState_tagOf(v_st_189_, v_snd_218_);
v___x_223_ = lp_tzap_x2dlean_TzapLean_matchFingerprint(v_tag_190_, v___x_222_);
lean_dec(v___x_222_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_del_object(v___x_220_);
lean_dec(v_snd_218_);
lean_dec(v_fst_217_);
lean_inc_ref(v_draws_188_);
v___x_224_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_188_, v_st_189_, v_head_194_);
v___x_225_ = lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(v_draws_188_, v___x_224_, v_tag_190_, v_00_u03b8_191_, v_tail_195_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_del_object(v___x_197_);
lean_dec(v_head_194_);
return v___x_225_;
}
else
{
lean_object* v_val_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_236_; 
v_val_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_236_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_236_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_val_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_236_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_val_226_);
v___x_231_ = v___x_197_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_head_194_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_val_226_);
v___x_231_ = v_reuseFailAlloc_235_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_233_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_231_);
v___x_233_ = v___x_228_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
else
{
lean_object* v_val_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_253_; 
lean_dec(v_head_194_);
lean_dec_ref(v_st_189_);
lean_dec_ref(v_draws_188_);
v_val_237_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_253_ == 0)
{
v___x_239_ = v___x_223_;
v_isShared_240_ = v_isSharedCheck_253_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_val_237_);
lean_dec(v___x_223_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_253_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
v___x_241_ = lean_unbox(v_val_237_);
lean_dec(v_val_237_);
v___x_242_ = lp_tzap_x2dlean_TzapLean_signedAngle(v___x_241_, v_00_u03b8_191_);
v___x_243_ = l_Rat_add(v_fst_217_, v___x_242_);
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 7);
lean_ctor_set(v___x_220_, 0, v___x_243_);
v___x_245_ = v___x_220_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_snd_218_);
v___x_245_ = v_reuseFailAlloc_252_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_247_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_245_);
v___x_247_ = v___x_197_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_tail_195_);
v___x_247_ = v_reuseFailAlloc_251_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_249_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_247_);
v___x_249_ = v___x_239_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
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
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear___boxed(lean_object* v_draws_258_, lean_object* v_st_259_, lean_object* v_tag_260_, lean_object* v_00_u03b8_261_, lean_object* v_x_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(v_draws_258_, v_st_259_, v_tag_260_, v_00_u03b8_261_, v_x_262_);
lean_dec(v_tag_260_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_NState_steps_match__1_splitter___redArg(lean_object* v_x_264_, lean_object* v_h__1_265_, lean_object* v_h__2_266_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec(v_h__2_266_);
v___x_267_ = lean_box(0);
v___x_268_ = lean_apply_1(v_h__1_265_, v___x_267_);
return v___x_268_;
}
else
{
lean_object* v_head_269_; lean_object* v_tail_270_; lean_object* v___x_271_; 
lean_dec(v_h__1_265_);
v_head_269_ = lean_ctor_get(v_x_264_, 0);
lean_inc(v_head_269_);
v_tail_270_ = lean_ctor_get(v_x_264_, 1);
lean_inc(v_tail_270_);
lean_dec_ref_known(v_x_264_, 2);
v___x_271_ = lean_apply_2(v_h__2_266_, v_head_269_, v_tail_270_);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_NState_steps_match__1_splitter(lean_object* v_motive_272_, lean_object* v_x_273_, lean_object* v_h__1_274_, lean_object* v_h__2_275_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_h__2_275_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_1(v_h__1_274_, v___x_276_);
return v___x_277_;
}
else
{
lean_object* v_head_278_; lean_object* v_tail_279_; lean_object* v___x_280_; 
lean_dec(v_h__1_274_);
v_head_278_ = lean_ctor_get(v_x_273_, 0);
lean_inc(v_head_278_);
v_tail_279_ = lean_ctor_get(v_x_273_, 1);
lean_inc(v_tail_279_);
lean_dec_ref_known(v_x_273_, 2);
v___x_280_ = lean_apply_2(v_h__2_275_, v_head_278_, v_tail_279_);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__3_splitter___redArg(lean_object* v_x_281_, lean_object* v_h__1_282_, lean_object* v_h__2_283_){
_start:
{
if (lean_obj_tag(v_x_281_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v_h__1_282_);
v___x_284_ = lean_box(0);
v___x_285_ = lean_apply_1(v_h__2_283_, v___x_284_);
return v___x_285_;
}
else
{
lean_object* v_val_286_; lean_object* v_fst_287_; lean_object* v_snd_288_; lean_object* v___x_289_; 
lean_dec(v_h__2_283_);
v_val_286_ = lean_ctor_get(v_x_281_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v_x_281_, 1);
v_fst_287_ = lean_ctor_get(v_val_286_, 0);
lean_inc(v_fst_287_);
v_snd_288_ = lean_ctor_get(v_val_286_, 1);
lean_inc(v_snd_288_);
lean_dec(v_val_286_);
v___x_289_ = lean_apply_2(v_h__1_282_, v_fst_287_, v_snd_288_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__3_splitter(lean_object* v_motive_290_, lean_object* v_x_291_, lean_object* v_h__1_292_, lean_object* v_h__2_293_){
_start:
{
if (lean_obj_tag(v_x_291_) == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec(v_h__1_292_);
v___x_294_ = lean_box(0);
v___x_295_ = lean_apply_1(v_h__2_293_, v___x_294_);
return v___x_295_;
}
else
{
lean_object* v_val_296_; lean_object* v_fst_297_; lean_object* v_snd_298_; lean_object* v___x_299_; 
lean_dec(v_h__2_293_);
v_val_296_ = lean_ctor_get(v_x_291_, 0);
lean_inc(v_val_296_);
lean_dec_ref_known(v_x_291_, 1);
v_fst_297_ = lean_ctor_get(v_val_296_, 0);
lean_inc(v_fst_297_);
v_snd_298_ = lean_ctor_get(v_val_296_, 1);
lean_inc(v_snd_298_);
lean_dec(v_val_296_);
v___x_299_ = lean_apply_2(v_h__1_292_, v_fst_297_, v_snd_298_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__1_splitter___redArg(lean_object* v_x_300_, lean_object* v_h__1_301_, lean_object* v_h__2_302_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; 
lean_dec(v_h__1_301_);
v___x_303_ = lean_box(0);
v___x_304_ = lean_apply_1(v_h__2_302_, v___x_303_);
return v___x_304_;
}
else
{
lean_object* v_val_305_; lean_object* v___x_306_; 
lean_dec(v_h__2_302_);
v_val_305_ = lean_ctor_get(v_x_300_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v_x_300_, 1);
v___x_306_ = lean_apply_1(v_h__1_301_, v_val_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeIntoNonlinear_match__1_splitter(lean_object* v_motive_307_, lean_object* v_x_308_, lean_object* v_h__1_309_, lean_object* v_h__2_310_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v_h__1_309_);
v___x_311_ = lean_box(0);
v___x_312_ = lean_apply_1(v_h__2_310_, v___x_311_);
return v___x_312_;
}
else
{
lean_object* v_val_313_; lean_object* v___x_314_; 
lean_dec(v_h__2_310_);
v_val_313_ = lean_ctor_get(v_x_308_, 0);
lean_inc(v_val_313_);
lean_dec_ref_known(v_x_308_, 1);
v___x_314_ = lean_apply_1(v_h__1_309_, v_val_313_);
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonicalFingerprint(lean_object* v_value_315_){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lp_tzap_x2dlean_TzapLean_GF128_add(v_value_315_, v___x_316_);
v___x_318_ = lean_nat_dec_le(v_value_315_, v___x_317_);
if (v___x_318_ == 0)
{
return v___x_317_;
}
else
{
lean_dec(v___x_317_);
lean_inc(v_value_315_);
return v_value_315_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_canonicalFingerprint___boxed(lean_object* v_value_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = lp_tzap_x2dlean_TzapLean_canonicalFingerprint(v_value_319_);
lean_dec(v_value_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg(lean_object* v_arr_321_, lean_object* v_draws_322_, lean_object* v_range_323_, lean_object* v_b_324_, lean_object* v_i_325_){
_start:
{
lean_object* v_stop_326_; lean_object* v_step_327_; uint8_t v___x_328_; 
v_stop_326_ = lean_ctor_get(v_range_323_, 1);
v_step_327_ = lean_ctor_get(v_range_323_, 2);
v___x_328_ = lean_nat_dec_lt(v_i_325_, v_stop_326_);
if (v___x_328_ == 0)
{
lean_dec(v_i_325_);
lean_dec_ref(v_draws_322_);
return v_b_324_;
}
else
{
lean_object* v_fst_329_; lean_object* v_snd_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_356_; 
v_fst_329_ = lean_ctor_get(v_b_324_, 0);
v_snd_330_ = lean_ctor_get(v_b_324_, 1);
v_isSharedCheck_356_ = !lean_is_exclusive(v_b_324_);
if (v_isSharedCheck_356_ == 0)
{
v___x_332_ = v_b_324_;
v_isShared_333_ = v_isSharedCheck_356_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_snd_330_);
lean_inc(v_fst_329_);
lean_dec(v_b_324_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_356_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v_g_334_; lean_object* v_canons_336_; lean_object* v___x_343_; 
v_g_334_ = lean_array_fget_borrowed(v_arr_321_, v_i_325_);
lean_inc(v_g_334_);
v___x_343_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_g_334_);
if (lean_obj_tag(v___x_343_) == 0)
{
v_canons_336_ = v_fst_329_;
goto v___jp_335_;
}
else
{
lean_object* v_val_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_355_; 
v_val_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_355_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_355_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_val_344_);
lean_dec(v___x_343_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_355_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v_snd_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_352_; 
v_snd_348_ = lean_ctor_get(v_val_344_, 1);
lean_inc(v_snd_348_);
lean_dec(v_val_344_);
v___x_349_ = lp_tzap_x2dlean_TzapLean_NState_tagOf(v_snd_330_, v_snd_348_);
lean_dec(v_snd_348_);
v___x_350_ = lp_tzap_x2dlean_TzapLean_canonicalFingerprint(v___x_349_);
lean_dec(v___x_349_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_350_);
v___x_352_ = v___x_346_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_350_);
v___x_352_ = v_reuseFailAlloc_354_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
lean_object* v_canons_353_; 
v_canons_353_ = lean_array_set(v_fst_329_, v_i_325_, v___x_352_);
v_canons_336_ = v_canons_353_;
goto v___jp_335_;
}
}
}
v___jp_335_:
{
lean_object* v_st_337_; lean_object* v___x_339_; 
lean_inc_ref(v_draws_322_);
v_st_337_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_322_, v_snd_330_, v_g_334_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_st_337_);
lean_ctor_set(v___x_332_, 0, v_canons_336_);
v___x_339_ = v___x_332_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_canons_336_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_st_337_);
v___x_339_ = v_reuseFailAlloc_342_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; 
v___x_340_ = lean_nat_add(v_i_325_, v_step_327_);
lean_dec(v_i_325_);
v_b_324_ = v___x_339_;
v_i_325_ = v___x_340_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg___boxed(lean_object* v_arr_357_, lean_object* v_draws_358_, lean_object* v_range_359_, lean_object* v_b_360_, lean_object* v_i_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg(v_arr_357_, v_draws_358_, v_range_359_, v_b_360_, v_i_361_);
lean_dec_ref(v_range_359_);
lean_dec_ref(v_arr_357_);
return v_res_362_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = lean_box(0);
v___x_364_ = lean_unsigned_to_nat(16u);
v___x_365_ = lean_mk_array(v___x_364_, v___x_363_);
return v___x_365_;
}
}
static lean_object* _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__0);
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg(lean_object* v___x_369_, lean_object* v___x_370_, lean_object* v_arr_371_, lean_object* v_range_372_, lean_object* v_b_373_, lean_object* v_i_374_){
_start:
{
lean_object* v_stop_375_; lean_object* v_step_376_; lean_object* v_a_378_; uint8_t v___x_381_; 
v_stop_375_ = lean_ctor_get(v_range_372_, 1);
v_step_376_ = lean_ctor_get(v_range_372_, 2);
v___x_381_ = lean_nat_dec_lt(v_i_374_, v_stop_375_);
if (v___x_381_ == 0)
{
lean_dec(v_i_374_);
return v_b_373_;
}
else
{
lean_object* v_fst_382_; lean_object* v_snd_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_414_; 
v_fst_382_ = lean_ctor_get(v_b_373_, 0);
v_snd_383_ = lean_ctor_get(v_b_373_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_b_373_);
if (v_isSharedCheck_414_ == 0)
{
v___x_385_ = v_b_373_;
v_isShared_386_ = v_isSharedCheck_414_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_snd_383_);
lean_inc(v_fst_382_);
lean_dec(v_b_373_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_414_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___y_393_; lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_387_ = lean_unsigned_to_nat(1u);
v___x_388_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1);
v___x_389_ = lp_tzap_x2dlean_TzapLean_instInhabitedGate_default;
v___x_390_ = lean_nat_sub(v___x_369_, v___x_387_);
v___x_391_ = lean_nat_sub(v___x_390_, v_i_374_);
lean_dec(v___x_390_);
v___x_411_ = lean_array_get_borrowed(v___x_389_, v_arr_371_, v___x_391_);
v___x_412_ = lp_tzap_x2dlean_TzapLean_Gate_isUnitary(v___x_411_);
if (v___x_412_ == 0)
{
uint8_t v___x_413_; 
v___x_413_ = lp_tzap_x2dlean_TzapLean_Gate_isMeasurement(v___x_411_);
v___y_393_ = v___x_413_;
goto v___jp_392_;
}
else
{
v___y_393_ = v___x_412_;
goto v___jp_392_;
}
v___jp_392_:
{
if (v___y_393_ == 0)
{
lean_object* v___x_395_; 
lean_dec(v___x_391_);
lean_dec(v_snd_383_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___x_388_);
v___x_395_ = v___x_385_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_fst_382_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_388_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
v_a_378_ = v___x_395_;
goto v___jp_377_;
}
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_box(0);
v___x_398_ = lean_array_get_borrowed(v___x_397_, v___x_370_, v___x_391_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v___x_400_; 
lean_dec(v___x_391_);
if (v_isShared_386_ == 0)
{
v___x_400_ = v___x_385_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_fst_382_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_snd_383_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
v_a_378_ = v___x_400_;
goto v___jp_377_;
}
}
else
{
lean_object* v_val_402_; uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v_val_402_ = lean_ctor_get(v___x_398_, 0);
v___x_403_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_snd_383_, v_val_402_);
v___x_404_ = lean_box(v___x_403_);
v___x_405_ = lean_array_set(v_fst_382_, v___x_391_, v___x_404_);
lean_dec(v___x_391_);
v___x_406_ = lean_box(0);
lean_inc(v_val_402_);
v___x_407_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_snd_383_, v_val_402_, v___x_406_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___x_407_);
lean_ctor_set(v___x_385_, 0, v___x_405_);
v___x_409_ = v___x_385_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
v_a_378_ = v___x_409_;
goto v___jp_377_;
}
}
}
}
}
}
v___jp_377_:
{
lean_object* v___x_379_; 
v___x_379_ = lean_nat_add(v_i_374_, v_step_376_);
lean_dec(v_i_374_);
v_b_373_ = v_a_378_;
v_i_374_ = v___x_379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___boxed(lean_object* v___x_415_, lean_object* v___x_416_, lean_object* v_arr_417_, lean_object* v_range_418_, lean_object* v_b_419_, lean_object* v_i_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg(v___x_415_, v___x_416_, v_arr_417_, v_range_418_, v_b_419_, v_i_420_);
lean_dec_ref(v_range_418_);
lean_dec_ref(v_arr_417_);
lean_dec_ref(v___x_416_);
lean_dec(v___x_415_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_nonlinearMergeTargets(lean_object* v_draws_422_, lean_object* v_n_423_, lean_object* v_gs_424_){
_start:
{
lean_object* v_arr_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v_canons_428_; lean_object* v_st_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_fst_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_448_; 
v_arr_425_ = lean_array_mk(v_gs_424_);
v___x_426_ = lean_array_get_size(v_arr_425_);
v___x_427_ = lean_box(0);
v_canons_428_ = lean_mk_array(v___x_426_, v___x_427_);
lean_inc_ref(v_draws_422_);
v_st_429_ = lp_tzap_x2dlean_TzapLean_NState_initial(v_draws_422_, v_n_423_);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_426_);
lean_ctor_set(v___x_432_, 2, v___x_431_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v_canons_428_);
lean_ctor_set(v___x_433_, 1, v_st_429_);
v___x_434_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg(v_arr_425_, v_draws_422_, v___x_432_, v___x_433_, v___x_430_);
v_fst_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v___x_434_, 1);
lean_dec(v_unused_449_);
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_448_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_fst_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_448_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_439_ = 0;
v___x_440_ = lean_box(v___x_439_);
v___x_441_ = lean_mk_array(v___x_426_, v___x_440_);
v___x_442_ = lean_obj_once(&lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1, &lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1_once, _init_lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg___closed__1);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___x_442_);
lean_ctor_set(v___x_437_, 0, v___x_441_);
v___x_444_ = v___x_437_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v___x_442_);
v___x_444_ = v_reuseFailAlloc_447_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
lean_object* v___x_445_; lean_object* v_fst_446_; 
v___x_445_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg(v___x_426_, v_fst_435_, v_arr_425_, v___x_432_, v___x_444_, v___x_430_);
lean_dec_ref_known(v___x_432_, 3);
lean_dec_ref(v_arr_425_);
lean_dec(v_fst_435_);
v_fst_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_fst_446_);
lean_dec_ref(v___x_445_);
return v_fst_446_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0(lean_object* v_arr_450_, lean_object* v_draws_451_, lean_object* v_range_452_, lean_object* v_b_453_, lean_object* v_i_454_, lean_object* v_hs_455_, lean_object* v_hl_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___redArg(v_arr_450_, v_draws_451_, v_range_452_, v_b_453_, v_i_454_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0___boxed(lean_object* v_arr_458_, lean_object* v_draws_459_, lean_object* v_range_460_, lean_object* v_b_461_, lean_object* v_i_462_, lean_object* v_hs_463_, lean_object* v_hl_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__0(v_arr_458_, v_draws_459_, v_range_460_, v_b_461_, v_i_462_, v_hs_463_, v_hl_464_);
lean_dec_ref(v_range_460_);
lean_dec_ref(v_arr_458_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1(lean_object* v___x_466_, lean_object* v___x_467_, lean_object* v_arr_468_, lean_object* v_range_469_, lean_object* v_b_470_, lean_object* v_i_471_, lean_object* v_hs_472_, lean_object* v_hl_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___redArg(v___x_466_, v___x_467_, v_arr_468_, v_range_469_, v_b_470_, v_i_471_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1___boxed(lean_object* v___x_475_, lean_object* v___x_476_, lean_object* v_arr_477_, lean_object* v_range_478_, lean_object* v_b_479_, lean_object* v_i_480_, lean_object* v_hs_481_, lean_object* v_hl_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_tzap_x2dlean___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00TzapLean_nonlinearMergeTargets_spec__1(v___x_475_, v___x_476_, v_arr_477_, v_range_478_, v_b_479_, v_i_480_, v_hs_481_, v_hl_482_);
lean_dec_ref(v_range_478_);
lean_dec_ref(v_arr_477_);
lean_dec_ref(v___x_476_);
lean_dec(v___x_475_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFromNonlinear(lean_object* v_draws_484_, lean_object* v_targets_485_, lean_object* v_st_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
if (lean_obj_tag(v_x_488_) == 0)
{
lean_dec(v_x_487_);
lean_dec_ref(v_st_486_);
lean_dec_ref(v_draws_484_);
return v_x_488_;
}
else
{
lean_object* v_head_489_; lean_object* v_tail_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_544_; 
v_head_489_ = lean_ctor_get(v_x_488_, 0);
v_tail_490_ = lean_ctor_get(v_x_488_, 1);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_488_);
if (v_isSharedCheck_544_ == 0)
{
v___x_492_ = v_x_488_;
v_isShared_493_ = v_isSharedCheck_544_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_tail_490_);
lean_inc(v_head_489_);
lean_dec(v_x_488_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_544_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; 
lean_inc(v_head_489_);
v___x_494_ = lp_tzap_x2dlean_TzapLean_rotAngle(v_head_489_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
lean_inc_ref(v_draws_484_);
v___x_495_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_484_, v_st_486_, v_head_489_);
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = lean_nat_add(v_x_487_, v___x_496_);
lean_dec(v_x_487_);
v___x_498_ = lp_tzap_x2dlean_TzapLean_foldFromNonlinear(v_draws_484_, v_targets_485_, v___x_495_, v___x_497_, v_tail_490_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v___x_498_);
v___x_500_ = v___x_492_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_head_489_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
else
{
lean_object* v_val_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_543_; 
v_val_502_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_val_502_);
lean_dec_ref_known(v___x_494_, 1);
v_fst_503_ = lean_ctor_get(v_val_502_, 0);
v_snd_504_ = lean_ctor_get(v_val_502_, 1);
v_isSharedCheck_543_ = !lean_is_exclusive(v_val_502_);
if (v_isSharedCheck_543_ == 0)
{
v___x_506_ = v_val_502_;
v_isShared_507_ = v_isSharedCheck_543_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_snd_504_);
lean_inc(v_fst_503_);
lean_dec(v_val_502_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_543_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; uint8_t v___y_523_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_508_ = lp_tzap_x2dlean_TzapLean_NState_tagOf(v_st_486_, v_snd_504_);
lean_dec(v_snd_504_);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_nat_dec_eq(v___x_508_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = lean_nat_dec_eq(v___x_508_, v___x_541_);
v___y_523_ = v___x_542_;
goto v___jp_522_;
}
else
{
v___y_523_ = v___x_540_;
goto v___jp_522_;
}
v___jp_509_:
{
lean_object* v___x_510_; 
lean_inc(v_tail_490_);
lean_inc_ref(v_st_486_);
lean_inc_ref(v_draws_484_);
v___x_510_ = lp_tzap_x2dlean_TzapLean_mergeIntoNonlinear(v_draws_484_, v_st_486_, v___x_508_, v_fst_503_, v_tail_490_);
lean_dec(v___x_508_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
lean_inc_ref(v_draws_484_);
v___x_511_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_484_, v_st_486_, v_head_489_);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_add(v_x_487_, v___x_512_);
lean_dec(v_x_487_);
v___x_514_ = lp_tzap_x2dlean_TzapLean_foldFromNonlinear(v_draws_484_, v_targets_485_, v___x_511_, v___x_513_, v_tail_490_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v___x_514_);
v___x_516_ = v___x_492_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_head_489_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v___x_514_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
else
{
lean_object* v_val_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
lean_del_object(v___x_492_);
lean_dec(v_tail_490_);
lean_dec(v_head_489_);
v_val_518_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_val_518_);
lean_dec_ref_known(v___x_510_, 1);
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_nat_add(v_x_487_, v___x_519_);
lean_dec(v_x_487_);
v_x_487_ = v___x_520_;
v_x_488_ = v_val_518_;
goto _start;
}
}
v___jp_522_:
{
if (v___y_523_ == 0)
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_array_get_size(v_targets_485_);
v___x_525_ = lean_nat_dec_lt(v_x_487_, v___x_524_);
if (v___x_525_ == 0)
{
lean_del_object(v___x_506_);
goto v___jp_509_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_array_fget_borrowed(v_targets_485_, v_x_487_);
v___x_527_ = lean_unbox(v___x_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_533_; 
lean_dec(v___x_508_);
lean_dec(v_fst_503_);
lean_del_object(v___x_492_);
lean_inc_ref(v_draws_484_);
v___x_528_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_484_, v_st_486_, v_head_489_);
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_add(v_x_487_, v___x_529_);
lean_dec(v_x_487_);
v___x_531_ = lp_tzap_x2dlean_TzapLean_foldFromNonlinear(v_draws_484_, v_targets_485_, v___x_528_, v___x_530_, v_tail_490_);
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 1);
lean_ctor_set(v___x_506_, 1, v___x_531_);
lean_ctor_set(v___x_506_, 0, v_head_489_);
v___x_533_ = v___x_506_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_head_489_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
else
{
lean_del_object(v___x_506_);
goto v___jp_509_;
}
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec(v___x_508_);
lean_del_object(v___x_506_);
lean_dec(v_fst_503_);
lean_del_object(v___x_492_);
lean_inc_ref(v_draws_484_);
v___x_535_ = lp_tzap_x2dlean_TzapLean_NState_step(v_draws_484_, v_st_486_, v_head_489_);
lean_dec(v_head_489_);
v___x_536_ = lean_unsigned_to_nat(1u);
v___x_537_ = lean_nat_add(v_x_487_, v___x_536_);
lean_dec(v_x_487_);
v_st_486_ = v___x_535_;
v_x_487_ = v___x_537_;
v_x_488_ = v_tail_490_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_foldFromNonlinear___boxed(lean_object* v_draws_545_, lean_object* v_targets_546_, lean_object* v_st_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = lp_tzap_x2dlean_TzapLean_foldFromNonlinear(v_draws_545_, v_targets_546_, v_st_547_, v_x_548_, v_x_549_);
lean_dec_ref(v_targets_546_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__3_splitter___redArg(lean_object* v_x_551_, lean_object* v_x_552_, lean_object* v_h__1_553_, lean_object* v_h__2_554_){
_start:
{
if (lean_obj_tag(v_x_552_) == 0)
{
lean_object* v___x_555_; 
lean_dec(v_h__2_554_);
v___x_555_ = lean_apply_1(v_h__1_553_, v_x_551_);
return v___x_555_;
}
else
{
lean_object* v_head_556_; lean_object* v_tail_557_; lean_object* v___x_558_; 
lean_dec(v_h__1_553_);
v_head_556_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_head_556_);
v_tail_557_ = lean_ctor_get(v_x_552_, 1);
lean_inc(v_tail_557_);
lean_dec_ref_known(v_x_552_, 2);
v___x_558_ = lean_apply_3(v_h__2_554_, v_x_551_, v_head_556_, v_tail_557_);
return v___x_558_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__3_splitter(lean_object* v_motive_559_, lean_object* v_x_560_, lean_object* v_x_561_, lean_object* v_h__1_562_, lean_object* v_h__2_563_){
_start:
{
if (lean_obj_tag(v_x_561_) == 0)
{
lean_object* v___x_564_; 
lean_dec(v_h__2_563_);
v___x_564_ = lean_apply_1(v_h__1_562_, v_x_560_);
return v___x_564_;
}
else
{
lean_object* v_head_565_; lean_object* v_tail_566_; lean_object* v___x_567_; 
lean_dec(v_h__1_562_);
v_head_565_ = lean_ctor_get(v_x_561_, 0);
lean_inc(v_head_565_);
v_tail_566_ = lean_ctor_get(v_x_561_, 1);
lean_inc(v_tail_566_);
lean_dec_ref_known(v_x_561_, 2);
v___x_567_ = lean_apply_3(v_h__2_563_, v_x_560_, v_head_565_, v_tail_566_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__1_splitter___redArg(lean_object* v_x_568_, lean_object* v_h__1_569_, lean_object* v_h__2_570_){
_start:
{
if (lean_obj_tag(v_x_568_) == 0)
{
lean_object* v___x_571_; 
lean_dec(v_h__1_569_);
v___x_571_ = lean_apply_1(v_h__2_570_, lean_box(0));
return v___x_571_;
}
else
{
lean_object* v_val_572_; lean_object* v___x_573_; 
lean_dec(v_h__2_570_);
v_val_572_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_val_572_);
lean_dec_ref_known(v_x_568_, 1);
v___x_573_ = lean_apply_2(v_h__1_569_, v_val_572_, lean_box(0));
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_foldFromNonlinear_match__1_splitter(lean_object* v_motive_574_, lean_object* v_x_575_, lean_object* v_h__1_576_, lean_object* v_h__2_577_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_object* v___x_578_; 
lean_dec(v_h__1_576_);
v___x_578_ = lean_apply_1(v_h__2_577_, lean_box(0));
return v___x_578_;
}
else
{
lean_object* v_val_579_; lean_object* v___x_580_; 
lean_dec(v_h__2_577_);
v_val_579_ = lean_ctor_get(v_x_575_, 0);
lean_inc(v_val_579_);
lean_dec_ref_known(v_x_575_, 1);
v___x_580_ = lean_apply_2(v_h__1_576_, v_val_579_, lean_box(0));
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldGatesNonlinear(lean_object* v_draws_581_, lean_object* v_n_582_, lean_object* v_gs_583_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_inc(v_gs_583_);
lean_inc(v_n_582_);
lean_inc_ref_n(v_draws_581_, 2);
v___x_584_ = lp_tzap_x2dlean_TzapLean_nonlinearMergeTargets(v_draws_581_, v_n_582_, v_gs_583_);
v___x_585_ = lp_tzap_x2dlean_TzapLean_NState_initial(v_draws_581_, v_n_582_);
v___x_586_ = lean_unsigned_to_nat(0u);
v___x_587_ = lp_tzap_x2dlean_TzapLean_foldFromNonlinear(v_draws_581_, v___x_584_, v___x_585_, v___x_586_, v_gs_583_);
lean_dec_ref(v___x_584_);
v___x_588_ = lp_tzap_x2dlean_TzapLean_emitAll(v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldNonlinear(lean_object* v_draws_589_, lean_object* v_c_590_){
_start:
{
lean_object* v_numQubits_591_; lean_object* v_gates_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v_numQubits_591_ = lean_ctor_get(v_c_590_, 0);
v_gates_592_ = lean_ctor_get(v_c_590_, 2);
lean_inc(v_gates_592_);
lean_inc(v_numQubits_591_);
v___x_593_ = lp_tzap_x2dlean_TzapLean_phaseFoldGatesNonlinear(v_draws_589_, v_numQubits_591_, v_gates_592_);
v___x_594_ = lp_tzap_x2dlean_TzapLean_RawCircuit_withGates(v_c_590_, v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v_h__1_597_, lean_object* v_h__2_598_, lean_object* v_h__3_599_, lean_object* v_h__4_600_, lean_object* v_h__5_601_, lean_object* v_h__6_602_, lean_object* v_h__7_603_, lean_object* v_h__8_604_, lean_object* v_h__9_605_){
_start:
{
lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = lean_nat_dec_eq(v_x_595_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
lean_dec(v_h__1_597_);
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = lean_nat_dec_eq(v_x_595_, v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; uint8_t v___x_611_; 
lean_dec(v_h__2_598_);
v___x_610_ = lean_unsigned_to_nat(2u);
v___x_611_ = lean_nat_dec_eq(v_x_595_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; uint8_t v___x_613_; 
lean_dec(v_h__3_599_);
v___x_612_ = lean_unsigned_to_nat(3u);
v___x_613_ = lean_nat_dec_eq(v_x_595_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
lean_dec(v_h__4_600_);
v___x_614_ = lean_unsigned_to_nat(4u);
v___x_615_ = lean_nat_dec_eq(v_x_595_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; uint8_t v___x_617_; 
lean_dec(v_h__5_601_);
v___x_616_ = lean_unsigned_to_nat(5u);
v___x_617_ = lean_nat_dec_eq(v_x_595_, v___x_616_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; uint8_t v___x_619_; 
lean_dec(v_h__6_602_);
v___x_618_ = lean_unsigned_to_nat(6u);
v___x_619_ = lean_nat_dec_eq(v_x_595_, v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; uint8_t v___x_621_; 
lean_dec(v_h__7_603_);
v___x_620_ = lean_unsigned_to_nat(7u);
v___x_621_ = lean_nat_dec_eq(v_x_595_, v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; 
lean_dec(v_h__8_604_);
v___x_622_ = lean_apply_10(v_h__9_605_, v_x_595_, v_x_596_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_622_;
}
else
{
lean_object* v___x_623_; 
lean_dec(v_h__9_605_);
lean_dec(v_x_595_);
v___x_623_ = lean_apply_1(v_h__8_604_, v_x_596_);
return v___x_623_;
}
}
else
{
lean_object* v___x_624_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_x_595_);
v___x_624_ = lean_apply_1(v_h__7_603_, v_x_596_);
return v___x_624_;
}
}
else
{
lean_object* v___x_625_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_x_595_);
v___x_625_ = lean_apply_1(v_h__6_602_, v_x_596_);
return v___x_625_;
}
}
else
{
lean_object* v___x_626_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_h__6_602_);
lean_dec(v_x_595_);
v___x_626_ = lean_apply_1(v_h__5_601_, v_x_596_);
return v___x_626_;
}
}
else
{
lean_object* v___x_627_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_h__6_602_);
lean_dec(v_h__5_601_);
lean_dec(v_x_595_);
v___x_627_ = lean_apply_1(v_h__4_600_, v_x_596_);
return v___x_627_;
}
}
else
{
lean_object* v___x_628_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_h__6_602_);
lean_dec(v_h__5_601_);
lean_dec(v_h__4_600_);
lean_dec(v_x_595_);
v___x_628_ = lean_apply_1(v_h__3_599_, v_x_596_);
return v___x_628_;
}
}
else
{
lean_object* v___x_629_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_h__6_602_);
lean_dec(v_h__5_601_);
lean_dec(v_h__4_600_);
lean_dec(v_h__3_599_);
lean_dec(v_x_595_);
v___x_629_ = lean_apply_1(v_h__2_598_, v_x_596_);
return v___x_629_;
}
}
else
{
lean_object* v___x_630_; 
lean_dec(v_h__9_605_);
lean_dec(v_h__8_604_);
lean_dec(v_h__7_603_);
lean_dec(v_h__6_602_);
lean_dec(v_h__5_601_);
lean_dec(v_h__4_600_);
lean_dec(v_h__3_599_);
lean_dec(v_h__2_598_);
lean_dec(v_x_595_);
v___x_630_ = lean_apply_1(v_h__1_597_, v_x_596_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_diagRun_match__1_splitter(lean_object* v_motive_631_, lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v_h__1_634_, lean_object* v_h__2_635_, lean_object* v_h__3_636_, lean_object* v_h__4_637_, lean_object* v_h__5_638_, lean_object* v_h__6_639_, lean_object* v_h__7_640_, lean_object* v_h__8_641_, lean_object* v_h__9_642_){
_start:
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_unsigned_to_nat(0u);
v___x_644_ = lean_nat_dec_eq(v_x_632_, v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; uint8_t v___x_646_; 
lean_dec(v_h__1_634_);
v___x_645_ = lean_unsigned_to_nat(1u);
v___x_646_ = lean_nat_dec_eq(v_x_632_, v___x_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; uint8_t v___x_648_; 
lean_dec(v_h__2_635_);
v___x_647_ = lean_unsigned_to_nat(2u);
v___x_648_ = lean_nat_dec_eq(v_x_632_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; uint8_t v___x_650_; 
lean_dec(v_h__3_636_);
v___x_649_ = lean_unsigned_to_nat(3u);
v___x_650_ = lean_nat_dec_eq(v_x_632_, v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; uint8_t v___x_652_; 
lean_dec(v_h__4_637_);
v___x_651_ = lean_unsigned_to_nat(4u);
v___x_652_ = lean_nat_dec_eq(v_x_632_, v___x_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; uint8_t v___x_654_; 
lean_dec(v_h__5_638_);
v___x_653_ = lean_unsigned_to_nat(5u);
v___x_654_ = lean_nat_dec_eq(v_x_632_, v___x_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; uint8_t v___x_656_; 
lean_dec(v_h__6_639_);
v___x_655_ = lean_unsigned_to_nat(6u);
v___x_656_ = lean_nat_dec_eq(v_x_632_, v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; uint8_t v___x_658_; 
lean_dec(v_h__7_640_);
v___x_657_ = lean_unsigned_to_nat(7u);
v___x_658_ = lean_nat_dec_eq(v_x_632_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; 
lean_dec(v_h__8_641_);
v___x_659_ = lean_apply_10(v_h__9_642_, v_x_632_, v_x_633_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_659_;
}
else
{
lean_object* v___x_660_; 
lean_dec(v_h__9_642_);
lean_dec(v_x_632_);
v___x_660_ = lean_apply_1(v_h__8_641_, v_x_633_);
return v___x_660_;
}
}
else
{
lean_object* v___x_661_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_x_632_);
v___x_661_ = lean_apply_1(v_h__7_640_, v_x_633_);
return v___x_661_;
}
}
else
{
lean_object* v___x_662_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_x_632_);
v___x_662_ = lean_apply_1(v_h__6_639_, v_x_633_);
return v___x_662_;
}
}
else
{
lean_object* v___x_663_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_h__6_639_);
lean_dec(v_x_632_);
v___x_663_ = lean_apply_1(v_h__5_638_, v_x_633_);
return v___x_663_;
}
}
else
{
lean_object* v___x_664_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_h__6_639_);
lean_dec(v_h__5_638_);
lean_dec(v_x_632_);
v___x_664_ = lean_apply_1(v_h__4_637_, v_x_633_);
return v___x_664_;
}
}
else
{
lean_object* v___x_665_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_h__6_639_);
lean_dec(v_h__5_638_);
lean_dec(v_h__4_637_);
lean_dec(v_x_632_);
v___x_665_ = lean_apply_1(v_h__3_636_, v_x_633_);
return v___x_665_;
}
}
else
{
lean_object* v___x_666_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_h__6_639_);
lean_dec(v_h__5_638_);
lean_dec(v_h__4_637_);
lean_dec(v_h__3_636_);
lean_dec(v_x_632_);
v___x_666_ = lean_apply_1(v_h__2_635_, v_x_633_);
return v___x_666_;
}
}
else
{
lean_object* v___x_667_; 
lean_dec(v_h__9_642_);
lean_dec(v_h__8_641_);
lean_dec(v_h__7_640_);
lean_dec(v_h__6_639_);
lean_dec(v_h__5_638_);
lean_dec(v_h__4_637_);
lean_dec(v_h__3_636_);
lean_dec(v_h__2_635_);
lean_dec(v_x_632_);
v___x_667_ = lean_apply_1(v_h__1_634_, v_x_633_);
return v___x_667_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object* v_x_668_, lean_object* v_h__1_669_, lean_object* v_h__2_670_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_dec(v_h__2_670_);
v___x_671_ = lean_box(0);
v___x_672_ = lean_apply_1(v_h__1_669_, v___x_671_);
return v___x_672_;
}
else
{
lean_object* v_head_673_; lean_object* v_tail_674_; lean_object* v___x_675_; 
lean_dec(v_h__1_669_);
v_head_673_ = lean_ctor_get(v_x_668_, 0);
lean_inc(v_head_673_);
v_tail_674_ = lean_ctor_get(v_x_668_, 1);
lean_inc(v_tail_674_);
lean_dec_ref_known(v_x_668_, 2);
v___x_675_ = lean_apply_2(v_h__2_670_, v_head_673_, v_tail_674_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_TState_steps_match__1_splitter(lean_object* v_motive_676_, lean_object* v_x_677_, lean_object* v_h__1_678_, lean_object* v_h__2_679_){
_start:
{
if (lean_obj_tag(v_x_677_) == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v_h__2_679_);
v___x_680_ = lean_box(0);
v___x_681_ = lean_apply_1(v_h__1_678_, v___x_680_);
return v___x_681_;
}
else
{
lean_object* v_head_682_; lean_object* v_tail_683_; lean_object* v___x_684_; 
lean_dec(v_h__1_678_);
v_head_682_ = lean_ctor_get(v_x_677_, 0);
lean_inc(v_head_682_);
v_tail_683_ = lean_ctor_get(v_x_677_, 1);
lean_inc(v_tail_683_);
lean_dec_ref_known(v_x_677_, 2);
v___x_684_ = lean_apply_2(v_h__2_679_, v_head_682_, v_tail_683_);
return v___x_684_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object* v_x_685_, lean_object* v_h__1_686_, lean_object* v_h__2_687_){
_start:
{
if (lean_obj_tag(v_x_685_) == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v_h__1_686_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_apply_1(v_h__2_687_, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v_val_690_; lean_object* v_fst_691_; lean_object* v_snd_692_; lean_object* v___x_693_; 
lean_dec(v_h__2_687_);
v_val_690_ = lean_ctor_get(v_x_685_, 0);
lean_inc(v_val_690_);
lean_dec_ref_known(v_x_685_, 1);
v_fst_691_ = lean_ctor_get(v_val_690_, 0);
lean_inc(v_fst_691_);
v_snd_692_ = lean_ctor_get(v_val_690_, 1);
lean_inc(v_snd_692_);
lean_dec(v_val_690_);
v___x_693_ = lean_apply_2(v_h__1_686_, v_fst_691_, v_snd_692_);
return v___x_693_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldNonlinear_0__TzapLean_mergeInto_match__3_splitter(lean_object* v_motive_694_, lean_object* v_x_695_, lean_object* v_h__1_696_, lean_object* v_h__2_697_){
_start:
{
if (lean_obj_tag(v_x_695_) == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec(v_h__1_696_);
v___x_698_ = lean_box(0);
v___x_699_ = lean_apply_1(v_h__2_697_, v___x_698_);
return v___x_699_;
}
else
{
lean_object* v_val_700_; lean_object* v_fst_701_; lean_object* v_snd_702_; lean_object* v___x_703_; 
lean_dec(v_h__2_697_);
v_val_700_ = lean_ctor_get(v_x_695_, 0);
lean_inc(v_val_700_);
lean_dec_ref_known(v_x_695_, 1);
v_fst_701_ = lean_ctor_get(v_val_700_, 0);
lean_inc(v_fst_701_);
v_snd_702_ = lean_ctor_get(v_val_700_, 1);
lean_inc(v_snd_702_);
lean_dec(v_val_700_);
v___x_703_ = lean_apply_2(v_h__1_696_, v_fst_701_, v_snd_702_);
return v___x_703_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFoldProof(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_GF128(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFoldNonlinear(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_PhaseFoldProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_GF128(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
