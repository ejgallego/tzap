// Lean compiler output
// Module: TzapLean.PhaseFoldRand
// Imports: public import Init public meta import Init public import TzapLean.PhaseFoldProof public import TzapLean.RandPass public import TzapLean.ExecutableRandPass
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_varBound(lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_randomSample(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_bitsToWord(lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_phaseFold(lean_object*, lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_randomWords(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_liftSample___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_wordsOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_diagRun_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_TState_steps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_mergeInto_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_Gate_allocates_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_Gate_allocates_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_sampleWords___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_sampleWords(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_normalizeSampleWords(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_normalizeSampleWords___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Phase folding"};
static const lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_diagRun_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_h__1_3_, lean_object* v_h__2_4_, lean_object* v_h__3_5_, lean_object* v_h__4_6_, lean_object* v_h__5_7_, lean_object* v_h__6_8_, lean_object* v_h__7_9_, lean_object* v_h__8_10_, lean_object* v_h__9_11_){
_start:
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_nat_dec_eq(v_x_1_, v___x_12_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; uint8_t v___x_15_; 
lean_dec(v_h__1_3_);
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_nat_dec_eq(v_x_1_, v___x_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; uint8_t v___x_17_; 
lean_dec(v_h__2_4_);
v___x_16_ = lean_unsigned_to_nat(2u);
v___x_17_ = lean_nat_dec_eq(v_x_1_, v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; uint8_t v___x_19_; 
lean_dec(v_h__3_5_);
v___x_18_ = lean_unsigned_to_nat(3u);
v___x_19_ = lean_nat_dec_eq(v_x_1_, v___x_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; uint8_t v___x_21_; 
lean_dec(v_h__4_6_);
v___x_20_ = lean_unsigned_to_nat(4u);
v___x_21_ = lean_nat_dec_eq(v_x_1_, v___x_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; uint8_t v___x_23_; 
lean_dec(v_h__5_7_);
v___x_22_ = lean_unsigned_to_nat(5u);
v___x_23_ = lean_nat_dec_eq(v_x_1_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; uint8_t v___x_25_; 
lean_dec(v_h__6_8_);
v___x_24_ = lean_unsigned_to_nat(6u);
v___x_25_ = lean_nat_dec_eq(v_x_1_, v___x_24_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; uint8_t v___x_27_; 
lean_dec(v_h__7_9_);
v___x_26_ = lean_unsigned_to_nat(7u);
v___x_27_ = lean_nat_dec_eq(v_x_1_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
lean_dec(v_h__8_10_);
v___x_28_ = lean_apply_10(v_h__9_11_, v_x_1_, v_x_2_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_28_;
}
else
{
lean_object* v___x_29_; 
lean_dec(v_h__9_11_);
lean_dec(v_x_1_);
v___x_29_ = lean_apply_1(v_h__8_10_, v_x_2_);
return v___x_29_;
}
}
else
{
lean_object* v___x_30_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_x_1_);
v___x_30_ = lean_apply_1(v_h__7_9_, v_x_2_);
return v___x_30_;
}
}
else
{
lean_object* v___x_31_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_x_1_);
v___x_31_ = lean_apply_1(v_h__6_8_, v_x_2_);
return v___x_31_;
}
}
else
{
lean_object* v___x_32_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_x_1_);
v___x_32_ = lean_apply_1(v_h__5_7_, v_x_2_);
return v___x_32_;
}
}
else
{
lean_object* v___x_33_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_x_1_);
v___x_33_ = lean_apply_1(v_h__4_6_, v_x_2_);
return v___x_33_;
}
}
else
{
lean_object* v___x_34_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_x_1_);
v___x_34_ = lean_apply_1(v_h__3_5_, v_x_2_);
return v___x_34_;
}
}
else
{
lean_object* v___x_35_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_x_1_);
v___x_35_ = lean_apply_1(v_h__2_4_, v_x_2_);
return v___x_35_;
}
}
else
{
lean_object* v___x_36_; 
lean_dec(v_h__9_11_);
lean_dec(v_h__8_10_);
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
lean_dec(v_x_1_);
v___x_36_ = lean_apply_1(v_h__1_3_, v_x_2_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_diagRun_match__1_splitter(lean_object* v_motive_37_, lean_object* v_x_38_, lean_object* v_x_39_, lean_object* v_h__1_40_, lean_object* v_h__2_41_, lean_object* v_h__3_42_, lean_object* v_h__4_43_, lean_object* v_h__5_44_, lean_object* v_h__6_45_, lean_object* v_h__7_46_, lean_object* v_h__8_47_, lean_object* v_h__9_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_nat_dec_eq(v_x_38_, v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; uint8_t v___x_52_; 
lean_dec(v_h__1_40_);
v___x_51_ = lean_unsigned_to_nat(1u);
v___x_52_ = lean_nat_dec_eq(v_x_38_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; uint8_t v___x_54_; 
lean_dec(v_h__2_41_);
v___x_53_ = lean_unsigned_to_nat(2u);
v___x_54_ = lean_nat_dec_eq(v_x_38_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; uint8_t v___x_56_; 
lean_dec(v_h__3_42_);
v___x_55_ = lean_unsigned_to_nat(3u);
v___x_56_ = lean_nat_dec_eq(v_x_38_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; uint8_t v___x_58_; 
lean_dec(v_h__4_43_);
v___x_57_ = lean_unsigned_to_nat(4u);
v___x_58_ = lean_nat_dec_eq(v_x_38_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; uint8_t v___x_60_; 
lean_dec(v_h__5_44_);
v___x_59_ = lean_unsigned_to_nat(5u);
v___x_60_ = lean_nat_dec_eq(v_x_38_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; uint8_t v___x_62_; 
lean_dec(v_h__6_45_);
v___x_61_ = lean_unsigned_to_nat(6u);
v___x_62_ = lean_nat_dec_eq(v_x_38_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; uint8_t v___x_64_; 
lean_dec(v_h__7_46_);
v___x_63_ = lean_unsigned_to_nat(7u);
v___x_64_ = lean_nat_dec_eq(v_x_38_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
lean_dec(v_h__8_47_);
v___x_65_ = lean_apply_10(v_h__9_48_, v_x_38_, v_x_39_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_65_;
}
else
{
lean_object* v___x_66_; 
lean_dec(v_h__9_48_);
lean_dec(v_x_38_);
v___x_66_ = lean_apply_1(v_h__8_47_, v_x_39_);
return v___x_66_;
}
}
else
{
lean_object* v___x_67_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_x_38_);
v___x_67_ = lean_apply_1(v_h__7_46_, v_x_39_);
return v___x_67_;
}
}
else
{
lean_object* v___x_68_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_x_38_);
v___x_68_ = lean_apply_1(v_h__6_45_, v_x_39_);
return v___x_68_;
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_h__6_45_);
lean_dec(v_x_38_);
v___x_69_ = lean_apply_1(v_h__5_44_, v_x_39_);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_h__6_45_);
lean_dec(v_h__5_44_);
lean_dec(v_x_38_);
v___x_70_ = lean_apply_1(v_h__4_43_, v_x_39_);
return v___x_70_;
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_h__6_45_);
lean_dec(v_h__5_44_);
lean_dec(v_h__4_43_);
lean_dec(v_x_38_);
v___x_71_ = lean_apply_1(v_h__3_42_, v_x_39_);
return v___x_71_;
}
}
else
{
lean_object* v___x_72_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_h__6_45_);
lean_dec(v_h__5_44_);
lean_dec(v_h__4_43_);
lean_dec(v_h__3_42_);
lean_dec(v_x_38_);
v___x_72_ = lean_apply_1(v_h__2_41_, v_x_39_);
return v___x_72_;
}
}
else
{
lean_object* v___x_73_; 
lean_dec(v_h__9_48_);
lean_dec(v_h__8_47_);
lean_dec(v_h__7_46_);
lean_dec(v_h__6_45_);
lean_dec(v_h__5_44_);
lean_dec(v_h__4_43_);
lean_dec(v_h__3_42_);
lean_dec(v_h__2_41_);
lean_dec(v_x_38_);
v___x_73_ = lean_apply_1(v_h__1_40_, v_x_39_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_TState_steps_match__1_splitter___redArg(lean_object* v_x_74_, lean_object* v_h__1_75_, lean_object* v_h__2_76_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
lean_dec(v_h__2_76_);
v___x_77_ = lean_box(0);
v___x_78_ = lean_apply_1(v_h__1_75_, v___x_77_);
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_81_; 
lean_dec(v_h__1_75_);
v_head_79_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_head_79_);
v_tail_80_ = lean_ctor_get(v_x_74_, 1);
lean_inc(v_tail_80_);
lean_dec_ref_known(v_x_74_, 2);
v___x_81_ = lean_apply_2(v_h__2_76_, v_head_79_, v_tail_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_TState_steps_match__1_splitter(lean_object* v_motive_82_, lean_object* v_x_83_, lean_object* v_h__1_84_, lean_object* v_h__2_85_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_h__2_85_);
v___x_86_ = lean_box(0);
v___x_87_ = lean_apply_1(v_h__1_84_, v___x_86_);
return v___x_87_;
}
else
{
lean_object* v_head_88_; lean_object* v_tail_89_; lean_object* v___x_90_; 
lean_dec(v_h__1_84_);
v_head_88_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_head_88_);
v_tail_89_ = lean_ctor_get(v_x_83_, 1);
lean_inc(v_tail_89_);
lean_dec_ref_known(v_x_83_, 2);
v___x_90_ = lean_apply_2(v_h__2_85_, v_head_88_, v_tail_89_);
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_mergeInto_match__3_splitter___redArg(lean_object* v_x_91_, lean_object* v_h__1_92_, lean_object* v_h__2_93_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec(v_h__1_92_);
v___x_94_ = lean_box(0);
v___x_95_ = lean_apply_1(v_h__2_93_, v___x_94_);
return v___x_95_;
}
else
{
lean_object* v_val_96_; lean_object* v_fst_97_; lean_object* v_snd_98_; lean_object* v___x_99_; 
lean_dec(v_h__2_93_);
v_val_96_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_val_96_);
lean_dec_ref_known(v_x_91_, 1);
v_fst_97_ = lean_ctor_get(v_val_96_, 0);
lean_inc(v_fst_97_);
v_snd_98_ = lean_ctor_get(v_val_96_, 1);
lean_inc(v_snd_98_);
lean_dec(v_val_96_);
v___x_99_ = lean_apply_2(v_h__1_92_, v_fst_97_, v_snd_98_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_mergeInto_match__3_splitter(lean_object* v_motive_100_, lean_object* v_x_101_, lean_object* v_h__1_102_, lean_object* v_h__2_103_){
_start:
{
if (lean_obj_tag(v_x_101_) == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v_h__1_102_);
v___x_104_ = lean_box(0);
v___x_105_ = lean_apply_1(v_h__2_103_, v___x_104_);
return v___x_105_;
}
else
{
lean_object* v_val_106_; lean_object* v_fst_107_; lean_object* v_snd_108_; lean_object* v___x_109_; 
lean_dec(v_h__2_103_);
v_val_106_ = lean_ctor_get(v_x_101_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v_x_101_, 1);
v_fst_107_ = lean_ctor_get(v_val_106_, 0);
lean_inc(v_fst_107_);
v_snd_108_ = lean_ctor_get(v_val_106_, 1);
lean_inc(v_snd_108_);
lean_dec(v_val_106_);
v___x_109_ = lean_apply_2(v_h__1_102_, v_fst_107_, v_snd_108_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_Gate_allocates_match__1_splitter___redArg(lean_object* v_x_110_, lean_object* v_h__1_111_, lean_object* v_h__2_112_, lean_object* v_h__3_113_, lean_object* v_h__4_114_){
_start:
{
switch(lean_obj_tag(v_x_110_))
{
case 1:
{
lean_object* v_q_115_; lean_object* v___x_116_; 
lean_dec(v_h__4_114_);
lean_dec(v_h__3_113_);
lean_dec(v_h__2_112_);
v_q_115_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_q_115_);
lean_dec_ref_known(v_x_110_, 1);
v___x_116_ = lean_apply_1(v_h__1_111_, v_q_115_);
return v___x_116_;
}
case 10:
{
lean_object* v_control_u2081_117_; lean_object* v_control_u2082_118_; lean_object* v_target_119_; lean_object* v___x_120_; 
lean_dec(v_h__4_114_);
lean_dec(v_h__3_113_);
lean_dec(v_h__1_111_);
v_control_u2081_117_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_control_u2081_117_);
v_control_u2082_118_ = lean_ctor_get(v_x_110_, 1);
lean_inc(v_control_u2082_118_);
v_target_119_ = lean_ctor_get(v_x_110_, 2);
lean_inc(v_target_119_);
lean_dec_ref_known(v_x_110_, 3);
v___x_120_ = lean_apply_3(v_h__2_112_, v_control_u2081_117_, v_control_u2082_118_, v_target_119_);
return v___x_120_;
}
case 13:
{
lean_object* v_q_121_; lean_object* v___x_122_; 
lean_dec(v_h__4_114_);
lean_dec(v_h__2_112_);
lean_dec(v_h__1_111_);
v_q_121_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_q_121_);
lean_dec_ref_known(v_x_110_, 1);
v___x_122_ = lean_apply_1(v_h__3_113_, v_q_121_);
return v___x_122_;
}
default: 
{
lean_object* v___x_123_; 
lean_dec(v_h__3_113_);
lean_dec(v_h__2_112_);
lean_dec(v_h__1_111_);
v___x_123_ = lean_apply_4(v_h__4_114_, v_x_110_, lean_box(0), lean_box(0), lean_box(0));
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__TzapLean_Gate_allocates_match__1_splitter(lean_object* v_motive_124_, lean_object* v_x_125_, lean_object* v_h__1_126_, lean_object* v_h__2_127_, lean_object* v_h__3_128_, lean_object* v_h__4_129_){
_start:
{
switch(lean_obj_tag(v_x_125_))
{
case 1:
{
lean_object* v_q_130_; lean_object* v___x_131_; 
lean_dec(v_h__4_129_);
lean_dec(v_h__3_128_);
lean_dec(v_h__2_127_);
v_q_130_ = lean_ctor_get(v_x_125_, 0);
lean_inc(v_q_130_);
lean_dec_ref_known(v_x_125_, 1);
v___x_131_ = lean_apply_1(v_h__1_126_, v_q_130_);
return v___x_131_;
}
case 10:
{
lean_object* v_control_u2081_132_; lean_object* v_control_u2082_133_; lean_object* v_target_134_; lean_object* v___x_135_; 
lean_dec(v_h__4_129_);
lean_dec(v_h__3_128_);
lean_dec(v_h__1_126_);
v_control_u2081_132_ = lean_ctor_get(v_x_125_, 0);
lean_inc(v_control_u2081_132_);
v_control_u2082_133_ = lean_ctor_get(v_x_125_, 1);
lean_inc(v_control_u2082_133_);
v_target_134_ = lean_ctor_get(v_x_125_, 2);
lean_inc(v_target_134_);
lean_dec_ref_known(v_x_125_, 3);
v___x_135_ = lean_apply_3(v_h__2_127_, v_control_u2081_132_, v_control_u2082_133_, v_target_134_);
return v___x_135_;
}
case 13:
{
lean_object* v_q_136_; lean_object* v___x_137_; 
lean_dec(v_h__4_129_);
lean_dec(v_h__2_127_);
lean_dec(v_h__1_126_);
v_q_136_ = lean_ctor_get(v_x_125_, 0);
lean_inc(v_q_136_);
lean_dec_ref_known(v_x_125_, 1);
v___x_137_ = lean_apply_1(v_h__3_128_, v_q_136_);
return v___x_137_;
}
default: 
{
lean_object* v___x_138_; 
lean_dec(v_h__3_128_);
lean_dec(v_h__2_127_);
lean_dec(v_h__1_126_);
v___x_138_ = lean_apply_4(v_h__4_129_, v_x_125_, lean_box(0), lean_box(0), lean_box(0));
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample___redArg(lean_object* v_k_139_, lean_object* v_c_140_, lean_object* v_s_141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_140_);
lean_inc_n(v_k_139_, 2);
v___x_143_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_liftSample___boxed), 5, 3);
lean_closure_set(v___x_143_, 0, v___x_142_);
lean_closure_set(v___x_143_, 1, v_k_139_);
lean_closure_set(v___x_143_, 2, v_s_141_);
v___x_144_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_wordsOf), 3, 2);
lean_closure_set(v___x_144_, 0, v_k_139_);
lean_closure_set(v___x_144_, 1, v___x_143_);
v___x_145_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_139_, v___x_144_, v_c_140_);
lean_dec(v_k_139_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample(lean_object* v_n_146_, lean_object* v_m_147_, lean_object* v_k_148_, lean_object* v_c_149_, lean_object* v_s_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSample___redArg(v_k_148_, v_c_149_, v_s_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSample___boxed(lean_object* v_n_152_, lean_object* v_m_153_, lean_object* v_k_154_, lean_object* v_c_155_, lean_object* v_s_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSample(v_n_152_, v_m_153_, v_k_154_, v_c_155_, v_s_156_);
lean_dec(v_m_153_);
lean_dec(v_n_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_sampleWords___lam__0(lean_object* v_s_158_, lean_object* v_k_159_, lean_object* v_i_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_apply_1(v_s_158_, v_i_160_);
v___x_162_ = lp_tzap_x2dlean_TzapLean_bitsToWord(v_k_159_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_sampleWords(lean_object* v_m_163_, lean_object* v_k_164_, lean_object* v_s_165_){
_start:
{
lean_object* v___f_166_; lean_object* v___x_167_; 
v___f_166_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_sampleWords___lam__0), 3, 2);
lean_closure_set(v___f_166_, 0, v_s_165_);
lean_closure_set(v___f_166_, 1, v_k_164_);
v___x_167_ = l_Array_ofFn___redArg(v_m_163_, v___f_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0(lean_object* v_words_168_, lean_object* v_i_169_){
_start:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_array_get_size(v_words_168_);
v___x_171_ = lean_nat_dec_lt(v_i_169_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_unsigned_to_nat(0u);
return v___x_172_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_array_fget_borrowed(v_words_168_, v_i_169_);
lean_inc(v___x_173_);
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0___boxed(lean_object* v_words_174_, lean_object* v_i_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0(v_words_174_, v_i_175_);
lean_dec(v_i_175_);
lean_dec_ref(v_words_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg(lean_object* v_k_177_, lean_object* v_c_178_, lean_object* v_s_179_){
_start:
{
lean_object* v___x_180_; lean_object* v_words_181_; lean_object* v___f_182_; lean_object* v___x_183_; 
v___x_180_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_178_);
lean_inc(v_k_177_);
v_words_181_ = lp_tzap_x2dlean_TzapLean_sampleWords(v___x_180_, v_k_177_, v_s_179_);
v___f_182_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_182_, 0, v_words_181_);
v___x_183_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_177_, v___f_182_, v_c_178_);
lean_dec(v_k_177_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached(lean_object* v_n_184_, lean_object* v_m_185_, lean_object* v_k_186_, lean_object* v_c_187_, lean_object* v_s_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg(v_k_186_, v_c_187_, v_s_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___boxed(lean_object* v_n_190_, lean_object* v_m_191_, lean_object* v_k_192_, lean_object* v_c_193_, lean_object* v_s_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached(v_n_190_, v_m_191_, v_k_192_, v_c_193_, v_s_194_);
lean_dec(v_m_191_);
lean_dec(v_n_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0(lean_object* v_modulus_196_, size_t v_sz_197_, size_t v_i_198_, lean_object* v_bs_199_){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = lean_usize_dec_lt(v_i_198_, v_sz_197_);
if (v___x_200_ == 0)
{
return v_bs_199_;
}
else
{
lean_object* v_v_201_; lean_object* v___x_202_; lean_object* v_bs_x27_203_; lean_object* v___x_204_; size_t v___x_205_; size_t v___x_206_; lean_object* v___x_207_; 
v_v_201_ = lean_array_uget(v_bs_199_, v_i_198_);
v___x_202_ = lean_unsigned_to_nat(0u);
v_bs_x27_203_ = lean_array_uset(v_bs_199_, v_i_198_, v___x_202_);
v___x_204_ = lean_nat_mod(v_v_201_, v_modulus_196_);
lean_dec(v_v_201_);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_add(v_i_198_, v___x_205_);
v___x_207_ = lean_array_uset(v_bs_x27_203_, v_i_198_, v___x_204_);
v_i_198_ = v___x_206_;
v_bs_199_ = v___x_207_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0___boxed(lean_object* v_modulus_209_, lean_object* v_sz_210_, lean_object* v_i_211_, lean_object* v_bs_212_){
_start:
{
size_t v_sz_boxed_213_; size_t v_i_boxed_214_; lean_object* v_res_215_; 
v_sz_boxed_213_ = lean_unbox_usize(v_sz_210_);
lean_dec(v_sz_210_);
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_res_215_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0(v_modulus_209_, v_sz_boxed_213_, v_i_boxed_214_, v_bs_212_);
lean_dec(v_modulus_209_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_normalizeSampleWords(lean_object* v_k_216_, lean_object* v_rows_217_){
_start:
{
lean_object* v___x_218_; lean_object* v_modulus_219_; size_t v_sz_220_; size_t v___x_221_; lean_object* v___x_222_; 
v___x_218_ = lean_unsigned_to_nat(2u);
v_modulus_219_ = lean_nat_pow(v___x_218_, v_k_216_);
v_sz_220_ = lean_array_size(v_rows_217_);
v___x_221_ = ((size_t)0ULL);
v___x_222_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_normalizeSampleWords_spec__0(v_modulus_219_, v_sz_220_, v___x_221_, v_rows_217_);
lean_dec(v_modulus_219_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_normalizeSampleWords___boxed(lean_object* v_k_223_, lean_object* v_rows_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_tzap_x2dlean_TzapLean_normalizeSampleWords(v_k_223_, v_rows_224_);
lean_dec(v_k_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0(lean_object* v_bound_226_, lean_object* v_words_227_, lean_object* v_i_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lean_nat_dec_lt(v_i_228_, v_bound_226_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_unsigned_to_nat(0u);
return v___x_230_;
}
else
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_array_get_size(v_words_227_);
v___x_232_ = lean_nat_dec_lt(v_i_228_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(0u);
return v___x_233_;
}
else
{
lean_object* v___x_234_; 
v___x_234_ = lean_array_fget_borrowed(v_words_227_, v_i_228_);
lean_inc(v___x_234_);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0___boxed(lean_object* v_bound_235_, lean_object* v_words_236_, lean_object* v_i_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0(v_bound_235_, v_words_236_, v_i_237_);
lean_dec(v_i_237_);
lean_dec_ref(v_words_236_);
lean_dec(v_bound_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(lean_object* v_k_239_, lean_object* v_c_240_, lean_object* v_rows_241_){
_start:
{
lean_object* v_bound_242_; lean_object* v_words_243_; lean_object* v_draws_244_; lean_object* v___x_245_; 
v_bound_242_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_240_);
v_words_243_ = lp_tzap_x2dlean_TzapLean_normalizeSampleWords(v_k_239_, v_rows_241_);
v_draws_244_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v_draws_244_, 0, v_bound_242_);
lean_closure_set(v_draws_244_, 1, v_words_243_);
v___x_245_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_239_, v_draws_244_, v_c_240_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg___boxed(lean_object* v_k_246_, lean_object* v_c_247_, lean_object* v_rows_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(v_k_246_, v_c_247_, v_rows_248_);
lean_dec(v_k_246_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords(lean_object* v_n_250_, lean_object* v_m_251_, lean_object* v_k_252_, lean_object* v_c_253_, lean_object* v_rows_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(v_k_252_, v_c_253_, v_rows_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___boxed(lean_object* v_n_256_, lean_object* v_m_257_, lean_object* v_k_258_, lean_object* v_c_259_, lean_object* v_rows_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords(v_n_256_, v_m_257_, v_k_258_, v_c_259_, v_rows_260_);
lean_dec(v_k_258_);
lean_dec(v_m_257_);
lean_dec(v_n_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(lean_object* v_k_262_, lean_object* v_c_263_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_263_);
lean_inc(v_k_262_);
v___x_266_ = lp_tzap_x2dlean_TzapLean_randomSample(v___x_265_, v_k_262_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_275_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_275_ == 0)
{
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_271_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg(v_k_262_, v_c_263_, v_a_267_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_271_);
v___x_273_ = v___x_269_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_dec_ref(v_c_263_);
lean_dec(v_k_262_);
v_a_276_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_266_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_266_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg___boxed(lean_object* v_k_284_, lean_object* v_c_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(v_k_284_, v_c_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom(lean_object* v_n_288_, lean_object* v_m_289_, lean_object* v_k_290_, lean_object* v_c_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(v_k_290_, v_c_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___boxed(lean_object* v_n_294_, lean_object* v_m_295_, lean_object* v_k_296_, lean_object* v_c_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom(v_n_294_, v_m_295_, v_k_296_, v_c_297_);
lean_dec(v_m_295_);
lean_dec(v_n_294_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(lean_object* v_k_300_, lean_object* v_c_301_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_301_);
v___x_304_ = lp_tzap_x2dlean_TzapLean_randomWords(v___x_303_, v_k_300_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_313_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_313_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_313_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_313_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_309_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(v_k_300_, v_c_301_, v_a_305_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_309_);
v___x_311_ = v___x_307_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec_ref(v_c_301_);
v_a_314_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_304_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_304_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg___boxed(lean_object* v_k_322_, lean_object* v_c_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_322_, v_c_323_);
lean_dec(v_k_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked(lean_object* v_n_326_, lean_object* v_m_327_, lean_object* v_k_328_, lean_object* v_c_329_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_328_, v_c_329_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___boxed(lean_object* v_n_332_, lean_object* v_m_333_, lean_object* v_k_334_, lean_object* v_c_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked(v_n_332_, v_m_333_, v_k_334_, v_c_335_);
lean_dec(v_k_334_);
lean_dec(v_m_333_);
lean_dec(v_n_332_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter___redArg(lean_object* v_x_338_, lean_object* v_h__1_339_, lean_object* v_h__2_340_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; 
lean_dec(v_h__2_340_);
v_a_341_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v_x_338_, 1);
v___x_342_ = lean_apply_2(v_h__1_339_, v_a_341_, lean_box(0));
return v___x_342_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_344_; 
lean_dec(v_h__1_339_);
v_a_343_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v_x_338_, 1);
v___x_344_ = lean_apply_2(v_h__2_340_, v_a_343_, lean_box(0));
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter(lean_object* v_00_u03b5_345_, lean_object* v_00_u03c3_346_, lean_object* v_00_u03b1_347_, lean_object* v_motive_348_, lean_object* v_x_349_, lean_object* v_h__1_350_, lean_object* v_h__2_351_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_353_; 
lean_dec(v_h__2_351_);
v_a_352_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v_x_349_, 1);
v___x_353_ = lean_apply_2(v_h__1_350_, v_a_352_, lean_box(0));
return v___x_353_;
}
else
{
lean_object* v_a_354_; lean_object* v___x_355_; 
lean_dec(v_h__1_350_);
v_a_354_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v_x_349_, 1);
v___x_355_ = lean_apply_2(v_h__2_351_, v_a_354_, lean_box(0));
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0(lean_object* v_k_356_, lean_object* v_n_357_, lean_object* v_m_358_, lean_object* v___y_359_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_356_, v___y_359_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0___boxed(lean_object* v_k_362_, lean_object* v_n_363_, lean_object* v_m_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0(v_k_362_, v_n_363_, v_m_364_, v___y_365_);
lean_dec(v_m_364_);
lean_dec(v_n_363_);
lean_dec(v_k_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec(lean_object* v_k_369_){
_start:
{
lean_object* v___f_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___f_370_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0___boxed), 5, 1);
lean_closure_set(v___f_370_, 0, v_k_369_);
v___x_371_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___closed__0));
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___f_370_);
return v___x_372_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFoldProof(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_RandPass(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_ExecutableRandPass(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_PhaseFoldRand(uint8_t builtin) {
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
res = initialize_tzap_x2dlean_TzapLean_RandPass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_ExecutableRandPass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
