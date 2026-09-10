// Lean compiler output
// Module: TzapLean.ExecutableRandPass
// Imports: public import Init public meta import Init public import TzapLean.Pass
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
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__0_value;
static const lean_string_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__1 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__1_value;
static const lean_ctor_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__1_value),((lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__0_value)}};
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__2 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__2_value;
static lean_once_cell_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " ∘\? "};
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0(lean_object* v_run_1_, lean_object* v_n_2_, lean_object* v_m_3_, lean_object* v_c_4_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_apply_3(v_run_1_, v_n_2_, v_m_3_, v_c_4_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0___boxed(lean_object* v_run_8_, lean_object* v_n_9_, lean_object* v_m_10_, lean_object* v_c_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0(v_run_8_, v_n_9_, v_m_10_, v_c_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(lean_object* v_p_14_){
_start:
{
lean_object* v_name_15_; lean_object* v_run_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_24_; 
v_name_15_ = lean_ctor_get(v_p_14_, 0);
v_run_16_ = lean_ctor_get(v_p_14_, 1);
v_isSharedCheck_24_ = !lean_is_exclusive(v_p_14_);
if (v_isSharedCheck_24_ == 0)
{
v___x_18_ = v_p_14_;
v_isShared_19_ = v_isSharedCheck_24_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_run_16_);
lean_inc(v_name_15_);
lean_dec(v_p_14_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_24_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___f_20_; lean_object* v___x_22_; 
v___f_20_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass___lam__0___boxed), 5, 1);
lean_closure_set(v___f_20_, 0, v_run_16_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 1, v___f_20_);
v___x_22_ = v___x_18_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_name_15_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v___f_20_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0(lean_object* v_n_25_, lean_object* v_m_26_, lean_object* v_c_27_){
_start:
{
lean_inc_ref(v_c_27_);
return v_c_27_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0___boxed(lean_object* v_n_28_, lean_object* v_m_29_, lean_object* v_c_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___lam__0(v_n_28_, v_m_29_, v_c_30_);
lean_dec_ref(v_c_30_);
lean_dec(v_m_29_);
lean_dec(v_n_28_);
return v_res_31_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__2));
v___x_38_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_ofPass(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3, &lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3_once, _init_lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id___closed__3);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0(lean_object* v_run_40_, lean_object* v_cond_41_, lean_object* v_run_42_, lean_object* v_n_43_, lean_object* v_m_44_, lean_object* v_c_45_){
_start:
{
lean_object* v___x_47_; 
lean_inc_ref(v_c_45_);
lean_inc(v_m_44_);
lean_inc(v_n_43_);
v___x_47_ = lean_apply_4(v_run_40_, v_n_43_, v_m_44_, v_c_45_, lean_box(0));
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_49_; uint8_t v___x_50_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc_n(v_a_48_, 2);
lean_inc(v_m_44_);
lean_inc(v_n_43_);
v___x_49_ = lean_apply_4(v_cond_41_, v_n_43_, v_m_44_, v_c_45_, v_a_48_);
v___x_50_ = lean_unbox(v___x_49_);
if (v___x_50_ == 0)
{
lean_dec(v_a_48_);
lean_dec(v_m_44_);
lean_dec(v_n_43_);
lean_dec_ref(v_run_42_);
return v___x_47_;
}
else
{
lean_object* v___x_51_; 
lean_dec_ref_known(v___x_47_, 1);
v___x_51_ = lean_apply_4(v_run_42_, v_n_43_, v_m_44_, v_a_48_, lean_box(0));
return v___x_51_;
}
}
else
{
lean_dec_ref(v_c_45_);
lean_dec(v_m_44_);
lean_dec(v_n_43_);
lean_dec_ref(v_run_42_);
lean_dec_ref(v_cond_41_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0___boxed(lean_object* v_run_52_, lean_object* v_cond_53_, lean_object* v_run_54_, lean_object* v_n_55_, lean_object* v_m_56_, lean_object* v_c_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0(v_run_52_, v_cond_53_, v_run_54_, v_n_55_, v_m_56_, v_c_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen(lean_object* v_p_61_, lean_object* v_q_62_, lean_object* v_cond_63_){
_start:
{
lean_object* v_name_64_; lean_object* v_run_65_; lean_object* v_name_66_; lean_object* v_run_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_78_; 
v_name_64_ = lean_ctor_get(v_q_62_, 0);
lean_inc_ref(v_name_64_);
v_run_65_ = lean_ctor_get(v_q_62_, 1);
lean_inc_ref(v_run_65_);
lean_dec_ref(v_q_62_);
v_name_66_ = lean_ctor_get(v_p_61_, 0);
v_run_67_ = lean_ctor_get(v_p_61_, 1);
v_isSharedCheck_78_ = !lean_is_exclusive(v_p_61_);
if (v_isSharedCheck_78_ == 0)
{
v___x_69_ = v_p_61_;
v_isShared_70_ = v_isSharedCheck_78_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_run_67_);
lean_inc(v_name_66_);
lean_dec(v_p_61_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_78_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
v___f_71_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___lam__0___boxed), 7, 3);
lean_closure_set(v___f_71_, 0, v_run_67_);
lean_closure_set(v___f_71_, 1, v_cond_63_);
lean_closure_set(v___f_71_, 2, v_run_65_);
v___x_72_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___closed__0));
v___x_73_ = lean_string_append(v_name_64_, v___x_72_);
v___x_74_ = lean_string_append(v___x_73_, v_name_66_);
lean_dec_ref(v_name_66_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 1, v___f_71_);
lean_ctor_set(v___x_69_, 0, v___x_74_);
v___x_76_ = v___x_69_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v___f_71_);
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
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(lean_object* v_n_79_, lean_object* v_m_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed(lean_object* v_n_84_, lean_object* v_m_85_, lean_object* v_x_86_, lean_object* v_x_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(v_n_84_, v_m_85_, v_x_86_, v_x_87_);
lean_dec_ref(v_x_87_);
lean_dec_ref(v_x_86_);
lean_dec(v_m_85_);
lean_dec(v_n_84_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(lean_object* v_p_91_, lean_object* v_q_92_){
_start:
{
lean_object* v___f_93_; lean_object* v___x_94_; 
v___f_93_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___closed__0));
v___x_94_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen(v_p_91_, v_q_92_, v___f_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v___x_96_; 
v___x_96_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id;
return v___x_96_;
}
else
{
lean_object* v_head_97_; lean_object* v_tail_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_head_97_ = lean_ctor_get(v_x_95_, 0);
lean_inc(v_head_97_);
v_tail_98_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_tail_98_);
lean_dec_ref_known(v_x_95_, 2);
v___x_99_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(v_tail_98_);
v___x_100_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(v_head_97_, v___x_99_);
return v___x_100_;
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(lean_object* v_n_101_, lean_object* v_m_102_, lean_object* v_before_103_, lean_object* v_after_104_){
_start:
{
lean_object* v_gates_105_; lean_object* v_gates_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_gates_105_ = lean_ctor_get(v_after_104_, 2);
v_gates_106_ = lean_ctor_get(v_before_103_, 2);
v___x_107_ = l_List_lengthTR___redArg(v_gates_105_);
v___x_108_ = l_List_lengthTR___redArg(v_gates_106_);
v___x_109_ = lean_nat_dec_lt(v___x_107_, v___x_108_);
lean_dec(v___x_108_);
lean_dec(v___x_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed(lean_object* v_n_110_, lean_object* v_m_111_, lean_object* v_before_112_, lean_object* v_after_113_){
_start:
{
uint8_t v_res_114_; lean_object* v_r_115_; 
v_res_114_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(v_n_110_, v_m_111_, v_before_112_, v_after_113_);
lean_dec_ref(v_after_113_);
lean_dec_ref(v_before_112_);
lean_dec(v_m_111_);
lean_dec(v_n_110_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(lean_object* v_p_117_, lean_object* v_x_118_){
_start:
{
lean_object* v_zero_119_; uint8_t v_isZero_120_; 
v_zero_119_ = lean_unsigned_to_nat(0u);
v_isZero_120_ = lean_nat_dec_eq(v_x_118_, v_zero_119_);
if (v_isZero_120_ == 1)
{
lean_object* v___x_121_; 
lean_dec_ref(v_p_117_);
v___x_121_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id;
return v___x_121_;
}
else
{
lean_object* v___f_122_; lean_object* v_one_123_; lean_object* v_n_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___f_122_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0));
v_one_123_ = lean_unsigned_to_nat(1u);
v_n_124_ = lean_nat_sub(v_x_118_, v_one_123_);
lean_inc_ref(v_p_117_);
v___x_125_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(v_p_117_, v_n_124_);
lean_dec(v_n_124_);
v___x_126_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen(v_p_117_, v___x_125_, v___f_122_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___boxed(lean_object* v_p_127_, lean_object* v_x_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(v_p_127_, v_x_128_);
lean_dec(v_x_128_);
return v_res_129_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_tzap_x2dlean_TzapLean_Pass(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_tzap_x2dlean_TzapLean_ExecutableRandPass(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_tzap_x2dlean_TzapLean_Pass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id = _init_lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id();
lean_mark_persistent(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
