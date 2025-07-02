// Lean compiler output
// Module: Game.Levels.TutorialWorld
// Imports: Init Game.Levels.TutorialWorld.Level01 Game.Levels.TutorialWorld.Level02 Game.Levels.TutorialWorld.Level03 Game.Levels.TutorialWorld.Level04 Game.Levels.TutorialWorld.Level05 Game.Levels.TutorialWorld.Level06 Game.Levels.TutorialWorld.Level07 Game.Levels.TutorialWorld.Level08 Game.Levels.TutorialWorld.Level09 Game.Levels.TutorialWorld.Level10
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
lean_object* initialize_Game_Levels_TutorialWorld_Level01(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level02(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level03(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level04(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level05(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level06(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level07(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level08(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level09(uint8_t builtin, lean_object*);
lean_object* initialize_Game_Levels_TutorialWorld_Level10(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Game_Levels_TutorialWorld(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level01(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level02(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level03(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level04(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level05(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level06(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level07(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level08(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level09(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Game_Levels_TutorialWorld_Level10(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
