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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(lean_object*);
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0 = (const lean_object*)&lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0_value;
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(lean_object* v_run_79_, lean_object* v_run_80_, lean_object* v_n_81_, lean_object* v_m_82_, lean_object* v_c_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v_m_82_);
lean_inc(v_n_81_);
v___x_85_ = lean_apply_4(v_run_79_, v_n_81_, v_m_82_, v_c_83_, lean_box(0));
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_87_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
lean_dec_ref_known(v___x_85_, 1);
v___x_87_ = lean_apply_4(v_run_80_, v_n_81_, v_m_82_, v_a_86_, lean_box(0));
return v___x_87_;
}
else
{
lean_dec(v_m_82_);
lean_dec(v_n_81_);
lean_dec_ref(v_run_80_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed(lean_object* v_run_88_, lean_object* v_run_89_, lean_object* v_n_90_, lean_object* v_m_91_, lean_object* v_c_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0(v_run_88_, v_run_89_, v_n_90_, v_m_91_, v_c_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(lean_object* v_p_95_, lean_object* v_q_96_){
_start:
{
lean_object* v_name_97_; lean_object* v_run_98_; lean_object* v_name_99_; lean_object* v_run_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_111_; 
v_name_97_ = lean_ctor_get(v_q_96_, 0);
lean_inc_ref(v_name_97_);
v_run_98_ = lean_ctor_get(v_q_96_, 1);
lean_inc_ref(v_run_98_);
lean_dec_ref(v_q_96_);
v_name_99_ = lean_ctor_get(v_p_95_, 0);
v_run_100_ = lean_ctor_get(v_p_95_, 1);
v_isSharedCheck_111_ = !lean_is_exclusive(v_p_95_);
if (v_isSharedCheck_111_ == 0)
{
v___x_102_ = v_p_95_;
v_isShared_103_ = v_isSharedCheck_111_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_run_100_);
lean_inc(v_name_99_);
lean_dec(v_p_95_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_111_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___f_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v___f_104_ = lean_alloc_closure((void*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp___lam__0___boxed), 6, 2);
lean_closure_set(v___f_104_, 0, v_run_100_);
lean_closure_set(v___f_104_, 1, v_run_98_);
v___x_105_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen___closed__0));
v___x_106_ = lean_string_append(v_name_97_, v___x_105_);
v___x_107_ = lean_string_append(v___x_106_, v_name_99_);
lean_dec_ref(v_name_99_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___f_104_);
lean_ctor_set(v___x_102_, 0, v___x_107_);
v___x_109_ = v___x_102_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___f_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(lean_object* v_x_112_){
_start:
{
if (lean_obj_tag(v_x_112_) == 0)
{
lean_object* v___x_113_; 
v___x_113_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id;
return v___x_113_;
}
else
{
lean_object* v_head_114_; lean_object* v_tail_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_head_114_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_head_114_);
v_tail_115_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_tail_115_);
lean_dec_ref_known(v_x_112_, 2);
v___x_116_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_pipeline(v_tail_115_);
v___x_117_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_comp(v_head_114_, v___x_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT uint8_t lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(lean_object* v_n_118_, lean_object* v_m_119_, lean_object* v_before_120_, lean_object* v_after_121_){
_start:
{
lean_object* v_gates_122_; lean_object* v_gates_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_gates_122_ = lean_ctor_get(v_after_121_, 2);
v_gates_123_ = lean_ctor_get(v_before_120_, 2);
v___x_124_ = l_List_lengthTR___redArg(v_gates_122_);
v___x_125_ = l_List_lengthTR___redArg(v_gates_123_);
v___x_126_ = lean_nat_dec_lt(v___x_124_, v___x_125_);
lean_dec(v___x_125_);
lean_dec(v___x_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0___boxed(lean_object* v_n_127_, lean_object* v_m_128_, lean_object* v_before_129_, lean_object* v_after_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___lam__0(v_n_127_, v_m_128_, v_before_129_, v_after_130_);
lean_dec_ref(v_after_130_);
lean_dec_ref(v_before_129_);
lean_dec(v_m_128_);
lean_dec(v_n_127_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(lean_object* v_p_134_, lean_object* v_x_135_){
_start:
{
lean_object* v_zero_136_; uint8_t v_isZero_137_; 
v_zero_136_ = lean_unsigned_to_nat(0u);
v_isZero_137_ = lean_nat_dec_eq(v_x_135_, v_zero_136_);
if (v_isZero_137_ == 1)
{
lean_object* v___x_138_; 
lean_dec_ref(v_p_134_);
v___x_138_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_id;
return v___x_138_;
}
else
{
lean_object* v___f_139_; lean_object* v_one_140_; lean_object* v_n_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___f_139_ = ((lean_object*)(lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___closed__0));
v_one_140_ = lean_unsigned_to_nat(1u);
v_n_141_ = lean_nat_sub(v_x_135_, v_one_140_);
lean_inc_ref(v_p_134_);
v___x_142_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(v_p_134_, v_n_141_);
lean_dec(v_n_141_);
v___x_143_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_compWhen(v_p_134_, v___x_142_, v___f_139_);
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink___boxed(lean_object* v_p_144_, lean_object* v_x_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_fixpointShrink(v_p_144_, v_x_145_);
lean_dec(v_x_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(lean_object* v_n_147_, lean_object* v_m_148_, lean_object* v_p_149_, lean_object* v_x_150_, lean_object* v_x_151_){
_start:
{
lean_object* v_zero_153_; uint8_t v_isZero_154_; 
v_zero_153_ = lean_unsigned_to_nat(0u);
v_isZero_154_ = lean_nat_dec_eq(v_x_150_, v_zero_153_);
if (v_isZero_154_ == 1)
{
lean_object* v___x_155_; 
lean_dec(v_x_150_);
lean_dec_ref(v_p_149_);
lean_dec(v_m_148_);
lean_dec(v_n_147_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v_x_151_);
return v___x_155_;
}
else
{
lean_object* v_run_156_; lean_object* v___x_157_; 
v_run_156_ = lean_ctor_get(v_p_149_, 1);
lean_inc_ref(v_run_156_);
lean_inc_ref(v_x_151_);
lean_inc(v_m_148_);
lean_inc(v_n_147_);
v___x_157_ = lean_apply_4(v_run_156_, v_n_147_, v_m_148_, v_x_151_, lean_box(0));
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; lean_object* v_gates_159_; lean_object* v_gates_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
v_gates_159_ = lean_ctor_get(v_a_158_, 2);
v_gates_160_ = lean_ctor_get(v_x_151_, 2);
lean_inc(v_gates_160_);
lean_dec_ref(v_x_151_);
v___x_161_ = l_List_lengthTR___redArg(v_gates_159_);
v___x_162_ = l_List_lengthTR___redArg(v_gates_160_);
lean_dec(v_gates_160_);
v___x_163_ = lean_nat_dec_lt(v___x_161_, v___x_162_);
lean_dec(v___x_162_);
lean_dec(v___x_161_);
if (v___x_163_ == 0)
{
lean_dec(v_a_158_);
lean_dec(v_x_150_);
lean_dec_ref(v_p_149_);
lean_dec(v_m_148_);
lean_dec(v_n_147_);
return v___x_157_;
}
else
{
lean_object* v_one_164_; lean_object* v_n_165_; 
lean_dec_ref_known(v___x_157_, 1);
v_one_164_ = lean_unsigned_to_nat(1u);
v_n_165_ = lean_nat_sub(v_x_150_, v_one_164_);
lean_dec(v_x_150_);
v_x_150_ = v_n_165_;
v_x_151_ = v_a_158_;
goto _start;
}
}
else
{
lean_dec_ref(v_x_151_);
lean_dec(v_x_150_);
lean_dec_ref(v_p_149_);
lean_dec(v_m_148_);
lean_dec(v_n_147_);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink___boxed(lean_object* v_n_167_, lean_object* v_m_168_, lean_object* v_p_169_, lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_tzap_x2dlean_TzapLean_ExecutableRandPass_runFixpointShrink(v_n_167_, v_m_168_, v_p_169_, v_x_170_, v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___redArg(lean_object* v_x_174_, lean_object* v_x_175_, lean_object* v_h__1_176_, lean_object* v_h__2_177_){
_start:
{
lean_object* v_zero_178_; uint8_t v_isZero_179_; 
v_zero_178_ = lean_unsigned_to_nat(0u);
v_isZero_179_ = lean_nat_dec_eq(v_x_174_, v_zero_178_);
if (v_isZero_179_ == 1)
{
lean_object* v___x_180_; 
lean_dec(v_h__2_177_);
v___x_180_ = lean_apply_1(v_h__1_176_, v_x_175_);
return v___x_180_;
}
else
{
lean_object* v_one_181_; lean_object* v_n_182_; lean_object* v___x_183_; 
lean_dec(v_h__1_176_);
v_one_181_ = lean_unsigned_to_nat(1u);
v_n_182_ = lean_nat_sub(v_x_174_, v_one_181_);
v___x_183_ = lean_apply_2(v_h__2_177_, v_n_182_, v_x_175_);
return v___x_183_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___redArg___boxed(lean_object* v_x_184_, lean_object* v_x_185_, lean_object* v_h__1_186_, lean_object* v_h__2_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___redArg(v_x_184_, v_x_185_, v_h__1_186_, v_h__2_187_);
lean_dec(v_x_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter(lean_object* v_n_189_, lean_object* v_m_190_, lean_object* v_motive_191_, lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_h__1_194_, lean_object* v_h__2_195_){
_start:
{
lean_object* v_zero_196_; uint8_t v_isZero_197_; 
v_zero_196_ = lean_unsigned_to_nat(0u);
v_isZero_197_ = lean_nat_dec_eq(v_x_192_, v_zero_196_);
if (v_isZero_197_ == 1)
{
lean_object* v___x_198_; 
lean_dec(v_h__2_195_);
v___x_198_ = lean_apply_1(v_h__1_194_, v_x_193_);
return v___x_198_;
}
else
{
lean_object* v_one_199_; lean_object* v_n_200_; lean_object* v___x_201_; 
lean_dec(v_h__1_194_);
v_one_199_ = lean_unsigned_to_nat(1u);
v_n_200_ = lean_nat_sub(v_x_192_, v_one_199_);
v___x_201_ = lean_apply_2(v_h__2_195_, v_n_200_, v_x_193_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter___boxed(lean_object* v_n_202_, lean_object* v_m_203_, lean_object* v_motive_204_, lean_object* v_x_205_, lean_object* v_x_206_, lean_object* v_h__1_207_, lean_object* v_h__2_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_runFixpointShrink_match__1_splitter(v_n_202_, v_m_203_, v_motive_204_, v_x_205_, v_x_206_, v_h__1_207_, v_h__2_208_);
lean_dec(v_x_205_);
lean_dec(v_m_203_);
lean_dec(v_n_202_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___redArg(lean_object* v_x_210_, lean_object* v_h__1_211_, lean_object* v_h__2_212_){
_start:
{
lean_object* v_zero_213_; uint8_t v_isZero_214_; 
v_zero_213_ = lean_unsigned_to_nat(0u);
v_isZero_214_ = lean_nat_dec_eq(v_x_210_, v_zero_213_);
if (v_isZero_214_ == 1)
{
lean_object* v___x_215_; lean_object* v___x_216_; 
lean_dec(v_h__2_212_);
v___x_215_ = lean_box(0);
v___x_216_ = lean_apply_1(v_h__1_211_, v___x_215_);
return v___x_216_;
}
else
{
lean_object* v_one_217_; lean_object* v_n_218_; lean_object* v___x_219_; 
lean_dec(v_h__1_211_);
v_one_217_ = lean_unsigned_to_nat(1u);
v_n_218_ = lean_nat_sub(v_x_210_, v_one_217_);
v___x_219_ = lean_apply_1(v_h__2_212_, v_n_218_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___redArg___boxed(lean_object* v_x_220_, lean_object* v_h__1_221_, lean_object* v_h__2_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___redArg(v_x_220_, v_h__1_221_, v_h__2_222_);
lean_dec(v_x_220_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter(lean_object* v_motive_224_, lean_object* v_x_225_, lean_object* v_h__1_226_, lean_object* v_h__2_227_){
_start:
{
lean_object* v_zero_228_; uint8_t v_isZero_229_; 
v_zero_228_ = lean_unsigned_to_nat(0u);
v_isZero_229_ = lean_nat_dec_eq(v_x_225_, v_zero_228_);
if (v_isZero_229_ == 1)
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v_h__2_227_);
v___x_230_ = lean_box(0);
v___x_231_ = lean_apply_1(v_h__1_226_, v___x_230_);
return v___x_231_;
}
else
{
lean_object* v_one_232_; lean_object* v_n_233_; lean_object* v___x_234_; 
lean_dec(v_h__1_226_);
v_one_232_ = lean_unsigned_to_nat(1u);
v_n_233_ = lean_nat_sub(v_x_225_, v_one_232_);
v___x_234_ = lean_apply_1(v_h__2_227_, v_n_233_);
return v___x_234_;
}
}
}
LEAN_EXPORT lean_object* lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter___boxed(lean_object* v_motive_235_, lean_object* v_x_236_, lean_object* v_h__1_237_, lean_object* v_h__2_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lp_tzap_x2dlean___private_TzapLean_ExecutableRandPass_0__TzapLean_ExecutableRandPass_fixpointShrink_match__1_splitter(v_motive_235_, v_x_236_, v_h__1_237_, v_h__2_238_);
lean_dec(v_x_236_);
return v_res_239_;
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
