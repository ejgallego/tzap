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
size_t lean_array_size(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_tzap_x2dlean_TzapLean_randomWords(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_packedSampleStream(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_packedSampleStream___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0(lean_object* v_modulus_196_, size_t v_sz_197_, size_t v_i_198_, lean_object* v_bs_199_){
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0___boxed(lean_object* v_modulus_209_, lean_object* v_sz_210_, lean_object* v_i_211_, lean_object* v_bs_212_){
_start:
{
size_t v_sz_boxed_213_; size_t v_i_boxed_214_; lean_object* v_res_215_; 
v_sz_boxed_213_ = lean_unbox_usize(v_sz_210_);
lean_dec(v_sz_210_);
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_res_215_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0(v_modulus_209_, v_sz_boxed_213_, v_i_boxed_214_, v_bs_212_);
lean_dec(v_modulus_209_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_packedSampleStream(lean_object* v_m_216_, lean_object* v_k_217_, lean_object* v_rows_218_, lean_object* v_i_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_nat_dec_lt(v_i_219_, v_m_216_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; 
lean_dec_ref(v_rows_218_);
v___x_221_ = lean_unsigned_to_nat(0u);
return v___x_221_;
}
else
{
size_t v_sz_222_; lean_object* v___x_223_; lean_object* v_modulus_224_; size_t v___x_225_; lean_object* v_words_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_sz_222_ = lean_array_size(v_rows_218_);
v___x_223_ = lean_unsigned_to_nat(2u);
v_modulus_224_ = lean_nat_pow(v___x_223_, v_k_217_);
v___x_225_ = ((size_t)0ULL);
v_words_226_ = lp_tzap_x2dlean___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00TzapLean_packedSampleStream_spec__0(v_modulus_224_, v_sz_222_, v___x_225_, v_rows_218_);
lean_dec(v_modulus_224_);
v___x_227_ = lean_array_get_size(v_words_226_);
v___x_228_ = lean_nat_dec_lt(v_i_219_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
lean_dec_ref(v_words_226_);
v___x_229_ = lean_unsigned_to_nat(0u);
return v___x_229_;
}
else
{
lean_object* v___x_230_; 
v___x_230_ = lean_array_fget(v_words_226_, v_i_219_);
lean_dec_ref(v_words_226_);
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_packedSampleStream___boxed(lean_object* v_m_231_, lean_object* v_k_232_, lean_object* v_rows_233_, lean_object* v_i_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = lp_tzap_x2dlean_TzapLean_packedSampleStream(v_m_231_, v_k_232_, v_rows_233_, v_i_234_);
lean_dec(v_i_234_);
lean_dec(v_k_232_);
lean_dec(v_m_231_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(lean_object* v_k_236_, lean_object* v_c_237_, lean_object* v_rows_238_){
_start:
{
lean_object* v___x_239_; lean_object* v_draws_240_; lean_object* v___x_241_; 
v___x_239_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_237_);
lean_inc(v_k_236_);
v_draws_240_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_packedSampleStream___boxed), 4, 3);
lean_closure_set(v_draws_240_, 0, v___x_239_);
lean_closure_set(v_draws_240_, 1, v_k_236_);
lean_closure_set(v_draws_240_, 2, v_rows_238_);
v___x_241_ = lp_tzap_x2dlean_TzapLean_phaseFold(v_k_236_, v_draws_240_, v_c_237_);
lean_dec(v_k_236_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords(lean_object* v_n_242_, lean_object* v_m_243_, lean_object* v_k_244_, lean_object* v_c_245_, lean_object* v_rows_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(v_k_244_, v_c_245_, v_rows_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___boxed(lean_object* v_n_248_, lean_object* v_m_249_, lean_object* v_k_250_, lean_object* v_c_251_, lean_object* v_rows_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords(v_n_248_, v_m_249_, v_k_250_, v_c_251_, v_rows_252_);
lean_dec(v_m_249_);
lean_dec(v_n_248_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(lean_object* v_k_254_, lean_object* v_c_255_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_255_);
lean_inc(v_k_254_);
v___x_258_ = lp_tzap_x2dlean_TzapLean_randomSample(v___x_257_, v_k_254_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_267_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_267_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_263_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithSampleCached___redArg(v_k_254_, v_c_255_, v_a_259_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_263_);
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec_ref(v_c_255_);
lean_dec(v_k_254_);
v_a_268_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_258_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_258_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg___boxed(lean_object* v_k_276_, lean_object* v_c_277_, lean_object* v_a_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(v_k_276_, v_c_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom(lean_object* v_n_280_, lean_object* v_m_281_, lean_object* v_k_282_, lean_object* v_c_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom___redArg(v_k_282_, v_c_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandom___boxed(lean_object* v_n_286_, lean_object* v_m_287_, lean_object* v_k_288_, lean_object* v_c_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandom(v_n_286_, v_m_287_, v_k_288_, v_c_289_);
lean_dec(v_m_287_);
lean_dec(v_n_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(lean_object* v_k_292_, lean_object* v_c_293_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lp_tzap_x2dlean_TzapLean_varBound(v_c_293_);
v___x_296_ = lp_tzap_x2dlean_TzapLean_randomWords(v___x_295_, v_k_292_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_305_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_305_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_305_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_305_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_301_ = lp_tzap_x2dlean_TzapLean_phaseFoldWithWords___redArg(v_k_292_, v_c_293_, v_a_297_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_301_);
v___x_303_ = v___x_299_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec_ref(v_c_293_);
lean_dec(v_k_292_);
v_a_306_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_296_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_296_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg___boxed(lean_object* v_k_314_, lean_object* v_c_315_, lean_object* v_a_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_314_, v_c_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked(lean_object* v_n_318_, lean_object* v_m_319_, lean_object* v_k_320_, lean_object* v_c_321_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_320_, v_c_321_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___boxed(lean_object* v_n_324_, lean_object* v_m_325_, lean_object* v_k_326_, lean_object* v_c_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked(v_n_324_, v_m_325_, v_k_326_, v_c_327_);
lean_dec(v_m_325_);
lean_dec(v_n_324_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter___redArg(lean_object* v_x_330_, lean_object* v_h__1_331_, lean_object* v_h__2_332_){
_start:
{
if (lean_obj_tag(v_x_330_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; 
lean_dec(v_h__2_332_);
v_a_333_ = lean_ctor_get(v_x_330_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v_x_330_, 1);
v___x_334_ = lean_apply_2(v_h__1_331_, v_a_333_, lean_box(0));
return v___x_334_;
}
else
{
lean_object* v_a_335_; lean_object* v___x_336_; 
lean_dec(v_h__1_331_);
v_a_335_ = lean_ctor_get(v_x_330_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v_x_330_, 1);
v___x_336_ = lean_apply_2(v_h__2_332_, v_a_335_, lean_box(0));
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_PhaseFoldRand_0__EST_bind_match__1_splitter(lean_object* v_00_u03b5_337_, lean_object* v_00_u03c3_338_, lean_object* v_00_u03b1_339_, lean_object* v_motive_340_, lean_object* v_x_341_, lean_object* v_h__1_342_, lean_object* v_h__2_343_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; 
lean_dec(v_h__2_343_);
v_a_344_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v_x_341_, 1);
v___x_345_ = lean_apply_2(v_h__1_342_, v_a_344_, lean_box(0));
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_347_; 
lean_dec(v_h__1_342_);
v_a_346_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_x_341_, 1);
v___x_347_ = lean_apply_2(v_h__2_343_, v_a_346_, lean_box(0));
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0(lean_object* v_k_348_, lean_object* v_n_349_, lean_object* v_m_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lp_tzap_x2dlean_TzapLean_phaseFoldRandomPacked___redArg(v_k_348_, v___y_351_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0___boxed(lean_object* v_k_354_, lean_object* v_n_355_, lean_object* v_m_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0(v_k_354_, v_n_355_, v_m_356_, v___y_357_);
lean_dec(v_m_356_);
lean_dec(v_n_355_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec(lean_object* v_k_361_){
_start:
{
lean_object* v___f_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___f_362_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___lam__0___boxed), 5, 1);
lean_closure_set(v___f_362_, 0, v_k_361_);
v___x_363_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_PhaseFoldRandExec___closed__0));
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v___f_362_);
return v___x_364_;
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
