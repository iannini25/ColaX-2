/* Generated code for Python module 'pynput$_util$win32'
 * created by Nuitka version 4.1.3
 *
 * This code is in part copyright 2026 Kay Hayen.
 *
 * Licensed under the GNU Affero General Public License, Version 3 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License in "LICENSE.txt" and the runtime
 * exception granted in "LICENSE-RUNTIME.txt" from Nuitka source code. For
 * deploying the generated code it is intended to not restrict distributing
 * created binaries.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"



/* The "module_pynput$_util$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$_util$win32;
PyDictObject *moduledict_pynput$_util$win32;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__threadid;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Event;
PyObject *const_str_plain__event;
PyObject *const_str_plain_thread;
PyObject *const_str_digest_245d21ba41b28057d4981ee1a1ecd095;
PyObject *const_str_plain_self;
PyObject *const_str_plain_MSG;
PyObject *const_str_plain_byref;
PyObject *const_str_plain__GetMessage;
PyObject *const_str_plain_message;
PyObject *const_str_plain_WM_STOP;
PyObject *const_str_digest_5d14f8b80666d29cf3b886667c81b432;
PyObject *const_str_plain_GetCurrentThreadId;
PyObject *const_str_plain_current_thread;
PyObject *const_str_plain__PeekMessage;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_PM_NOREMOVE;
PyObject *const_str_plain_set;
PyObject *const_str_digest_64b21e73b0d4e79b242380bf2f217dc4;
PyObject *const_str_plain_wait;
PyObject *const_str_plain_post;
PyObject *const_str_digest_3c9fe704995913fc861fe6f90789ad8e;
PyObject *const_str_plain__PostThreadMessage;
PyObject *const_str_digest_5cf7f141dd847b1722b77a608706b704;
PyObject *const_str_plain_hook_id;
PyObject *const_str_plain_on_hook;
PyObject *const_str_plain__hook;
PyObject *const_str_plain_ident;
PyObject *const_str_plain__HOOKS;
PyObject *const_str_plain__SetWindowsHookEx;
PyObject *const_str_plain__handler;
PyObject *const_str_plain__UnhookWindowsHookEx;
PyObject *const_str_plain_SystemHook;
PyObject *const_str_plain_SuppressException;
PyObject *const_str_plain__CallNextHookEx;
PyObject *const_str_digest_7aa5a718d0a91f74a0759f1745a8c959;
PyObject *const_str_plain_MessageLoop;
PyObject *const_str_plain__message_loop;
PyObject *const_str_plain__receive;
PyObject *const_str_plain__mark_ready;
PyObject *const_str_plain_start;
PyObject *const_str_plain__EVENTS;
PyObject *const_str_plain_running;
PyObject *const_str_plain__WM_PROCESS;
PyObject *const_str_plain__process;
PyObject *const_str_plain_wParam;
PyObject *const_str_plain_lParam;
PyObject *const_str_plain__WM_NOTIFICATIONS;
PyObject *const_str_plain__on_notification;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_stop;
PyObject *const_str_plain__convert;
PyObject *const_str_plain__handle_message;
PyObject *const_str_plain_suppress;
PyObject *const_str_plain_suppress_event;
PyObject *const_str_digest_80f597bde5c9593f6f73bdd21493d78c;
PyObject *const_str_digest_a0cf71b248456a7115a4cbd8410895c4;
PyObject *const_str_digest_e231b667140e8c87b92065f41ffdeddd;
PyObject *const_str_digest_aee40de48f1c39417466bc71fdcd8e80;
PyObject *const_str_digest_e6d1404a61676d69b8c259cadbc48808;
PyObject *const_str_plain_update_layout;
PyObject *const_str_plain__layout_data;
PyObject *const_str_plain__modifier_state;
PyObject *const_str_plain__to_scan;
PyObject *const_str_plain__layout;
PyObject *const_str_plain_char;
PyObject *const_str_plain_is_dead;
PyObject *const_str_plain_vk;
PyObject *const_str_plain__scan;
PyObject *const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a;
PyObject *const_str_plain__generate_layout;
PyObject *const_str_digest_62683a258f028f2834fe5fafef4f13d2;
PyObject *const_tuple_false_false_false_tuple;
PyObject *const_str_digest_e24ba24751eec2165a17ed93eed57b58;
PyObject *const_str_plain_c_ubyte;
PyObject *const_int_pos_255;
PyObject *const_str_plain__thread_input;
PyObject *const_str_plain__GetKeyboardLayout;
PyObject *const_str_plain__to_vk;
PyObject *const_str_plain_layout;
PyObject *const_str_plain_itertools;
PyObject *const_str_plain_product;
PyObject *const_tuple_73abf5b910362dff6090765cff8463fe_tuple;
PyObject *const_tuple_none_false_tuple;
PyObject *const_str_plain_state;
PyObject *const_str_plain_layout_data;
PyObject *const_int_pos_128;
PyObject *const_str_plain_VK;
PyObject *const_str_plain_SHIFT;
PyObject *const_str_plain_CONTROL;
PyObject *const_str_plain_MENU;
PyObject *const_str_plain_WCHAR;
PyObject *const_int_pos_5;
PyObject *const_str_plain_vks;
PyObject *const_str_plain__ToUnicodeEx;
PyObject *const_str_plain_out;
PyObject *const_str_plain_current;
PyObject *const_str_digest_aa0b9411bc75f57860d2a635be2fd298;
PyObject *const_str_plain__MapVirtualKeyEx;
PyObject *const_str_plain__MAPVK_VK_TO_VSC;
PyObject *const_str_digest_526f9861ee0e4742344dd8645bb924b0;
PyObject *const_str_plain__MAPVK_VSC_TO_VK;
PyObject *const_str_digest_cfe0dac5139b6a796c167f09389e0536;
PyObject *const_str_plain__GetAsyncKeyState;
PyObject *const_int_pos_32768;
PyObject *const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac;
PyObject *const_str_digest_a9cd14b4590aa69d536129ad6dab4b20;
PyObject *const_str_digest_d9a2f4874538f1c75d210ed4707706c7;
PyObject *const_str_digest_3e6246d185e9a94b1081cba055cc3225;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_wintypes;
PyObject *const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple;
PyObject *const_str_plain_AbstractListener;
PyObject *const_str_plain_win32_vks;
PyObject *const_str_plain_LPDWORD;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_MOUSEINPUT;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
PyObject *const_str_digest_34a8dac1bb941e5acd780b2d442f05e9;
PyObject *const_int_pos_42;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_MOVE;
PyObject *const_int_pos_2;
PyObject *const_str_plain_LEFTDOWN;
PyObject *const_int_pos_4;
PyObject *const_str_plain_LEFTUP;
PyObject *const_int_pos_8;
PyObject *const_str_plain_RIGHTDOWN;
PyObject *const_int_pos_16;
PyObject *const_str_plain_RIGHTUP;
PyObject *const_int_pos_32;
PyObject *const_str_plain_MIDDLEDOWN;
PyObject *const_int_pos_64;
PyObject *const_str_plain_MIDDLEUP;
PyObject *const_str_plain_XDOWN;
PyObject *const_int_pos_256;
PyObject *const_str_plain_XUP;
PyObject *const_int_pos_2048;
PyObject *const_str_plain_WHEEL;
PyObject *const_int_pos_4096;
PyObject *const_str_plain_HWHEEL;
PyObject *const_str_plain_ABSOLUTE;
PyObject *const_str_plain_XBUTTON1;
PyObject *const_str_plain_XBUTTON2;
PyObject *const_str_plain_dx;
PyObject *const_str_plain_LONG;
PyObject *const_str_plain_dy;
PyObject *const_str_plain_mouseData;
PyObject *const_str_plain_dwFlags;
PyObject *const_str_plain_time;
PyObject *const_str_plain_dwExtraInfo;
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_KEYBDINPUT;
PyObject *const_str_digest_98c2865fc4aac4596ea44d74895985ce;
PyObject *const_int_pos_71;
PyObject *const_str_plain_EXTENDEDKEY;
PyObject *const_str_plain_KEYUP;
PyObject *const_str_plain_SCANCODE;
PyObject *const_str_plain_UNICODE;
PyObject *const_str_plain_wVk;
PyObject *const_str_plain_WORD;
PyObject *const_str_plain_wScan;
PyObject *const_str_plain_HARDWAREINPUT;
PyObject *const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41;
PyObject *const_int_pos_88;
PyObject *const_str_plain_uMsg;
PyObject *const_str_plain_wParamL;
PyObject *const_str_plain_wParamH;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_INPUT_union;
PyObject *const_str_digest_9344225576960d1133c1d02dd395ede5;
PyObject *const_int_pos_100;
PyObject *const_str_plain_mi;
PyObject *const_str_plain_ki;
PyObject *const_str_plain_hi;
PyObject *const_str_plain_INPUT;
PyObject *const_str_digest_f9523f7bf5f6066513f231b1bee6f322;
PyObject *const_int_pos_106;
PyObject *const_str_plain_MOUSE;
PyObject *const_str_plain_KEYBOARD;
PyObject *const_str_plain_HARDWARE;
PyObject *const_str_plain_value;
PyObject *const_str_plain_LPINPUT;
PyObject *const_str_plain_user32;
PyObject *const_str_plain_VkKeyScanW;
PyObject *const_str_plain_VkKeyScan;
PyObject *const_str_plain_argtypes;
PyObject *const_str_plain_MapVirtualKeyW;
PyObject *const_str_plain_MapVirtualKey;
PyObject *const_str_plain_UINT;
PyObject *const_str_plain_MAPVK_VK_TO_VSC;
PyObject *const_str_plain_SendInput;
PyObject *const_str_plain_c_voidp;
PyObject *const_str_plain_c_int;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_restype;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_digest_500279ca0f3fd62cbbdce5932f05458f;
PyObject *const_int_pos_138;
PyObject *const_int_pos_1025;
PyObject *const_str_plain__LPMSG;
PyObject *const_str_plain_GetMessageW;
PyObject *const_str_plain_HWND;
PyObject *const_str_plain_PeekMessageW;
PyObject *const_str_plain_PostThreadMessageW;
PyObject *const_str_plain_WPARAM;
PyObject *const_str_plain_LPARAM;
PyObject *const_str_digest_8fb59e74797bec724b17556a36734ab8;
PyObject *const_str_digest_083594797c0b951159f4d93fcff01548;
PyObject *const_str_digest_33440f257ea30d0c607d4ea09addc094;
PyObject *const_str_digest_e89896981621bc77dab9da3bf5c4b760;
PyObject *const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple;
PyObject *const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0;
PyObject *const_int_pos_234;
PyObject *const_str_plain_HC_ACTION;
PyObject *const_str_plain_WINFUNCTYPE;
PyObject *const_str_plain_c_int32;
PyObject *const_str_plain__HOOKPROC;
PyObject *const_str_plain_SetWindowsHookExW;
PyObject *const_str_plain_HINSTANCE;
PyObject *const_str_plain_UnhookWindowsHookEx;
PyObject *const_str_plain_HHOOK;
PyObject *const_str_plain_CallNextHookEx;
PyObject *const_str_plain_Exception;
PyObject *const_str_digest_65ccde768103e06991d4857b12d6d5c0;
PyObject *const_str_digest_4f2062683ff6248afd8e9a12c2926b03;
PyObject *const_int_pos_264;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_94038b6374a80b2801289f608bebc63f;
PyObject *const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082;
PyObject *const_str_digest_10be8cde42bf0b4198956d0fbd1edd76;
PyObject *const_str_digest_42c6352c98630d1c5b5c555f382f2a3f;
PyObject *const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67;
PyObject *const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple;
PyObject *const_str_plain_ListenerMixin;
PyObject *const_str_digest_f2f78407c21f9c3582240fcbd708e5ca;
PyObject *const_int_pos_316;
PyObject *const_int_pos_1040;
PyObject *const_str_digest_303b0f62b2107fd47ecc8884eb6092f9;
PyObject *const_str_plain__run;
PyObject *const_str_digest_52950b91ae40aa76116786c50034770c;
PyObject *const_str_plain__stop_platform;
PyObject *const_str_digest_10f7be00f4683b50e63900254e9ee709;
PyObject *const_str_plain__emitter;
PyObject *const_str_digest_3ea547ca58a7e0a8cc54b75e79979654;
PyObject *const_str_digest_be1cf57dd073d175f71c9995385c65dc;
PyObject *const_str_digest_541a151d954143e0b7e5395cfd5d7197;
PyObject *const_str_digest_4712d9e5c5ca95451b2973c2639729aa;
PyObject *const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c;
PyObject *const_tuple_str_plain__message_loop_tuple;
PyObject *const_str_plain_KeyTranslator;
PyObject *const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b;
PyObject *const_int_pos_429;
PyObject *const_str_plain_GetAsyncKeyState;
PyObject *const_str_plain_GetKeyboardLayout;
PyObject *const_str_plain_GetKeyboardState;
PyObject *const_str_plain__GetKeyboardState;
PyObject *const_str_plain__GetKeyState;
PyObject *const_str_plain_MapVirtualKeyExW;
PyObject *const_str_plain_HKL;
PyObject *const_str_plain_ToUnicodeEx;
PyObject *const_str_plain__MAPVK_VK_TO_CHAR;
PyObject *const_str_digest_ded7feb760690fd6525111af11cb3674;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87;
PyObject *const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268;
PyObject *const_str_plain_char_from_scan;
PyObject *const_str_digest_d405374917e837e6fcd8b34b75b0fa83;
PyObject *const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955;
PyObject *const_str_digest_dffa5bb1db53a1dcb76322a2d374165e;
PyObject *const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f;
PyObject *const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7;
PyObject *const_str_plain_contextmanager;
PyObject *const_tuple_str_plain__layout_str_plain__layout_data_tuple;
PyObject *const_str_digest_3d1a9f0fc1c3935823172bff43601b01;
PyObject *const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple;
PyObject *const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_92daf32edeade01cb0879964b064885e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
PyObject *const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple;
PyObject *const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple;
PyObject *const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple;
PyObject *const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple;
PyObject *const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple;
PyObject *const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple;
PyObject *const_tuple_73cc39deda764c37665d21108db9fcfc_tuple;
PyObject *const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple;
PyObject *const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple;
PyObject *const_tuple_str_plain_self_str_plain_scan_tuple;
PyObject *const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[311];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput._util.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 311) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 311 values, got %d\n",
                    UN_TRANSLATE("pynput._util.win32"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__threadid", mod_consts.const_str_plain__threadid);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__threadid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event", mod_consts.const_str_plain__event);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_thread", mod_consts.const_str_plain_thread);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095", mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MSG", mod_consts.const_str_plain_MSG);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_MSG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetMessage", mod_consts.const_str_plain__GetMessage);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetMessage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_message", mod_consts.const_str_plain_message);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_STOP", mod_consts.const_str_plain_WM_STOP);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_STOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432", mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCurrentThreadId", mod_consts.const_str_plain_GetCurrentThreadId);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCurrentThreadId);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current_thread", mod_consts.const_str_plain_current_thread);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_thread);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PeekMessage", mod_consts.const_str_plain__PeekMessage);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__PeekMessage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PM_NOREMOVE", mod_consts.const_str_plain_PM_NOREMOVE);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_PM_NOREMOVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set", mod_consts.const_str_plain_set);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4", mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait", mod_consts.const_str_plain_wait);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e", mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PostThreadMessage", mod_consts.const_str_plain__PostThreadMessage);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__PostThreadMessage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704", mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hook_id", mod_consts.const_str_plain_hook_id);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_hook_id);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_hook", mod_consts.const_str_plain_on_hook);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_hook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hook", mod_consts.const_str_plain__hook);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__hook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ident", mod_consts.const_str_plain_ident);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ident);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOOKS", mod_consts.const_str_plain__HOOKS);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__HOOKS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SetWindowsHookEx", mod_consts.const_str_plain__SetWindowsHookEx);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__SetWindowsHookEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handler", mod_consts.const_str_plain__handler);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__handler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UnhookWindowsHookEx", mod_consts.const_str_plain__UnhookWindowsHookEx);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__UnhookWindowsHookEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CallNextHookEx", mod_consts.const_str_plain__CallNextHookEx);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__CallNextHookEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959", mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MessageLoop", mod_consts.const_str_plain_MessageLoop);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageLoop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__message_loop", mod_consts.const_str_plain__message_loop);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__message_loop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receive", mod_consts.const_str_plain__receive);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__receive);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mark_ready", mod_consts.const_str_plain__mark_ready);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__mark_ready);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_running", mod_consts.const_str_plain_running);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_running);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_PROCESS", mod_consts.const_str_plain__WM_PROCESS);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_PROCESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__process", mod_consts.const_str_plain__process);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__process);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParam", mod_consts.const_str_plain_wParam);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_wParam);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lParam", mod_consts.const_str_plain_lParam);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_lParam);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_NOTIFICATIONS", mod_consts.const_str_plain__WM_NOTIFICATIONS);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_NOTIFICATIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_notification", mod_consts.const_str_plain__on_notification);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_notification);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stop", mod_consts.const_str_plain_stop);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert", mod_consts.const_str_plain__convert);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle_message", mod_consts.const_str_plain__handle_message);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_message);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress", mod_consts.const_str_plain_suppress);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress_event", mod_consts.const_str_plain_suppress_event);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c", mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4", mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd", mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80", mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808", mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update_layout", mod_consts.const_str_plain_update_layout);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_update_layout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__layout_data", mod_consts.const_str_plain__layout_data);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__layout_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifier_state", mod_consts.const_str_plain__modifier_state);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__modifier_state);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__to_scan", mod_consts.const_str_plain__to_scan);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__to_scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__layout", mod_consts.const_str_plain__layout);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__layout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_dead", mod_consts.const_str_plain_is_dead);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scan", mod_consts.const_str_plain__scan);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a", mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__generate_layout", mod_consts.const_str_plain__generate_layout);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_layout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2", mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_false_false_tuple", mod_consts.const_tuple_false_false_false_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58", mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_ubyte", mod_consts.const_str_plain_c_ubyte);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_ubyte);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__thread_input", mod_consts.const_str_plain__thread_input);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__thread_input);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyboardLayout", mod_consts.const_str_plain__GetKeyboardLayout);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyboardLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__to_vk", mod_consts.const_str_plain__to_vk);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__to_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_layout", mod_consts.const_str_plain_layout);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_layout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_product", mod_consts.const_str_plain_product);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_product);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple", mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_tuple", mod_consts.const_tuple_none_false_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state", mod_consts.const_str_plain_state);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_layout_data", mod_consts.const_str_plain_layout_data);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_layout_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VK", mod_consts.const_str_plain_VK);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_VK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHIFT", mod_consts.const_str_plain_SHIFT);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_MENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WCHAR", mod_consts.const_str_plain_WCHAR);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vks", mod_consts.const_str_plain_vks);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_vks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ToUnicodeEx", mod_consts.const_str_plain__ToUnicodeEx);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__ToUnicodeEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current", mod_consts.const_str_plain_current);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_current);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298", mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MapVirtualKeyEx", mod_consts.const_str_plain__MapVirtualKeyEx);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__MapVirtualKeyEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VK_TO_VSC", mod_consts.const_str_plain__MAPVK_VK_TO_VSC);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VK_TO_VSC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0", mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VSC_TO_VK", mod_consts.const_str_plain__MAPVK_VSC_TO_VK);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VSC_TO_VK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536", mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetAsyncKeyState", mod_consts.const_str_plain__GetAsyncKeyState);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetAsyncKeyState);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_32768);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac", mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20", mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7", mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225", mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple", mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_win32_vks", mod_consts.const_str_plain_win32_vks);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_win32_vks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPDWORD", mod_consts.const_str_plain_LPDWORD);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPDWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9", mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOVE", mod_consts.const_str_plain_MOVE);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTDOWN", mod_consts.const_str_plain_LEFTDOWN);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTUP", mod_consts.const_str_plain_LEFTUP);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTDOWN", mod_consts.const_str_plain_RIGHTDOWN);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTUP", mod_consts.const_str_plain_RIGHTUP);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEDOWN", mod_consts.const_str_plain_MIDDLEDOWN);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEUP", mod_consts.const_str_plain_MIDDLEUP);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XDOWN", mod_consts.const_str_plain_XDOWN);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_XDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XUP", mod_consts.const_str_plain_XUP);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_XUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL", mod_consts.const_str_plain_WHEEL);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWHEEL", mod_consts.const_str_plain_HWHEEL);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_HWHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABSOLUTE", mod_consts.const_str_plain_ABSOLUTE);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABSOLUTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_dx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_LONG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_dy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce", mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_71", mod_consts.const_int_pos_71);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_71);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDEDKEY", mod_consts.const_str_plain_EXTENDEDKEY);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDEDKEY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYUP", mod_consts.const_str_plain_KEYUP);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCANCODE", mod_consts.const_str_plain_SCANCODE);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCANCODE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_wVk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WORD", mod_consts.const_str_plain_WORD);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_WORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_wScan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWAREINPUT", mod_consts.const_str_plain_HARDWAREINPUT);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWAREINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41", mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_88", mod_consts.const_int_pos_88);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_uMsg", mod_consts.const_str_plain_uMsg);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_uMsg);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamL", mod_consts.const_str_plain_wParamL);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_wParamL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamH", mod_consts.const_str_plain_wParamH);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_wParamH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5", mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mi", mod_consts.const_str_plain_mi);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_mi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ki", mod_consts.const_str_plain_ki);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_ki);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_hi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322", mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_pos_106);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSE", mod_consts.const_str_plain_MOUSE);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBOARD", mod_consts.const_str_plain_KEYBOARD);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBOARD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWARE", mod_consts.const_str_plain_HARDWARE);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWARE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPINPUT", mod_consts.const_str_plain_LPINPUT);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_user32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScanW", mod_consts.const_str_plain_VkKeyScanW);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScanW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScan", mod_consts.const_str_plain_VkKeyScan);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argtypes", mod_consts.const_str_plain_argtypes);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKeyW", mod_consts.const_str_plain_MapVirtualKeyW);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKeyW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKey", mod_consts.const_str_plain_MapVirtualKey);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UINT", mod_consts.const_str_plain_UINT);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_UINT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAPVK_VK_TO_VSC", mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_voidp", mod_consts.const_str_plain_c_voidp);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_voidp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restype", mod_consts.const_str_plain_restype);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f", mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_int_pos_138);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1025", mod_consts.const_int_pos_1025);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_int_pos_1025);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPMSG", mod_consts.const_str_plain__LPMSG);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain__LPMSG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetMessageW", mod_consts.const_str_plain_GetMessageW);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetMessageW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWND", mod_consts.const_str_plain_HWND);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_HWND);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PeekMessageW", mod_consts.const_str_plain_PeekMessageW);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_PeekMessageW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PostThreadMessageW", mod_consts.const_str_plain_PostThreadMessageW);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_PostThreadMessageW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WPARAM", mod_consts.const_str_plain_WPARAM);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_WPARAM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPARAM", mod_consts.const_str_plain_LPARAM);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPARAM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8", mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548", mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094", mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760", mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple", mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0", mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_234", mod_consts.const_int_pos_234);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_int_pos_234);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WINFUNCTYPE", mod_consts.const_str_plain_WINFUNCTYPE);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int32", mod_consts.const_str_plain_c_int32);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOOKPROC", mod_consts.const_str_plain__HOOKPROC);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain__HOOKPROC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetWindowsHookExW", mod_consts.const_str_plain_SetWindowsHookExW);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetWindowsHookExW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HINSTANCE", mod_consts.const_str_plain_HINSTANCE);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_HINSTANCE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnhookWindowsHookEx", mod_consts.const_str_plain_UnhookWindowsHookEx);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnhookWindowsHookEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HHOOK", mod_consts.const_str_plain_HHOOK);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_HHOOK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CallNextHookEx", mod_consts.const_str_plain_CallNextHookEx);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallNextHookEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exception", mod_consts.const_str_plain_Exception);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_Exception);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0", mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03", mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_int_pos_264);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f", mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082", mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76", mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f", mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67", mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple", mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca", mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_int_pos_316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1040", mod_consts.const_int_pos_1040);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_int_pos_1040);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9", mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__run", mod_consts.const_str_plain__run);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain__run);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c", mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__stop_platform", mod_consts.const_str_plain__stop_platform);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_plain__stop_platform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709", mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emitter", mod_consts.const_str_plain__emitter);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain__emitter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654", mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc", mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197", mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa", mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c", mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__message_loop_tuple", mod_consts.const_tuple_str_plain__message_loop_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__message_loop_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyTranslator", mod_consts.const_str_plain_KeyTranslator);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyTranslator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b", mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_429", mod_consts.const_int_pos_429);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_int_pos_429);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetAsyncKeyState", mod_consts.const_str_plain_GetAsyncKeyState);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetAsyncKeyState);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetKeyboardLayout", mod_consts.const_str_plain_GetKeyboardLayout);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetKeyboardLayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetKeyboardState", mod_consts.const_str_plain_GetKeyboardState);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetKeyboardState);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyboardState", mod_consts.const_str_plain__GetKeyboardState);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyboardState);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyState", mod_consts.const_str_plain__GetKeyState);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyState);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKeyExW", mod_consts.const_str_plain_MapVirtualKeyExW);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKeyExW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HKL", mod_consts.const_str_plain_HKL);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ToUnicodeEx", mod_consts.const_str_plain_ToUnicodeEx);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToUnicodeEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VK_TO_CHAR", mod_consts.const_str_plain__MAPVK_VK_TO_CHAR);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VK_TO_CHAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674", mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___call__", mod_consts.const_str_plain___call__);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87", mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268", mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char_from_scan", mod_consts.const_str_plain_char_from_scan);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_plain_char_from_scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83", mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955", mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e", mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f", mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7", mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple", mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01", mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple", mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548", mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple", mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple", mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple", mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple", mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple", mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple", mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple", mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple", mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple", mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple", mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple", mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple", mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple", mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple", mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple);
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pynput$_util$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__threadid", mod_consts.const_str_plain__threadid);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__threadid) && "mod_consts.const_str_plain__threadid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading) && "mod_consts.const_str_plain_threading");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event) && "mod_consts.const_str_plain_Event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event", mod_consts.const_str_plain__event);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__event) && "mod_consts.const_str_plain__event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_thread", mod_consts.const_str_plain_thread);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread) && "mod_consts.const_str_plain_thread");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095", mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095) && "mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MSG", mod_consts.const_str_plain_MSG);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_MSG) && "mod_consts.const_str_plain_MSG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetMessage", mod_consts.const_str_plain__GetMessage);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetMessage) && "mod_consts.const_str_plain__GetMessage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_message", mod_consts.const_str_plain_message);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_message) && "mod_consts.const_str_plain_message");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_STOP", mod_consts.const_str_plain_WM_STOP);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_STOP) && "mod_consts.const_str_plain_WM_STOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432", mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432) && "mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCurrentThreadId", mod_consts.const_str_plain_GetCurrentThreadId);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCurrentThreadId) && "mod_consts.const_str_plain_GetCurrentThreadId");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current_thread", mod_consts.const_str_plain_current_thread);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_thread) && "mod_consts.const_str_plain_current_thread");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PeekMessage", mod_consts.const_str_plain__PeekMessage);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__PeekMessage) && "mod_consts.const_str_plain__PeekMessage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024) && "mod_consts.const_int_pos_1024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PM_NOREMOVE", mod_consts.const_str_plain_PM_NOREMOVE);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_PM_NOREMOVE) && "mod_consts.const_str_plain_PM_NOREMOVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set", mod_consts.const_str_plain_set);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_set) && "mod_consts.const_str_plain_set");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4", mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4) && "mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait", mod_consts.const_str_plain_wait);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait) && "mod_consts.const_str_plain_wait");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_post) && "mod_consts.const_str_plain_post");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e", mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e) && "mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PostThreadMessage", mod_consts.const_str_plain__PostThreadMessage);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__PostThreadMessage) && "mod_consts.const_str_plain__PostThreadMessage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704", mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704) && "mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hook_id", mod_consts.const_str_plain_hook_id);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_hook_id) && "mod_consts.const_str_plain_hook_id");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_hook", mod_consts.const_str_plain_on_hook);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_hook) && "mod_consts.const_str_plain_on_hook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hook", mod_consts.const_str_plain__hook);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__hook) && "mod_consts.const_str_plain__hook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ident", mod_consts.const_str_plain_ident);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ident) && "mod_consts.const_str_plain_ident");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOOKS", mod_consts.const_str_plain__HOOKS);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__HOOKS) && "mod_consts.const_str_plain__HOOKS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SetWindowsHookEx", mod_consts.const_str_plain__SetWindowsHookEx);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__SetWindowsHookEx) && "mod_consts.const_str_plain__SetWindowsHookEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handler", mod_consts.const_str_plain__handler);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__handler) && "mod_consts.const_str_plain__handler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UnhookWindowsHookEx", mod_consts.const_str_plain__UnhookWindowsHookEx);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__UnhookWindowsHookEx) && "mod_consts.const_str_plain__UnhookWindowsHookEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook) && "mod_consts.const_str_plain_SystemHook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException) && "mod_consts.const_str_plain_SuppressException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CallNextHookEx", mod_consts.const_str_plain__CallNextHookEx);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__CallNextHookEx) && "mod_consts.const_str_plain__CallNextHookEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959", mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959) && "mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MessageLoop", mod_consts.const_str_plain_MessageLoop);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageLoop) && "mod_consts.const_str_plain_MessageLoop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__message_loop", mod_consts.const_str_plain__message_loop);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__message_loop) && "mod_consts.const_str_plain__message_loop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receive", mod_consts.const_str_plain__receive);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__receive) && "mod_consts.const_str_plain__receive");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mark_ready", mod_consts.const_str_plain__mark_ready);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__mark_ready) && "mod_consts.const_str_plain__mark_ready");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_start) && "mod_consts.const_str_plain_start");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS) && "mod_consts.const_str_plain__EVENTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_running", mod_consts.const_str_plain_running);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_running) && "mod_consts.const_str_plain_running");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_PROCESS", mod_consts.const_str_plain__WM_PROCESS);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_PROCESS) && "mod_consts.const_str_plain__WM_PROCESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__process", mod_consts.const_str_plain__process);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__process) && "mod_consts.const_str_plain__process");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParam", mod_consts.const_str_plain_wParam);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_wParam) && "mod_consts.const_str_plain_wParam");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lParam", mod_consts.const_str_plain_lParam);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_lParam) && "mod_consts.const_str_plain_lParam");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_NOTIFICATIONS", mod_consts.const_str_plain__WM_NOTIFICATIONS);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_NOTIFICATIONS) && "mod_consts.const_str_plain__WM_NOTIFICATIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_notification", mod_consts.const_str_plain__on_notification);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_notification) && "mod_consts.const_str_plain__on_notification");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stop", mod_consts.const_str_plain_stop);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop) && "mod_consts.const_str_plain_stop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert", mod_consts.const_str_plain__convert);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert) && "mod_consts.const_str_plain__convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle_message", mod_consts.const_str_plain__handle_message);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_message) && "mod_consts.const_str_plain__handle_message");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress", mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress) && "mod_consts.const_str_plain_suppress");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress_event", mod_consts.const_str_plain_suppress_event);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_event) && "mod_consts.const_str_plain_suppress_event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c", mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c) && "mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4", mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4) && "mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd", mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd) && "mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80", mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80) && "mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808", mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808) && "mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update_layout", mod_consts.const_str_plain_update_layout);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_update_layout) && "mod_consts.const_str_plain_update_layout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__layout_data", mod_consts.const_str_plain__layout_data);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__layout_data) && "mod_consts.const_str_plain__layout_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifier_state", mod_consts.const_str_plain__modifier_state);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__modifier_state) && "mod_consts.const_str_plain__modifier_state");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__to_scan", mod_consts.const_str_plain__to_scan);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__to_scan) && "mod_consts.const_str_plain__to_scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__layout", mod_consts.const_str_plain__layout);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__layout) && "mod_consts.const_str_plain__layout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_char) && "mod_consts.const_str_plain_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_dead", mod_consts.const_str_plain_is_dead);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dead) && "mod_consts.const_str_plain_is_dead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_vk) && "mod_consts.const_str_plain_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scan", mod_consts.const_str_plain__scan);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__scan) && "mod_consts.const_str_plain__scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a", mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a) && "mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__generate_layout", mod_consts.const_str_plain__generate_layout);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_layout) && "mod_consts.const_str_plain__generate_layout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2", mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2) && "mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_false_false_tuple", mod_consts.const_tuple_false_false_false_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple) && "mod_consts.const_tuple_false_false_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58", mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58) && "mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_ubyte", mod_consts.const_str_plain_c_ubyte);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_ubyte) && "mod_consts.const_str_plain_c_ubyte");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__thread_input", mod_consts.const_str_plain__thread_input);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__thread_input) && "mod_consts.const_str_plain__thread_input");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyboardLayout", mod_consts.const_str_plain__GetKeyboardLayout);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyboardLayout) && "mod_consts.const_str_plain__GetKeyboardLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__to_vk", mod_consts.const_str_plain__to_vk);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__to_vk) && "mod_consts.const_str_plain__to_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_layout", mod_consts.const_str_plain_layout);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_layout) && "mod_consts.const_str_plain_layout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools) && "mod_consts.const_str_plain_itertools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_product", mod_consts.const_str_plain_product);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_product) && "mod_consts.const_str_plain_product");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple", mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple) && "mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_tuple", mod_consts.const_tuple_none_false_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple) && "mod_consts.const_tuple_none_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state", mod_consts.const_str_plain_state);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_state) && "mod_consts.const_str_plain_state");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_layout_data", mod_consts.const_str_plain_layout_data);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_layout_data) && "mod_consts.const_str_plain_layout_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VK", mod_consts.const_str_plain_VK);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_VK) && "mod_consts.const_str_plain_VK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHIFT", mod_consts.const_str_plain_SHIFT);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT) && "mod_consts.const_str_plain_SHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL) && "mod_consts.const_str_plain_CONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_MENU) && "mod_consts.const_str_plain_MENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WCHAR", mod_consts.const_str_plain_WCHAR);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR) && "mod_consts.const_str_plain_WCHAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vks", mod_consts.const_str_plain_vks);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_vks) && "mod_consts.const_str_plain_vks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ToUnicodeEx", mod_consts.const_str_plain__ToUnicodeEx);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__ToUnicodeEx) && "mod_consts.const_str_plain__ToUnicodeEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_out) && "mod_consts.const_str_plain_out");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current", mod_consts.const_str_plain_current);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_current) && "mod_consts.const_str_plain_current");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298", mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298) && "mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MapVirtualKeyEx", mod_consts.const_str_plain__MapVirtualKeyEx);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__MapVirtualKeyEx) && "mod_consts.const_str_plain__MapVirtualKeyEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VK_TO_VSC", mod_consts.const_str_plain__MAPVK_VK_TO_VSC);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VK_TO_VSC) && "mod_consts.const_str_plain__MAPVK_VK_TO_VSC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0", mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0) && "mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VSC_TO_VK", mod_consts.const_str_plain__MAPVK_VSC_TO_VK);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VSC_TO_VK) && "mod_consts.const_str_plain__MAPVK_VSC_TO_VK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536", mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536) && "mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetAsyncKeyState", mod_consts.const_str_plain__GetAsyncKeyState);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetAsyncKeyState) && "mod_consts.const_str_plain__GetAsyncKeyState");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_32768) && "mod_consts.const_int_pos_32768");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac", mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac) && "mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20", mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20) && "mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7", mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7) && "mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225", mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225) && "mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib) && "mod_consts.const_str_plain_contextlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes) && "mod_consts.const_str_plain_wintypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple", mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple) && "mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener) && "mod_consts.const_str_plain_AbstractListener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_win32_vks", mod_consts.const_str_plain_win32_vks);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_win32_vks) && "mod_consts.const_str_plain_win32_vks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPDWORD", mod_consts.const_str_plain_LPDWORD);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPDWORD) && "mod_consts.const_str_plain_LPDWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD) && "mod_consts.const_str_plain_DWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT) && "mod_consts.const_str_plain_MOUSEINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8) && "mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9", mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9) && "mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_42) && "mod_consts.const_int_pos_42");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOVE", mod_consts.const_str_plain_MOVE);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOVE) && "mod_consts.const_str_plain_MOVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTDOWN", mod_consts.const_str_plain_LEFTDOWN);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTDOWN) && "mod_consts.const_str_plain_LEFTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTUP", mod_consts.const_str_plain_LEFTUP);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTUP) && "mod_consts.const_str_plain_LEFTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTDOWN", mod_consts.const_str_plain_RIGHTDOWN);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTDOWN) && "mod_consts.const_str_plain_RIGHTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTUP", mod_consts.const_str_plain_RIGHTUP);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTUP) && "mod_consts.const_str_plain_RIGHTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEDOWN", mod_consts.const_str_plain_MIDDLEDOWN);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEDOWN) && "mod_consts.const_str_plain_MIDDLEDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_int_pos_64) && "mod_consts.const_int_pos_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEUP", mod_consts.const_str_plain_MIDDLEUP);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEUP) && "mod_consts.const_str_plain_MIDDLEUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XDOWN", mod_consts.const_str_plain_XDOWN);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_XDOWN) && "mod_consts.const_str_plain_XDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XUP", mod_consts.const_str_plain_XUP);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_XUP) && "mod_consts.const_str_plain_XUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048) && "mod_consts.const_int_pos_2048");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL", mod_consts.const_str_plain_WHEEL);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL) && "mod_consts.const_str_plain_WHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWHEEL", mod_consts.const_str_plain_HWHEEL);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_HWHEEL) && "mod_consts.const_str_plain_HWHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABSOLUTE", mod_consts.const_str_plain_ABSOLUTE);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABSOLUTE) && "mod_consts.const_str_plain_ABSOLUTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1) && "mod_consts.const_str_plain_XBUTTON1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2) && "mod_consts.const_str_plain_XBUTTON2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_dx) && "mod_consts.const_str_plain_dx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_LONG) && "mod_consts.const_str_plain_LONG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_dy) && "mod_consts.const_str_plain_dy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData) && "mod_consts.const_str_plain_mouseData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags) && "mod_consts.const_str_plain_dwFlags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo) && "mod_consts.const_str_plain_dwExtraInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p) && "mod_consts.const_str_plain_c_void_p");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT) && "mod_consts.const_str_plain_KEYBDINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce", mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce) && "mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_71", mod_consts.const_int_pos_71);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_71) && "mod_consts.const_int_pos_71");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDEDKEY", mod_consts.const_str_plain_EXTENDEDKEY);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDEDKEY) && "mod_consts.const_str_plain_EXTENDEDKEY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYUP", mod_consts.const_str_plain_KEYUP);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYUP) && "mod_consts.const_str_plain_KEYUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCANCODE", mod_consts.const_str_plain_SCANCODE);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCANCODE) && "mod_consts.const_str_plain_SCANCODE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE) && "mod_consts.const_str_plain_UNICODE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_wVk) && "mod_consts.const_str_plain_wVk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WORD", mod_consts.const_str_plain_WORD);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_WORD) && "mod_consts.const_str_plain_WORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_wScan) && "mod_consts.const_str_plain_wScan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWAREINPUT", mod_consts.const_str_plain_HARDWAREINPUT);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWAREINPUT) && "mod_consts.const_str_plain_HARDWAREINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41", mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41) && "mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_88", mod_consts.const_int_pos_88);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_88) && "mod_consts.const_int_pos_88");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_uMsg", mod_consts.const_str_plain_uMsg);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_uMsg) && "mod_consts.const_str_plain_uMsg");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamL", mod_consts.const_str_plain_wParamL);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_wParamL) && "mod_consts.const_str_plain_wParamL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamH", mod_consts.const_str_plain_wParamH);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_wParamH) && "mod_consts.const_str_plain_wParamH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union) && "mod_consts.const_str_plain_INPUT_union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5", mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5) && "mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_int_pos_100) && "mod_consts.const_int_pos_100");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mi", mod_consts.const_str_plain_mi);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_mi) && "mod_consts.const_str_plain_mi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ki", mod_consts.const_str_plain_ki);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_ki) && "mod_consts.const_str_plain_ki");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_hi) && "mod_consts.const_str_plain_hi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT) && "mod_consts.const_str_plain_INPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322", mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322) && "mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_pos_106) && "mod_consts.const_int_pos_106");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSE", mod_consts.const_str_plain_MOUSE);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE) && "mod_consts.const_str_plain_MOUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBOARD", mod_consts.const_str_plain_KEYBOARD);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBOARD) && "mod_consts.const_str_plain_KEYBOARD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWARE", mod_consts.const_str_plain_HARDWARE);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWARE) && "mod_consts.const_str_plain_HARDWARE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPINPUT", mod_consts.const_str_plain_LPINPUT);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPINPUT) && "mod_consts.const_str_plain_LPINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_user32) && "mod_consts.const_str_plain_user32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScanW", mod_consts.const_str_plain_VkKeyScanW);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScanW) && "mod_consts.const_str_plain_VkKeyScanW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScan", mod_consts.const_str_plain_VkKeyScan);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScan) && "mod_consts.const_str_plain_VkKeyScan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argtypes", mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes) && "mod_consts.const_str_plain_argtypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKeyW", mod_consts.const_str_plain_MapVirtualKeyW);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKeyW) && "mod_consts.const_str_plain_MapVirtualKeyW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKey", mod_consts.const_str_plain_MapVirtualKey);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKey) && "mod_consts.const_str_plain_MapVirtualKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UINT", mod_consts.const_str_plain_UINT);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_UINT) && "mod_consts.const_str_plain_UINT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAPVK_VK_TO_VSC", mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAPVK_VK_TO_VSC) && "mod_consts.const_str_plain_MAPVK_VK_TO_VSC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput) && "mod_consts.const_str_plain_SendInput");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_voidp", mod_consts.const_str_plain_c_voidp);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_voidp) && "mod_consts.const_str_plain_c_voidp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int) && "mod_consts.const_str_plain_c_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32) && "mod_consts.const_str_plain_kernel32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restype", mod_consts.const_str_plain_restype);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype) && "mod_consts.const_str_plain_restype");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple) && "mod_consts.const_tuple_type_object_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f", mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f) && "mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_int_pos_138) && "mod_consts.const_int_pos_138");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1025", mod_consts.const_int_pos_1025);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_int_pos_1025) && "mod_consts.const_int_pos_1025");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPMSG", mod_consts.const_str_plain__LPMSG);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain__LPMSG) && "mod_consts.const_str_plain__LPMSG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetMessageW", mod_consts.const_str_plain_GetMessageW);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetMessageW) && "mod_consts.const_str_plain_GetMessageW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWND", mod_consts.const_str_plain_HWND);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_HWND) && "mod_consts.const_str_plain_HWND");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PeekMessageW", mod_consts.const_str_plain_PeekMessageW);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_PeekMessageW) && "mod_consts.const_str_plain_PeekMessageW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PostThreadMessageW", mod_consts.const_str_plain_PostThreadMessageW);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_PostThreadMessageW) && "mod_consts.const_str_plain_PostThreadMessageW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WPARAM", mod_consts.const_str_plain_WPARAM);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_WPARAM) && "mod_consts.const_str_plain_WPARAM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPARAM", mod_consts.const_str_plain_LPARAM);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPARAM) && "mod_consts.const_str_plain_LPARAM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8", mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8) && "mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548", mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548) && "mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094", mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094) && "mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760", mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760) && "mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple", mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple) && "mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0", mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0) && "mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_234", mod_consts.const_int_pos_234);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_int_pos_234) && "mod_consts.const_int_pos_234");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION) && "mod_consts.const_str_plain_HC_ACTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WINFUNCTYPE", mod_consts.const_str_plain_WINFUNCTYPE);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE) && "mod_consts.const_str_plain_WINFUNCTYPE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int32", mod_consts.const_str_plain_c_int32);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int32) && "mod_consts.const_str_plain_c_int32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOOKPROC", mod_consts.const_str_plain__HOOKPROC);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain__HOOKPROC) && "mod_consts.const_str_plain__HOOKPROC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetWindowsHookExW", mod_consts.const_str_plain_SetWindowsHookExW);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetWindowsHookExW) && "mod_consts.const_str_plain_SetWindowsHookExW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HINSTANCE", mod_consts.const_str_plain_HINSTANCE);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_HINSTANCE) && "mod_consts.const_str_plain_HINSTANCE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnhookWindowsHookEx", mod_consts.const_str_plain_UnhookWindowsHookEx);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnhookWindowsHookEx) && "mod_consts.const_str_plain_UnhookWindowsHookEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HHOOK", mod_consts.const_str_plain_HHOOK);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_HHOOK) && "mod_consts.const_str_plain_HHOOK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CallNextHookEx", mod_consts.const_str_plain_CallNextHookEx);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallNextHookEx) && "mod_consts.const_str_plain_CallNextHookEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exception", mod_consts.const_str_plain_Exception);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_Exception) && "mod_consts.const_str_plain_Exception");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0", mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0) && "mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03", mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03) && "mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_int_pos_264) && "mod_consts.const_int_pos_264");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f", mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f) && "mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082", mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082) && "mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76", mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76) && "mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f", mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f) && "mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67", mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67) && "mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple", mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple) && "mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin) && "mod_consts.const_str_plain_ListenerMixin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca", mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca) && "mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_int_pos_316) && "mod_consts.const_int_pos_316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1040", mod_consts.const_int_pos_1040);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_int_pos_1040) && "mod_consts.const_int_pos_1040");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9", mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9) && "mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__run", mod_consts.const_str_plain__run);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain__run) && "mod_consts.const_str_plain__run");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c", mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c) && "mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__stop_platform", mod_consts.const_str_plain__stop_platform);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_plain__stop_platform) && "mod_consts.const_str_plain__stop_platform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709", mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709) && "mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emitter", mod_consts.const_str_plain__emitter);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain__emitter) && "mod_consts.const_str_plain__emitter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654", mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654) && "mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc", mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc) && "mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197", mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197) && "mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa", mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa) && "mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c", mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c) && "mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__message_loop_tuple", mod_consts.const_tuple_str_plain__message_loop_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__message_loop_tuple) && "mod_consts.const_tuple_str_plain__message_loop_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyTranslator", mod_consts.const_str_plain_KeyTranslator);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyTranslator) && "mod_consts.const_str_plain_KeyTranslator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b", mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b) && "mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_429", mod_consts.const_int_pos_429);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_int_pos_429) && "mod_consts.const_int_pos_429");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetAsyncKeyState", mod_consts.const_str_plain_GetAsyncKeyState);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetAsyncKeyState) && "mod_consts.const_str_plain_GetAsyncKeyState");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetKeyboardLayout", mod_consts.const_str_plain_GetKeyboardLayout);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetKeyboardLayout) && "mod_consts.const_str_plain_GetKeyboardLayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetKeyboardState", mod_consts.const_str_plain_GetKeyboardState);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetKeyboardState) && "mod_consts.const_str_plain_GetKeyboardState");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyboardState", mod_consts.const_str_plain__GetKeyboardState);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyboardState) && "mod_consts.const_str_plain__GetKeyboardState");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GetKeyState", mod_consts.const_str_plain__GetKeyState);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetKeyState) && "mod_consts.const_str_plain__GetKeyState");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKeyExW", mod_consts.const_str_plain_MapVirtualKeyExW);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKeyExW) && "mod_consts.const_str_plain_MapVirtualKeyExW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HKL", mod_consts.const_str_plain_HKL);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKL) && "mod_consts.const_str_plain_HKL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ToUnicodeEx", mod_consts.const_str_plain_ToUnicodeEx);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToUnicodeEx) && "mod_consts.const_str_plain_ToUnicodeEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAPVK_VK_TO_CHAR", mod_consts.const_str_plain__MAPVK_VK_TO_CHAR);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAPVK_VK_TO_CHAR) && "mod_consts.const_str_plain__MAPVK_VK_TO_CHAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674", mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674) && "mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___call__", mod_consts.const_str_plain___call__);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__) && "mod_consts.const_str_plain___call__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87", mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87) && "mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268", mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268) && "mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char_from_scan", mod_consts.const_str_plain_char_from_scan);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_plain_char_from_scan) && "mod_consts.const_str_plain_char_from_scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83", mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83) && "mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955", mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955) && "mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e", mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e) && "mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f", mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f) && "mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7", mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7) && "mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager) && "mod_consts.const_str_plain_contextmanager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple", mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple) && "mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01", mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01) && "mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple", mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple) && "mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548", mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548) && "mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple", mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple) && "mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple", mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple) && "mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple", mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple", mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple", mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple) && "mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple", mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple) && "mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple", mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple) && "mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple", mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple", mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple) && "mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple", mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple", mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple", mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple", mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple", mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple) && "mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = Nuitka_PyInterpreterState_GetDictState(interp)->next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_pynput$_util$win32$AbstractListener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AbstractListener);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AbstractListener, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AbstractListener);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AbstractListener, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$GetCurrentThreadId(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCurrentThreadId);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetCurrentThreadId);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetCurrentThreadId, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetCurrentThreadId);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetCurrentThreadId, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCurrentThreadId);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCurrentThreadId);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCurrentThreadId);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$HARDWAREINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HARDWAREINPUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HARDWAREINPUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HARDWAREINPUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HARDWAREINPUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$INPUT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$INPUT_union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT_union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT_union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT_union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT_union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$KEYBDINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYBDINPUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYBDINPUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYBDINPUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYBDINPUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$MOUSEINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEINPUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEINPUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEINPUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEINPUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$MapVirtualKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MapVirtualKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MapVirtualKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MapVirtualKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MapVirtualKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$MessageLoop(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageLoop);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageLoop);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageLoop, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageLoop);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageLoop, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageLoop);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageLoop);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageLoop);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$SendInput(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SendInput);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SendInput, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SendInput);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SendInput, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$SystemHook(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SystemHook);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SystemHook, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SystemHook);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SystemHook, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$VK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$VkKeyScan(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VkKeyScan);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VkKeyScan, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VkKeyScan);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VkKeyScan, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$itertools(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itertools);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itertools, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itertools);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itertools, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$_util$win32$windll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_windll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_windll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_windll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_windll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b8de6acce0800a476d8b32f00338324b;
static PyCodeObject *code_objects_623ba928bf82094c6f4f70bb38cc7ffb;
static PyCodeObject *code_objects_484834fe959583fb95e0079102d606b6;
static PyCodeObject *code_objects_fb9d1136889babba5f04a0aa8e191421;
static PyCodeObject *code_objects_f3c569ba8e84ee31268ebb6ff68c28e8;
static PyCodeObject *code_objects_86c19ebccec787722da35316a21f659f;
static PyCodeObject *code_objects_00b99492b9724b590ff8559e4ab86015;
static PyCodeObject *code_objects_cdd4405837ef282fff41e0e64a651878;
static PyCodeObject *code_objects_5dc42d258288e6395955fa13bc4d2f20;
static PyCodeObject *code_objects_34f88dd45c9f086d53a4dabe52d44040;
static PyCodeObject *code_objects_f3ea76edecae1cd5db0848f7ec0b905b;
static PyCodeObject *code_objects_d5e25d3e02e998dad02d8badafaabfe7;
static PyCodeObject *code_objects_5234cfffec4e8e6ada4d7460d5b7c67b;
static PyCodeObject *code_objects_ff310e2d2b42cc24a3d31391e49cfb20;
static PyCodeObject *code_objects_b63730a1636acce91854c63d1906855c;
static PyCodeObject *code_objects_086ea5b96d569cde3a521892e9fe266c;
static PyCodeObject *code_objects_a04f9331cc134deb3a4363334abd3763;
static PyCodeObject *code_objects_fb556f0aec541bc1a240ee423cf94a2e;
static PyCodeObject *code_objects_e5e30965d5b4a86fce3fd22d42092cdc;
static PyCodeObject *code_objects_a0aa5666bf4f66cb0df7bf0a38c4805e;
static PyCodeObject *code_objects_8dad21aa2e6985c6a25250152800bff3;
static PyCodeObject *code_objects_b1c202811f3fb9af29b9995948271b04;
static PyCodeObject *code_objects_2dfaab1fb4c83ad84cda43055c67bccf;
static PyCodeObject *code_objects_5ebb380a375a0e35a61ea01f515938ca;
static PyCodeObject *code_objects_ea0676ed459244f517a5885472d018a0;
static PyCodeObject *code_objects_dbcb94e17bc4ad823cfffebfbd99bc05;
static PyCodeObject *code_objects_739ae8679541f7b6560f4926266768ab;
static PyCodeObject *code_objects_11b870163713ddf31aa90c31e5ce4331;
static PyCodeObject *code_objects_1c93e7ba30a6703c4b6e6d08630d6bde;
static PyCodeObject *code_objects_dfb7a141917bf033a02f99e366810d2f;
static PyCodeObject *code_objects_88d58f3c422f9dd76213ae698091daba;
static PyCodeObject *code_objects_114cb1eafc8e11b3831b1251541890be;
static PyCodeObject *code_objects_dbbdcb54fbb254ffe19004bfbc58dcce;
static PyCodeObject *code_objects_861c4fe3f82371c1188cd8553277eb9e;
static PyCodeObject *code_objects_eda32f687198a92f154a030e3392896b;
static PyCodeObject *code_objects_2fa6e456fba1a195687c73a22a7011cc;
static PyCodeObject *code_objects_649b7ab4325aa7dcf4fbe323cf0fefad;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3d1a9f0fc1c3935823172bff43601b01); CHECK_OBJECT(module_filename_obj);
code_objects_b8de6acce0800a476d8b32f00338324b = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f, mod_consts.const_tuple_str_plain_code_str_plain_msg_str_plain_lpdata_tuple, NULL, 3, 0, 0);
code_objects_623ba928bf82094c6f4f70bb38cc7ffb = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548, mod_consts.const_str_digest_d3a8c52ffb3a7c8a83cfd90a8f391548, NULL, NULL, 0, 0, 0);
code_objects_484834fe959583fb95e0079102d606b6 = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts.const_str_plain_HARDWAREINPUT, mod_consts.const_str_plain_HARDWAREINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fb9d1136889babba5f04a0aa8e191421 = MAKE_CODE_OBJECT(module_filename_obj, 106, 0, mod_consts.const_str_plain_INPUT, mod_consts.const_str_plain_INPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f3c569ba8e84ee31268ebb6ff68c28e8 = MAKE_CODE_OBJECT(module_filename_obj, 100, 0, mod_consts.const_str_plain_INPUT_union, mod_consts.const_str_plain_INPUT_union, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_86c19ebccec787722da35316a21f659f = MAKE_CODE_OBJECT(module_filename_obj, 71, 0, mod_consts.const_str_plain_KEYBDINPUT, mod_consts.const_str_plain_KEYBDINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_00b99492b9724b590ff8559e4ab86015 = MAKE_CODE_OBJECT(module_filename_obj, 429, 0, mod_consts.const_str_plain_KeyTranslator, mod_consts.const_str_plain_KeyTranslator, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cdd4405837ef282fff41e0e64a651878 = MAKE_CODE_OBJECT(module_filename_obj, 316, 0, mod_consts.const_str_plain_ListenerMixin, mod_consts.const_str_plain_ListenerMixin, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5dc42d258288e6395955fa13bc4d2f20 = MAKE_CODE_OBJECT(module_filename_obj, 42, 0, mod_consts.const_str_plain_MOUSEINPUT, mod_consts.const_str_plain_MOUSEINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_34f88dd45c9f086d53a4dabe52d44040 = MAKE_CODE_OBJECT(module_filename_obj, 138, 0, mod_consts.const_str_plain_MessageLoop, mod_consts.const_str_plain_MessageLoop, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f3ea76edecae1cd5db0848f7ec0b905b = MAKE_CODE_OBJECT(module_filename_obj, 234, 0, mod_consts.const_str_plain_SystemHook, mod_consts.const_str_plain_SystemHook, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d5e25d3e02e998dad02d8badafaabfe7 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87, mod_consts.const_tuple_92daf32edeade01cb0879964b064885e_tuple, NULL, 3, 0, 0);
code_objects_5234cfffec4e8e6ada4d7460d5b7c67b = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___enter__, mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_ff310e2d2b42cc24a3d31391e49cfb20 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___exit__, mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f, mod_consts.const_tuple_3921f0cfeb5dbd0fb5b675f91912d218_tuple, NULL, 4, 0, 0);
code_objects_b63730a1636acce91854c63d1906855c = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_086ea5b96d569cde3a521892e9fe266c = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a04f9331cc134deb3a4363334abd3763 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082, mod_consts.const_tuple_str_plain_self_str_plain_hook_id_str_plain_on_hook_tuple, NULL, 3, 0, 0);
code_objects_fb556f0aec541bc1a240ee423cf94a2e = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_str_plain_r_tuple, NULL, 1, 0, 0);
code_objects_e5e30965d5b4a86fce3fd22d42092cdc = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__convert, mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc, mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple, NULL, 4, 0, 0);
code_objects_a0aa5666bf4f66cb0df7bf0a38c4805e = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__generate_layout, mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955, mod_consts.const_tuple_67ca26000b443ff81205c046ae86f8ef_tuple, NULL, 1, 0, 0);
code_objects_8dad21aa2e6985c6a25250152800bff3 = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle_message, mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa, mod_consts.const_tuple_str_plain_self_str_plain_code_str_plain_msg_str_plain_lpdata_tuple, NULL, 4, 0, 0);
code_objects_b1c202811f3fb9af29b9995948271b04 = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handler, mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654, mod_consts.const_tuple_5dcda52ace0c82a0bd5c78dba3d5e3ba_tuple, NULL, 4, 0, 0);
code_objects_2dfaab1fb4c83ad84cda43055c67bccf = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handler, mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67, mod_consts.const_tuple_08f64561e81500c7d6a3600c1d664d44_tuple, NULL, 3, 0, 0);
code_objects_5ebb380a375a0e35a61ea01f515938ca = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__modifier_state, mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_ctrl_str_plain_alt_tuple, NULL, 1, 0, 0);
code_objects_ea0676ed459244f517a5885472d018a0 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__on_notification, mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple, NULL, 4, 0, 0);
code_objects_dbcb94e17bc4ad823cfffebfbd99bc05 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__process, mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197, mod_consts.const_tuple_str_plain_self_str_plain_wparam_str_plain_lparam_tuple, NULL, 3, 0, 0);
code_objects_739ae8679541f7b6560f4926266768ab = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__run, mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_11b870163713ddf31aa90c31e5ce4331 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__stop_platform, mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1c93e7ba30a6703c4b6e6d08630d6bde = MAKE_CODE_OBJECT(module_filename_obj, 593, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__thread_input, mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_dfb7a141917bf033a02f99e366810d2f = MAKE_CODE_OBJECT(module_filename_obj, 559, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__to_scan, mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_layout_tuple, NULL, 3, 0, 0);
code_objects_88d58f3c422f9dd76213ae698091daba = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__to_vk, mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f, mod_consts.const_tuple_str_plain_self_str_plain_scan_str_plain_layout_tuple, NULL, 3, 0, 0);
code_objects_114cb1eafc8e11b3831b1251541890be = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_char_from_scan, mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83, mod_consts.const_tuple_str_plain_self_str_plain_scan_tuple, NULL, 2, 0, 0);
code_objects_dbbdcb54fbb254ffe19004bfbc58dcce = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_post, mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760, mod_consts.const_tuple_2c8dbc000a25b5a71daf32a45dd3c84e_tuple, NULL, 4, 0, 0);
code_objects_861c4fe3f82371c1188cd8553277eb9e = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_start, mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_lpmsg_tuple, NULL, 1, 0, 0);
code_objects_eda32f687198a92f154a030e3392896b = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_stop, mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2fa6e456fba1a195687c73a22a7011cc = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_suppress_event, mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_649b7ab4325aa7dcf4fbe323cf0fefad = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_update_layout, mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__10__handler(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__11_suppress_event(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__12__run(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__13__stop_platform(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__14__handler(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__15__convert(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__16__process(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__17__handle_message(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__18__on_notification(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__19___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__20___call__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__21_update_layout(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__22_char_from_scan(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__23__generate_layout(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__24__to_scan(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__25__to_vk(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__26__modifier_state(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__27__thread_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__2___iter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__3_start(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__4_stop(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__5_post(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__6___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__7_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__8___enter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__9___exit__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$_util$win32$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_086ea5b96d569cde3a521892e9fe266c, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__1___init__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__1___init__ = cache_frame_frame_pynput$_util$win32$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__threadid, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_2;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__1___init__->m_frame.f_lineno = 173;
tmp_ass_attr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Event);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__event, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_thread, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__1___init__ == cache_frame_frame_pynput$_util$win32$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__1___init__);
    cache_frame_frame_pynput$_util$win32$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__1___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__2___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___locals {
PyObject *var_msg;
PyObject *var_lpmsg;
PyObject *var_r;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___locals *generator_heap = (struct pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_msg = NULL;
generator_heap->var_lpmsg = NULL;
generator_heap->var_r = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fb556f0aec541bc1a240ee423cf94a2e, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__threadid);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
generator->m_frame->m_frame.f_lineno = 182;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 182;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
loop_start_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_1 == NULL));
generator->m_frame->m_frame.f_lineno = 187;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_MSG);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_msg;
    generator_heap->var_msg = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(generator_heap->var_msg);
tmp_args_element_value_1 = generator_heap->var_msg;
generator->m_frame->m_frame.f_lineno = 188;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 188;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_lpmsg;
    generator_heap->var_lpmsg = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_called_instance_3 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_lpmsg);
tmp_args_element_value_2 = generator_heap->var_lpmsg;
tmp_args_element_value_3 = Py_None;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_0;
generator->m_frame->m_frame.f_lineno = 189;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__GetMessage,
        call_args
    );
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_r;
    generator_heap->var_r = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->var_r);
tmp_cmp_expr_left_2 = generator_heap->var_r;
tmp_cmp_expr_right_2 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_msg);
tmp_expression_value_2 = generator_heap->var_msg;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_message);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_WM_STOP);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_msg);
tmp_expression_value_4 = generator_heap->var_msg;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 193;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = Py_None;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 196;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}

tmp_ass_attr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__threadid, tmp_ass_attr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 196;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = Py_None;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 197;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}

tmp_ass_attr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_thread, tmp_ass_attr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 197;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 184;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cooo";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = Py_None;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 196;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_ass_attr_target_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__threadid, tmp_ass_attr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 196;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_ass_attr_value_4 = Py_None;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 197;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_ass_attr_target_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_thread, tmp_ass_attr_value_4);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 197;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[0],
    generator_heap->var_msg,
    generator_heap->var_lpmsg,
    generator_heap->var_r
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_msg);
generator_heap->var_msg = NULL;
Py_XDECREF(generator_heap->var_lpmsg);
generator_heap->var_lpmsg = NULL;
Py_XDECREF(generator_heap->var_r);
generator_heap->var_r = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_msg);
CHECK_OBJECT(generator_heap->var_msg);
Py_DECREF(generator_heap->var_msg);
generator_heap->var_msg = NULL;
CHECK_OBJECT(generator_heap->var_lpmsg);
CHECK_OBJECT(generator_heap->var_lpmsg);
Py_DECREF(generator_heap->var_lpmsg);
generator_heap->var_lpmsg = NULL;
CHECK_OBJECT(generator_heap->var_r);
CHECK_OBJECT(generator_heap->var_r);
Py_DECREF(generator_heap->var_r);
generator_heap->var_r = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___context,
        module_pynput$_util$win32,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432,
#endif
        code_objects_fb556f0aec541bc1a240ee423cf94a2e,
        closure,
        1,
#if 1
        sizeof(struct pynput$_util$win32$$$function__2___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$_util$win32$$$function__3_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_msg = NULL;
PyObject *var_lpmsg = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__3_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__3_start = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__3_start)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__3_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__3_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__3_start = MAKE_FUNCTION_FRAME(tstate, code_objects_861c4fe3f82371c1188cd8553277eb9e, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__3_start->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__3_start = cache_frame_frame_pynput$_util$win32$$$function__3_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__3_start);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__3_start) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_pynput$_util$win32$GetCurrentThreadId(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetCurrentThreadId);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 205;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__threadid, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_2;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 206;
tmp_ass_attr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_thread);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_thread, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 209;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MSG);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_1;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 210;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_byref, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lpmsg;
    var_lpmsg = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__PeekMessage);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lpmsg);
tmp_args_element_value_2 = var_lpmsg;
tmp_args_element_value_3 = Py_None;
tmp_args_element_value_4 = mod_consts.const_int_pos_1024;
tmp_args_element_value_5 = mod_consts.const_int_pos_1024;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_PM_NOREMOVE);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 211;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 211;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__event);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__3_start->m_frame.f_lineno = 214;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_set);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__3_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__3_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__3_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__3_start,
    type_description_1,
    par_self,
    var_msg,
    var_lpmsg
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__3_start == cache_frame_frame_pynput$_util$win32$$$function__3_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__3_start);
    cache_frame_frame_pynput$_util$win32$$$function__3_start = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__3_start);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_msg);
CHECK_OBJECT(var_msg);
Py_DECREF(var_msg);
var_msg = NULL;
CHECK_OBJECT(var_lpmsg);
CHECK_OBJECT(var_lpmsg);
Py_DECREF(var_lpmsg);
var_lpmsg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_lpmsg);
var_lpmsg = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__4_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__4_stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__4_stop = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__4_stop)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__4_stop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__4_stop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__4_stop = MAKE_FUNCTION_FRAME(tstate, code_objects_eda32f687198a92f154a030e3392896b, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__4_stop->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__4_stop = cache_frame_frame_pynput$_util$win32$$$function__4_stop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__4_stop);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__4_stop) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__event);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__4_stop->m_frame.f_lineno = 218;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wait);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threadid);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_WM_STOP);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = const_int_0;
tmp_args_element_value_3 = const_int_0;
frame_frame_pynput$_util$win32$$$function__4_stop->m_frame.f_lineno = 220;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__4_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__4_stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__4_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__4_stop,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__4_stop == cache_frame_frame_pynput$_util$win32$$$function__4_stop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__4_stop);
    cache_frame_frame_pynput$_util$win32$$$function__4_stop = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__4_stop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__5_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_wparam = python_pars[2];
PyObject *par_lparam = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__5_post;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__5_post = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__5_post)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__5_post);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__5_post == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__5_post = MAKE_FUNCTION_FRAME(tstate, code_objects_dbbdcb54fbb254ffe19004bfbc58dcce, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__5_post->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__5_post = cache_frame_frame_pynput$_util$win32$$$function__5_post;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__5_post);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__5_post) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__PostThreadMessage);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threadid);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 231;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_2 = par_msg;
CHECK_OBJECT(par_wparam);
tmp_args_element_value_3 = par_wparam;
CHECK_OBJECT(par_lparam);
tmp_args_element_value_4 = par_lparam;
frame_frame_pynput$_util$win32$$$function__5_post->m_frame.f_lineno = 231;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__5_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__5_post->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__5_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__5_post,
    type_description_1,
    par_self,
    par_msg,
    par_wparam,
    par_lparam
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__5_post == cache_frame_frame_pynput$_util$win32$$$function__5_post) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__5_post);
    cache_frame_frame_pynput$_util$win32$$$function__5_post = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__5_post);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_wparam);
Py_DECREF(par_wparam);
CHECK_OBJECT(par_lparam);
Py_DECREF(par_lparam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_wparam);
Py_DECREF(par_wparam);
CHECK_OBJECT(par_lparam);
Py_DECREF(par_lparam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_hook_id = python_pars[1];
PyObject *par_on_hook = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a04f9331cc134deb3a4363334abd3763, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__6___init__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__6___init__ = cache_frame_frame_pynput$_util$win32$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__6___init__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_hook_id);
tmp_ass_attr_value_1 = par_hook_id;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_hook_id, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_on_hook);
tmp_ass_attr_value_2 = par_on_hook;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_on_hook, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__hook, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__6___init__,
    type_description_1,
    par_self,
    par_hook_id,
    par_on_hook
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__6___init__ == cache_frame_frame_pynput$_util$win32$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__6___init__);
    cache_frame_frame_pynput$_util$win32$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__6___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_hook_id);
Py_DECREF(par_hook_id);
CHECK_OBJECT(par_on_hook);
Py_DECREF(par_on_hook);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_hook_id);
Py_DECREF(par_hook_id);
CHECK_OBJECT(par_on_hook);
Py_DECREF(par_on_hook);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__8___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__8___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__8___enter__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__8___enter__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__8___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__8___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__8___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5234cfffec4e8e6ada4d7460d5b7c67b, module_pynput$_util$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__8___enter__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__8___enter__ = cache_frame_frame_pynput$_util$win32$$$function__8___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__8___enter__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__8___enter__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__8___enter__->m_frame.f_lineno = 277;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_thread);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ident);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__HOOKS);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__8___enter__->m_frame.f_lineno = 278;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 278;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_ass_subvalue_1 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__HOOKS);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_ass_subscript_1 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__SetWindowsHookEx);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_hook_id);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__handler);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = Py_None;
tmp_args_element_value_4 = const_int_0;
frame_frame_pynput$_util$win32$$$function__8___enter__->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__hook, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__8___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__8___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__8___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__8___enter__,
    type_description_1,
    par_self,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__8___enter__ == cache_frame_frame_pynput$_util$win32$$$function__8___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__8___enter__);
    cache_frame_frame_pynput$_util$win32$$$function__8___enter__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__8___enter__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__9___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__9___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__9___exit__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__9___exit__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__9___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__9___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__9___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ff310e2d2b42cc24a3d31391e49cfb20, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__9___exit__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__9___exit__ = cache_frame_frame_pynput$_util$win32$$$function__9___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__9___exit__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__9___exit__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__9___exit__->m_frame.f_lineno = 289;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_thread);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ident);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__HOOKS);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__9___exit__->m_frame.f_lineno = 290;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__hook);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__UnhookWindowsHookEx);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__hook);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 294;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__9___exit__->m_frame.f_lineno = 294;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__HOOKS);
if (tmp_delsubscr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_delsubscr_subscript_1 = var_key;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_target_1);
Py_DECREF(tmp_delsubscr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__9___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__9___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__9___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__9___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_value,
    par_traceback,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__9___exit__ == cache_frame_frame_pynput$_util$win32$$$function__9___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__9___exit__);
    cache_frame_frame_pynput$_util$win32$$$function__9___exit__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__9___exit__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__10__handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_code = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_lpdata = python_pars[2];
PyObject *var_key = NULL;
PyObject *var_self = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__10__handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__10__handler = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__10__handler)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__10__handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__10__handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__10__handler = MAKE_FUNCTION_FRAME(tstate, code_objects_2dfaab1fb4c83ad84cda43055c67bccf, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__10__handler->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__10__handler = cache_frame_frame_pynput$_util$win32$$$function__10__handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__10__handler);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__10__handler) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__10__handler->m_frame.f_lineno = 300;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_thread);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ident);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_pynput$_util$win32$SystemHook(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__HOOKS);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_1 = var_key;
tmp_args_element_value_2 = Py_None;
frame_frame_pynput$_util$win32$$$function__10__handler->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_self;
    var_self = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_self);
tmp_truth_name_1 = CHECK_IF_TRUE(var_self);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_self);
tmp_called_instance_2 = var_self;
CHECK_OBJECT(par_code);
tmp_args_element_value_3 = par_code;
CHECK_OBJECT(par_msg);
tmp_args_element_value_4 = par_msg;
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_5 = par_lpdata;
frame_frame_pynput$_util$win32$$$function__10__handler->m_frame.f_lineno = 305;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_on_hook,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__10__handler, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__10__handler, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
CHECK_OBJECT(var_self);
tmp_expression_value_4 = var_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SuppressException);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = const_int_pos_1;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_2:;
goto try_end_2;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_3 = module_var_accessor_pynput$_util$win32$SystemHook(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = const_int_0;
CHECK_OBJECT(par_code);
tmp_args_element_value_7 = par_code;
CHECK_OBJECT(par_msg);
tmp_args_element_value_8 = par_msg;
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_9 = par_lpdata;
frame_frame_pynput$_util$win32$$$function__10__handler->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__CallNextHookEx,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__10__handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__10__handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__10__handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__10__handler,
    type_description_1,
    par_code,
    par_msg,
    par_lpdata,
    var_key,
    var_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__10__handler == cache_frame_frame_pynput$_util$win32$$$function__10__handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__10__handler);
    cache_frame_frame_pynput$_util$win32$$$function__10__handler = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__10__handler);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_self);
CHECK_OBJECT(var_self);
Py_DECREF(var_self);
var_self = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_self);
var_self = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__11_suppress_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__11_suppress_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event = MAKE_FUNCTION_FRAME(tstate, code_objects_2fa6e456fba1a195687c73a22a7011cc, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__11_suppress_event = cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__11_suppress_event);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__11_suppress_event) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$SystemHook(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__11_suppress_event->m_frame.f_lineno = 344;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_SuppressException);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 344;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__11_suppress_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__11_suppress_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__11_suppress_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__11_suppress_event,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__11_suppress_event == cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event);
    cache_frame_frame_pynput$_util$win32$$$function__11_suppress_event = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__11_suppress_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$_util$win32$$$function__12__run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_msg = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__12__run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__12__run = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__12__run)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__12__run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__12__run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__12__run = MAKE_FUNCTION_FRAME(tstate, code_objects_739ae8679541f7b6560f4926266768ab, module_pynput$_util$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__12__run->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__12__run = cache_frame_frame_pynput$_util$win32$$$function__12__run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__12__run);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__12__run) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_pynput$_util$win32$MessageLoop(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageLoop);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 347;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__message_loop, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 348;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__receive);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__source;
    tmp_with_2__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_1 = tmp_with_2__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__exit;
    tmp_with_2__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_2 = tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 348;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__enter;
    tmp_with_2__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 349;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__mark_ready);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__message_loop);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 350;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_start);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
tmp_called_value_3 = module_var_accessor_pynput$_util$win32$SystemHook(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__EVENTS);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__handler);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_7 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 354;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__message_loop);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 356;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_11 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_11;
    Py_INCREF(var_msg);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 357;
type_description_1 = "oo";
    goto try_except_handler_9;
}

tmp_expression_value_9 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_running);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_msg);
tmp_expression_value_10 = var_msg;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_message);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oo";
    goto try_except_handler_9;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "oo";
    goto try_except_handler_9;
}

tmp_expression_value_11 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__WM_PROCESS);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 359;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oo";
    goto try_except_handler_9;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_14;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "oo";
    goto try_except_handler_9;
}

tmp_expression_value_12 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__process);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_msg);
tmp_expression_value_13 = var_msg;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_wParam);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 360;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_msg);
tmp_expression_value_14 = var_msg;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_lParam);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 360;
type_description_1 = "oo";
    goto try_except_handler_9;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_msg);
tmp_expression_value_15 = var_msg;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_message);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oo";
    goto try_except_handler_9;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 361;
type_description_1 = "oo";
    goto try_except_handler_9;
}

tmp_expression_value_16 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__WM_NOTIFICATIONS);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 361;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_20;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "oo";
    goto try_except_handler_9;
}

tmp_expression_value_17 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__on_notification);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_msg);
tmp_expression_value_18 = var_msg;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_message);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 363;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_msg);
tmp_expression_value_19 = var_msg;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_wParam);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 363;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_msg);
tmp_expression_value_20 = var_msg;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_lParam);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 363;
type_description_1 = "oo";
    goto try_except_handler_9;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oo";
    goto try_except_handler_9;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_8;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__12__run, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__12__run, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_12;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_10;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__12__run->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_10;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__12__run->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_10;
branch_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 354;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 354;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_7:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_6);
goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__12__run, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__12__run, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_13;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
tmp_args_element_value_11 = EXC_TYPE(tstate);
tmp_args_element_value_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_12); 
tmp_args_element_value_13 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_13 == NULL) {
    tmp_args_element_value_13 = Py_None;
}
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 348;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_11;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_11;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 348;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__12__run->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_11;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 348;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__12__run->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_11;
branch_end_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_3;
// End of try:
try_end_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
goto try_end_9;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 348;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_9);

exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_10:;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
// End of try:
try_end_9:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_8;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_pynput$_util$win32$$$function__12__run->m_frame.f_lineno = 348;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_11:;
goto try_end_10;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__12__run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__12__run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__12__run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__12__run,
    type_description_1,
    par_self,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__12__run == cache_frame_frame_pynput$_util$win32$$$function__12__run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__12__run);
    cache_frame_frame_pynput$_util$win32$$$function__12__run = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__12__run);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_msg);
var_msg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__13__stop_platform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__13__stop_platform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform = MAKE_FUNCTION_FRAME(tstate, code_objects_11b870163713ddf31aa90c31e5ce4331, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__13__stop_platform = cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__13__stop_platform);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__13__stop_platform) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__message_loop);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_pynput$_util$win32$$$function__13__stop_platform->m_frame.f_lineno = 372;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_stop);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__13__stop_platform, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__13__stop_platform, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 371;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__13__stop_platform->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__13__stop_platform->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_no_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__13__stop_platform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__13__stop_platform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__13__stop_platform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__13__stop_platform,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__13__stop_platform == cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform);
    cache_frame_frame_pynput$_util$win32$$$function__13__stop_platform = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__13__stop_platform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__14__handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_msg = python_pars[2];
PyObject *par_lpdata = python_pars[3];
PyObject *var_converted = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__14__handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__14__handler = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__14__handler)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__14__handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__14__handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__14__handler = MAKE_FUNCTION_FRAME(tstate, code_objects_b1c202811f3fb9af29b9995948271b04, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__14__handler->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__14__handler = cache_frame_frame_pynput$_util$win32$$$function__14__handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__14__handler);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__14__handler) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_code);
tmp_args_element_value_1 = par_code;
CHECK_OBJECT(par_msg);
tmp_args_element_value_2 = par_msg;
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_3 = par_lpdata;
frame_frame_pynput$_util$win32$$$function__14__handler->m_frame.f_lineno = 386;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__convert,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_converted;
    var_converted = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_converted);
tmp_cmp_expr_left_1 = var_converted;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__message_loop);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_post);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__WM_PROCESS);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_converted);
tmp_direct_call_arg3_1 = var_converted;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__14__handler, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__14__handler, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_NotImplementedError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_code);
tmp_args_element_value_4 = par_code;
CHECK_OBJECT(par_msg);
tmp_args_element_value_5 = par_msg;
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_6 = par_lpdata;
frame_frame_pynput$_util$win32$$$function__14__handler->m_frame.f_lineno = 390;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__handle_message,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 385;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__14__handler->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__14__handler->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_suppress);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 392;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_pynput$_util$win32$$$function__14__handler->m_frame.f_lineno = 393;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_suppress_event);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__14__handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__14__handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__14__handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__14__handler,
    type_description_1,
    par_self,
    par_code,
    par_msg,
    par_lpdata,
    var_converted
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__14__handler == cache_frame_frame_pynput$_util$win32$$$function__14__handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__14__handler);
    cache_frame_frame_pynput$_util$win32$$$function__14__handler = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__14__handler);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_converted);
var_converted = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_converted);
var_converted = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__15__convert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_msg = python_pars[2];
PyObject *par_lpdata = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__15__convert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__15__convert = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__15__convert)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__15__convert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__15__convert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__15__convert = MAKE_FUNCTION_FRAME(tstate, code_objects_e5e30965d5b4a86fce3fd22d42092cdc, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__15__convert->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__15__convert = cache_frame_frame_pynput$_util$win32$$$function__15__convert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__15__convert);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__15__convert) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__15__convert->m_frame.f_lineno = 401;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 401;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__15__convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__15__convert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__15__convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__15__convert,
    type_description_1,
    par_self,
    par_code,
    par_msg,
    par_lpdata
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__15__convert == cache_frame_frame_pynput$_util$win32$$$function__15__convert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__15__convert);
    cache_frame_frame_pynput$_util$win32$$$function__15__convert = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__15__convert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$_util$win32$$$function__16__process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_wparam = python_pars[1];
PyObject *par_lparam = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__16__process;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__16__process = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__16__process)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__16__process);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__16__process == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__16__process = MAKE_FUNCTION_FRAME(tstate, code_objects_dbcb94e17bc4ad823cfffebfbd99bc05, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__16__process->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__16__process = cache_frame_frame_pynput$_util$win32$$$function__16__process;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__16__process);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__16__process) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__16__process->m_frame.f_lineno = 408;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 408;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__16__process, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__16__process->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__16__process, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__16__process,
    type_description_1,
    par_self,
    par_wparam,
    par_lparam
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__16__process == cache_frame_frame_pynput$_util$win32$$$function__16__process) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__16__process);
    cache_frame_frame_pynput$_util$win32$$$function__16__process = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__16__process);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_wparam);
Py_DECREF(par_wparam);
CHECK_OBJECT(par_lparam);
Py_DECREF(par_lparam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$_util$win32$$$function__17__handle_message(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_msg = python_pars[2];
PyObject *par_lpdata = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__17__handle_message;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__17__handle_message = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__17__handle_message)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__17__handle_message);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__17__handle_message == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__17__handle_message = MAKE_FUNCTION_FRAME(tstate, code_objects_8dad21aa2e6985c6a25250152800bff3, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__17__handle_message->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__17__handle_message = cache_frame_frame_pynput$_util$win32$$$function__17__handle_message;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__17__handle_message);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__17__handle_message) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__17__handle_message->m_frame.f_lineno = 418;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 418;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__17__handle_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__17__handle_message->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__17__handle_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__17__handle_message,
    type_description_1,
    par_self,
    par_code,
    par_msg,
    par_lpdata
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__17__handle_message == cache_frame_frame_pynput$_util$win32$$$function__17__handle_message) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__17__handle_message);
    cache_frame_frame_pynput$_util$win32$$$function__17__handle_message = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__17__handle_message);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_lpdata);
Py_DECREF(par_lpdata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$_util$win32$$$function__18__on_notification(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_wparam = python_pars[2];
PyObject *par_lparam = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__18__on_notification;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__18__on_notification = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__18__on_notification)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__18__on_notification);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__18__on_notification == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__18__on_notification = MAKE_FUNCTION_FRAME(tstate, code_objects_ea0676ed459244f517a5885472d018a0, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__18__on_notification->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__18__on_notification = cache_frame_frame_pynput$_util$win32$$$function__18__on_notification;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__18__on_notification);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__18__on_notification) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$_util$win32$$$function__18__on_notification->m_frame.f_lineno = 426;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 426;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__18__on_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__18__on_notification->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__18__on_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__18__on_notification,
    type_description_1,
    par_self,
    par_code,
    par_wparam,
    par_lparam
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__18__on_notification == cache_frame_frame_pynput$_util$win32$$$function__18__on_notification) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__18__on_notification);
    cache_frame_frame_pynput$_util$win32$$$function__18__on_notification = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__18__on_notification);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_wparam);
Py_DECREF(par_wparam);
CHECK_OBJECT(par_lparam);
Py_DECREF(par_lparam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$_util$win32$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b63730a1636acce91854c63d1906855c, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__19___init__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__19___init__ = cache_frame_frame_pynput$_util$win32$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__19___init__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pynput$_util$win32$$$function__19___init__->m_frame.f_lineno = 458;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_update_layout);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__19___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__19___init__ == cache_frame_frame_pynput$_util$win32$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__19___init__);
    cache_frame_frame_pynput$_util$win32$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__19___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__20___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_is_press = python_pars[2];
PyObject *var_layout_data = NULL;
PyObject *var_scan = NULL;
PyObject *var_character = NULL;
PyObject *var_is_dead = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__20___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__20___call__ = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__20___call__)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__20___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__20___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__20___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d5e25d3e02e998dad02d8badafaabfe7, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__20___call__->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__20___call__ = cache_frame_frame_pynput$_util$win32$$$function__20___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__20___call__);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__20___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__layout_data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pynput$_util$win32$$$function__20___call__->m_frame.f_lineno = 473;
tmp_subscript_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__modifier_state);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 473;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_layout_data;
    var_layout_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__to_scan);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vk);
tmp_args_element_value_1 = par_vk;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__layout);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 474;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__20___call__->m_frame.f_lineno = 474;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_layout_data);
tmp_expression_value_5 = var_layout_data;
CHECK_OBJECT(var_scan);
tmp_subscript_value_2 = var_scan;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__20___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__20___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__20___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__20___call__,
    type_description_1,
    par_self,
    par_vk,
    par_is_press,
    var_layout_data,
    var_scan,
    var_character,
    var_is_dead
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__20___call__ == cache_frame_frame_pynput$_util$win32$$$function__20___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__20___call__);
    cache_frame_frame_pynput$_util$win32$$$function__20___call__ = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__20___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_character;
    var_character = tmp_assign_source_6;
    Py_INCREF(var_character);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_is_dead;
    var_is_dead = tmp_assign_source_7;
    Py_INCREF(var_is_dead);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_char;
CHECK_OBJECT(var_character);
tmp_dict_value_1 = var_character;
tmp_return_value = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_is_dead;
CHECK_OBJECT(var_is_dead);
tmp_dict_value_1 = var_is_dead;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_vk;
CHECK_OBJECT(par_vk);
tmp_dict_value_1 = par_vk;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__scan;
CHECK_OBJECT(var_scan);
tmp_dict_value_1 = var_scan;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_layout_data);
CHECK_OBJECT(var_layout_data);
Py_DECREF(var_layout_data);
var_layout_data = NULL;
CHECK_OBJECT(var_scan);
CHECK_OBJECT(var_scan);
Py_DECREF(var_scan);
var_scan = NULL;
CHECK_OBJECT(var_character);
CHECK_OBJECT(var_character);
Py_DECREF(var_character);
var_character = NULL;
CHECK_OBJECT(var_is_dead);
CHECK_OBJECT(var_is_dead);
Py_DECREF(var_is_dead);
var_is_dead = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_layout_data);
var_layout_data = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__21_update_layout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__21_update_layout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__21_update_layout = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__21_update_layout)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__21_update_layout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__21_update_layout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__21_update_layout = MAKE_FUNCTION_FRAME(tstate, code_objects_649b7ab4325aa7dcf4fbe323cf0fefad, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__21_update_layout->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__21_update_layout = cache_frame_frame_pynput$_util$win32$$$function__21_update_layout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__21_update_layout);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__21_update_layout) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pynput$_util$win32$$$function__21_update_layout->m_frame.f_lineno = 481;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__generate_layout);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_ass_attr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__layout, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_ass_attr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__layout_data, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "o";
    goto try_except_handler_1;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__21_update_layout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__21_update_layout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__21_update_layout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__21_update_layout,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__21_update_layout == cache_frame_frame_pynput$_util$win32$$$function__21_update_layout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__21_update_layout);
    cache_frame_frame_pynput$_util$win32$$$function__21_update_layout = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__21_update_layout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__22_char_from_scan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scan = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__22_char_from_scan;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan = MAKE_FUNCTION_FRAME(tstate, code_objects_114cb1eafc8e11b3831b1251541890be, module_pynput$_util$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__22_char_from_scan = cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__22_char_from_scan);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__22_char_from_scan) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__layout_data);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_false_false_false_tuple;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scan);
tmp_subscript_value_2 = par_scan;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__22_char_from_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__22_char_from_scan->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__22_char_from_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__22_char_from_scan,
    type_description_1,
    par_self,
    par_scan
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__22_char_from_scan == cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan);
    cache_frame_frame_pynput$_util$win32$$$function__22_char_from_scan = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__22_char_from_scan);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scan);
Py_DECREF(par_scan);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scan);
Py_DECREF(par_scan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__23__generate_layout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_layout_data = NULL;
PyObject *var_state = NULL;
PyObject *var_active_thread = NULL;
PyObject *var_layout = NULL;
PyObject *var_vks = NULL;
PyObject *var_shift = NULL;
PyObject *var_ctrl = NULL;
PyObject *var_alt = NULL;
PyObject *var_current = NULL;
PyObject *var_out = NULL;
PyObject *var_scan = NULL;
PyObject *var_vk = NULL;
PyObject *var_count = NULL;
PyObject *var_character = NULL;
PyObject *var_is_dead = NULL;
PyObject *outline_0_var_scan = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__23__generate_layout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = var_layout_data;
    var_layout_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout = MAKE_FUNCTION_FRAME(tstate, code_objects_a0aa5666bf4f66cb0df7bf0a38c4805e, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__23__generate_layout = cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__23__generate_layout);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__23__generate_layout) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_c_ubyte);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_255;
tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 509;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_state;
    var_state = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 510;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__thread_input);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 510;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
{
    PyObject *old = var_active_thread;
    var_active_thread = tmp_assign_source_7;
    Py_INCREF(var_active_thread);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_active_thread);
tmp_args_element_value_1 = var_active_thread;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 511;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__GetKeyboardLayout, tmp_args_element_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_layout;
    var_layout = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__23__generate_layout, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__23__generate_layout, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 510;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 510;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 510;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame)) {
        frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 510;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 510;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
{
PyObject *tmp_assign_source_10;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_state);
tmp_len_arg_1 = var_state;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 512;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_scan;
    outline_0_var_scan = tmp_assign_source_14;
    Py_INCREF(outline_0_var_scan);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_4 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__to_vk);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(outline_0_var_scan);
tmp_args_element_value_5 = outline_0_var_scan;
if (var_layout == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_6 = var_layout;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 512;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_10 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_0_var_scan);
outline_0_var_scan = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_scan);
outline_0_var_scan = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 512;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_vks;
    var_vks = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_pynput$_util$win32$itertools(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_itertools);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 514;
tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_product,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_73abf5b910362dff6090765cff8463fe_tuple, 0)
);

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 514;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_shift;
    var_shift = tmp_assign_source_21;
    Py_INCREF(var_shift);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_ctrl;
    var_ctrl = tmp_assign_source_22;
    Py_INCREF(var_ctrl);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_23 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_alt;
    var_alt = tmp_assign_source_23;
    Py_INCREF(var_alt);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_24;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_len_arg_2;
tmp_mult_expr_left_2 = MAKE_LIST1(tstate, mod_consts.const_tuple_none_false_tuple);
if (var_state == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_2 = var_state;
tmp_mult_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_24 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
assert(!(tmp_assign_source_24 == NULL));
{
    PyObject *old = var_current;
    var_current = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_current);
tmp_dictset_value = var_current;
if (var_layout_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 518;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_dictset_dict = var_layout_data;
CHECK_OBJECT(var_shift);
tmp_tuple_element_1 = var_shift;
tmp_dictset_key = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dictset_key, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_ctrl);
tmp_tuple_element_1 = var_ctrl;
PyTuple_SET_ITEM0(tmp_dictset_key, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_alt);
tmp_tuple_element_1 = var_alt;
PyTuple_SET_ITEM0(tmp_dictset_key, 2, tmp_tuple_element_1);
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_ass_subvalue_1;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_shift);
tmp_truth_name_1 = CHECK_IF_TRUE(var_shift);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_ass_subvalue_1 = mod_consts.const_int_pos_128;
goto condexpr_end_1;
condexpr_false_1:;
tmp_ass_subvalue_1 = const_int_0;
condexpr_end_1:;
if (var_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_ass_subscribed_1 = var_state;
tmp_expression_value_5 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SHIFT);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_ass_subvalue_2;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_ctrl);
tmp_truth_name_2 = CHECK_IF_TRUE(var_ctrl);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_ass_subvalue_2 = mod_consts.const_int_pos_128;
goto condexpr_end_2;
condexpr_false_2:;
tmp_ass_subvalue_2 = const_int_0;
condexpr_end_2:;
if (var_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_ass_subscribed_2 = var_state;
tmp_expression_value_6 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_CONTROL);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_ass_subvalue_3;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_alt);
tmp_truth_name_3 = CHECK_IF_TRUE(var_alt);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_ass_subvalue_3 = mod_consts.const_int_pos_128;
goto condexpr_end_3;
condexpr_false_3:;
tmp_ass_subvalue_3 = const_int_0;
condexpr_end_3:;
if (var_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_ass_subscribed_3 = var_state;
tmp_expression_value_7 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_ass_subscript_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_MENU);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscript_3);
Py_DECREF(tmp_ass_subscript_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_7;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_WCHAR);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_mult_expr_right_3 = mod_consts.const_int_pos_5;
tmp_called_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 526;
tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = (PyObject *)&PyEnum_Type;
if (var_vks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_7 = var_vks;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 527;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_3 = tmp_for_loop_2__for_iterator;
tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 527;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_12;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_31 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_31;
    Py_INCREF(var_scan);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_32 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_vk;
    var_vk = tmp_assign_source_32;
    Py_INCREF(var_vk);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_len_arg_3;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_9 = par_self;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__ToUnicodeEx);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(var_vk);
tmp_args_element_value_8 = var_vk;
CHECK_OBJECT(var_scan);
tmp_args_element_value_9 = var_scan;
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_byref);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 532;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_state == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 532;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_11 = var_state;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 532;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 532;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_expression_value_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_byref);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 533;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_out == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 533;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_13 = var_out;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 533;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 533;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_out == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 534;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_len_arg_3 = var_out;
tmp_args_element_value_14 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 534;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_args_element_value_15 = const_int_0;
if (var_layout == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 536;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_16 = var_layout;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 529;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_12, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_count;
    var_count = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_count);
tmp_cmp_expr_left_4 = var_count;
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
if (var_out == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 541;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_12 = var_out;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_34 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_1, 0);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_character;
    var_character = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_count);
tmp_cmp_expr_left_5 = var_count;
tmp_cmp_expr_right_5 = const_int_0;
tmp_assign_source_35 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_is_dead;
    var_is_dead = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_character);
tmp_tuple_element_2 = var_character;
tmp_ass_subvalue_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subvalue_4, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_is_dead);
tmp_tuple_element_2 = var_is_dead;
PyTuple_SET_ITEM0(tmp_ass_subvalue_4, 1, tmp_tuple_element_2);
if (var_current == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 543;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_ass_subscribed_4 = var_current;
CHECK_OBJECT(var_scan);
tmp_ass_subscript_4 = var_scan;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_4;
CHECK_OBJECT(var_is_dead);
tmp_truth_name_4 = CHECK_IF_TRUE(var_is_dead);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_len_arg_4;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 547;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_13 = par_self;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__ToUnicodeEx);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(var_vk);
tmp_args_element_value_17 = var_vk;
CHECK_OBJECT(var_scan);
tmp_args_element_value_18 = var_scan;
tmp_expression_value_14 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_14 == NULL));
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_byref);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 550;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_state == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 550;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_20 = var_state;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 550;
tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 550;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_expression_value_15 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_15 == NULL));
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_byref);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 551;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_out == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 551;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_22 = var_out;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 551;
tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 551;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_out == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 552;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_len_arg_4 = var_out;
tmp_args_element_value_23 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_21);

exception_lineno = 552;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_args_element_value_24 = const_int_0;
if (var_layout == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_23);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 554;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_25 = var_layout;
frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame.f_lineno = 547;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_21, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_3;
loop_end_3:;
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// End of try:
try_end_9:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
goto try_end_10;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_tuple_element_3;
if (var_layout == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 557;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = var_layout;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
if (var_layout_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_layout_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 557;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_layout_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__23__generate_layout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__23__generate_layout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__23__generate_layout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__23__generate_layout,
    type_description_1,
    par_self,
    var_layout_data,
    var_state,
    var_active_thread,
    var_layout,
    var_vks,
    var_shift,
    var_ctrl,
    var_alt,
    var_current,
    var_out,
    var_scan,
    var_vk,
    var_count,
    var_character,
    var_is_dead
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__23__generate_layout == cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout);
    cache_frame_frame_pynput$_util$win32$$$function__23__generate_layout = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__23__generate_layout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_layout_data);
var_layout_data = NULL;
Py_XDECREF(var_state);
var_state = NULL;
CHECK_OBJECT(var_active_thread);
CHECK_OBJECT(var_active_thread);
Py_DECREF(var_active_thread);
var_active_thread = NULL;
Py_XDECREF(var_layout);
var_layout = NULL;
Py_XDECREF(var_vks);
var_vks = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_ctrl);
var_ctrl = NULL;
Py_XDECREF(var_alt);
var_alt = NULL;
Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_vk);
var_vk = NULL;
Py_XDECREF(var_count);
var_count = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_is_dead);
var_is_dead = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_layout_data);
var_layout_data = NULL;
Py_XDECREF(var_state);
var_state = NULL;
Py_XDECREF(var_active_thread);
var_active_thread = NULL;
Py_XDECREF(var_layout);
var_layout = NULL;
Py_XDECREF(var_vks);
var_vks = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_ctrl);
var_ctrl = NULL;
Py_XDECREF(var_alt);
var_alt = NULL;
Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_vk);
var_vk = NULL;
Py_XDECREF(var_count);
var_count = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_is_dead);
var_is_dead = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__24__to_scan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_layout = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__24__to_scan;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__24__to_scan = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__24__to_scan)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__24__to_scan);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__24__to_scan == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__24__to_scan = MAKE_FUNCTION_FRAME(tstate, code_objects_dfb7a141917bf033a02f99e366810d2f, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__24__to_scan->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__24__to_scan = cache_frame_frame_pynput$_util$win32$$$function__24__to_scan;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__24__to_scan);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__24__to_scan) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__MapVirtualKeyEx);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vk);
tmp_args_element_value_1 = par_vk;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__MAPVK_VK_TO_VSC);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 568;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_layout);
tmp_args_element_value_3 = par_layout;
frame_frame_pynput$_util$win32$$$function__24__to_scan->m_frame.f_lineno = 568;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__24__to_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__24__to_scan->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__24__to_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__24__to_scan,
    type_description_1,
    par_self,
    par_vk,
    par_layout
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__24__to_scan == cache_frame_frame_pynput$_util$win32$$$function__24__to_scan) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__24__to_scan);
    cache_frame_frame_pynput$_util$win32$$$function__24__to_scan = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__24__to_scan);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__25__to_vk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scan = python_pars[1];
PyObject *par_layout = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__25__to_vk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__25__to_vk = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__25__to_vk)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__25__to_vk);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__25__to_vk == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__25__to_vk = MAKE_FUNCTION_FRAME(tstate, code_objects_88d58f3c422f9dd76213ae698091daba, module_pynput$_util$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__25__to_vk->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__25__to_vk = cache_frame_frame_pynput$_util$win32$$$function__25__to_vk;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__25__to_vk);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__25__to_vk) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__MapVirtualKeyEx);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scan);
tmp_args_element_value_1 = par_scan;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__MAPVK_VSC_TO_VK);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 579;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_layout);
tmp_args_element_value_3 = par_layout;
frame_frame_pynput$_util$win32$$$function__25__to_vk->m_frame.f_lineno = 579;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__25__to_vk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__25__to_vk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__25__to_vk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__25__to_vk,
    type_description_1,
    par_self,
    par_scan,
    par_layout
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__25__to_vk == cache_frame_frame_pynput$_util$win32$$$function__25__to_vk) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__25__to_vk);
    cache_frame_frame_pynput$_util$win32$$$function__25__to_vk = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__25__to_vk);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scan);
Py_DECREF(par_scan);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scan);
Py_DECREF(par_scan);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__26__modifier_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
nuitka_bool var_shift = NUITKA_BOOL_UNASSIGNED;
nuitka_bool var_ctrl = NUITKA_BOOL_UNASSIGNED;
nuitka_bool var_alt = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$function__26__modifier_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state)) {
    Py_XDECREF(cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state = MAKE_FUNCTION_FRAME(tstate, code_objects_5ebb380a375a0e35a61ea01f515938ca, module_pynput$_util$win32, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state->m_type_description == NULL);
frame_frame_pynput$_util$win32$$$function__26__modifier_state = cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$function__26__modifier_state);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$function__26__modifier_state) == 2);

// Framed code:
{
nuitka_bool tmp_assign_source_1;
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__GetAsyncKeyState);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SHIFT);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__26__modifier_state->m_frame.f_lineno = 587;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_32768;
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_shift = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
PyObject *tmp_value_value_2;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__GetAsyncKeyState);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CONTROL);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__26__modifier_state->m_frame.f_lineno = 588;
tmp_bitand_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_bitand_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_32768;
tmp_value_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_left_2);
Py_DECREF(tmp_bitand_expr_left_2);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_ctrl = tmp_assign_source_2;
}
{
nuitka_bool tmp_assign_source_3;
PyObject *tmp_value_value_3;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__GetAsyncKeyState);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_pynput$_util$win32$VK(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MENU);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32$$$function__26__modifier_state->m_frame.f_lineno = 589;
tmp_bitand_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_bitand_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_32768;
tmp_value_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
CHECK_OBJECT(tmp_bitand_expr_left_3);
Py_DECREF(tmp_bitand_expr_left_3);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "obbb";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_alt = tmp_assign_source_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$function__26__modifier_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$function__26__modifier_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$function__26__modifier_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$function__26__modifier_state,
    type_description_1,
    par_self,
    (int)var_shift,
    (int)var_ctrl,
    (int)var_alt
);


// Release cached frame if used for exception.
if (frame_frame_pynput$_util$win32$$$function__26__modifier_state == cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state);
    cache_frame_frame_pynput$_util$win32$$$function__26__modifier_state = NULL;
}

assertFrameObject(frame_frame_pynput$_util$win32$$$function__26__modifier_state);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
assert(var_shift != NUITKA_BOOL_UNASSIGNED);
tmp_tuple_element_1 = (var_shift == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
assert(var_ctrl != NUITKA_BOOL_UNASSIGNED);
tmp_tuple_element_1 = (var_ctrl == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
assert(var_alt != NUITKA_BOOL_UNASSIGNED);
tmp_tuple_element_1 = (var_alt == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
assert(var_shift != NUITKA_BOOL_UNASSIGNED);
var_shift = NUITKA_BOOL_UNASSIGNED;
assert(var_ctrl != NUITKA_BOOL_UNASSIGNED);
var_ctrl = NUITKA_BOOL_UNASSIGNED;
assert(var_alt != NUITKA_BOOL_UNASSIGNED);
var_alt = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

var_shift = NUITKA_BOOL_UNASSIGNED;
var_ctrl = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$_util$win32$$$function__27__thread_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(par_self);
tmp_return_value = MAKE_GENERATOR_pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_locals *generator_heap = (struct pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1c93e7ba30a6703c4b6e6d08630d6bde, module_pynput$_util$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_pynput$_util$win32$GetCurrentThreadId(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_GetCurrentThreadId);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 595;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 595;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 595;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 595;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[0]
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_context,
        module_pynput$_util$win32,
        mod_consts.const_str_plain__thread_input,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7,
#endif
        code_objects_1c93e7ba30a6703c4b6e6d08630d6bde,
        closure,
        1,
#if 1
        sizeof(struct pynput$_util$win32$$$function__27__thread_input$$$genobj__1__thread_input_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__10__handler(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__10__handler,
        mod_consts.const_str_plain__handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4e18ce4257e9acc4f9a01e8d59131d67,
#endif
        code_objects_2dfaab1fb4c83ad84cda43055c67bccf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__11_suppress_event(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__11_suppress_event,
        mod_consts.const_str_plain_suppress_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_303b0f62b2107fd47ecc8884eb6092f9,
#endif
        code_objects_2fa6e456fba1a195687c73a22a7011cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_7aa5a718d0a91f74a0759f1745a8c959,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__12__run(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__12__run,
        mod_consts.const_str_plain__run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_52950b91ae40aa76116786c50034770c,
#endif
        code_objects_739ae8679541f7b6560f4926266768ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__13__stop_platform(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__13__stop_platform,
        mod_consts.const_str_plain__stop_platform,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_10f7be00f4683b50e63900254e9ee709,
#endif
        code_objects_11b870163713ddf31aa90c31e5ce4331,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__14__handler(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__14__handler,
        mod_consts.const_str_plain__handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3ea547ca58a7e0a8cc54b75e79979654,
#endif
        code_objects_b1c202811f3fb9af29b9995948271b04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_80f597bde5c9593f6f73bdd21493d78c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__15__convert(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__15__convert,
        mod_consts.const_str_plain__convert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be1cf57dd073d175f71c9995385c65dc,
#endif
        code_objects_e5e30965d5b4a86fce3fd22d42092cdc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_a0cf71b248456a7115a4cbd8410895c4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__16__process(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__16__process,
        mod_consts.const_str_plain__process,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_541a151d954143e0b7e5395cfd5d7197,
#endif
        code_objects_dbcb94e17bc4ad823cfffebfbd99bc05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_e231b667140e8c87b92065f41ffdeddd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__17__handle_message(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__17__handle_message,
        mod_consts.const_str_plain__handle_message,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4712d9e5c5ca95451b2973c2639729aa,
#endif
        code_objects_8dad21aa2e6985c6a25250152800bff3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_aee40de48f1c39417466bc71fdcd8e80,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__18__on_notification(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__18__on_notification,
        mod_consts.const_str_plain__on_notification,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c93601c21435cf9bb0f6c4dc144ac78c,
#endif
        code_objects_ea0676ed459244f517a5885472d018a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_e6d1404a61676d69b8c259cadbc48808,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__19___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ded7feb760690fd6525111af11cb3674,
#endif
        code_objects_b63730a1636acce91854c63d1906855c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8fb59e74797bec724b17556a36734ab8,
#endif
        code_objects_086ea5b96d569cde3a521892e9fe266c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__20___call__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__20___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27a2a70a7fc0ef4152e4457fd2d41a87,
#endif
        code_objects_d5e25d3e02e998dad02d8badafaabfe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_68a02e9c9f9f9f82b6c91f47486f3a2a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__21_update_layout(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__21_update_layout,
        mod_consts.const_str_plain_update_layout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6e9f86540cfdae3e1f1c1ac9869f268,
#endif
        code_objects_649b7ab4325aa7dcf4fbe323cf0fefad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_62683a258f028f2834fe5fafef4f13d2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__22_char_from_scan(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__22_char_from_scan,
        mod_consts.const_str_plain_char_from_scan,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d405374917e837e6fcd8b34b75b0fa83,
#endif
        code_objects_114cb1eafc8e11b3831b1251541890be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_e24ba24751eec2165a17ed93eed57b58,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__23__generate_layout(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__23__generate_layout,
        mod_consts.const_str_plain__generate_layout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c75b11b61ae4a2de86c16aa7fcc4a955,
#endif
        code_objects_a0aa5666bf4f66cb0df7bf0a38c4805e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_aa0b9411bc75f57860d2a635be2fd298,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__24__to_scan(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__24__to_scan,
        mod_consts.const_str_plain__to_scan,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dffa5bb1db53a1dcb76322a2d374165e,
#endif
        code_objects_dfb7a141917bf033a02f99e366810d2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_526f9861ee0e4742344dd8645bb924b0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__25__to_vk(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__25__to_vk,
        mod_consts.const_str_plain__to_vk,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5732d4e6b2b7ca08bf620b3348f3c80f,
#endif
        code_objects_88d58f3c422f9dd76213ae698091daba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_cfe0dac5139b6a796c167f09389e0536,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__26__modifier_state(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__26__modifier_state,
        mod_consts.const_str_plain__modifier_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6767559e2781f1d5aafd46b26ea4dd7,
#endif
        code_objects_5ebb380a375a0e35a61ea01f515938ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_fe4226a3dca2ff2a16dac1fa46cc31ac,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__27__thread_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__27__thread_input,
        mod_consts.const_str_plain__thread_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9a2f4874538f1c75d210ed4707706c7,
#endif
        code_objects_1c93e7ba30a6703c4b6e6d08630d6bde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_a9cd14b4590aa69d536129ad6dab4b20,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__2___iter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__2___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5d14f8b80666d29cf3b886667c81b432,
#endif
        code_objects_fb556f0aec541bc1a240ee423cf94a2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_245d21ba41b28057d4981ee1a1ecd095,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__3_start(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__3_start,
        mod_consts.const_str_plain_start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_083594797c0b951159f4d93fcff01548,
#endif
        code_objects_861c4fe3f82371c1188cd8553277eb9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_64b21e73b0d4e79b242380bf2f217dc4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__4_stop(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__4_stop,
        mod_consts.const_str_plain_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33440f257ea30d0c607d4ea09addc094,
#endif
        code_objects_eda32f687198a92f154a030e3392896b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_3c9fe704995913fc861fe6f90789ad8e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__5_post(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__5_post,
        mod_consts.const_str_plain_post,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e89896981621bc77dab9da3bf5c4b760,
#endif
        code_objects_dbbdcb54fbb254ffe19004bfbc58dcce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        mod_consts.const_str_digest_5cf7f141dd847b1722b77a608706b704,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__6___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3bdc82f8fb6a457d45e7626a38f6c082,
#endif
        code_objects_a04f9331cc134deb3a4363334abd3763,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__7_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_94038b6374a80b2801289f608bebc63f,
#endif
        code_objects_b8de6acce0800a476d8b32f00338324b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__8___enter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__8___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_10be8cde42bf0b4198956d0fbd1edd76,
#endif
        code_objects_5234cfffec4e8e6ada4d7460d5b7c67b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$_util$win32$$$function__9___exit__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$_util$win32$$$function__9___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_42c6352c98630d1c5b5c555f382f2a3f,
#endif
        code_objects_ff310e2d2b42cc24a3d31391e49cfb20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$_util$win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pynput$_util$win32[] = {
impl_pynput$_util$win32$$$function__1___init__,
impl_pynput$_util$win32$$$function__2___iter__,
impl_pynput$_util$win32$$$function__3_start,
impl_pynput$_util$win32$$$function__4_stop,
impl_pynput$_util$win32$$$function__5_post,
impl_pynput$_util$win32$$$function__6___init__,
impl_pynput$_util$win32$$$function__8___enter__,
impl_pynput$_util$win32$$$function__9___exit__,
impl_pynput$_util$win32$$$function__10__handler,
impl_pynput$_util$win32$$$function__11_suppress_event,
impl_pynput$_util$win32$$$function__12__run,
impl_pynput$_util$win32$$$function__13__stop_platform,
impl_pynput$_util$win32$$$function__14__handler,
impl_pynput$_util$win32$$$function__15__convert,
impl_pynput$_util$win32$$$function__16__process,
impl_pynput$_util$win32$$$function__17__handle_message,
impl_pynput$_util$win32$$$function__18__on_notification,
impl_pynput$_util$win32$$$function__19___init__,
impl_pynput$_util$win32$$$function__20___call__,
impl_pynput$_util$win32$$$function__21_update_layout,
impl_pynput$_util$win32$$$function__22_char_from_scan,
impl_pynput$_util$win32$$$function__23__generate_layout,
impl_pynput$_util$win32$$$function__24__to_scan,
impl_pynput$_util$win32$$$function__25__to_vk,
impl_pynput$_util$win32$$$function__26__modifier_state,
impl_pynput$_util$win32$$$function__27__thread_input,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$_util$win32);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pynput$_util$win32,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_pynput$_util$win32,
        sizeof(function_table_pynput$_util$win32) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "pynput._util.win32";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$_util$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$_util$win32");

    // Store the module for future use.
    module_pynput$_util$win32 = module;

    moduledict_pynput$_util$win32 = MODULE_DICT(module_pynput$_util$win32);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule(tstate);

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$_util$win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$_util$win32: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$_util$win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput._util.win32" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$_util$win32\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // For Python 3.11 standalone modules, package "__path__" is inserted by the
    // loader before module code runs. Pre-seed "__compiled__" for non-packages
    // to keep their dangerous dict slots aligned with packages.
#if PYTHON_VERSION >= 0x3b0 && PYTHON_VERSION < 0x3c0 && _NUITKA_STANDALONE_MODE && !0
    UPDATE_STRING_DICT0(
        moduledict_pynput$_util$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$_util$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$_util$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$_util$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$_util$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$_util$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$_util$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *tmp_SystemHook$class_container$class_creation_1__bases = NULL;
PyObject *tmp_SystemHook$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_SystemHook$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_SystemHook$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_SystemHook$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_pynput$_util$win32$$$class__4_INPUT_union_100 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_pynput$_util$win32$$$class__5_INPUT_106 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__5_INPUT_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_pynput$_util$win32$$$class__6_MessageLoop_138 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_pynput$_util$win32$$$class__7_SystemHook_234 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__7_SystemHook_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
PyObject *locals_pynput$_util$win32$$$class__8_SuppressException_264 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_pynput$_util$win32$$$class__9_ListenerMixin_316 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_pynput$_util$win32$$$class__10_KeyTranslator_429 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_3e6246d185e9a94b1081cba055cc3225;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$_util$win32 = MAKE_MODULE_FRAME(code_objects_623ba928bf82094c6f4f70bb38cc7ffb, module_pynput$_util$win32);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32);
assert(Py_REFCNT(frame_frame_pynput$_util$win32) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$_util$win32$__spec__(tstate);
assert(!(tmp_ass_attr_target_1 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_origin, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = Py_True;
tmp_ass_attr_target_2 = module_var_accessor_pynput$_util$win32$__spec__(tstate);
assert(!(tmp_ass_attr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_has_location, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$_util$win32;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 27;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pynput$_util$win32;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 29;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pynput$_util$win32;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 30;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$_util$win32,
        mod_consts.const_str_plain_windll,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_windll);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll, tmp_assign_source_10);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_11);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pynput$_util$win32;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AbstractListener_str_plain_win32_vks_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 34;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_2 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$_util$win32,
        mod_consts.const_str_plain_AbstractListener,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AbstractListener);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pynput$_util$win32,
        mod_consts.const_str_plain_win32_vks,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_win32_vks);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK, tmp_assign_source_14);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_LPDWORD);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DWORD);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 39;
tmp_ass_attr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_ass_attr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_LPDWORD, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_15, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_16 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_5 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_18 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_18;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_MOUSEINPUT;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 42;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_19;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_8 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 42;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 42;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
branch_end_2:;
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_34a8dac1bb941e5acd780b2d442f05e9;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_MOUSEINPUT;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_42;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2 = MAKE_CLASS_FRAME(tstate, code_objects_5dc42d258288e6395955fa13bc4d2f20, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2, locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_MOVE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_LEFTDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_LEFTUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_RIGHTDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_RIGHTUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_MIDDLEDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_MIDDLEUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_XDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_XUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_2048;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_WHEEL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_HWHEEL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_32768;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_ABSOLUTE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_XBUTTON1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain_XBUTTON2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_plain_dx;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_11 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_LONG);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 6);
{
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_tuple_element_8;
PyObject *tmp_tuple_element_9;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_5 = mod_consts.const_str_plain_dy;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
tmp_expression_value_12 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_LONG);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
tmp_tuple_element_6 = mod_consts.const_str_plain_mouseData;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
tmp_expression_value_13 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
tmp_tuple_element_7 = mod_consts.const_str_plain_dwFlags;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
tmp_expression_value_14 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
tmp_tuple_element_8 = mod_consts.const_str_plain_time;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
tmp_expression_value_15 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
tmp_tuple_element_9 = mod_consts.const_str_plain_dwExtraInfo;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
tmp_expression_value_16 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_c_void_p);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__1_MOUSEINPUT_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
branch_no_4:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_MOUSEINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_21 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42);
locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42);
locals_pynput$_util$win32$$$class__1_MOUSEINPUT_42 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 42;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_18 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_KEYBDINPUT;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 71;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_21 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_22, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_23;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_23 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_6;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 71;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 71;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_28;
}
branch_end_5:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_98c2865fc4aac4596ea44d74895985ce;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_KEYBDINPUT;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_71;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3 = MAKE_CLASS_FRAME(tstate, code_objects_86c19ebccec787722da35316a21f659f, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3, locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain_EXTENDEDKEY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain_KEYUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain_SCANCODE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain_UNICODE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_list_element_2;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = mod_consts.const_str_plain_wVk;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
tmp_expression_value_24 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_list_element_2);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_14;
PyObject *tmp_tuple_element_15;
PyObject *tmp_tuple_element_16;
PyObject *tmp_tuple_element_17;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
tmp_tuple_element_14 = mod_consts.const_str_plain_wScan;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
tmp_expression_value_25 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
tmp_tuple_element_15 = mod_consts.const_str_plain_dwFlags;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
tmp_expression_value_26 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
tmp_tuple_element_16 = mod_consts.const_str_plain_time;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
tmp_expression_value_27 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
tmp_tuple_element_17 = mod_consts.const_str_plain_dwExtraInfo;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
tmp_expression_value_28 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_c_void_p);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__2_KEYBDINPUT_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
branch_no_7:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_KEYBDINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_29 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71);
locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71);
locals_pynput$_util$win32$$$class__2_KEYBDINPUT_71 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 71;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_29;
tmp_expression_value_29 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_29 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_31, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_30 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_HARDWAREINPUT;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 88;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_33 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_34;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_34, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_9;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 88;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_36;
}
branch_end_8:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_2afb8af9c2d4a96f31461ad23a7f2f41;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_HARDWAREINPUT;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4 = MAKE_CLASS_FRAME(tstate, code_objects_484834fe959583fb95e0079102d606b6, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4, locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4) == 2);

// Framed code:
{
PyObject *tmp_list_element_3;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = mod_consts.const_str_plain_uMsg;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_21);
tmp_expression_value_36 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_list_element_3);
goto frame_exception_exit_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_22;
PyObject *tmp_tuple_element_23;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
tmp_tuple_element_22 = mod_consts.const_str_plain_wParamL;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
tmp_expression_value_37 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_list_element_3);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
tmp_tuple_element_23 = mod_consts.const_str_plain_wParamH;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_38;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
tmp_expression_value_38 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_list_element_3);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
}
goto list_build_no_exception_3;
// Exception handling pass through code for list_build:
list_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for list_build:
list_build_no_exception_3:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__3_HARDWAREINPUT_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
branch_no_10:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_HARDWAREINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_11;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_37 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88);
locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88);
locals_pynput$_util$win32$$$class__3_HARDWAREINPUT_88 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 88;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT, tmp_assign_source_37);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_39;
tmp_expression_value_39 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_Union);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_40 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_INPUT_union;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 100;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_43 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_44;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_44, tmp_name_value_11, tmp_default_value_4);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_45;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_45 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_12;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 100;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_44;
}
branch_end_11:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_pynput$_util$win32$$$class__4_INPUT_union_100 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_9344225576960d1133c1d02dd395ede5;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_INPUT_union;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_100;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5 = MAKE_CLASS_FRAME(tstate, code_objects_f3c569ba8e84ee31268ebb6ff68c28e8, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5, locals_pynput$_util$win32$$$class__4_INPUT_union_100);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5) == 2);

// Framed code:
{
PyObject *tmp_list_element_4;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = mod_consts.const_str_plain_mi;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = PyObject_GetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_tuple_element_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_27 = module_var_accessor_pynput$_util$win32$MOUSEINPUT(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "o";
    goto tuple_build_exception_19;
}
        Py_INCREF(tmp_tuple_element_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_19;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_27);
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_list_element_4);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_28;
PyObject *tmp_tuple_element_29;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
tmp_tuple_element_28 = mod_consts.const_str_plain_ki;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = PyObject_GetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain_KEYBDINPUT);

if (tmp_tuple_element_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_28 = module_var_accessor_pynput$_util$win32$KEYBDINPUT(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "o";
    goto tuple_build_exception_20;
}
        Py_INCREF(tmp_tuple_element_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_20;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_28);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
tmp_tuple_element_29 = mod_consts.const_str_plain_hi;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = PyObject_GetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain_HARDWAREINPUT);

if (tmp_tuple_element_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_29 = module_var_accessor_pynput$_util$win32$HARDWAREINPUT(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HARDWAREINPUT);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "o";
    goto tuple_build_exception_21;
}
        Py_INCREF(tmp_tuple_element_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_21;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_29);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
}
goto list_build_no_exception_4;
// Exception handling pass through code for list_build:
list_build_exception_4:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_5;
// Finished with no exception for list_build:
list_build_no_exception_4:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__4_INPUT_union_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__4_INPUT_union_100, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
branch_no_13:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_INPUT_union;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_4 = locals_pynput$_util$win32$$$class__4_INPUT_union_100;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_14;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_45 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_pynput$_util$win32$$$class__4_INPUT_union_100);
locals_pynput$_util$win32$$$class__4_INPUT_union_100 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__4_INPUT_union_100);
locals_pynput$_util$win32$$$class__4_INPUT_union_100 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 100;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union, tmp_assign_source_45);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_46;
tmp_expression_value_46 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_47 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_19;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_condition_result_19 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_49;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_49 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_INPUT;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 106;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_50 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_51;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_13, tmp_default_value_5);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_52;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_52 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 106;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 106;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_15:;
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_52;
}
branch_end_14:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_pynput$_util$win32$$$class__5_INPUT_106 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_f9523f7bf5f6066513f231b1bee6f322;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_INPUT;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_106;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
frame_frame_pynput$_util$win32$$$class__5_INPUT_6 = MAKE_CLASS_FRAME(tstate, code_objects_fb9d1136889babba5f04a0aa8e191421, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__5_INPUT_6, locals_pynput$_util$win32$$$class__5_INPUT_106);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__5_INPUT_6);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__5_INPUT_6) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain_MOUSE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain_KEYBOARD, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain_HARDWARE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_list_element_5;
PyObject *tmp_tuple_element_33;
tmp_tuple_element_33 = const_str_plain_type;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_53;
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_33);
tmp_expression_value_53 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_53 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_33);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_list_element_5);
goto frame_exception_exit_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_34;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
tmp_tuple_element_34 = mod_consts.const_str_plain_value;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = PyObject_GetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain_INPUT_union);

if (tmp_tuple_element_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_34 = module_var_accessor_pynput$_util$win32$INPUT_union(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto tuple_build_exception_24;
}
        Py_INCREF(tmp_tuple_element_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_24;
    }
}

PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_34);
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_list_element_5);
goto list_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
}
goto list_build_no_exception_5;
// Exception handling pass through code for list_build:
list_build_exception_5:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_6;
// Finished with no exception for list_build:
list_build_no_exception_5:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__5_INPUT_6);


goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__5_INPUT_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__5_INPUT_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__5_INPUT_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__5_INPUT_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__5_INPUT_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__5_INPUT_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__5_INPUT_106, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
branch_no_16:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_14;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_14 = mod_consts.const_str_plain_INPUT;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_5__bases;
tmp_dict_arg_value_5 = locals_pynput$_util$win32$$$class__5_INPUT_106;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_14, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_17;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_53 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_pynput$_util$win32$$$class__5_INPUT_106);
locals_pynput$_util$win32$$$class__5_INPUT_106 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__5_INPUT_106);
locals_pynput$_util$win32$$$class__5_INPUT_106 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 106;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT, tmp_assign_source_53);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_element_value_2;
tmp_expression_value_54 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_54 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pynput$_util$win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 118;

    goto frame_exception_exit_1;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 118;
tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_LPINPUT, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
tmp_expression_value_56 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_user32);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_assign_source_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_VkKeyScanW);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan, tmp_assign_source_56);
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_57;
PyObject *tmp_ass_attr_target_4;
tmp_expression_value_57 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_WCHAR);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_4, 0, tmp_tuple_element_35);
tmp_ass_attr_target_4 = module_var_accessor_pynput$_util$win32$VkKeyScan(tstate);
assert(!(tmp_ass_attr_target_4 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
tmp_expression_value_59 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_user32);
if (tmp_expression_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_assign_source_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_MapVirtualKeyW);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey, tmp_assign_source_57);
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_60;
PyObject *tmp_ass_attr_target_5;
tmp_expression_value_60 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_61;
PyTuple_SET_ITEM(tmp_ass_attr_value_5, 0, tmp_tuple_element_36);
tmp_expression_value_61 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_61 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_5, 1, tmp_tuple_element_36);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_ass_attr_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_ass_attr_target_5 = module_var_accessor_pynput$_util$win32$MapVirtualKey(tstate);
assert(!(tmp_ass_attr_target_5 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
tmp_ass_attr_value_6 = const_int_0;
tmp_ass_attr_target_6 = module_var_accessor_pynput$_util$win32$MapVirtualKey(tstate);
if (unlikely(tmp_ass_attr_target_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_ass_attr_target_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_MAPVK_VK_TO_VSC, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
tmp_expression_value_63 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_user32);
if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_assign_source_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_SendInput);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput, tmp_assign_source_58);
}
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_64;
PyObject *tmp_ass_attr_target_7;
tmp_expression_value_64 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_64 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_ass_attr_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_65;
PyObject *tmp_expression_value_66;
PyTuple_SET_ITEM(tmp_ass_attr_value_7, 0, tmp_tuple_element_37);
tmp_expression_value_65 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_65 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_7, 1, tmp_tuple_element_37);
tmp_expression_value_66 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_7, 2, tmp_tuple_element_37);
}
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_ass_attr_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_ass_attr_target_7 = module_var_accessor_pynput$_util$win32$SendInput(tstate);
assert(!(tmp_ass_attr_target_7 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_7);
CHECK_OBJECT(tmp_ass_attr_value_7);
Py_DECREF(tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_expression_value_67;
PyObject *tmp_expression_value_68;
tmp_expression_value_68 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_GetCurrentThreadId);
CHECK_OBJECT(tmp_expression_value_67);
Py_DECREF(tmp_expression_value_67);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCurrentThreadId, tmp_assign_source_59);
}
{
PyObject *tmp_ass_attr_value_8;
PyObject *tmp_expression_value_69;
PyObject *tmp_ass_attr_target_8;
tmp_expression_value_69 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_69 == NULL));
tmp_ass_attr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_DWORD);
if (tmp_ass_attr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_8 = module_var_accessor_pynput$_util$win32$GetCurrentThreadId(tstate);
assert(!(tmp_ass_attr_target_8 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_8, mod_consts.const_str_plain_restype, tmp_ass_attr_value_8);
CHECK_OBJECT(tmp_ass_attr_value_8);
Py_DECREF(tmp_ass_attr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_6;
tmp_direct_call_arg1_6 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_70 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_23;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_condition_result_23 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_72;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_tuple_element_38 = mod_consts.const_str_plain_MessageLoop;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 138;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_73 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_74;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_74, tmp_name_value_15, tmp_default_value_6);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_75;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_75 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_39);
}
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 138;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 138;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_18:;
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_64;
}
branch_end_17:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_pynput$_util$win32$$$class__6_MessageLoop_138 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_500279ca0f3fd62cbbdce5932f05458f;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_MessageLoop;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_138;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7 = MAKE_CLASS_FRAME(tstate, code_objects_34f88dd45c9f086d53a4dabe52d44040, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7, locals_pynput$_util$win32$$$class__6_MessageLoop_138);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_1025;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_WM_STOP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_76;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_77;
tmp_expression_value_76 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_76 == NULL));
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_expression_value_77 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_77 == NULL));
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_MSG);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7->m_frame.f_lineno = 144;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__LPMSG, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
tmp_expression_value_79 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_windll);

if (tmp_expression_value_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_79 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_79);
Py_DECREF(tmp_expression_value_79);
if (tmp_expression_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_GetMessageW);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__GetMessage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_attr_value_9;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_80;
PyObject *tmp_ass_attr_target_9;
tmp_expression_value_80 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_80 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_attr_value_9 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_81;
PyObject *tmp_expression_value_82;
PyObject *tmp_expression_value_83;
PyTuple_SET_ITEM(tmp_ass_attr_value_9, 0, tmp_tuple_element_40);
tmp_expression_value_81 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_81 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_HWND);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_9, 1, tmp_tuple_element_40);
tmp_expression_value_82 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_82 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_9, 2, tmp_tuple_element_40);
tmp_expression_value_83 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_83 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_9, 3, tmp_tuple_element_40);
}
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_ass_attr_value_9);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_ass_attr_target_9 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__GetMessage);

if (unlikely(tmp_ass_attr_target_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GetMessage);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_attr_target_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_9);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_9, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_9);
CHECK_OBJECT(tmp_ass_attr_value_9);
Py_DECREF(tmp_ass_attr_value_9);
CHECK_OBJECT(tmp_ass_attr_target_9);
Py_DECREF(tmp_ass_attr_target_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_expression_value_84;
PyObject *tmp_expression_value_85;
tmp_expression_value_85 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_windll);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_expression_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_PeekMessageW);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__PeekMessage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_attr_value_10;
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_86;
PyObject *tmp_ass_attr_target_10;
tmp_expression_value_86 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_86 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_attr_value_10 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_87;
PyObject *tmp_expression_value_88;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyTuple_SET_ITEM(tmp_ass_attr_value_10, 0, tmp_tuple_element_41);
tmp_expression_value_87 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_87 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_HWND);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_10, 1, tmp_tuple_element_41);
tmp_expression_value_88 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_88 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_10, 2, tmp_tuple_element_41);
tmp_expression_value_89 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_89 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_10, 3, tmp_tuple_element_41);
tmp_expression_value_90 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_10, 4, tmp_tuple_element_41);
}
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_ass_attr_value_10);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
tmp_ass_attr_target_10 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__PeekMessage);

if (unlikely(tmp_ass_attr_target_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PeekMessage);

exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_attr_target_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_10);

exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_10, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_10);
CHECK_OBJECT(tmp_ass_attr_value_10);
Py_DECREF(tmp_ass_attr_value_10);
CHECK_OBJECT(tmp_ass_attr_target_10);
Py_DECREF(tmp_ass_attr_target_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_expression_value_91;
PyObject *tmp_expression_value_92;
tmp_expression_value_92 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_windll);

if (tmp_expression_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_92 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_expression_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_PostThreadMessageW);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__PostThreadMessage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_attr_value_11;
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_93;
PyObject *tmp_ass_attr_target_11;
tmp_expression_value_93 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_93 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_attr_value_11 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_94;
PyObject *tmp_expression_value_95;
PyObject *tmp_expression_value_96;
PyTuple_SET_ITEM(tmp_ass_attr_value_11, 0, tmp_tuple_element_42);
tmp_expression_value_94 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_94 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_11, 1, tmp_tuple_element_42);
tmp_expression_value_95 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_95 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_WPARAM);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_11, 2, tmp_tuple_element_42);
tmp_expression_value_96 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_LPARAM);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_11, 3, tmp_tuple_element_42);
}
goto tuple_build_no_exception_30;
// Exception handling pass through code for tuple_build:
tuple_build_exception_30:;
Py_DECREF(tmp_ass_attr_value_11);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_30:;
tmp_ass_attr_target_11 = PyObject_GetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain__PostThreadMessage);

if (unlikely(tmp_ass_attr_target_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PostThreadMessage);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_attr_target_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_11);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_11, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_11);
CHECK_OBJECT(tmp_ass_attr_value_11);
Py_DECREF(tmp_ass_attr_value_11);
CHECK_OBJECT(tmp_ass_attr_target_11);
Py_DECREF(tmp_ass_attr_target_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_PM_NOREMOVE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__2___iter__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__3_start(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__4_stop(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__5_post(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain_post, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7);


goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__6_MessageLoop_7);


// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__threadid_str_plain__event_str_plain_thread_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__6_MessageLoop_138, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
branch_no_19:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_12;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_12;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_class_decl_dict_value_6;
PyObject *tmp_metaclass_args_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_metaclass_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_MessageLoop;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_6__bases;
tmp_dict_arg_value_6 = locals_pynput$_util$win32$$$class__6_MessageLoop_138;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_decl_dict_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
tmp_metaclass_args_6 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_12, tmp_dict_arg_value_6);
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_metaclass_value_12, tmp_metaclass_args_6, tmp_class_decl_dict_value_6);
CHECK_OBJECT(tmp_metaclass_args_6);
Py_DECREF(tmp_metaclass_args_6);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_20;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_65 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_pynput$_util$win32$$$class__6_MessageLoop_138);
locals_pynput$_util$win32$$$class__6_MessageLoop_138 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__6_MessageLoop_138);
locals_pynput$_util$win32$$$class__6_MessageLoop_138 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 138;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageLoop, tmp_assign_source_65);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_direct_call_arg1_7;
tmp_direct_call_arg1_7 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_67 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_26;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_condition_result_26 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_69 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_69;
}
{
bool tmp_condition_result_27;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_condition_result_27 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_tuple_element_43 = mod_consts.const_str_plain_SystemHook;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 234;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_70;
}
{
bool tmp_condition_result_28;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_28 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_44;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_17, tmp_default_value_7);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto tuple_build_exception_31;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_44);
}
goto tuple_build_no_exception_31;
// Exception handling pass through code for tuple_build:
tuple_build_exception_31:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_31:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_21;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 234;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 234;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_21:;
goto branch_end_20;
branch_no_20:;
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_71;
}
branch_end_20:;
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_pynput$_util$win32$$$class__7_SystemHook_234 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_93e11d1d8bdfee6391e9e7e0ddd6f7c0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_SystemHook;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_234;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
frame_frame_pynput$_util$win32$$$class__7_SystemHook_8 = MAKE_CLASS_FRAME(tstate, code_objects_f3ea76edecae1cd5db0848f7ec0b905b, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8, locals_pynput$_util$win32$$$class__7_SystemHook_234);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__7_SystemHook_8);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_HC_ACTION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_103;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_104;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_106;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_107;
tmp_expression_value_103 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_103 == NULL));
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain_WINFUNCTYPE);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_expression_value_104 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_104 == NULL));
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_LPARAM);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_expression_value_105 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_105 == NULL));
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain_c_int32);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_expression_value_106 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_106 == NULL));
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain_WPARAM);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_expression_value_107 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_107 == NULL));
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_LPARAM);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame.f_lineno = 240;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__HOOKPROC, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_expression_value_108;
PyObject *tmp_expression_value_109;
tmp_expression_value_109 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_windll);

if (tmp_expression_value_109 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_109 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_109 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_109 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_109);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_109);
Py_DECREF(tmp_expression_value_109);
if (tmp_expression_value_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain_SetWindowsHookExW);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__SetWindowsHookEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_attr_value_12;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_110;
PyObject *tmp_ass_attr_target_12;
tmp_expression_value_110 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_110 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_attr_value_12 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_111;
PyObject *tmp_expression_value_112;
PyTuple_SET_ITEM(tmp_ass_attr_value_12, 0, tmp_tuple_element_45);
tmp_tuple_element_45 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__HOOKPROC);

if (unlikely(tmp_tuple_element_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HOOKPROC);

exception_lineno = 247;
type_description_2 = "o";
    goto tuple_build_exception_32;
}

if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_12, 1, tmp_tuple_element_45);
tmp_expression_value_111 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_111 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain_HINSTANCE);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_12, 2, tmp_tuple_element_45);
tmp_expression_value_112 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_112 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_12, 3, tmp_tuple_element_45);
}
goto tuple_build_no_exception_32;
// Exception handling pass through code for tuple_build:
tuple_build_exception_32:;
Py_DECREF(tmp_ass_attr_value_12);
goto frame_exception_exit_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_32:;
tmp_ass_attr_target_12 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__SetWindowsHookEx);

if (unlikely(tmp_ass_attr_target_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SetWindowsHookEx);

exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_attr_target_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_12);

exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_12, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_12);
CHECK_OBJECT(tmp_ass_attr_value_12);
Py_DECREF(tmp_ass_attr_value_12);
CHECK_OBJECT(tmp_ass_attr_target_12);
Py_DECREF(tmp_ass_attr_target_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_expression_value_113;
PyObject *tmp_expression_value_114;
tmp_expression_value_114 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_windll);

if (tmp_expression_value_114 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_114 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_114 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_114);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_expression_value_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts.const_str_plain_UnhookWindowsHookEx);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__UnhookWindowsHookEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_attr_value_13;
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_115;
PyObject *tmp_ass_attr_target_13;
tmp_expression_value_115 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_115 == NULL));
tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts.const_str_plain_HHOOK);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_attr_value_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_13, 0, tmp_tuple_element_46);
tmp_ass_attr_target_13 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__UnhookWindowsHookEx);

if (unlikely(tmp_ass_attr_target_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UnhookWindowsHookEx);

exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_attr_target_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_13);

exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_13, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_13);
CHECK_OBJECT(tmp_ass_attr_value_13);
Py_DECREF(tmp_ass_attr_value_13);
CHECK_OBJECT(tmp_ass_attr_target_13);
Py_DECREF(tmp_ass_attr_target_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_expression_value_116;
PyObject *tmp_expression_value_117;
tmp_expression_value_117 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_windll);

if (tmp_expression_value_117 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_117 = module_var_accessor_pynput$_util$win32$windll(tstate);
if (unlikely(tmp_expression_value_117 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_117 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_117);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_117);
Py_DECREF(tmp_expression_value_117);
if (tmp_expression_value_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain_CallNextHookEx);
CHECK_OBJECT(tmp_expression_value_116);
Py_DECREF(tmp_expression_value_116);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__CallNextHookEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_attr_value_14;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_118;
PyObject *tmp_ass_attr_target_14;
tmp_expression_value_118 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_118 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts.const_str_plain_HHOOK);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_attr_value_14 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_119;
PyObject *tmp_expression_value_120;
PyObject *tmp_expression_value_121;
PyTuple_SET_ITEM(tmp_ass_attr_value_14, 0, tmp_tuple_element_47);
tmp_expression_value_119 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_119 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_14, 1, tmp_tuple_element_47);
tmp_expression_value_120 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_120 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts.const_str_plain_WPARAM);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_14, 2, tmp_tuple_element_47);
tmp_expression_value_121 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_121 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts.const_str_plain_LPARAM);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_2 = "o";
    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_14, 3, tmp_tuple_element_47);
}
goto tuple_build_no_exception_33;
// Exception handling pass through code for tuple_build:
tuple_build_exception_33:;
Py_DECREF(tmp_ass_attr_value_14);
goto frame_exception_exit_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_33:;
tmp_ass_attr_target_14 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__CallNextHookEx);

if (unlikely(tmp_ass_attr_target_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_14);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CallNextHookEx);

exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_attr_target_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_14);

exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_14, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_14);
CHECK_OBJECT(tmp_ass_attr_value_14);
Py_DECREF(tmp_ass_attr_value_14);
CHECK_OBJECT(tmp_ass_attr_target_14);
Py_DECREF(tmp_ass_attr_target_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__HOOKS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_outline_return_value_8;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_48;
tmp_tuple_element_48 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_Exception);

if (tmp_tuple_element_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_48 = PyExc_Exception;
        Py_INCREF(tmp_tuple_element_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_73, 0, tmp_tuple_element_48);
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__bases_orig;
    tmp_SystemHook$class_container$class_creation_1__bases_orig = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_8 = tmp_SystemHook$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__bases;
    tmp_SystemHook$class_container$class_creation_1__bases = tmp_assign_source_74;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__class_decl_dict;
    tmp_SystemHook$class_container$class_creation_1__class_decl_dict = tmp_assign_source_75;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_122;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_SystemHook$class_container$class_creation_1__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_expression_value_122 = tmp_SystemHook$class_container$class_creation_1__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_122, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_8:;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_bases_value_14 = tmp_SystemHook$class_container$class_creation_1__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__metaclass;
    tmp_SystemHook$class_container$class_creation_1__metaclass = tmp_assign_source_76;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_123;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_expression_value_123 = tmp_SystemHook$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_124;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_expression_value_124 = tmp_SystemHook$class_container$class_creation_1__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_SuppressException;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_tuple_element_49 = tmp_SystemHook$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_8 = tmp_SystemHook$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame.f_lineno = 264;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__prepared;
    tmp_SystemHook$class_container$class_creation_1__prepared = tmp_assign_source_77;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_125;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__prepared);
tmp_expression_value_125 = tmp_SystemHook$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_125, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_126;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_expression_value_126 = tmp_SystemHook$class_container$class_creation_1__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_126, tmp_name_value_18, tmp_default_value_8);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_127;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__prepared);
tmp_type_arg_16 = tmp_SystemHook$class_container$class_creation_1__prepared;
tmp_expression_value_127 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_127 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_127);
Py_DECREF(tmp_expression_value_127);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto tuple_build_exception_34;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_50);
}
goto tuple_build_no_exception_34;
// Exception handling pass through code for tuple_build:
tuple_build_exception_34:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame.f_lineno = 264;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 264;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_SystemHook$class_container$class_creation_1__prepared;
    tmp_SystemHook$class_container$class_creation_1__prepared = tmp_assign_source_78;
    Py_XDECREF(old);
}

}
branch_end_22:;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__prepared);
tmp_set_locals_8 = tmp_SystemHook$class_container$class_creation_1__prepared;
locals_pynput$_util$win32$$$class__8_SuppressException_264 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_65ccde768103e06991d4857b12d6d5c0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_4f2062683ff6248afd8e9a12c2926b03;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_264;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_cmp_expr_left_7 = tmp_SystemHook$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_7 = tmp_SystemHook$class_container$class_creation_1__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_SystemHook$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__8_SuppressException_264, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_metaclass_value_15;
PyObject *tmp_name_value_19;
PyObject *tmp_bases_value_15;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_class_decl_dict_value_7;
PyObject *tmp_metaclass_args_7;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_metaclass_value_15 = tmp_SystemHook$class_container$class_creation_1__metaclass;
tmp_name_value_19 = mod_consts.const_str_plain_SuppressException;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_bases_value_15 = tmp_SystemHook$class_container$class_creation_1__bases;
tmp_dict_arg_value_7 = locals_pynput$_util$win32$$$class__8_SuppressException_264;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_7 = tmp_SystemHook$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_7 = MAKE_TUPLE3(tstate, tmp_name_value_19, tmp_bases_value_15, tmp_dict_arg_value_7);
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_metaclass_value_15, tmp_metaclass_args_7, tmp_class_decl_dict_value_7);
CHECK_OBJECT(tmp_metaclass_args_7);
Py_DECREF(tmp_metaclass_args_7);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_26;
}
{
    PyObject *old = outline_7_var___class__;
    outline_7_var___class__ = tmp_assign_source_79;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_7_var___class__);
tmp_dictset_value = outline_7_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_pynput$_util$win32$$$class__8_SuppressException_264);
locals_pynput$_util$win32$$$class__8_SuppressException_264 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__8_SuppressException_264);
locals_pynput$_util$win32$$$class__8_SuppressException_264 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 264;
goto try_except_handler_24;
outline_result_16:;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain_SuppressException, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto try_except_handler_24;
}
goto try_end_9;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__bases_orig);
tmp_SystemHook$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_SystemHook$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
tmp_SystemHook$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_SystemHook$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_SystemHook$class_container$class_creation_1__prepared);
tmp_SystemHook$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_8;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__bases_orig);
tmp_SystemHook$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__bases);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__bases);
tmp_SystemHook$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__class_decl_dict);
tmp_SystemHook$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__metaclass);
tmp_SystemHook$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_SystemHook$class_container$class_creation_1__prepared);
Py_DECREF(tmp_SystemHook$class_container$class_creation_1__prepared);
tmp_SystemHook$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_51;

tmp_tuple_element_51 = MAKE_FUNCTION_pynput$_util$win32$$$function__7_lambda(tstate);

tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_51);

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__6___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__8___enter__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__9___exit__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
tmp_called_value_13 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, const_str_plain_staticmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_called_value_14 = PyObject_GetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__HOOKPROC);

if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HOOKPROC);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

tmp_args_element_value_9 = MAKE_FUNCTION_pynput$_util$win32$$$function__10__handler(tstate);

frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame.f_lineno = 298;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame.f_lineno = 297;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain__handler, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8);


goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__7_SystemHook_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__7_SystemHook_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__7_SystemHook_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__7_SystemHook_8);


// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_23;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_hook_id_str_plain_on_hook_str_plain__hook_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_33;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_7__bases;
tmp_cmp_expr_right_8 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_33 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__7_SystemHook_234, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
branch_no_25:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_metaclass_value_16;
PyObject *tmp_name_value_20;
PyObject *tmp_bases_value_16;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_class_decl_dict_value_8;
PyObject *tmp_metaclass_args_8;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_metaclass_value_16 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_20 = mod_consts.const_str_plain_SystemHook;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_7__bases;
tmp_dict_arg_value_8 = locals_pynput$_util$win32$$$class__7_SystemHook_234;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_decl_dict_value_8 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_metaclass_args_8 = MAKE_TUPLE3(tstate, tmp_name_value_20, tmp_bases_value_16, tmp_dict_arg_value_8);
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_metaclass_value_16, tmp_metaclass_args_8, tmp_class_decl_dict_value_8);
CHECK_OBJECT(tmp_metaclass_args_8);
Py_DECREF(tmp_metaclass_args_8);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;

    goto try_except_handler_23;
}
{
    PyObject *old = outline_6_var___class__;
    outline_6_var___class__ = tmp_assign_source_80;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_72 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_pynput$_util$win32$$$class__7_SystemHook_234);
locals_pynput$_util$win32$$$class__7_SystemHook_234 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__7_SystemHook_234);
locals_pynput$_util$win32$$$class__7_SystemHook_234 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 234;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook, tmp_assign_source_72);
}
goto try_end_10;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_81;
PyObject *tmp_direct_call_arg1_9;
tmp_direct_call_arg1_9 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_81 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_34;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_128;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_condition_result_34 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_128 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_128, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_83 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_83;
}
{
bool tmp_condition_result_35;
PyObject *tmp_expression_value_129;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_condition_result_35 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_130;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_130 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_tuple_element_52 = mod_consts.const_str_plain_ListenerMixin;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 316;
tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_84;
}
{
bool tmp_condition_result_36;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_131;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_131 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_131, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_36 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_36 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_132;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_132 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_132, tmp_name_value_21, tmp_default_value_9);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_133;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_133 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_133 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_133);
Py_DECREF(tmp_expression_value_133);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto tuple_build_exception_35;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_53);
}
goto tuple_build_no_exception_35;
// Exception handling pass through code for tuple_build:
tuple_build_exception_35:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_35:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_27;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 316;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 316;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_27:;
goto branch_end_26;
branch_no_26:;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_85;
}
branch_end_26:;
{
PyObject *tmp_assign_source_86;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_8__prepared;
locals_pynput$_util$win32$$$class__9_ListenerMixin_316 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_digest_f2f78407c21f9c3582240fcbd708e5ca;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_ListenerMixin;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_316;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9 = MAKE_CLASS_FRAME(tstate, code_objects_cdd4405837ef282fff41e0e64a651878, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9, locals_pynput$_util$win32$$$class__9_ListenerMixin_316);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__EVENTS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_1040;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__WM_PROCESS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__WM_NOTIFICATIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__11_suppress_event(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain_suppress_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__12__run(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__13__stop_platform(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__stop_platform, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_10;
tmp_called_instance_1 = PyObject_GetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain_AbstractListener);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_pynput$_util$win32$AbstractListener(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractListener);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_pynput$_util$win32$$$function__14__handler(tstate);

frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9->m_frame.f_lineno = 377;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__emitter, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__handler, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__15__convert(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__convert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__16__process(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__process, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__17__handle_message(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__handle_message, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__18__on_notification(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain__on_notification, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_9;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9);


goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__9_ListenerMixin_9);


// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_29;
skip_nested_handling_8:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__message_loop_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_37;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_8__bases;
tmp_cmp_expr_right_9 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_37 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__9_ListenerMixin_316, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
branch_no_28:;
{
PyObject *tmp_assign_source_87;
PyObject *tmp_metaclass_value_18;
PyObject *tmp_name_value_22;
PyObject *tmp_bases_value_18;
PyObject *tmp_dict_arg_value_9;
PyObject *tmp_class_decl_dict_value_9;
PyObject *tmp_metaclass_args_9;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_metaclass_value_18 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_22 = mod_consts.const_str_plain_ListenerMixin;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_8__bases;
tmp_dict_arg_value_9 = locals_pynput$_util$win32$$$class__9_ListenerMixin_316;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_decl_dict_value_9 = tmp_class_container$class_creation_8__class_decl_dict;
tmp_metaclass_args_9 = MAKE_TUPLE3(tstate, tmp_name_value_22, tmp_bases_value_18, tmp_dict_arg_value_9);
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_metaclass_value_18, tmp_metaclass_args_9, tmp_class_decl_dict_value_9);
CHECK_OBJECT(tmp_metaclass_args_9);
Py_DECREF(tmp_metaclass_args_9);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_29;
}
{
    PyObject *old = outline_8_var___class__;
    outline_8_var___class__ = tmp_assign_source_87;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_86 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_86);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_pynput$_util$win32$$$class__9_ListenerMixin_316);
locals_pynput$_util$win32$$$class__9_ListenerMixin_316 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__9_ListenerMixin_316);
locals_pynput$_util$win32$$$class__9_ListenerMixin_316 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 316;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin, tmp_assign_source_86);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_88;
PyObject *tmp_direct_call_arg1_10;
tmp_direct_call_arg1_10 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_88 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_38;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_134;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_condition_result_38 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_134 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_134, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_90;
}
{
bool tmp_condition_result_39;
PyObject *tmp_expression_value_135;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_135 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_135, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_condition_result_39 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_136;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_136 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_tuple_element_54 = mod_consts.const_str_plain_KeyTranslator;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_pynput$_util$win32->m_frame.f_lineno = 429;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_91;
}
{
bool tmp_condition_result_40;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_137;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_137 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_137, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_40 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_40 != false) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_55;
PyObject *tmp_expression_value_138;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_138 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_55 = BUILTIN_GETATTR(tstate, tmp_expression_value_138, tmp_name_value_23, tmp_default_value_10);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_139;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_139 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_139 == NULL));
tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_139);
Py_DECREF(tmp_expression_value_139);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto tuple_build_exception_36;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_55);
}
goto tuple_build_no_exception_36;
// Exception handling pass through code for tuple_build:
tuple_build_exception_36:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_36:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_30;
}
frame_frame_pynput$_util$win32->m_frame.f_lineno = 429;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 429;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_30:;
goto branch_end_29;
branch_no_29:;
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_92;
}
branch_end_29:;
{
PyObject *tmp_assign_source_93;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_9__prepared;
locals_pynput$_util$win32$$$class__10_KeyTranslator_429 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_digest_e66a2c9a5eb4938bd39ac13a44ee634b;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyTranslator;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_429;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10 = MAKE_CLASS_FRAME(tstate, code_objects_00b99492b9724b590ff8559e4ab86015, module_pynput$_util$win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10, locals_pynput$_util$win32$$$class__10_KeyTranslator_429);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10);
assert(Py_REFCNT(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10) == 2);

// Framed code:
{
PyObject *tmp_expression_value_140;
PyObject *tmp_expression_value_141;
PyObject *tmp_expression_value_142;
tmp_expression_value_142 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_142 == NULL));
tmp_expression_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain_windll);
if (tmp_expression_value_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_141);
Py_DECREF(tmp_expression_value_141);
if (tmp_expression_value_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts.const_str_plain_GetAsyncKeyState);
CHECK_OBJECT(tmp_expression_value_140);
Py_DECREF(tmp_expression_value_140);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetAsyncKeyState, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_15;
PyObject *tmp_tuple_element_56;
PyObject *tmp_expression_value_143;
PyObject *tmp_ass_attr_target_15;
tmp_expression_value_143 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_143 == NULL));
tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_15 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_15, 0, tmp_tuple_element_56);
tmp_ass_attr_target_15 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetAsyncKeyState);

if (unlikely(tmp_ass_attr_target_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_15);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GetAsyncKeyState);

exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_15);

exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_15, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_15);
CHECK_OBJECT(tmp_ass_attr_value_15);
Py_DECREF(tmp_ass_attr_value_15);
CHECK_OBJECT(tmp_ass_attr_target_15);
Py_DECREF(tmp_ass_attr_target_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_expression_value_144;
PyObject *tmp_expression_value_145;
PyObject *tmp_expression_value_146;
tmp_expression_value_146 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_146 == NULL));
tmp_expression_value_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts.const_str_plain_windll);
if (tmp_expression_value_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_145);
Py_DECREF(tmp_expression_value_145);
if (tmp_expression_value_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts.const_str_plain_GetKeyboardLayout);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyboardLayout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_16;
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_147;
PyObject *tmp_ass_attr_target_16;
tmp_expression_value_147 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_147 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_16, 0, tmp_tuple_element_57);
tmp_ass_attr_target_16 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyboardLayout);

if (unlikely(tmp_ass_attr_target_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_16);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GetKeyboardLayout);

exception_lineno = 435;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_16);

exception_lineno = 435;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_16, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_16);
CHECK_OBJECT(tmp_ass_attr_value_16);
Py_DECREF(tmp_ass_attr_value_16);
CHECK_OBJECT(tmp_ass_attr_target_16);
Py_DECREF(tmp_ass_attr_target_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_expression_value_148;
PyObject *tmp_expression_value_149;
PyObject *tmp_expression_value_150;
tmp_expression_value_150 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_150 == NULL));
tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts.const_str_plain_windll);
if (tmp_expression_value_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_149);
Py_DECREF(tmp_expression_value_149);
if (tmp_expression_value_148 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts.const_str_plain_GetKeyboardState);
CHECK_OBJECT(tmp_expression_value_148);
Py_DECREF(tmp_expression_value_148);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyboardState, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_17;
PyObject *tmp_tuple_element_58;
PyObject *tmp_expression_value_151;
PyObject *tmp_ass_attr_target_17;
tmp_expression_value_151 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_151 == NULL));
tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_17 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_17, 0, tmp_tuple_element_58);
tmp_ass_attr_target_17 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyboardState);

if (unlikely(tmp_ass_attr_target_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_17);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GetKeyboardState);

exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_17);

exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_17, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_17);
CHECK_OBJECT(tmp_ass_attr_value_17);
Py_DECREF(tmp_ass_attr_value_17);
CHECK_OBJECT(tmp_ass_attr_target_17);
Py_DECREF(tmp_ass_attr_target_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_expression_value_152;
PyObject *tmp_expression_value_153;
PyObject *tmp_expression_value_154;
tmp_expression_value_154 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_154 == NULL));
tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts.const_str_plain_windll);
if (tmp_expression_value_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_153);
Py_DECREF(tmp_expression_value_153);
if (tmp_expression_value_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts.const_str_plain_GetAsyncKeyState);
CHECK_OBJECT(tmp_expression_value_152);
Py_DECREF(tmp_expression_value_152);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyState, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_18;
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_155;
PyObject *tmp_ass_attr_target_18;
tmp_expression_value_155 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_155 == NULL));
tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_ass_attr_value_18, 0, tmp_tuple_element_59);
tmp_ass_attr_target_18 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__GetKeyState);

if (unlikely(tmp_ass_attr_target_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_18);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GetKeyState);

exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_18);

exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_18, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_18);
CHECK_OBJECT(tmp_ass_attr_value_18);
Py_DECREF(tmp_ass_attr_value_18);
CHECK_OBJECT(tmp_ass_attr_target_18);
Py_DECREF(tmp_ass_attr_target_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_expression_value_156;
PyObject *tmp_expression_value_157;
PyObject *tmp_expression_value_158;
tmp_expression_value_158 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_158 == NULL));
tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts.const_str_plain_windll);
if (tmp_expression_value_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_157);
Py_DECREF(tmp_expression_value_157);
if (tmp_expression_value_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts.const_str_plain_MapVirtualKeyExW);
CHECK_OBJECT(tmp_expression_value_156);
Py_DECREF(tmp_expression_value_156);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__MapVirtualKeyEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_19;
PyObject *tmp_tuple_element_60;
PyObject *tmp_expression_value_159;
PyObject *tmp_ass_attr_target_19;
tmp_expression_value_159 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_159 == NULL));
tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_19 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_160;
PyObject *tmp_expression_value_161;
PyTuple_SET_ITEM(tmp_ass_attr_value_19, 0, tmp_tuple_element_60);
tmp_expression_value_160 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_160 == NULL));
tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_19, 1, tmp_tuple_element_60);
tmp_expression_value_161 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_161 == NULL));
tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts.const_str_plain_HKL);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_19, 2, tmp_tuple_element_60);
}
goto tuple_build_no_exception_37;
// Exception handling pass through code for tuple_build:
tuple_build_exception_37:;
Py_DECREF(tmp_ass_attr_value_19);
goto frame_exception_exit_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_37:;
tmp_ass_attr_target_19 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__MapVirtualKeyEx);

if (unlikely(tmp_ass_attr_target_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_19);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MapVirtualKeyEx);

exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_19);

exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_19, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_19);
CHECK_OBJECT(tmp_ass_attr_value_19);
Py_DECREF(tmp_ass_attr_value_19);
CHECK_OBJECT(tmp_ass_attr_target_19);
Py_DECREF(tmp_ass_attr_target_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_expression_value_162;
PyObject *tmp_expression_value_163;
PyObject *tmp_expression_value_164;
tmp_expression_value_164 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_164 == NULL));
tmp_expression_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts.const_str_plain_windll);
if (tmp_expression_value_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_expression_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_163);
Py_DECREF(tmp_expression_value_163);
if (tmp_expression_value_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts.const_str_plain_ToUnicodeEx);
CHECK_OBJECT(tmp_expression_value_162);
Py_DECREF(tmp_expression_value_162);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__ToUnicodeEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_attr_value_20;
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_165;
PyObject *tmp_ass_attr_target_20;
tmp_expression_value_165 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_165 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_attr_value_20 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_expression_value_166;
PyObject *tmp_expression_value_167;
PyObject *tmp_expression_value_168;
PyObject *tmp_expression_value_169;
PyObject *tmp_expression_value_170;
PyObject *tmp_expression_value_171;
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 0, tmp_tuple_element_61);
tmp_expression_value_166 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_166 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 1, tmp_tuple_element_61);
tmp_expression_value_167 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_167 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 2, tmp_tuple_element_61);
tmp_expression_value_168 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_168 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts.const_str_plain_c_voidp);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 3, tmp_tuple_element_61);
tmp_expression_value_169 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_169 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts.const_str_plain_c_int);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 4, tmp_tuple_element_61);
tmp_expression_value_170 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_170 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts.const_str_plain_UINT);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 5, tmp_tuple_element_61);
tmp_expression_value_171 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_171 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts.const_str_plain_HKL);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "o";
    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_20, 6, tmp_tuple_element_61);
}
goto tuple_build_no_exception_38;
// Exception handling pass through code for tuple_build:
tuple_build_exception_38:;
Py_DECREF(tmp_ass_attr_value_20);
goto frame_exception_exit_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_38:;
tmp_ass_attr_target_20 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__ToUnicodeEx);

if (unlikely(tmp_ass_attr_target_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_attr_value_20);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ToUnicodeEx);

exception_lineno = 443;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_attr_target_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_20);

exception_lineno = 443;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_20, mod_consts.const_str_plain_argtypes, tmp_ass_attr_value_20);
CHECK_OBJECT(tmp_ass_attr_value_20);
Py_DECREF(tmp_ass_attr_value_20);
CHECK_OBJECT(tmp_ass_attr_target_20);
Py_DECREF(tmp_ass_attr_target_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__MAPVK_VK_TO_VSC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__MAPVK_VSC_TO_VK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__MAPVK_VK_TO_CHAR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__19___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__20___call__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__21_update_layout(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain_update_layout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__22_char_from_scan(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain_char_from_scan, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__23__generate_layout(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__generate_layout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__24__to_scan(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__to_scan, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__25__to_vk(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__to_vk, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$_util$win32$$$function__26__modifier_state(tstate);

tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__modifier_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_11;
tmp_called_instance_2 = PyObject_GetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain_contextlib);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_pynput$_util$win32$contextlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 592;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}


tmp_args_element_value_11 = MAKE_FUNCTION_pynput$_util$win32$$$function__27__thread_input(tstate);

frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10->m_frame.f_lineno = 592;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain__thread_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10);


goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$_util$win32$$$class__10_KeyTranslator_10);


// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_32;
skip_nested_handling_9:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__layout_str_plain__layout_data_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_41;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_9__bases;
tmp_cmp_expr_right_10 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_41 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_41 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$_util$win32$$$class__10_KeyTranslator_429, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
branch_no_31:;
{
PyObject *tmp_assign_source_94;
PyObject *tmp_metaclass_value_20;
PyObject *tmp_name_value_24;
PyObject *tmp_bases_value_20;
PyObject *tmp_dict_arg_value_10;
PyObject *tmp_class_decl_dict_value_10;
PyObject *tmp_metaclass_args_10;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_metaclass_value_20 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_24 = mod_consts.const_str_plain_KeyTranslator;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_9__bases;
tmp_dict_arg_value_10 = locals_pynput$_util$win32$$$class__10_KeyTranslator_429;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_decl_dict_value_10 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_metaclass_args_10 = MAKE_TUPLE3(tstate, tmp_name_value_24, tmp_bases_value_20, tmp_dict_arg_value_10);
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_metaclass_value_20, tmp_metaclass_args_10, tmp_class_decl_dict_value_10);
CHECK_OBJECT(tmp_metaclass_args_10);
Py_DECREF(tmp_metaclass_args_10);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;

    goto try_except_handler_32;
}
{
    PyObject *old = outline_9_var___class__;
    outline_9_var___class__ = tmp_assign_source_94;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_93 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_93);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_pynput$_util$win32$$$class__10_KeyTranslator_429);
locals_pynput$_util$win32$$$class__10_KeyTranslator_429 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$_util$win32$$$class__10_KeyTranslator_429);
locals_pynput$_util$win32$$$class__10_KeyTranslator_429 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 429;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_pynput$_util$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator, tmp_assign_source_93);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$_util$win32);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$_util$win32", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput._util.win32" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$_util$win32);
    return module_pynput$_util$win32;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$_util$win32", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
