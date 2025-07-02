// Lean compiler output
// Module: Game.MyTactic
// Imports: Init Mathlib.Tactic.ApplyAt Mathlib.Tactic.ApplyCongr Mathlib.Tactic.ApplyWith Mathlib.Tactic.Basic Mathlib.Tactic.ByContra Mathlib.Tactic.Cases Mathlib.Tactic.CasesM Mathlib.Tactic.Check Mathlib.Tactic.Congr! Mathlib.Tactic.Congrm Mathlib.Tactic.Constructor Mathlib.Tactic.Have Mathlib.Tactic.HaveI Mathlib.Tactic.Lemma Mathlib.Tactic.Linarith Mathlib.Tactic.Linarith.Datatypes Mathlib.Tactic.Linarith.Elimination Mathlib.Tactic.Linarith.Frontend Mathlib.Tactic.Linarith.Lemmas Mathlib.Tactic.Linarith.Parsing Mathlib.Tactic.Linarith.Preprocessing Mathlib.Tactic.Linarith.Verification Mathlib.Tactic.LinearCombination Mathlib.Tactic.NthRewrite Mathlib.Tactic.Rewrites Mathlib.Tactic.Set Mathlib.Tactic.SimpIntro Mathlib.Tactic.SimpRw Mathlib.Tactic.Simps.Basic Mathlib.Tactic.Simps.NotationClass Mathlib.Tactic.Tauto Mathlib.Tactic.Use Mathlib.Tactic.Variable
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyAt(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyCongr(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyWith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ByContra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Cases(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_CasesM(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Check(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Congr_x21(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Congrm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Constructor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Have(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_HaveI(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Lemma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Datatypes(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Elimination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Frontend(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Parsing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Preprocessing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Verification(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_LinearCombination(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NthRewrite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Rewrites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Set(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_SimpIntro(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_SimpRw(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Simps_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Simps_NotationClass(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Tauto(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Use(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Variable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Game_MyTactic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyAt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyCongr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyWith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ByContra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Cases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_CasesM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Check(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Congr_x21(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Congrm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Constructor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Have(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_HaveI(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Lemma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Datatypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Elimination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Frontend(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Parsing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Preprocessing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Verification(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_LinearCombination(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NthRewrite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Rewrites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Set(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_SimpIntro(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_SimpRw(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Simps_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Simps_NotationClass(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Tauto(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Use(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Variable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
