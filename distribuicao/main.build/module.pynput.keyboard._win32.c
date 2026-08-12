/* Generated code for Python module 'pynput$keyboard$_win32'
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



/* The "module_pynput$keyboard$_win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$keyboard$_win32;
PyDictObject *moduledict_pynput$keyboard$_win32;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_vk;
PyObject *const_str_plain__scan;
PyObject *const_str_plain_MapVirtualKey;
PyObject *const_str_plain_MAPVK_VK_TO_VSC;
PyObject *const_str_plain_char;
PyObject *const_int_pos_65535;
PyObject *const_str_plain_VkKeyScan;
PyObject *const_int_pos_8;
PyObject *const_int_pos_255;
PyObject *const_str_plain_KEYBDINPUT;
PyObject *const_str_plain_UNICODE;
PyObject *const_str_plain_KEYUP;
PyObject *const_str_plain_dwFlags;
PyObject *const_str_plain__flags;
PyObject *const_str_plain_wVk;
PyObject *const_str_plain_wScan;
PyObject *const_str_digest_f6a8394f99a8e641130819fb6f0254c6;
PyObject *const_str_plain_from_vk;
PyObject *const_str_plain_EXTENDEDKEY;
PyObject *const_str_digest_a806cd9a776daacc220942729a933a46;
PyObject *const_str_plain_Controller;
PyObject *const_str_plain_SendInput;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_INPUT;
PyObject *const_str_plain_KEYBOARD;
PyObject *const_str_plain_INPUT_union;
PyObject *const_str_plain__parameters;
PyObject *const_tuple_str_plain_ki_tuple;
PyObject *const_tuple_str_plain_type_str_plain_value_tuple;
PyObject *const_str_plain_sizeof;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_state_flags;
PyObject *const_tuple_str_plain_dwFlags_str_plain_wScan_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_KeyTranslator;
PyObject *const_str_plain__translator;
PyObject *const_str_plain__options;
PyObject *const_str_plain_event_filter;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_5824b99789cf25d8ba066515d167ddc8;
PyObject *const_str_plain__event_filter;
PyObject *const_str_plain_SystemHook;
PyObject *const_str_plain_HC_ACTION;
PyObject *const_str_plain_cast;
PyObject *const_str_plain__LPKBDLLHOOKSTRUCT;
PyObject *const_str_plain_contents;
PyObject *const_str_plain_vkCode;
PyObject *const_str_plain__VK_PACKET;
PyObject *const_str_plain_flags;
PyObject *const_str_plain__KBDLLHOOKSTRUCT;
PyObject *const_str_plain_LLKHF_INJECTED;
PyObject *const_str_plain_LLKHF_LOWER_IL_INJECTED;
PyObject *const_str_plain__UTF16_FLAG;
PyObject *const_str_plain__INJECTED_FLAG;
PyObject *const_str_plain_scanCode;
PyObject *const_str_plain_KeyCode;
PyObject *const_str_plain_from_char;
PyObject *const_str_plain_six;
PyObject *const_str_plain_unichr;
PyObject *const_str_plain__event_to_key;
PyObject *const_str_plain__PRESS_MESSAGES;
PyObject *const_str_plain_on_press;
PyObject *const_str_plain__RELEASE_MESSAGES;
PyObject *const_str_plain_on_release;
PyObject *const_str_digest_16bfc4b163cabfe09d0a459a933e2756;
PyObject *const_str_plain__receive;
PyObject *const_str_digest_5dcf18e05328276ee32f75b98a5155f9;
PyObject *const_str_plain__WM_INPUTLANGCHANGE;
PyObject *const_str_plain_update_layout;
PyObject *const_str_digest_31f9dd2ec87dd44eb85b81c31b450478;
PyObject *const_str_plain__SPECIAL_KEYS;
PyObject *const_str_plain__translate;
PyObject *const_str_digest_806ff07fdf23889a67316e335dc8c026;
PyObject *const_str_digest_01149bc9369e131e3d9600499e8c803b;
PyObject *const_str_plain_char_from_scan;
PyObject *const_str_plain_canonical;
PyObject *const_str_digest_4232740b358429657a8893c921b8ade5;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_wintypes;
PyObject *const_str_digest_69862c323a75aaafb285397d1b5f8a8e;
PyObject *const_str_plain__util;
PyObject *const_str_plain_win32_vks;
PyObject *const_str_plain_VK;
PyObject *const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
PyObject *const_tuple_str_plain_AbstractListener_tuple;
PyObject *const_str_plain_AbstractListener;
PyObject *const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
PyObject *const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple;
PyObject *const_str_plain_ListenerMixin;
PyObject *const_tuple_str_plain__base_tuple;
PyObject *const_str_plain__base;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
PyObject *const_int_pos_51;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_plain__flags_str_plain__scan_tuple;
PyObject *const_str_plain__PLATFORM_EXTENSIONS;
PyObject *const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86;
PyObject *const_str_plain__from_ext;
PyObject *const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_Key;
PyObject *const_int_pos_114;
PyObject *const_str_plain_MENU;
PyObject *const_str_plain_alt;
PyObject *const_str_plain_LMENU;
PyObject *const_str_plain_alt_l;
PyObject *const_str_plain_RMENU;
PyObject *const_str_plain_alt_r;
PyObject *const_str_plain_alt_gr;
PyObject *const_str_plain_BACK;
PyObject *const_str_plain_backspace;
PyObject *const_str_plain_CAPITAL;
PyObject *const_str_plain_caps_lock;
PyObject *const_str_plain_LWIN;
PyObject *const_str_plain_cmd;
PyObject *const_str_plain_cmd_l;
PyObject *const_str_plain_RWIN;
PyObject *const_str_plain_cmd_r;
PyObject *const_str_plain_CONTROL;
PyObject *const_str_plain_ctrl;
PyObject *const_str_plain_LCONTROL;
PyObject *const_str_plain_ctrl_l;
PyObject *const_str_plain_RCONTROL;
PyObject *const_str_plain_ctrl_r;
PyObject *const_str_plain_DELETE;
PyObject *const_str_plain_delete;
PyObject *const_str_plain_DOWN;
PyObject *const_str_plain_down;
PyObject *const_str_plain_END;
PyObject *const_str_plain_RETURN;
PyObject *const_str_plain_enter;
PyObject *const_str_plain_ESCAPE;
PyObject *const_str_plain_esc;
PyObject *const_str_plain_F1;
PyObject *const_str_plain_f1;
PyObject *const_str_plain_F2;
PyObject *const_str_plain_f2;
PyObject *const_str_plain_F3;
PyObject *const_str_plain_f3;
PyObject *const_str_plain_F4;
PyObject *const_str_plain_f4;
PyObject *const_str_plain_F5;
PyObject *const_str_plain_f5;
PyObject *const_str_plain_F6;
PyObject *const_str_plain_f6;
PyObject *const_str_plain_F7;
PyObject *const_str_plain_f7;
PyObject *const_str_plain_F8;
PyObject *const_str_plain_f8;
PyObject *const_str_plain_F9;
PyObject *const_str_plain_f9;
PyObject *const_str_plain_F10;
PyObject *const_str_plain_f10;
PyObject *const_str_plain_F11;
PyObject *const_str_plain_f11;
PyObject *const_str_plain_F12;
PyObject *const_str_plain_f12;
PyObject *const_str_plain_F13;
PyObject *const_str_plain_f13;
PyObject *const_str_plain_F14;
PyObject *const_str_plain_f14;
PyObject *const_str_plain_F15;
PyObject *const_str_plain_f15;
PyObject *const_str_plain_F16;
PyObject *const_str_plain_f16;
PyObject *const_str_plain_F17;
PyObject *const_str_plain_f17;
PyObject *const_str_plain_F18;
PyObject *const_str_plain_f18;
PyObject *const_str_plain_F19;
PyObject *const_str_plain_f19;
PyObject *const_str_plain_F20;
PyObject *const_str_plain_f20;
PyObject *const_str_plain_F21;
PyObject *const_str_plain_f21;
PyObject *const_str_plain_F22;
PyObject *const_str_plain_f22;
PyObject *const_str_plain_F23;
PyObject *const_str_plain_f23;
PyObject *const_str_plain_F24;
PyObject *const_str_plain_f24;
PyObject *const_str_plain_HOME;
PyObject *const_str_plain_home;
PyObject *const_str_plain_LEFT;
PyObject *const_str_plain_left;
PyObject *const_str_plain_NEXT;
PyObject *const_str_plain_page_down;
PyObject *const_str_plain_PRIOR;
PyObject *const_str_plain_page_up;
PyObject *const_str_plain_RIGHT;
PyObject *const_str_plain_right;
PyObject *const_str_plain_LSHIFT;
PyObject *const_str_plain_shift;
PyObject *const_str_plain_shift_l;
PyObject *const_str_plain_RSHIFT;
PyObject *const_str_plain_shift_r;
PyObject *const_str_plain_SPACE;
PyObject *const_tuple_str_space_tuple;
PyObject *const_tuple_str_plain_char_tuple;
PyObject *const_str_plain_space;
PyObject *const_str_plain_TAB;
PyObject *const_str_plain_tab;
PyObject *const_str_plain_UP;
PyObject *const_str_plain_up;
PyObject *const_str_plain_MEDIA_PLAY_PAUSE;
PyObject *const_str_plain_media_play_pause;
PyObject *const_str_plain_MEDIA_STOP;
PyObject *const_str_plain_media_stop;
PyObject *const_str_plain_VOLUME_MUTE;
PyObject *const_str_plain_media_volume_mute;
PyObject *const_str_plain_VOLUME_DOWN;
PyObject *const_str_plain_media_volume_down;
PyObject *const_str_plain_VOLUME_UP;
PyObject *const_str_plain_media_volume_up;
PyObject *const_str_plain_MEDIA_PREV_TRACK;
PyObject *const_str_plain_media_previous;
PyObject *const_str_plain_MEDIA_NEXT_TRACK;
PyObject *const_str_plain_media_next;
PyObject *const_str_plain_INSERT;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_APPS;
PyObject *const_str_plain_menu;
PyObject *const_str_plain_NUMLOCK;
PyObject *const_str_plain_num_lock;
PyObject *const_str_plain_PAUSE;
PyObject *const_str_plain_pause;
PyObject *const_str_plain_SNAPSHOT;
PyObject *const_str_plain_print_screen;
PyObject *const_str_plain_SCROLL;
PyObject *const_str_plain_scroll_lock;
PyObject *const_int_pos_187;
PyObject *const_str_plain__KeyCode;
PyObject *const_str_plain__Key;
PyObject *const_str_digest_b927199d85c7cd7a86dce88997eeb880;
PyObject *const_str_plain__handle;
PyObject *const_str_digest_d2e5724cf7b5fadd38e435af2aefd902;
PyObject *const_int_pos_239;
PyObject *const_int_pos_13;
PyObject *const_str_plain__EVENTS;
PyObject *const_int_pos_81;
PyObject *const_int_pos_256;
PyObject *const_str_plain__WM_KEYDOWN;
PyObject *const_int_pos_257;
PyObject *const_str_plain__WM_KEYUP;
PyObject *const_int_pos_260;
PyObject *const_str_plain__WM_SYSKEYDOWN;
PyObject *const_int_pos_261;
PyObject *const_str_plain__WM_SYSKEYUP;
PyObject *const_int_pos_4096;
PyObject *const_int_pos_8192;
PyObject *const_int_pos_231;
PyObject *const_str_plain__WM_NOTIFICATIONS;
PyObject *const_str_plain_value;
PyObject *const_str_plain_SuppressException;
PyObject *const_str_plain__HANDLED_EXCEPTIONS;
PyObject *const_str_plain_Structure;
PyObject *const_str_digest_42333368ed6b5d81abbb83575a42aa92;
PyObject *const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8;
PyObject *const_int_pos_273;
PyObject *const_int_pos_16;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_time;
PyObject *const_str_plain_dwExtraInfo;
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain_POINTER;
PyObject *const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc;
PyObject *const_str_plain__convert;
PyObject *const_str_digest_ce5aadc1c34489913e6be15bc5dad066;
PyObject *const_str_plain__emitter;
PyObject *const_str_plain__process;
PyObject *const_str_digest_1691a60ae42b2a00d848a92369d75ae1;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain__on_notification;
PyObject *const_str_digest_a6c0d156822ffbda1b29da806d23f696;
PyObject *const_str_digest_2d5c43f429e89b7228443754557f296d;
PyObject *const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f;
PyObject *const_str_digest_59de3149ee5e955c4900936673b5a8c3;
PyObject *const_tuple_str_plain__translator_str_plain__event_filter_tuple;
PyObject *const_str_digest_2551fe90917ff8914e65b5b16a5cc193;
PyObject *const_tuple_26e5aad28801208e34c806a3c824514d_tuple;
PyObject *const_tuple_str_plain_msg_str_plain_data_tuple;
PyObject *const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
PyObject *const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple;
PyObject *const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple;
PyObject *const_tuple_73cc39deda764c37665d21108db9fcfc_tuple;
PyObject *const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple;
PyObject *const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple;
PyObject *const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[309];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput.keyboard._win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 309) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 309 values, got %d\n",
                    UN_TRANSLATE("pynput.keyboard._win32"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scan", mod_consts.const_str_plain__scan);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKey", mod_consts.const_str_plain_MapVirtualKey);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAPVK_VK_TO_VSC", mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65535", mod_consts.const_int_pos_65535);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_65535);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScan", mod_consts.const_str_plain_VkKeyScan);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYUP", mod_consts.const_str_plain_KEYUP);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__flags", mod_consts.const_str_plain__flags);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_wVk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_wScan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6", mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDEDKEY", mod_consts.const_str_plain_EXTENDEDKEY);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDEDKEY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46", mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Controller);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBOARD", mod_consts.const_str_plain_KEYBOARD);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBOARD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__parameters", mod_consts.const_str_plain__parameters);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__parameters);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ki_tuple", mod_consts.const_tuple_str_plain_ki_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ki_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_type_str_plain_value_tuple", mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sizeof", mod_consts.const_str_plain_sizeof);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple", mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state_flags", mod_consts.const_str_plain_state_flags);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple", mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4", mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyTranslator", mod_consts.const_str_plain_KeyTranslator);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyTranslator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__translator", mod_consts.const_str_plain__translator);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__translator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_event_filter", mod_consts.const_str_plain_event_filter);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8", mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_filter", mod_consts.const_str_plain__event_filter);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT", mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_contents);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vkCode", mod_consts.const_str_plain_vkCode);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_vkCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VK_PACKET", mod_consts.const_str_plain__VK_PACKET);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__VK_PACKET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flags", mod_consts.const_str_plain_flags);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KBDLLHOOKSTRUCT", mod_consts.const_str_plain__KBDLLHOOKSTRUCT);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__KBDLLHOOKSTRUCT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLKHF_INJECTED", mod_consts.const_str_plain_LLKHF_INJECTED);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_LLKHF_INJECTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED", mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UTF16_FLAG", mod_consts.const_str_plain__UTF16_FLAG);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__UTF16_FLAG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__INJECTED_FLAG", mod_consts.const_str_plain__INJECTED_FLAG);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__INJECTED_FLAG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scanCode", mod_consts.const_str_plain_scanCode);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_scanCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_six", mod_consts.const_str_plain_six);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_six);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unichr", mod_consts.const_str_plain_unichr);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_unichr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_to_key", mod_consts.const_str_plain__event_to_key);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__event_to_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PRESS_MESSAGES", mod_consts.const_str_plain__PRESS_MESSAGES);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__PRESS_MESSAGES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_press", mod_consts.const_str_plain_on_press);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__RELEASE_MESSAGES", mod_consts.const_str_plain__RELEASE_MESSAGES);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__RELEASE_MESSAGES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_release", mod_consts.const_str_plain_on_release);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756", mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receive", mod_consts.const_str_plain__receive);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__receive);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9", mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_INPUTLANGCHANGE", mod_consts.const_str_plain__WM_INPUTLANGCHANGE);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_INPUTLANGCHANGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update_layout", mod_consts.const_str_plain_update_layout);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_update_layout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478", mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SPECIAL_KEYS", mod_consts.const_str_plain__SPECIAL_KEYS);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__SPECIAL_KEYS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__translate", mod_consts.const_str_plain__translate);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__translate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026", mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b", mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char_from_scan", mod_consts.const_str_plain_char_from_scan);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_char_from_scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_canonical);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5", mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e", mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__util", mod_consts.const_str_plain__util);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_win32_vks", mod_consts.const_str_plain_win32_vks);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_win32_vks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VK", mod_consts.const_str_plain_VK);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_VK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_tuple", mod_consts.const_tuple_str_plain_AbstractListener_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple", mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__base_tuple", mod_consts.const_tuple_str_plain__base_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base", mod_consts.const_str_plain__base);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__base);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775", mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51", mod_consts.const_int_pos_51);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_51);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple", mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PLATFORM_EXTENSIONS", mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86", mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__from_ext", mod_consts.const_str_plain__from_ext);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3", mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_114);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_MENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LMENU", mod_consts.const_str_plain_LMENU);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_LMENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RMENU", mod_consts.const_str_plain_RMENU);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_RMENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BACK", mod_consts.const_str_plain_BACK);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_BACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backspace", mod_consts.const_str_plain_backspace);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_backspace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CAPITAL", mod_consts.const_str_plain_CAPITAL);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_CAPITAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_caps_lock", mod_consts.const_str_plain_caps_lock);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_caps_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LWIN", mod_consts.const_str_plain_LWIN);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_LWIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RWIN", mod_consts.const_str_plain_RWIN);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_RWIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LCONTROL", mod_consts.const_str_plain_LCONTROL);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_LCONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RCONTROL", mod_consts.const_str_plain_RCONTROL);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_RCONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DELETE", mod_consts.const_str_plain_DELETE);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOWN", mod_consts.const_str_plain_DOWN);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_down", mod_consts.const_str_plain_down);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_END", mod_consts.const_str_plain_END);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_END);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETURN", mod_consts.const_str_plain_RETURN);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_RETURN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_enter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ESCAPE", mod_consts.const_str_plain_ESCAPE);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_esc", mod_consts.const_str_plain_esc);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_esc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F1", mod_consts.const_str_plain_F1);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_F1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f1", mod_consts.const_str_plain_f1);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F2", mod_consts.const_str_plain_F2);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_F2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f2", mod_consts.const_str_plain_f2);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_f2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F3", mod_consts.const_str_plain_F3);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_F3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f3", mod_consts.const_str_plain_f3);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_f3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F4", mod_consts.const_str_plain_F4);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_F4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f4", mod_consts.const_str_plain_f4);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F5", mod_consts.const_str_plain_F5);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_F5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f5", mod_consts.const_str_plain_f5);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_f5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F6", mod_consts.const_str_plain_F6);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_F6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f6", mod_consts.const_str_plain_f6);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F7", mod_consts.const_str_plain_F7);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_F7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f7", mod_consts.const_str_plain_f7);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F8", mod_consts.const_str_plain_F8);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_F8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f8", mod_consts.const_str_plain_f8);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_f8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F9", mod_consts.const_str_plain_F9);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_F9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f9", mod_consts.const_str_plain_f9);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F10", mod_consts.const_str_plain_F10);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_F10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f10", mod_consts.const_str_plain_f10);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_f10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F11", mod_consts.const_str_plain_F11);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_F11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f11", mod_consts.const_str_plain_f11);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_f11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F12", mod_consts.const_str_plain_F12);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_F12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f12", mod_consts.const_str_plain_f12);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_f12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F13", mod_consts.const_str_plain_F13);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_F13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f13", mod_consts.const_str_plain_f13);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_f13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F14", mod_consts.const_str_plain_F14);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_F14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f14", mod_consts.const_str_plain_f14);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_f14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F15", mod_consts.const_str_plain_F15);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_F15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f15", mod_consts.const_str_plain_f15);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_f15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F16", mod_consts.const_str_plain_F16);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_F16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f16", mod_consts.const_str_plain_f16);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_f16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F17", mod_consts.const_str_plain_F17);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_F17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f17", mod_consts.const_str_plain_f17);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_f17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F18", mod_consts.const_str_plain_F18);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_F18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f18", mod_consts.const_str_plain_f18);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_f18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F19", mod_consts.const_str_plain_F19);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_F19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f19", mod_consts.const_str_plain_f19);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_f19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F20", mod_consts.const_str_plain_F20);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_F20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f20", mod_consts.const_str_plain_f20);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_f20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F21", mod_consts.const_str_plain_F21);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_F21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f21", mod_consts.const_str_plain_f21);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_f21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F22", mod_consts.const_str_plain_F22);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_F22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f22", mod_consts.const_str_plain_f22);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_f22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F23", mod_consts.const_str_plain_F23);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_F23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f23", mod_consts.const_str_plain_f23);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_f23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F24", mod_consts.const_str_plain_F24);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_F24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f24", mod_consts.const_str_plain_f24);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_f24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HOME", mod_consts.const_str_plain_HOME);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_home", mod_consts.const_str_plain_home);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_home);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NEXT", mod_consts.const_str_plain_NEXT);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_NEXT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_down", mod_consts.const_str_plain_page_down);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIOR", mod_consts.const_str_plain_PRIOR);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRIOR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_up", mod_consts.const_str_plain_page_up);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LSHIFT", mod_consts.const_str_plain_LSHIFT);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_LSHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSHIFT", mod_consts.const_str_plain_RSHIFT);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPACE", mod_consts.const_str_plain_SPACE);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPACE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_char_tuple", mod_consts.const_tuple_str_plain_char_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_char_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_space", mod_consts.const_str_plain_space);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_space);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAB", mod_consts.const_str_plain_TAB);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UP", mod_consts.const_str_plain_UP);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_UP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_up", mod_consts.const_str_plain_up);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PLAY_PAUSE", mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_play_pause", mod_consts.const_str_plain_media_play_pause);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_play_pause);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_STOP", mod_consts.const_str_plain_MEDIA_STOP);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_STOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_stop", mod_consts.const_str_plain_media_stop);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_stop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_MUTE", mod_consts.const_str_plain_VOLUME_MUTE);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_MUTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_mute", mod_consts.const_str_plain_media_volume_mute);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_mute);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_DOWN", mod_consts.const_str_plain_VOLUME_DOWN);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_DOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_down", mod_consts.const_str_plain_media_volume_down);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_UP", mod_consts.const_str_plain_VOLUME_UP);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_UP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_up", mod_consts.const_str_plain_media_volume_up);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PREV_TRACK", mod_consts.const_str_plain_MEDIA_PREV_TRACK);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PREV_TRACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_previous", mod_consts.const_str_plain_media_previous);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_previous);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_NEXT_TRACK", mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_next", mod_consts.const_str_plain_media_next);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_next);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INSERT", mod_consts.const_str_plain_INSERT);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_INSERT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insert", mod_consts.const_str_plain_insert);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APPS", mod_consts.const_str_plain_APPS);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_APPS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_menu", mod_consts.const_str_plain_menu);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_menu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMLOCK", mod_consts.const_str_plain_NUMLOCK);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMLOCK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_lock", mod_consts.const_str_plain_num_lock);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PAUSE", mod_consts.const_str_plain_PAUSE);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pause", mod_consts.const_str_plain_pause);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_pause);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SNAPSHOT", mod_consts.const_str_plain_SNAPSHOT);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain_SNAPSHOT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_print_screen", mod_consts.const_str_plain_print_screen);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_print_screen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL", mod_consts.const_str_plain_SCROLL);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scroll_lock", mod_consts.const_str_plain_scroll_lock);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_187", mod_consts.const_int_pos_187);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_int_pos_187);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KeyCode", mod_consts.const_str_plain__KeyCode);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain__KeyCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Key", mod_consts.const_str_plain__Key);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain__Key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle", mod_consts.const_str_plain__handle);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902", mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_239", mod_consts.const_int_pos_239);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_int_pos_239);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_81", mod_consts.const_int_pos_81);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_int_pos_81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_KEYDOWN", mod_consts.const_str_plain__WM_KEYDOWN);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_KEYDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_int_pos_257);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_KEYUP", mod_consts.const_str_plain__WM_KEYUP);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_KEYUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_260", mod_consts.const_int_pos_260);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_SYSKEYDOWN", mod_consts.const_str_plain__WM_SYSKEYDOWN);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_SYSKEYDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_261", mod_consts.const_int_pos_261);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_int_pos_261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_SYSKEYUP", mod_consts.const_str_plain__WM_SYSKEYUP);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_SYSKEYUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8192", mod_consts.const_int_pos_8192);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_int_pos_8192);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_231", mod_consts.const_int_pos_231);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_int_pos_231);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_NOTIFICATIONS", mod_consts.const_str_plain__WM_NOTIFICATIONS);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_plain__WM_NOTIFICATIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANDLED_EXCEPTIONS", mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92", mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8", mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_int_pos_273);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert", mod_consts.const_str_plain__convert);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066", mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emitter", mod_consts.const_str_plain__emitter);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_plain__emitter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__process", mod_consts.const_str_plain__process);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_str_plain__process);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1", mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_notification", mod_consts.const_str_plain__on_notification);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_notification);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696", mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d", mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f", mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3", mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple", mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193", mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple", mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple", mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df", mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple", mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple", mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple", mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple", mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple", mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple", mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple", mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple", mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple);
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
void checkModuleConstants_pynput$keyboard$_win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_vk) && "mod_consts.const_str_plain_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scan", mod_consts.const_str_plain__scan);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__scan) && "mod_consts.const_str_plain__scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MapVirtualKey", mod_consts.const_str_plain_MapVirtualKey);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_MapVirtualKey) && "mod_consts.const_str_plain_MapVirtualKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAPVK_VK_TO_VSC", mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAPVK_VK_TO_VSC) && "mod_consts.const_str_plain_MAPVK_VK_TO_VSC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_char) && "mod_consts.const_str_plain_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65535", mod_consts.const_int_pos_65535);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_65535) && "mod_consts.const_int_pos_65535");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScan", mod_consts.const_str_plain_VkKeyScan);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScan) && "mod_consts.const_str_plain_VkKeyScan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT) && "mod_consts.const_str_plain_KEYBDINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE) && "mod_consts.const_str_plain_UNICODE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYUP", mod_consts.const_str_plain_KEYUP);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYUP) && "mod_consts.const_str_plain_KEYUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags) && "mod_consts.const_str_plain_dwFlags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__flags", mod_consts.const_str_plain__flags);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__flags) && "mod_consts.const_str_plain__flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_wVk) && "mod_consts.const_str_plain_wVk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_wScan) && "mod_consts.const_str_plain_wScan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6", mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6) && "mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk) && "mod_consts.const_str_plain_from_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDEDKEY", mod_consts.const_str_plain_EXTENDEDKEY);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDEDKEY) && "mod_consts.const_str_plain_EXTENDEDKEY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46", mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46) && "mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Controller) && "mod_consts.const_str_plain_Controller");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput) && "mod_consts.const_str_plain_SendInput");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT) && "mod_consts.const_str_plain_INPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBOARD", mod_consts.const_str_plain_KEYBOARD);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBOARD) && "mod_consts.const_str_plain_KEYBOARD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union) && "mod_consts.const_str_plain_INPUT_union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__parameters", mod_consts.const_str_plain__parameters);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__parameters) && "mod_consts.const_str_plain__parameters");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ki_tuple", mod_consts.const_tuple_str_plain_ki_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ki_tuple) && "mod_consts.const_tuple_str_plain_ki_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_type_str_plain_value_tuple", mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_type_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sizeof", mod_consts.const_str_plain_sizeof);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof) && "mod_consts.const_str_plain_sizeof");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple", mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple) && "mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state_flags", mod_consts.const_str_plain_state_flags);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_flags) && "mod_consts.const_str_plain_state_flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple", mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple) && "mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4", mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4) && "mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener) && "mod_consts.const_str_plain_Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyTranslator", mod_consts.const_str_plain_KeyTranslator);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyTranslator) && "mod_consts.const_str_plain_KeyTranslator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__translator", mod_consts.const_str_plain__translator);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__translator) && "mod_consts.const_str_plain__translator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__options) && "mod_consts.const_str_plain__options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_event_filter", mod_consts.const_str_plain_event_filter);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter) && "mod_consts.const_str_plain_event_filter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8", mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8) && "mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_filter", mod_consts.const_str_plain__event_filter);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter) && "mod_consts.const_str_plain__event_filter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook) && "mod_consts.const_str_plain_SystemHook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION) && "mod_consts.const_str_plain_HC_ACTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT", mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT) && "mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_contents) && "mod_consts.const_str_plain_contents");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vkCode", mod_consts.const_str_plain_vkCode);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_vkCode) && "mod_consts.const_str_plain_vkCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VK_PACKET", mod_consts.const_str_plain__VK_PACKET);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__VK_PACKET) && "mod_consts.const_str_plain__VK_PACKET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flags", mod_consts.const_str_plain_flags);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags) && "mod_consts.const_str_plain_flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KBDLLHOOKSTRUCT", mod_consts.const_str_plain__KBDLLHOOKSTRUCT);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__KBDLLHOOKSTRUCT) && "mod_consts.const_str_plain__KBDLLHOOKSTRUCT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLKHF_INJECTED", mod_consts.const_str_plain_LLKHF_INJECTED);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_LLKHF_INJECTED) && "mod_consts.const_str_plain_LLKHF_INJECTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED", mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED) && "mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UTF16_FLAG", mod_consts.const_str_plain__UTF16_FLAG);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__UTF16_FLAG) && "mod_consts.const_str_plain__UTF16_FLAG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__INJECTED_FLAG", mod_consts.const_str_plain__INJECTED_FLAG);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__INJECTED_FLAG) && "mod_consts.const_str_plain__INJECTED_FLAG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scanCode", mod_consts.const_str_plain_scanCode);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_scanCode) && "mod_consts.const_str_plain_scanCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode) && "mod_consts.const_str_plain_KeyCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_char) && "mod_consts.const_str_plain_from_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_six", mod_consts.const_str_plain_six);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_six) && "mod_consts.const_str_plain_six");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unichr", mod_consts.const_str_plain_unichr);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_unichr) && "mod_consts.const_str_plain_unichr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_to_key", mod_consts.const_str_plain__event_to_key);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__event_to_key) && "mod_consts.const_str_plain__event_to_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PRESS_MESSAGES", mod_consts.const_str_plain__PRESS_MESSAGES);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__PRESS_MESSAGES) && "mod_consts.const_str_plain__PRESS_MESSAGES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_press", mod_consts.const_str_plain_on_press);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_press) && "mod_consts.const_str_plain_on_press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__RELEASE_MESSAGES", mod_consts.const_str_plain__RELEASE_MESSAGES);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__RELEASE_MESSAGES) && "mod_consts.const_str_plain__RELEASE_MESSAGES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_release", mod_consts.const_str_plain_on_release);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_release) && "mod_consts.const_str_plain_on_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756", mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756) && "mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receive", mod_consts.const_str_plain__receive);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__receive) && "mod_consts.const_str_plain__receive");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9", mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9) && "mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_INPUTLANGCHANGE", mod_consts.const_str_plain__WM_INPUTLANGCHANGE);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_INPUTLANGCHANGE) && "mod_consts.const_str_plain__WM_INPUTLANGCHANGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update_layout", mod_consts.const_str_plain_update_layout);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_update_layout) && "mod_consts.const_str_plain_update_layout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478", mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478) && "mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SPECIAL_KEYS", mod_consts.const_str_plain__SPECIAL_KEYS);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__SPECIAL_KEYS) && "mod_consts.const_str_plain__SPECIAL_KEYS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__translate", mod_consts.const_str_plain__translate);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__translate) && "mod_consts.const_str_plain__translate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026", mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026) && "mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b", mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b) && "mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char_from_scan", mod_consts.const_str_plain_char_from_scan);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_char_from_scan) && "mod_consts.const_str_plain_char_from_scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_canonical) && "mod_consts.const_str_plain_canonical");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5", mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5) && "mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib) && "mod_consts.const_str_plain_contextlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes) && "mod_consts.const_str_plain_wintypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e", mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e) && "mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__util", mod_consts.const_str_plain__util);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__util) && "mod_consts.const_str_plain__util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_win32_vks", mod_consts.const_str_plain_win32_vks);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_win32_vks) && "mod_consts.const_str_plain_win32_vks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VK", mod_consts.const_str_plain_VK);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_VK) && "mod_consts.const_str_plain_VK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745) && "mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_tuple", mod_consts.const_tuple_str_plain_AbstractListener_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_tuple) && "mod_consts.const_tuple_str_plain_AbstractListener_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener) && "mod_consts.const_str_plain_AbstractListener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8) && "mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple", mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple) && "mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin) && "mod_consts.const_str_plain_ListenerMixin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__base_tuple", mod_consts.const_tuple_str_plain__base_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_tuple) && "mod_consts.const_tuple_str_plain__base_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base", mod_consts.const_str_plain__base);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__base) && "mod_consts.const_str_plain__base");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775", mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775) && "mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51", mod_consts.const_int_pos_51);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_51) && "mod_consts.const_int_pos_51");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple", mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple) && "mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PLATFORM_EXTENSIONS", mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__PLATFORM_EXTENSIONS) && "mod_consts.const_str_plain__PLATFORM_EXTENSIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86", mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86) && "mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__from_ext", mod_consts.const_str_plain__from_ext);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_ext) && "mod_consts.const_str_plain__from_ext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3", mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3) && "mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum) && "mod_consts.const_str_plain_Enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Key) && "mod_consts.const_str_plain_Key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_114) && "mod_consts.const_int_pos_114");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_MENU) && "mod_consts.const_str_plain_MENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt) && "mod_consts.const_str_plain_alt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LMENU", mod_consts.const_str_plain_LMENU);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_LMENU) && "mod_consts.const_str_plain_LMENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l) && "mod_consts.const_str_plain_alt_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RMENU", mod_consts.const_str_plain_RMENU);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_RMENU) && "mod_consts.const_str_plain_RMENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r) && "mod_consts.const_str_plain_alt_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr) && "mod_consts.const_str_plain_alt_gr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BACK", mod_consts.const_str_plain_BACK);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_BACK) && "mod_consts.const_str_plain_BACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backspace", mod_consts.const_str_plain_backspace);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_backspace) && "mod_consts.const_str_plain_backspace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CAPITAL", mod_consts.const_str_plain_CAPITAL);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_CAPITAL) && "mod_consts.const_str_plain_CAPITAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_caps_lock", mod_consts.const_str_plain_caps_lock);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_caps_lock) && "mod_consts.const_str_plain_caps_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LWIN", mod_consts.const_str_plain_LWIN);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_LWIN) && "mod_consts.const_str_plain_LWIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd) && "mod_consts.const_str_plain_cmd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l) && "mod_consts.const_str_plain_cmd_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RWIN", mod_consts.const_str_plain_RWIN);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_RWIN) && "mod_consts.const_str_plain_RWIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r) && "mod_consts.const_str_plain_cmd_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL) && "mod_consts.const_str_plain_CONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl) && "mod_consts.const_str_plain_ctrl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LCONTROL", mod_consts.const_str_plain_LCONTROL);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_LCONTROL) && "mod_consts.const_str_plain_LCONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l) && "mod_consts.const_str_plain_ctrl_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RCONTROL", mod_consts.const_str_plain_RCONTROL);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_RCONTROL) && "mod_consts.const_str_plain_RCONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r) && "mod_consts.const_str_plain_ctrl_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DELETE", mod_consts.const_str_plain_DELETE);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE) && "mod_consts.const_str_plain_DELETE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete) && "mod_consts.const_str_plain_delete");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOWN", mod_consts.const_str_plain_DOWN);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN) && "mod_consts.const_str_plain_DOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_down", mod_consts.const_str_plain_down);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_down) && "mod_consts.const_str_plain_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_END", mod_consts.const_str_plain_END);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_END) && "mod_consts.const_str_plain_END");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETURN", mod_consts.const_str_plain_RETURN);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_RETURN) && "mod_consts.const_str_plain_RETURN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_enter) && "mod_consts.const_str_plain_enter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ESCAPE", mod_consts.const_str_plain_ESCAPE);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE) && "mod_consts.const_str_plain_ESCAPE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_esc", mod_consts.const_str_plain_esc);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_esc) && "mod_consts.const_str_plain_esc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F1", mod_consts.const_str_plain_F1);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_F1) && "mod_consts.const_str_plain_F1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f1", mod_consts.const_str_plain_f1);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_f1) && "mod_consts.const_str_plain_f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F2", mod_consts.const_str_plain_F2);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_F2) && "mod_consts.const_str_plain_F2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f2", mod_consts.const_str_plain_f2);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_f2) && "mod_consts.const_str_plain_f2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F3", mod_consts.const_str_plain_F3);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_F3) && "mod_consts.const_str_plain_F3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f3", mod_consts.const_str_plain_f3);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_f3) && "mod_consts.const_str_plain_f3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F4", mod_consts.const_str_plain_F4);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_F4) && "mod_consts.const_str_plain_F4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f4", mod_consts.const_str_plain_f4);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_f4) && "mod_consts.const_str_plain_f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F5", mod_consts.const_str_plain_F5);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_F5) && "mod_consts.const_str_plain_F5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f5", mod_consts.const_str_plain_f5);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_f5) && "mod_consts.const_str_plain_f5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F6", mod_consts.const_str_plain_F6);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_F6) && "mod_consts.const_str_plain_F6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f6", mod_consts.const_str_plain_f6);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_f6) && "mod_consts.const_str_plain_f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F7", mod_consts.const_str_plain_F7);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_F7) && "mod_consts.const_str_plain_F7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f7", mod_consts.const_str_plain_f7);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_f7) && "mod_consts.const_str_plain_f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F8", mod_consts.const_str_plain_F8);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_F8) && "mod_consts.const_str_plain_F8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f8", mod_consts.const_str_plain_f8);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_f8) && "mod_consts.const_str_plain_f8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F9", mod_consts.const_str_plain_F9);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_F9) && "mod_consts.const_str_plain_F9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f9", mod_consts.const_str_plain_f9);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_f9) && "mod_consts.const_str_plain_f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F10", mod_consts.const_str_plain_F10);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_F10) && "mod_consts.const_str_plain_F10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f10", mod_consts.const_str_plain_f10);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_f10) && "mod_consts.const_str_plain_f10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F11", mod_consts.const_str_plain_F11);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_F11) && "mod_consts.const_str_plain_F11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f11", mod_consts.const_str_plain_f11);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_f11) && "mod_consts.const_str_plain_f11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F12", mod_consts.const_str_plain_F12);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_F12) && "mod_consts.const_str_plain_F12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f12", mod_consts.const_str_plain_f12);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_f12) && "mod_consts.const_str_plain_f12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F13", mod_consts.const_str_plain_F13);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_F13) && "mod_consts.const_str_plain_F13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f13", mod_consts.const_str_plain_f13);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_f13) && "mod_consts.const_str_plain_f13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F14", mod_consts.const_str_plain_F14);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_F14) && "mod_consts.const_str_plain_F14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f14", mod_consts.const_str_plain_f14);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_f14) && "mod_consts.const_str_plain_f14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F15", mod_consts.const_str_plain_F15);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_F15) && "mod_consts.const_str_plain_F15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f15", mod_consts.const_str_plain_f15);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_f15) && "mod_consts.const_str_plain_f15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F16", mod_consts.const_str_plain_F16);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_F16) && "mod_consts.const_str_plain_F16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f16", mod_consts.const_str_plain_f16);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_f16) && "mod_consts.const_str_plain_f16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F17", mod_consts.const_str_plain_F17);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_F17) && "mod_consts.const_str_plain_F17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f17", mod_consts.const_str_plain_f17);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_f17) && "mod_consts.const_str_plain_f17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F18", mod_consts.const_str_plain_F18);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_F18) && "mod_consts.const_str_plain_F18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f18", mod_consts.const_str_plain_f18);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_f18) && "mod_consts.const_str_plain_f18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F19", mod_consts.const_str_plain_F19);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_F19) && "mod_consts.const_str_plain_F19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f19", mod_consts.const_str_plain_f19);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_f19) && "mod_consts.const_str_plain_f19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F20", mod_consts.const_str_plain_F20);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_F20) && "mod_consts.const_str_plain_F20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f20", mod_consts.const_str_plain_f20);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_f20) && "mod_consts.const_str_plain_f20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F21", mod_consts.const_str_plain_F21);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_F21) && "mod_consts.const_str_plain_F21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f21", mod_consts.const_str_plain_f21);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_f21) && "mod_consts.const_str_plain_f21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F22", mod_consts.const_str_plain_F22);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_F22) && "mod_consts.const_str_plain_F22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f22", mod_consts.const_str_plain_f22);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_f22) && "mod_consts.const_str_plain_f22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F23", mod_consts.const_str_plain_F23);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_F23) && "mod_consts.const_str_plain_F23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f23", mod_consts.const_str_plain_f23);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_f23) && "mod_consts.const_str_plain_f23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F24", mod_consts.const_str_plain_F24);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_F24) && "mod_consts.const_str_plain_F24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f24", mod_consts.const_str_plain_f24);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_f24) && "mod_consts.const_str_plain_f24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HOME", mod_consts.const_str_plain_HOME);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOME) && "mod_consts.const_str_plain_HOME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_home", mod_consts.const_str_plain_home);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_home) && "mod_consts.const_str_plain_home");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT) && "mod_consts.const_str_plain_LEFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_left) && "mod_consts.const_str_plain_left");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NEXT", mod_consts.const_str_plain_NEXT);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_NEXT) && "mod_consts.const_str_plain_NEXT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_down", mod_consts.const_str_plain_page_down);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_down) && "mod_consts.const_str_plain_page_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIOR", mod_consts.const_str_plain_PRIOR);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRIOR) && "mod_consts.const_str_plain_PRIOR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_up", mod_consts.const_str_plain_page_up);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_up) && "mod_consts.const_str_plain_page_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT) && "mod_consts.const_str_plain_RIGHT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_right) && "mod_consts.const_str_plain_right");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LSHIFT", mod_consts.const_str_plain_LSHIFT);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_LSHIFT) && "mod_consts.const_str_plain_LSHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift) && "mod_consts.const_str_plain_shift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l) && "mod_consts.const_str_plain_shift_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSHIFT", mod_consts.const_str_plain_RSHIFT);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSHIFT) && "mod_consts.const_str_plain_RSHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r) && "mod_consts.const_str_plain_shift_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPACE", mod_consts.const_str_plain_SPACE);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPACE) && "mod_consts.const_str_plain_SPACE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple) && "mod_consts.const_tuple_str_space_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_char_tuple", mod_consts.const_tuple_str_plain_char_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_char_tuple) && "mod_consts.const_tuple_str_plain_char_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_space", mod_consts.const_str_plain_space);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_space) && "mod_consts.const_str_plain_space");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAB", mod_consts.const_str_plain_TAB);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAB) && "mod_consts.const_str_plain_TAB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab) && "mod_consts.const_str_plain_tab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UP", mod_consts.const_str_plain_UP);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_UP) && "mod_consts.const_str_plain_UP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_up", mod_consts.const_str_plain_up);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_up) && "mod_consts.const_str_plain_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PLAY_PAUSE", mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PLAY_PAUSE) && "mod_consts.const_str_plain_MEDIA_PLAY_PAUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_play_pause", mod_consts.const_str_plain_media_play_pause);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_play_pause) && "mod_consts.const_str_plain_media_play_pause");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_STOP", mod_consts.const_str_plain_MEDIA_STOP);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_STOP) && "mod_consts.const_str_plain_MEDIA_STOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_stop", mod_consts.const_str_plain_media_stop);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_stop) && "mod_consts.const_str_plain_media_stop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_MUTE", mod_consts.const_str_plain_VOLUME_MUTE);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_MUTE) && "mod_consts.const_str_plain_VOLUME_MUTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_mute", mod_consts.const_str_plain_media_volume_mute);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_mute) && "mod_consts.const_str_plain_media_volume_mute");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_DOWN", mod_consts.const_str_plain_VOLUME_DOWN);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_DOWN) && "mod_consts.const_str_plain_VOLUME_DOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_down", mod_consts.const_str_plain_media_volume_down);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_down) && "mod_consts.const_str_plain_media_volume_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_UP", mod_consts.const_str_plain_VOLUME_UP);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_UP) && "mod_consts.const_str_plain_VOLUME_UP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_up", mod_consts.const_str_plain_media_volume_up);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_up) && "mod_consts.const_str_plain_media_volume_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PREV_TRACK", mod_consts.const_str_plain_MEDIA_PREV_TRACK);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PREV_TRACK) && "mod_consts.const_str_plain_MEDIA_PREV_TRACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_previous", mod_consts.const_str_plain_media_previous);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_previous) && "mod_consts.const_str_plain_media_previous");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_NEXT_TRACK", mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_NEXT_TRACK) && "mod_consts.const_str_plain_MEDIA_NEXT_TRACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_next", mod_consts.const_str_plain_media_next);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_next) && "mod_consts.const_str_plain_media_next");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INSERT", mod_consts.const_str_plain_INSERT);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_INSERT) && "mod_consts.const_str_plain_INSERT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insert", mod_consts.const_str_plain_insert);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert) && "mod_consts.const_str_plain_insert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APPS", mod_consts.const_str_plain_APPS);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_APPS) && "mod_consts.const_str_plain_APPS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_menu", mod_consts.const_str_plain_menu);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_menu) && "mod_consts.const_str_plain_menu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMLOCK", mod_consts.const_str_plain_NUMLOCK);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMLOCK) && "mod_consts.const_str_plain_NUMLOCK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_lock", mod_consts.const_str_plain_num_lock);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_lock) && "mod_consts.const_str_plain_num_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PAUSE", mod_consts.const_str_plain_PAUSE);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE) && "mod_consts.const_str_plain_PAUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pause", mod_consts.const_str_plain_pause);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_pause) && "mod_consts.const_str_plain_pause");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SNAPSHOT", mod_consts.const_str_plain_SNAPSHOT);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain_SNAPSHOT) && "mod_consts.const_str_plain_SNAPSHOT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_print_screen", mod_consts.const_str_plain_print_screen);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_print_screen) && "mod_consts.const_str_plain_print_screen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL", mod_consts.const_str_plain_SCROLL);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL) && "mod_consts.const_str_plain_SCROLL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scroll_lock", mod_consts.const_str_plain_scroll_lock);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_lock) && "mod_consts.const_str_plain_scroll_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_187", mod_consts.const_int_pos_187);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_int_pos_187) && "mod_consts.const_int_pos_187");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KeyCode", mod_consts.const_str_plain__KeyCode);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain__KeyCode) && "mod_consts.const_str_plain__KeyCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Key", mod_consts.const_str_plain__Key);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain__Key) && "mod_consts.const_str_plain__Key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880) && "mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle", mod_consts.const_str_plain__handle);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle) && "mod_consts.const_str_plain__handle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902", mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902) && "mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_239", mod_consts.const_int_pos_239);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_int_pos_239) && "mod_consts.const_int_pos_239");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_int_pos_13) && "mod_consts.const_int_pos_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS) && "mod_consts.const_str_plain__EVENTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_81", mod_consts.const_int_pos_81);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_int_pos_81) && "mod_consts.const_int_pos_81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_KEYDOWN", mod_consts.const_str_plain__WM_KEYDOWN);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_KEYDOWN) && "mod_consts.const_str_plain__WM_KEYDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_int_pos_257) && "mod_consts.const_int_pos_257");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_KEYUP", mod_consts.const_str_plain__WM_KEYUP);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_KEYUP) && "mod_consts.const_str_plain__WM_KEYUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_260", mod_consts.const_int_pos_260);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_int_pos_260) && "mod_consts.const_int_pos_260");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_SYSKEYDOWN", mod_consts.const_str_plain__WM_SYSKEYDOWN);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_SYSKEYDOWN) && "mod_consts.const_str_plain__WM_SYSKEYDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_261", mod_consts.const_int_pos_261);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_int_pos_261) && "mod_consts.const_int_pos_261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_SYSKEYUP", mod_consts.const_str_plain__WM_SYSKEYUP);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_SYSKEYUP) && "mod_consts.const_str_plain__WM_SYSKEYUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8192", mod_consts.const_int_pos_8192);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_int_pos_8192) && "mod_consts.const_int_pos_8192");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_231", mod_consts.const_int_pos_231);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_int_pos_231) && "mod_consts.const_int_pos_231");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WM_NOTIFICATIONS", mod_consts.const_str_plain__WM_NOTIFICATIONS);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_plain__WM_NOTIFICATIONS) && "mod_consts.const_str_plain__WM_NOTIFICATIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException) && "mod_consts.const_str_plain_SuppressException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANDLED_EXCEPTIONS", mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_plain__HANDLED_EXCEPTIONS) && "mod_consts.const_str_plain__HANDLED_EXCEPTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92", mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92) && "mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8", mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8) && "mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_int_pos_273) && "mod_consts.const_int_pos_273");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD) && "mod_consts.const_str_plain_DWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo) && "mod_consts.const_str_plain_dwExtraInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p) && "mod_consts.const_str_plain_c_void_p");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc) && "mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert", mod_consts.const_str_plain__convert);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert) && "mod_consts.const_str_plain__convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066", mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066) && "mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emitter", mod_consts.const_str_plain__emitter);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_plain__emitter) && "mod_consts.const_str_plain__emitter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__process", mod_consts.const_str_plain__process);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_str_plain__process) && "mod_consts.const_str_plain__process");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1", mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1) && "mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager) && "mod_consts.const_str_plain_contextmanager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_notification", mod_consts.const_str_plain__on_notification);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_notification) && "mod_consts.const_str_plain__on_notification");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696", mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696) && "mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d", mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d) && "mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f", mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f) && "mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3", mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3) && "mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple", mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple) && "mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193", mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193) && "mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple", mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple) && "mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple", mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df", mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df) && "mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple", mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple) && "mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple", mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple) && "mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple", mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple) && "mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple", mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple) && "mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple", mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple) && "mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple", mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple) && "mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple", mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple", mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple) && "mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_pynput$keyboard$_win32$AbstractListener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$Controller(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Controller);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Controller, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Controller);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Controller, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$INPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$INPUT_union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$Key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$KeyCode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyCode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyCode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyCode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyCode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$KeyTranslator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyTranslator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyTranslator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyTranslator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyTranslator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$ListenerMixin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ListenerMixin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ListenerMixin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ListenerMixin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ListenerMixin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$MapVirtualKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$SendInput(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$SystemHook(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$VK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VK);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$VkKeyScan(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$_base(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_win32$six(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_six);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_six, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_six);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_six, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bb4da97b6ff33fbb4c885cbeb314bdc6;
static PyCodeObject *code_objects_2e491d3c12f8decca4e40735935d853b;
static PyCodeObject *code_objects_a943587e5d75e12f358b95cbb9f99108;
static PyCodeObject *code_objects_6f8f5a5598c1bdde373ecfefb231af0f;
static PyCodeObject *code_objects_e1cc99d5bafdc55e977cd71223c65656;
static PyCodeObject *code_objects_a4740f2a745456148e6d3ccf0bb31e03;
static PyCodeObject *code_objects_614cecf1afae0bd728a0b4fea9d8559f;
static PyCodeObject *code_objects_a74570e01a8d59978fa86dd4db9efe93;
static PyCodeObject *code_objects_a868d98197734055e84cf685f29c46d1;
static PyCodeObject *code_objects_1d9f0e685c3a77c89c0fc82245563a90;
static PyCodeObject *code_objects_1497184f741ea3d6aecabe06eb047832;
static PyCodeObject *code_objects_3f2eaf2d5792cf5ea03ad1ff9ff6c6ae;
static PyCodeObject *code_objects_627dec0a7aa913ec8459caf23a1a4b2c;
static PyCodeObject *code_objects_41d156cc633974d369f18b40ca8be92b;
static PyCodeObject *code_objects_e515ec1e1f599d0eff56e14a1dccc8ae;
static PyCodeObject *code_objects_decf478ba71844d3583fc335e391d6a3;
static PyCodeObject *code_objects_4a08a48d919c0e3030dc38989e44ea6b;
static PyCodeObject *code_objects_cd301cda4f5853e1d991453ea4d0cb47;
static PyCodeObject *code_objects_b247315242e475cc4c1505978f68f44d;
static PyCodeObject *code_objects_39733248436c3658ea0abdd2a2772334;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2551fe90917ff8914e65b5b16a5cc193); CHECK_OBJECT(module_filename_obj);
code_objects_bb4da97b6ff33fbb4c885cbeb314bdc6 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4, mod_consts.const_tuple_26e5aad28801208e34c806a3c824514d_tuple, NULL, 1, 0, 0);
code_objects_2e491d3c12f8decca4e40735935d853b = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_a943587e5d75e12f358b95cbb9f99108 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df, mod_consts.const_str_digest_63fa70b18f04c6a6dc768cdb8631a1df, NULL, NULL, 0, 0, 0);
code_objects_6f8f5a5598c1bdde373ecfefb231af0f = MAKE_CODE_OBJECT(module_filename_obj, 187, 0, mod_consts.const_str_plain_Controller, mod_consts.const_str_plain_Controller, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e1cc99d5bafdc55e977cd71223c65656 = MAKE_CODE_OBJECT(module_filename_obj, 114, 0, mod_consts.const_str_plain_Key, mod_consts.const_str_plain_Key, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a4740f2a745456148e6d3ccf0bb31e03 = MAKE_CODE_OBJECT(module_filename_obj, 51, 0, mod_consts.const_str_plain_KeyCode, mod_consts.const_str_plain_KeyCode, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_614cecf1afae0bd728a0b4fea9d8559f = MAKE_CODE_OBJECT(module_filename_obj, 239, 0, mod_consts.const_str_plain_Listener, mod_consts.const_str_plain_Listener, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a74570e01a8d59978fa86dd4db9efe93 = MAKE_CODE_OBJECT(module_filename_obj, 273, 0, mod_consts.const_str_plain__KBDLLHOOKSTRUCT, mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a868d98197734055e84cf685f29c46d1 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_1d9f0e685c3a77c89c0fc82245563a90 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_1497184f741ea3d6aecabe06eb047832 = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__convert, mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066, mod_consts.const_tuple_4bfa84663d7fdbf372497a2516ce2bf1_tuple, NULL, 4, 0, 0);
code_objects_3f2eaf2d5792cf5ea03ad1ff9ff6c6ae = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__event_to_key, mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_vk_tuple, NULL, 3, 0, 0);
code_objects_627dec0a7aa913ec8459caf23a1a4b2c = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__from_ext, mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_41d156cc633974d369f18b40ca8be92b = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902, mod_consts.const_tuple_9ee0de66b94e70d5d342814f5100060b_tuple, NULL, 3, 0, 0);
code_objects_e515ec1e1f599d0eff56e14a1dccc8ae = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__on_notification, mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696, mod_consts.const_tuple_73cc39deda764c37665d21108db9fcfc_tuple, NULL, 4, 0, 0);
code_objects_decf478ba71844d3583fc335e391d6a3 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__parameters, mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86, mod_consts.const_tuple_3337f003ce3f3978c9e6eff8866b2721_tuple, NULL, 2, 0, 0);
code_objects_4a08a48d919c0e3030dc38989e44ea6b = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__process, mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1, mod_consts.const_tuple_a78dbef617ab73c0634c0c9e404db70c_tuple, NULL, 3, 0, 0);
code_objects_cd301cda4f5853e1d991453ea4d0cb47 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__receive, mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b247315242e475cc4c1505978f68f44d = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__translate, mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f, mod_consts.const_tuple_str_plain_self_str_plain_vk_str_plain_is_press_tuple, NULL, 3, 0, 0);
code_objects_39733248436c3658ea0abdd2a2772334 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_canonical, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3, mod_consts.const_tuple_41ed367eb1bbe99a4651c05d546886de_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__10__event_to_key(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__11__translate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__12_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__1__parameters(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__2__from_ext(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__3___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__4__handle(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__6__convert(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__7__process(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__8__receive(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__9__on_notification(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$keyboard$_win32$$$function__1__parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_is_press = python_pars[1];
PyObject *var_vk = NULL;
PyObject *var_scan = NULL;
PyObject *var_flags = NULL;
PyObject *var_res = NULL;
PyObject *var_state_flags = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__1__parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_decf478ba71844d3583fc335e391d6a3, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__1__parameters = cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__1__parameters);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__1__parameters) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_vk);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 75;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_vk);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_vk;
    var_vk = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__scan);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 77;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_win32$MapVirtualKey(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_vk);
tmp_args_element_value_1 = var_vk;
tmp_expression_value_4 = module_var_accessor_pynput$keyboard$_win32$MapVirtualKey(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__1__parameters->m_frame.f_lineno = 77;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
{
    PyObject *old = var_flags;
    var_flags = tmp_assign_source_3;
    Py_INCREF(var_flags);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_ord_arg_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ord_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_char);
if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_65535;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_ValueError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
tmp_called_value_2 = module_var_accessor_pynput$keyboard$_win32$VkKeyScan(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VkKeyScan);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_char);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__1__parameters->m_frame.f_lineno = 84;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
CHECK_OBJECT(var_res);
tmp_rshift_expr_left_1 = var_res;
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_8;
tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_255;
tmp_cmp_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(var_res);
tmp_bitand_expr_left_2 = var_res;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_255;
tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_vk;
    var_vk = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__scan);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 87;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_called_value_3 = module_var_accessor_pynput$keyboard$_win32$MapVirtualKey(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_vk);
tmp_args_element_value_4 = var_vk;
tmp_expression_value_8 = module_var_accessor_pynput$keyboard$_win32$MapVirtualKey(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_MAPVK_VK_TO_VSC);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__1__parameters->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_6 = tmp_or_left_value_2;
or_end_2:;
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_0;
{
    PyObject *old = var_flags;
    var_flags = tmp_assign_source_7;
    Py_INCREF(var_flags);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
{
    PyObject *old = var_vk;
    var_vk = tmp_assign_source_8;
    Py_INCREF(var_vk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ord_arg_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_ord_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_char);
if (tmp_ord_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BUILTIN_ORD(tmp_ord_arg_2);
CHECK_OBJECT(tmp_ord_arg_2);
Py_DECREF(tmp_ord_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_UNICODE);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_flags;
    var_flags = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_11;
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_is_press);
tmp_operand_value_1 = par_is_press;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_11 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_KEYUP);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_11 = const_int_0;
Py_INCREF(tmp_assign_source_11);
condexpr_end_1:;
{
    PyObject *old = var_state_flags;
    var_state_flags = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_12;
tmp_dict_key_1 = mod_consts.const_str_plain_dwFlags;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__flags);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = const_int_0;
Py_INCREF(tmp_or_right_value_3);
tmp_bitor_expr_left_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_bitor_expr_left_2 = tmp_or_left_value_3;
or_end_3:;
CHECK_OBJECT(var_flags);
tmp_bitor_expr_right_2 = var_flags;
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_state_flags);
tmp_bitor_expr_right_1 = var_state_flags;
tmp_dict_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_wVk;
if (var_vk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vk);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_vk;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_wScan;
CHECK_OBJECT(var_scan);
tmp_dict_value_1 = var_scan;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__1__parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__1__parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__1__parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__1__parameters,
    type_description_1,
    par_self,
    par_is_press,
    var_vk,
    var_scan,
    var_flags,
    var_res,
    var_state_flags
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__1__parameters == cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters);
    cache_frame_frame_pynput$keyboard$_win32$$$function__1__parameters = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__1__parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_vk);
var_vk = NULL;
CHECK_OBJECT(var_scan);
CHECK_OBJECT(var_scan);
Py_DECREF(var_scan);
var_scan = NULL;
CHECK_OBJECT(var_flags);
CHECK_OBJECT(var_flags);
Py_DECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_res);
var_res = NULL;
CHECK_OBJECT(var_state_flags);
CHECK_OBJECT(var_state_flags);
Py_DECREF(var_state_flags);
var_state_flags = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_vk);
var_vk = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_state_flags);
var_state_flags = NULL;
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
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_win32$$$function__2__from_ext(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__2__from_ext;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext = MAKE_FUNCTION_FRAME(tstate, code_objects_627dec0a7aa913ec8459caf23a1a4b2c, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__2__from_ext = cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__2__from_ext);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__2__from_ext) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg4_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_vk);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vk);
tmp_tuple_element_1 = par_vk;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain__flags;
tmp_expression_value_2 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_EXTENDEDKEY);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__2__from_ext, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__2__from_ext->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__2__from_ext, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__2__from_ext,
    type_description_1,
    par_cls,
    par_vk,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__2__from_ext == cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext);
    cache_frame_frame_pynput$keyboard$_win32$$$function__2__from_ext = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__2__from_ext);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_win32$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a868d98197734055e84cf685f29c46d1, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__3___init__ = cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__3___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$_win32$Controller(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Controller);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard$_win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__3___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__3___init__ == cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__);
    cache_frame_frame_pynput$keyboard$_win32$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__3___init__);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_win32$$$function__4__handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_is_press = python_pars[2];
PyObject *var_byte_data = NULL;
PyObject *var_surrogates = NULL;
struct Nuitka_CellObject *var_state_flags = Nuitka_Cell_NewEmpty();
PyObject *outline_0_var_i = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__4__handle;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle = MAKE_FUNCTION_FRAME(tstate, code_objects_41d156cc633974d369f18b40ca8be92b, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__4__handle = cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__4__handle);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__4__handle) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = const_int_pos_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byref);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_called_value_3 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 199;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 200;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_KEYBOARD);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 200;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_called_value_4 = module_var_accessor_pynput$keyboard$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 201;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 202;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_key);
tmp_called_instance_1 = par_key;
CHECK_OBJECT(par_is_press);
tmp_args_element_value_4 = par_is_press;
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 202;
tmp_direct_call_arg2_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__parameters, tmp_args_element_value_4);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 202;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_kw_call_value_0_2 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 202;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 201;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_ki_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 201;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 199;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 199;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 198;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 206;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_args_element_value_6 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_5);

exception_lineno = 206;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 206;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 206;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 196;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__4__handle, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__4__handle, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_bytearray_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_key);
tmp_expression_value_5 = par_key;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_char);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 212;
tmp_bytearray_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_bytearray_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
CHECK_OBJECT(tmp_bytearray_arg_1);
Py_DECREF(tmp_bytearray_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
{
    PyObject *old = var_byte_data;
    var_byte_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = const_int_0;
CHECK_OBJECT(var_byte_data);
tmp_len_arg_1 = var_byte_data;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_xrange_high_1 == NULL));
tmp_xrange_step_1 = mod_consts.const_int_pos_2;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooc";
    goto try_except_handler_4;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooc";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooc";
exception_lineno = 213;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_6;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(var_byte_data);
tmp_expression_value_6 = var_byte_data;
CHECK_OBJECT(outline_0_var_i);
tmp_subscript_value_1 = outline_0_var_i;
tmp_bitor_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_byte_data);
tmp_expression_value_7 = var_byte_data;
CHECK_OBJECT(outline_0_var_i);
tmp_add_expr_left_1 = outline_0_var_i;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_subscript_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 214;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
tmp_lshift_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_lshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 214;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
tmp_lshift_expr_right_1 = mod_consts.const_int_pos_8;
tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_left_1);
Py_DECREF(tmp_lshift_expr_left_1);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 214;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
tmp_append_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooc";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
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
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 213;
goto try_except_handler_3;
outline_result_1:;
{
    PyObject *old = var_surrogates;
    var_surrogates = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_expression_value_8;
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_bitor_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_UNICODE);
if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_is_press);
tmp_operand_value_1 = par_is_press;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 219;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_9 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 219;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_KEYUP);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 219;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_bitor_expr_right_2 = const_int_0;
Py_INCREF(tmp_bitor_expr_right_2);
condexpr_end_1:;
tmp_assign_source_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
{
    PyObject *old = Nuitka_Cell_GET(var_state_flags);
    Nuitka_Cell_SET(var_state_flags, tmp_assign_source_7);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_len_arg_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_10;
tmp_called_value_7 = module_var_accessor_pynput$keyboard$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_surrogates);
tmp_len_arg_2 = var_surrogates;
tmp_args_element_value_7 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_mult_expr_left_1 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 224;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_surrogates);
tmp_len_arg_3 = var_surrogates;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 224;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_direct_call_arg1_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 224;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_surrogates);
tmp_iter_arg_2 = var_surrogates;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_state_flags;
Py_INCREF(tmp_closure_1[1]);
tmp_direct_call_arg2_2 = MAKE_GENERATOR_pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_args_element_value_8 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 224;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 235;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
tmp_args_element_value_10 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_called_value_8);

exception_lineno = 235;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 235;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 235;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 195;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame)) {
        frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooc";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__4__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__4__handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__4__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__4__handle,
    type_description_1,
    par_self,
    par_key,
    par_is_press,
    var_byte_data,
    var_surrogates,
    var_state_flags
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__4__handle == cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle);
    cache_frame_frame_pynput$keyboard$_win32$$$function__4__handle = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__4__handle);

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
Py_XDECREF(var_byte_data);
var_byte_data = NULL;
Py_XDECREF(var_surrogates);
var_surrogates = NULL;
CHECK_OBJECT(var_state_flags);
CHECK_OBJECT(var_state_flags);
Py_DECREF(var_state_flags);
var_state_flags = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_byte_data);
var_byte_data = NULL;
Py_XDECREF(var_surrogates);
var_surrogates = NULL;
CHECK_OBJECT(var_state_flags);
CHECK_OBJECT(var_state_flags);
Py_DECREF(var_state_flags);
var_state_flags = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_locals {
PyObject *var_scan;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_locals *generator_heap = (struct pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_scan = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_bb4da97b6ff33fbb4c885cbeb314bdc6, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 225;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_scan;
    generator_heap->var_scan = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_scan);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_pynput$keyboard$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_KEYBOARD);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 227;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_called_value_2 = module_var_accessor_pynput$keyboard$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_args_element_value_1);

generator_heap->exception_lineno = 228;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_called_value_3 = module_var_accessor_pynput$keyboard$_win32$KEYBDINPUT(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_args_element_value_1);

generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_state_flags);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_scan);
tmp_kw_call_value_1_1 = generator_heap->var_scan;
generator->m_frame->m_frame.f_lineno = 229;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

    tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_dwFlags_str_plain_wScan_tuple);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_1);

generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 228;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_ki_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_1);

generator_heap->exception_lineno = 228;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "Noc";
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

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_scan,
    generator->m_closure[1]
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
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_scan);
generator_heap->var_scan = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_scan);
generator_heap->var_scan = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_context,
        module_pynput$keyboard$_win32,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b9a36cfaefde3e8610e3c73e89a02ef4,
#endif
        code_objects_bb4da97b6ff33fbb4c885cbeb314bdc6,
        closure,
        2,
#if 1
        sizeof(struct pynput$keyboard$_win32$$$function__4__handle$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_win32$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1d9f0e685c3a77c89c0fc82245563a90, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__5___init__ = cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__5___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$_win32$Listener(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard$_win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_win32$KeyTranslator(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyTranslator);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__5___init__->m_frame.f_lineno = 293;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__translator, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__options);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_event_filter;

tmp_args_element_value_2 = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__$$$function__1_lambda(tstate);

frame_frame_pynput$keyboard$_win32$$$function__5___init__->m_frame.f_lineno = 294;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__event_filter, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__5___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__5___init__ == cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__);
    cache_frame_frame_pynput$keyboard$_win32$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__5___init__);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_win32$$$function__6__convert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_msg = python_pars[2];
PyObject *par_lpdata = python_pars[3];
PyObject *var_data = NULL;
PyObject *var_is_packet = NULL;
PyObject *var_injected = NULL;
PyObject *var_message = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__6__convert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert = MAKE_FUNCTION_FRAME(tstate, code_objects_1497184f741ea3d6aecabe06eb047832, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__6__convert = cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__6__convert);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__6__convert) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_code);
tmp_cmp_expr_left_1 = par_code;
tmp_expression_value_1 = module_var_accessor_pynput$keyboard$_win32$SystemHook(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HC_ACTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_cast);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_1 = par_lpdata;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 302;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__6__convert->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_contents);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_data);
tmp_expression_value_5 = var_data;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_vkCode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__VK_PACKET);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_packet;
    var_is_packet = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_data);
tmp_expression_value_7 = var_data;
tmp_bitand_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_flags);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__KBDLLHOOKSTRUCT);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_LLKHF_INJECTED);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__KBDLLHOOKSTRUCT);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_assign_source_3 = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_injected;
    var_injected = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_bitor_expr_left_3;
PyObject *tmp_bitor_expr_right_3;
PyObject *tmp_bitor_expr_left_4;
PyObject *tmp_bitor_expr_right_4;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_expression_value_12;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_msg);
tmp_bitor_expr_left_4 = par_msg;
CHECK_OBJECT(var_is_packet);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_packet);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_bitor_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__UTF16_FLAG);
if (tmp_bitor_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_bitor_expr_right_4 = const_int_0;
Py_INCREF(tmp_bitor_expr_right_4);
condexpr_end_1:;
tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
CHECK_OBJECT(tmp_bitor_expr_right_4);
Py_DECREF(tmp_bitor_expr_right_4);
if (tmp_bitor_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_injected);
tmp_truth_name_2 = CHECK_IF_TRUE(var_injected);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 315;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_bitor_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__INJECTED_FLAG);
if (tmp_bitor_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 315;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_bitor_expr_right_3 = const_int_0;
Py_INCREF(tmp_bitor_expr_right_3);
condexpr_end_2:;
tmp_assign_source_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
CHECK_OBJECT(tmp_bitor_expr_left_3);
Py_DECREF(tmp_bitor_expr_left_3);
CHECK_OBJECT(tmp_bitor_expr_right_3);
Py_DECREF(tmp_bitor_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_message;
    var_message = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_msg);
tmp_args_element_value_3 = par_msg;
CHECK_OBJECT(var_data);
tmp_args_element_value_4 = var_data;
frame_frame_pynput$keyboard$_win32$$$function__6__convert->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__event_filter,
        call_args
    );
}

if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_False;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(var_is_packet);
tmp_truth_name_3 = CHECK_IF_TRUE(var_is_packet);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_message);
tmp_tuple_element_1 = var_message;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_data);
tmp_expression_value_14 = var_data;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_scanCode);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_message);
tmp_tuple_element_2 = var_message;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_data);
tmp_expression_value_15 = var_data;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_vkCode);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
branch_end_3:;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__6__convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__6__convert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__6__convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__6__convert,
    type_description_1,
    par_self,
    par_code,
    par_msg,
    par_lpdata,
    var_data,
    var_is_packet,
    var_injected,
    var_message
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__6__convert == cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert);
    cache_frame_frame_pynput$keyboard$_win32$$$function__6__convert = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__6__convert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_is_packet);
var_is_packet = NULL;
Py_XDECREF(var_injected);
var_injected = NULL;
Py_XDECREF(var_message);
var_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_is_packet);
var_is_packet = NULL;
Py_XDECREF(var_injected);
var_injected = NULL;
Py_XDECREF(var_message);
var_message = NULL;
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


static PyObject *impl_pynput$keyboard$_win32$$$function__7__process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_wparam = python_pars[1];
PyObject *par_lparam = python_pars[2];
PyObject *var_msg = NULL;
PyObject *var_vk = NULL;
PyObject *var_is_utf16 = NULL;
PyObject *var_injected = NULL;
PyObject *var_message = NULL;
PyObject *var_scan = NULL;
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__7__process;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__7__process = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_wparam);
tmp_assign_source_1 = par_wparam;
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_1;
    Py_INCREF(var_msg);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_lparam);
tmp_assign_source_2 = par_lparam;
{
    PyObject *old = var_vk;
    var_vk = tmp_assign_source_2;
    Py_INCREF(var_vk);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__7__process)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__7__process);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__7__process == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__7__process = MAKE_FUNCTION_FRAME(tstate, code_objects_4a08a48d919c0e3030dc38989e44ea6b, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__7__process->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__7__process = cache_frame_frame_pynput$keyboard$_win32$$$function__7__process;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__7__process);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__7__process) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_msg);
tmp_bitand_expr_left_1 = var_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__UTF16_FLAG);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_utf16;
    var_is_utf16 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_msg);
tmp_bitand_expr_left_2 = var_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_bitand_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__INJECTED_FLAG);
if (tmp_bitand_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_right_2);
Py_DECREF(tmp_bitand_expr_right_2);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_injected;
    var_injected = tmp_assign_source_4;
    Py_INCREF(var_injected);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_msg);
tmp_bitand_expr_left_3 = var_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__UTF16_FLAG);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__INJECTED_FLAG);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_bitand_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
CHECK_OBJECT(tmp_bitand_expr_right_3);
Py_DECREF(tmp_bitand_expr_right_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_message;
    var_message = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_is_utf16);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_utf16);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooooooo";
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
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_vk);
tmp_assign_source_6 = var_vk;
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_6;
    Py_INCREF(var_scan);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_from_char);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$_win32$six(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_six);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scan);
tmp_args_element_value_2 = var_scan;
frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = 339;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_unichr, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = 339;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_msg);
tmp_args_element_value_3 = var_msg;
CHECK_OBJECT(var_vk);
tmp_args_element_value_4 = var_vk;
frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = 342;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__event_to_key,
        call_args
    );
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_8;
    Py_XDECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__7__process, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__7__process, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_9;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 341;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame)) {
        frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
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
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_message);
tmp_cmp_expr_left_2 = var_message;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__PRESS_MESSAGES);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
CHECK_OBJECT(var_injected);
tmp_args_element_value_6 = var_injected;
frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = 347;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_on_press,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_message);
tmp_cmp_expr_left_3 = var_message;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__RELEASE_MESSAGES);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_key);
tmp_args_element_value_7 = var_key;
CHECK_OBJECT(var_injected);
tmp_args_element_value_8 = var_injected;
frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame.f_lineno = 350;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_on_release,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
branch_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__7__process, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__7__process->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__7__process, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__7__process,
    type_description_1,
    par_self,
    par_wparam,
    par_lparam,
    var_msg,
    var_vk,
    var_is_utf16,
    var_injected,
    var_message,
    var_scan,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__7__process == cache_frame_frame_pynput$keyboard$_win32$$$function__7__process) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__7__process);
    cache_frame_frame_pynput$keyboard$_win32$$$function__7__process = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__7__process);

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
CHECK_OBJECT(var_vk);
CHECK_OBJECT(var_vk);
Py_DECREF(var_vk);
var_vk = NULL;
CHECK_OBJECT(var_is_utf16);
CHECK_OBJECT(var_is_utf16);
Py_DECREF(var_is_utf16);
var_is_utf16 = NULL;
CHECK_OBJECT(var_injected);
CHECK_OBJECT(var_injected);
Py_DECREF(var_injected);
var_injected = NULL;
CHECK_OBJECT(var_message);
CHECK_OBJECT(var_message);
Py_DECREF(var_message);
var_message = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_msg);
CHECK_OBJECT(var_msg);
Py_DECREF(var_msg);
var_msg = NULL;
CHECK_OBJECT(var_vk);
CHECK_OBJECT(var_vk);
Py_DECREF(var_vk);
var_vk = NULL;
Py_XDECREF(var_is_utf16);
var_is_utf16 = NULL;
Py_XDECREF(var_injected);
var_injected = NULL;
Py_XDECREF(var_message);
var_message = NULL;
Py_XDECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_key);
var_key = NULL;
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


static PyObject *impl_pynput$keyboard$_win32$$$function__8__receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive(tstate, tmp_closure_1);

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
struct pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_locals *generator_heap = (struct pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_cd301cda4f5853e1d991453ea4d0cb47, module_pynput$keyboard$_win32, sizeof(void *));
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
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_1 = Py_None;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 356;
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

static PyObject *MAKE_GENERATOR_pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_context,
        module_pynput$keyboard$_win32,
        mod_consts.const_str_plain__receive,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9,
#endif
        code_objects_cd301cda4f5853e1d991453ea4d0cb47,
        closure,
        1,
#if 1
        sizeof(struct pynput$keyboard$_win32$$$function__8__receive$$$genobj__1__receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_win32$$$function__9__on_notification(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_wparam = python_pars[2];
PyObject *par_lparam = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__9__on_notification;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification = MAKE_FUNCTION_FRAME(tstate, code_objects_e515ec1e1f599d0eff56e14a1dccc8ae, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__9__on_notification = cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__9__on_notification);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__9__on_notification) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_code);
tmp_cmp_expr_left_1 = par_code;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__WM_INPUTLANGCHANGE);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__translator);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_win32$$$function__9__on_notification->m_frame.f_lineno = 363;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_update_layout);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__9__on_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__9__on_notification->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__9__on_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__9__on_notification,
    type_description_1,
    par_self,
    par_code,
    par_wparam,
    par_lparam
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__9__on_notification == cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification);
    cache_frame_frame_pynput$keyboard$_win32$$$function__9__on_notification = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__9__on_notification);

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
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
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
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
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


static PyObject *impl_pynput$keyboard$_win32$$$function__10__event_to_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_vk = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key = MAKE_FUNCTION_FRAME(tstate, code_objects_3f2eaf2d5792cf5ea03ad1ff9ff6c6ae, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key = cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_vk);
tmp_cmp_expr_left_1 = par_vk;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__SPECIAL_KEYS);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__SPECIAL_KEYS);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vk);
tmp_subscript_value_1 = par_vk;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
tmp_direct_call_arg1_1 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__translate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vk);
tmp_args_element_value_1 = par_vk;
CHECK_OBJECT(par_msg);
tmp_cmp_expr_left_2 = par_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__PRESS_MESSAGES);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = (tmp_res == 1) ? Py_True : Py_False;
frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_direct_call_arg2_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key,
    type_description_1,
    par_self,
    par_msg,
    par_vk
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key == cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key);
    cache_frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__10__event_to_key);

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
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_win32$$$function__11__translate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_is_press = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__11__translate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate = MAKE_FUNCTION_FRAME(tstate, code_objects_b247315242e475cc4c1505978f68f44d, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__11__translate = cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__11__translate);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__11__translate) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_vk);
tmp_args_element_value_1 = par_vk;
CHECK_OBJECT(par_is_press);
tmp_args_element_value_2 = par_is_press;
frame_frame_pynput$keyboard$_win32$$$function__11__translate->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__translator,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__11__translate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__11__translate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__11__translate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__11__translate,
    type_description_1,
    par_self,
    par_vk,
    par_is_press
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__11__translate == cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate);
    cache_frame_frame_pynput$keyboard$_win32$$$function__11__translate = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__11__translate);

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


static PyObject *impl_pynput$keyboard$_win32$$$function__12_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_scan = NULL;
PyObject *var_char = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$function__12_canonical;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_39733248436c3658ea0abdd2a2772334, module_pynput$keyboard$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical->m_type_description == NULL);
frame_frame_pynput$keyboard$_win32$$$function__12_canonical = cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$function__12_canonical);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$function__12_canonical) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_key);
tmp_expression_value_1 = par_key;
tmp_name_value_1 = mod_consts.const_str_plain__scan;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_scan;
    var_scan = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_scan);
tmp_cmp_expr_left_1 = var_scan;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__translator);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scan);
tmp_args_element_value_1 = var_scan;
frame_frame_pynput$keyboard$_win32$$$function__12_canonical->m_frame.f_lineno = 400;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_char_from_scan, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_char;
    var_char = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_char);
tmp_cmp_expr_left_2 = var_char;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_char);
tmp_args_element_value_2 = var_char;
frame_frame_pynput$keyboard$_win32$$$function__12_canonical->m_frame.f_lineno = 402;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_from_char, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_3;
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$_win32$Listener(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_3 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard$_win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_3 = par_key;
frame_frame_pynput$keyboard$_win32$$$function__12_canonical->m_frame.f_lineno = 404;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_canonical, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooN";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$function__12_canonical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$function__12_canonical->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$function__12_canonical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$function__12_canonical,
    type_description_1,
    par_self,
    par_key,
    var_scan,
    var_char,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_win32$$$function__12_canonical == cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical);
    cache_frame_frame_pynput$keyboard$_win32$$$function__12_canonical = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_win32$$$function__12_canonical);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scan);
CHECK_OBJECT(var_scan);
Py_DECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_char);
var_char = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_char);
var_char = NULL;
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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__10__event_to_key(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__10__event_to_key,
        mod_consts.const_str_plain__event_to_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d5c43f429e89b7228443754557f296d,
#endif
        code_objects_3f2eaf2d5792cf5ea03ad1ff9ff6c6ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_806ff07fdf23889a67316e335dc8c026,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__11__translate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__11__translate,
        mod_consts.const_str_plain__translate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e21eac7c56c6eda48b42e8bf1a6946f,
#endif
        code_objects_b247315242e475cc4c1505978f68f44d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_01149bc9369e131e3d9600499e8c803b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__12_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__12_canonical,
        mod_consts.const_str_plain_canonical,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3,
#endif
        code_objects_39733248436c3658ea0abdd2a2772334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__1__parameters(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__1__parameters,
        mod_consts.const_str_plain__parameters,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a5fa2e59374c9eafee65f9cd7a5de86,
#endif
        code_objects_decf478ba71844d3583fc335e391d6a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_f6a8394f99a8e641130819fb6f0254c6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__2__from_ext(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__2__from_ext,
        mod_consts.const_str_plain__from_ext,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2b97c34ade16fc0fc9a379011bb2c0b3,
#endif
        code_objects_627dec0a7aa913ec8459caf23a1a4b2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_a806cd9a776daacc220942729a933a46,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__3___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880,
#endif
        code_objects_a868d98197734055e84cf685f29c46d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__4__handle(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__4__handle,
        mod_consts.const_str_plain__handle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902,
#endif
        code_objects_41d156cc633974d369f18b40ca8be92b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc,
#endif
        code_objects_1d9f0e685c3a77c89c0fc82245563a90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8,
#endif
        code_objects_2e491d3c12f8decca4e40735935d853b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__6__convert(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__6__convert,
        mod_consts.const_str_plain__convert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ce5aadc1c34489913e6be15bc5dad066,
#endif
        code_objects_1497184f741ea3d6aecabe06eb047832,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__7__process(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__7__process,
        mod_consts.const_str_plain__process,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1691a60ae42b2a00d848a92369d75ae1,
#endif
        code_objects_4a08a48d919c0e3030dc38989e44ea6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__8__receive(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__8__receive,
        mod_consts.const_str_plain__receive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5dcf18e05328276ee32f75b98a5155f9,
#endif
        code_objects_cd301cda4f5853e1d991453ea4d0cb47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_16bfc4b163cabfe09d0a459a933e2756,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_win32$$$function__9__on_notification(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_win32$$$function__9__on_notification,
        mod_consts.const_str_plain__on_notification,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6c0d156822ffbda1b29da806d23f696,
#endif
        code_objects_e515ec1e1f599d0eff56e14a1dccc8ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_win32,
        mod_consts.const_str_digest_31f9dd2ec87dd44eb85b81c31b450478,
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

static function_impl_code const function_table_pynput$keyboard$_win32[] = {
impl_pynput$keyboard$_win32$$$function__1__parameters,
impl_pynput$keyboard$_win32$$$function__2__from_ext,
impl_pynput$keyboard$_win32$$$function__3___init__,
impl_pynput$keyboard$_win32$$$function__4__handle,
impl_pynput$keyboard$_win32$$$function__5___init__,
impl_pynput$keyboard$_win32$$$function__6__convert,
impl_pynput$keyboard$_win32$$$function__7__process,
impl_pynput$keyboard$_win32$$$function__8__receive,
impl_pynput$keyboard$_win32$$$function__9__on_notification,
impl_pynput$keyboard$_win32$$$function__10__event_to_key,
impl_pynput$keyboard$_win32$$$function__11__translate,
impl_pynput$keyboard$_win32$$$function__12_canonical,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$keyboard$_win32);
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
        module_pynput$keyboard$_win32,
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
        function_table_pynput$keyboard$_win32,
        sizeof(function_table_pynput$keyboard$_win32) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput.keyboard._win32";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$keyboard$_win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$keyboard$_win32");

    // Store the module for future use.
    module_pynput$keyboard$_win32 = module;

    moduledict_pynput$keyboard$_win32 = MODULE_DICT(module_pynput$keyboard$_win32);

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
        PRINT_STRING("pynput$keyboard$_win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$keyboard$_win32: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$keyboard$_win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard._win32" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$keyboard$_win32\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pynput$keyboard$_win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard$_win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard$_win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard$_win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard$_win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$keyboard$_win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$keyboard$_win32);
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

        UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyCellObject *outline_2_var___class__ = NULL;
PyCellObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var_key = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Listener$dictcontraction_1__$0 = NULL;
PyObject *tmp_Listener$dictcontraction_1__contraction = NULL;
PyObject *tmp_Listener$dictcontraction_1__iter_value_0 = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pynput$keyboard$_win32$$$class__1_KeyCode_51 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_pynput$keyboard$_win32$$$class__2_Key_114 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$class__2_Key_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_pynput$keyboard$_win32$$$class__3_Controller_187 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_pynput$keyboard$_win32$$$class__4_Listener_239 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_4232740b358429657a8893c921b8ade5;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$keyboard$_win32 = MAKE_MODULE_FRAME(code_objects_a943587e5d75e12f358b95cbb9f99108, module_pynput$keyboard$_win32);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$keyboard$_win32$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$keyboard$_win32$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 27;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 29;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_six;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 30;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_six, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_69862c323a75aaafb285397d1b5f8a8e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 34;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain__util,
        const_int_0
    );
} else {
    tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__util);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_win32_vks,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_win32_vks);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VK, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_AbstractListener_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 36;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_AbstractListener,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AbstractListener);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_f5472d1a02b343f85e5c7afb8928e38a_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 37;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_INPUT,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_INPUT);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_INPUT_union,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_KEYBDINPUT,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_KeyTranslator,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_KeyTranslator);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyTranslator, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_ListenerMixin,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ListenerMixin);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_MapVirtualKey,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_MapVirtualKey);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MapVirtualKey, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_SendInput,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_SendInput);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_SystemHook,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_SystemHook);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain_VkKeyScan,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_VkKeyScan);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_VkKeyScan, tmp_assign_source_21);
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
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = const_str_empty;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pynput$keyboard$_win32;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__base_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 48;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pynput$keyboard$_win32,
        mod_consts.const_str_plain__base,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain__base);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base, tmp_assign_source_22);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pynput$keyboard$_win32$_base(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_KeyCode);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_KeyCode;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 51;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 51;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 51;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
branch_end_1:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$keyboard$_win32$$$class__1_KeyCode_51 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyCode;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_51;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2 = MAKE_CLASS_FRAME(tstate, code_objects_a4740f2a745456148e6d3ccf0bb31e03, module_pynput$keyboard$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2, locals_pynput$keyboard$_win32$$$class__1_KeyCode_51);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain__flags_str_plain__scan_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain__PLATFORM_EXTENSIONS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain__flags, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain__scan, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__1__parameters(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain__parameters, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__2__from_ext(tstate);

frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2->m_frame.f_lineno = 100;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain__from_ext, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__1_KeyCode_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain_KeyCode;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pynput$keyboard$_win32$$$class__1_KeyCode_51;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51);
locals_pynput$keyboard$_win32$$$class__1_KeyCode_51 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_win32$$$class__1_KeyCode_51);
locals_pynput$keyboard$_win32$$$class__1_KeyCode_51 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 51;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode, tmp_assign_source_29);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_pynput$keyboard$_win32$enum(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Enum);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_31, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_Key;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 114;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 114;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 114;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
branch_end_4:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pynput$keyboard$_win32$$$class__2_Key_114 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Key;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_114;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3 = MAKE_CLASS_FRAME(tstate, code_objects_e1cc99d5bafdc55e977cd71223c65656, module_pynput$keyboard$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3, locals_pynput$keyboard$_win32$$$class__2_Key_114);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$class__2_Key_3);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_16;
tmp_expression_value_15 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_16 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_MENU);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 115;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_alt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_18;
tmp_expression_value_17 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_18 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_LMENU);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 116;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_alt_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_20;
tmp_expression_value_19 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_20 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_RMENU);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 117;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_alt_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_22;
tmp_expression_value_21 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_22 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_22 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_RMENU);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 118;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_alt_gr, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_24;
tmp_expression_value_23 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_24 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_BACK);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 119;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_backspace, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_26;
tmp_expression_value_25 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_25 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_26 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_26 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_CAPITAL);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 120;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_caps_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_28;
tmp_expression_value_27 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_27 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_28 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_LWIN);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 121;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_cmd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_30;
tmp_expression_value_29 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_30 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_LWIN);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 122;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_cmd_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_32;
tmp_expression_value_31 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_32 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_RWIN);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 123;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_cmd_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_34;
tmp_expression_value_33 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_34 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_34 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_CONTROL);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 124;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_ctrl, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_36;
tmp_expression_value_35 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_35 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_36 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_36 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_LCONTROL);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 125;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_ctrl_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_38;
tmp_expression_value_37 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_37 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_38 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_38 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_RCONTROL);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 126;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_ctrl_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_40;
tmp_expression_value_39 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_39 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_40 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_40 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_DELETE);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_42;
tmp_expression_value_41 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_41 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_42 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_17);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_DOWN);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 128;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_44;
tmp_expression_value_43 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_44 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_44 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_END);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 129;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, const_str_plain_end, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_46;
tmp_expression_value_45 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_45 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_46 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_46 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_RETURN);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 130;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_enter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_47;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_48;
tmp_expression_value_47 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_47 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_48 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_48 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_ESCAPE);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 131;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_esc, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_49;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_50;
tmp_expression_value_49 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_49 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_50 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_50 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_21);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_F1);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 132;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_52;
tmp_expression_value_51 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_51 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_52 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_52 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_F2);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 133;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f2, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_54;
tmp_expression_value_53 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_53 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_54 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_54 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_23);

exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_F3);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 134;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f3, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_56;
tmp_expression_value_55 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_55 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_56 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_56 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_F4);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 135;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f4, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_58;
tmp_expression_value_57 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_57 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_58 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_58 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_25);

exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_F5);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 136;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f5, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_element_value_24;
PyObject *tmp_expression_value_60;
tmp_expression_value_59 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_59 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_60 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_60 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_60 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_26);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_60);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_F6);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 137;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f6, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_61;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_62;
tmp_expression_value_61 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_61 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_61 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_61);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_61);
Py_DECREF(tmp_expression_value_61);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_62 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_62 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_F7);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 138;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f7, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_64;
tmp_expression_value_63 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_63 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_64 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_64 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_F8);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 139;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f8, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_66;
tmp_expression_value_65 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_65 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_66 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_66 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_29);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_F9);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 140;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f9, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_67;
PyObject *tmp_args_element_value_28;
PyObject *tmp_expression_value_68;
tmp_expression_value_67 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_67 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_67 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_67);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_67);
Py_DECREF(tmp_expression_value_67);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_68 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_68 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_68 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_30);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_68);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_F10);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_30);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 141;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f10, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_70;
tmp_expression_value_69 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_69 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_70 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_70 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_70 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_31);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_70);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_F11);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 142;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f11, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_71;
PyObject *tmp_args_element_value_30;
PyObject *tmp_expression_value_72;
tmp_expression_value_71 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_71 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_71 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_71);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_72 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_72 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_72 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_32);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_72);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_F12);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_32);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 143;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f12, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_73;
PyObject *tmp_args_element_value_31;
PyObject *tmp_expression_value_74;
tmp_expression_value_73 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_73 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_73 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_73);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_74 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_74 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_33);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_F13);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_33);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 144;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f13, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_element_value_32;
PyObject *tmp_expression_value_76;
tmp_expression_value_75 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_75 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_75 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_75);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_76 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_76 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_76 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_34);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_76);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_F14);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 145;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f14, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_77;
PyObject *tmp_args_element_value_33;
PyObject *tmp_expression_value_78;
tmp_expression_value_77 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_77 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_77 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_77);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_78 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_78 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_35);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_F15);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_35);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 146;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_33);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f15, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_36;
PyObject *tmp_expression_value_79;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_80;
tmp_expression_value_79 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_79 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_79);
Py_DECREF(tmp_expression_value_79);
if (tmp_called_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_80 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_80 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_36);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_F16);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_36);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_34);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f16, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_element_value_35;
PyObject *tmp_expression_value_82;
tmp_expression_value_81 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_81 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_81 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_81);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_82 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_82 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_82 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_37);

exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_82);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_F17);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_37);

exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 148;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_35);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f17, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_38;
PyObject *tmp_expression_value_83;
PyObject *tmp_args_element_value_36;
PyObject *tmp_expression_value_84;
tmp_expression_value_83 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_83 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_83 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_83);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_83);
Py_DECREF(tmp_expression_value_83);
if (tmp_called_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_84 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_84 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_84 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_38);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_84);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_F18);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_args_element_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_38);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 149;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f18, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_85;
PyObject *tmp_args_element_value_37;
PyObject *tmp_expression_value_86;
tmp_expression_value_85 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_86 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_86 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_86 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_39);

exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_86);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_F19);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_39);

exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 150;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_37);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f19, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_40;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_element_value_38;
PyObject *tmp_expression_value_88;
tmp_expression_value_87 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_87 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_87 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_87 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_87 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_87);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_87);
Py_DECREF(tmp_expression_value_87);
if (tmp_called_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_88 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_88 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_88 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_88 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_88 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_40);

exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_88);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_F20);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_args_element_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_40);

exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 151;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_38);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f20, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_41;
PyObject *tmp_expression_value_89;
PyObject *tmp_args_element_value_39;
PyObject *tmp_expression_value_90;
tmp_expression_value_89 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_89 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_89 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_89);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
if (tmp_called_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_90 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_90 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_90 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_90 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_41);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_90);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_F21);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_41);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 152;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_39);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f21, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_91;
PyObject *tmp_args_element_value_40;
PyObject *tmp_expression_value_92;
tmp_expression_value_91 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_91 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_91 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_91 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_91);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_92 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_92 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_42);

exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_F22);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_42);

exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 153;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f22, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_element_value_41;
PyObject *tmp_expression_value_94;
tmp_expression_value_93 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_93 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_93 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_93);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_94 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_94 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_94 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_43);

exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_94);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_F23);
CHECK_OBJECT(tmp_expression_value_94);
Py_DECREF(tmp_expression_value_94);
if (tmp_args_element_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_43);

exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 154;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_41);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f23, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_44;
PyObject *tmp_expression_value_95;
PyObject *tmp_args_element_value_42;
PyObject *tmp_expression_value_96;
tmp_expression_value_95 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_95 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_95 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_95);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_96 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_96 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_96 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_44);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_96);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_F24);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_args_element_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_44);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 155;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_42);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_f24, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_97;
PyObject *tmp_args_element_value_43;
PyObject *tmp_expression_value_98;
tmp_expression_value_97 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_97 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_97 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_97);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_97);
Py_DECREF(tmp_expression_value_97);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_98 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_98 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_98 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_45);

exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_98);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_HOME);
CHECK_OBJECT(tmp_expression_value_98);
Py_DECREF(tmp_expression_value_98);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_45);

exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 156;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_43);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_home, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_element_value_44;
PyObject *tmp_expression_value_100;
tmp_expression_value_99 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_99 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_99 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_99);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_called_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_100 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_100 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_100 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_46);

exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_100);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_LEFT);
CHECK_OBJECT(tmp_expression_value_100);
Py_DECREF(tmp_expression_value_100);
if (tmp_args_element_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_46);

exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 157;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_44);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_left, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_47;
PyObject *tmp_expression_value_101;
PyObject *tmp_args_element_value_45;
PyObject *tmp_expression_value_102;
tmp_expression_value_101 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_101 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_101 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_101);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_101);
Py_DECREF(tmp_expression_value_101);
if (tmp_called_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_102 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_102 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_102 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_47);

exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_102);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_NEXT);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_args_element_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_47);

exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 158;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_45);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_page_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_48;
PyObject *tmp_expression_value_103;
PyObject *tmp_args_element_value_46;
PyObject *tmp_expression_value_104;
tmp_expression_value_103 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_103 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_103 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_103 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_103 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_103);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_103);
Py_DECREF(tmp_expression_value_103);
if (tmp_called_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_104 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_104 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_104 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_104 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_104 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_48);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_104);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_PRIOR);
CHECK_OBJECT(tmp_expression_value_104);
Py_DECREF(tmp_expression_value_104);
if (tmp_args_element_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_48);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 159;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_46);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_page_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_49;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_element_value_47;
PyObject *tmp_expression_value_106;
tmp_expression_value_105 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_105 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_105 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_105);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_105);
Py_DECREF(tmp_expression_value_105);
if (tmp_called_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_106 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_106 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_106 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_106 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_106 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_49);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_106);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain_RIGHT);
CHECK_OBJECT(tmp_expression_value_106);
Py_DECREF(tmp_expression_value_106);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_49);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 160;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_47);
CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_right, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_50;
PyObject *tmp_expression_value_107;
PyObject *tmp_args_element_value_48;
PyObject *tmp_expression_value_108;
tmp_expression_value_107 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_107 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_107 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_107 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_107 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_107);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_107);
Py_DECREF(tmp_expression_value_107);
if (tmp_called_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_108 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_108 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_108 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_108 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_108 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_50);

exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_108);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain_LSHIFT);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_args_element_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_50);

exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 161;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_48);
CHECK_OBJECT(tmp_called_value_50);
Py_DECREF(tmp_called_value_50);
CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_shift, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_51;
PyObject *tmp_expression_value_109;
PyObject *tmp_args_element_value_49;
PyObject *tmp_expression_value_110;
tmp_expression_value_109 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_109 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_109 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_109 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_109 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_109);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_109);
Py_DECREF(tmp_expression_value_109);
if (tmp_called_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_110 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_110 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_110 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_110 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_51);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_110);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts.const_str_plain_LSHIFT);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
if (tmp_args_element_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_51);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 162;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_49);
CHECK_OBJECT(tmp_called_value_51);
Py_DECREF(tmp_called_value_51);
CHECK_OBJECT(tmp_args_element_value_49);
Py_DECREF(tmp_args_element_value_49);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_shift_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_52;
PyObject *tmp_expression_value_111;
PyObject *tmp_args_element_value_50;
PyObject *tmp_expression_value_112;
tmp_expression_value_111 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_111 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_111 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_111);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_111);
if (tmp_called_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_112 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_112 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_112 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_112 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_52);

exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_112);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts.const_str_plain_RSHIFT);
CHECK_OBJECT(tmp_expression_value_112);
Py_DECREF(tmp_expression_value_112);
if (tmp_args_element_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_52);

exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 163;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_50);
CHECK_OBJECT(tmp_called_value_52);
Py_DECREF(tmp_called_value_52);
CHECK_OBJECT(tmp_args_element_value_50);
Py_DECREF(tmp_args_element_value_50);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_shift_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_53;
PyObject *tmp_expression_value_113;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_114;
tmp_expression_value_113 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_113 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_113 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_113 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_113 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_113);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
if (tmp_called_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_114 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_114 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_114 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_114 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_53);

exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_114);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts.const_str_plain_SPACE);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_53);

exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 164;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_53,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_space_tuple, 0),
        mod_consts.const_tuple_str_plain_char_tuple
    );
}

CHECK_OBJECT(tmp_called_value_53);
Py_DECREF(tmp_called_value_53);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_space, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_54;
PyObject *tmp_expression_value_115;
PyObject *tmp_args_element_value_51;
PyObject *tmp_expression_value_116;
tmp_expression_value_115 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_115 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_115 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_115 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_115 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_115);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_115);
Py_DECREF(tmp_expression_value_115);
if (tmp_called_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_116 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_116 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_116 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_116 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_116 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_54);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_116);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain_TAB);
CHECK_OBJECT(tmp_expression_value_116);
Py_DECREF(tmp_expression_value_116);
if (tmp_args_element_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_54);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 165;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_51);
CHECK_OBJECT(tmp_called_value_54);
Py_DECREF(tmp_called_value_54);
CHECK_OBJECT(tmp_args_element_value_51);
Py_DECREF(tmp_args_element_value_51);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_tab, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_55;
PyObject *tmp_expression_value_117;
PyObject *tmp_args_element_value_52;
PyObject *tmp_expression_value_118;
tmp_expression_value_117 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_117 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_117 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_117 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_117 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_117);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_117);
Py_DECREF(tmp_expression_value_117);
if (tmp_called_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_118 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_118 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_118 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_118 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_118 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_55);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_118);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts.const_str_plain_UP);
CHECK_OBJECT(tmp_expression_value_118);
Py_DECREF(tmp_expression_value_118);
if (tmp_args_element_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_55);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 166;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_52);
CHECK_OBJECT(tmp_called_value_55);
Py_DECREF(tmp_called_value_55);
CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_56;
PyObject *tmp_expression_value_119;
PyObject *tmp_args_element_value_53;
PyObject *tmp_expression_value_120;
tmp_expression_value_119 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_119 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_119 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_119 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_119 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_119);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_119);
Py_DECREF(tmp_expression_value_119);
if (tmp_called_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_120 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_120 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_120 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_120 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_120 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_56);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_120);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_args_element_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_56);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 168;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_53);
CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_element_value_53);
Py_DECREF(tmp_args_element_value_53);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_play_pause, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_57;
PyObject *tmp_expression_value_121;
PyObject *tmp_args_element_value_54;
PyObject *tmp_expression_value_122;
tmp_expression_value_121 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_121 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_121 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_121 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_121 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_121);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_121);
Py_DECREF(tmp_expression_value_121);
if (tmp_called_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_122 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_122 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_122 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_122 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_122 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_57);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_122);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts.const_str_plain_MEDIA_STOP);
CHECK_OBJECT(tmp_expression_value_122);
Py_DECREF(tmp_expression_value_122);
if (tmp_args_element_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_57);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 169;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_54);
CHECK_OBJECT(tmp_called_value_57);
Py_DECREF(tmp_called_value_57);
CHECK_OBJECT(tmp_args_element_value_54);
Py_DECREF(tmp_args_element_value_54);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_58;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_element_value_55;
PyObject *tmp_expression_value_124;
tmp_expression_value_123 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_123 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_123 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_123 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_123 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_123);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_123);
Py_DECREF(tmp_expression_value_123);
if (tmp_called_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_124 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_124 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_124 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_124 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_124 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_58);

exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_124);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts.const_str_plain_VOLUME_MUTE);
CHECK_OBJECT(tmp_expression_value_124);
Py_DECREF(tmp_expression_value_124);
if (tmp_args_element_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_58);

exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 170;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_55);
CHECK_OBJECT(tmp_called_value_58);
Py_DECREF(tmp_called_value_58);
CHECK_OBJECT(tmp_args_element_value_55);
Py_DECREF(tmp_args_element_value_55);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_volume_mute, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_59;
PyObject *tmp_expression_value_125;
PyObject *tmp_args_element_value_56;
PyObject *tmp_expression_value_126;
tmp_expression_value_125 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_125 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_125 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_125);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_125);
Py_DECREF(tmp_expression_value_125);
if (tmp_called_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_126 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_126 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_126 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_126 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_126 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_59);

exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_126);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts.const_str_plain_VOLUME_DOWN);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_args_element_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_59);

exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 171;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_56);
CHECK_OBJECT(tmp_called_value_59);
Py_DECREF(tmp_called_value_59);
CHECK_OBJECT(tmp_args_element_value_56);
Py_DECREF(tmp_args_element_value_56);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_volume_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_60;
PyObject *tmp_expression_value_127;
PyObject *tmp_args_element_value_57;
PyObject *tmp_expression_value_128;
tmp_expression_value_127 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_127 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_127 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_127);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_127);
Py_DECREF(tmp_expression_value_127);
if (tmp_called_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_128 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_128 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_128 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_128 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_60);

exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_128);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts.const_str_plain_VOLUME_UP);
CHECK_OBJECT(tmp_expression_value_128);
Py_DECREF(tmp_expression_value_128);
if (tmp_args_element_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_60);

exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 172;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_57);
CHECK_OBJECT(tmp_called_value_60);
Py_DECREF(tmp_called_value_60);
CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_volume_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_61;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_element_value_58;
PyObject *tmp_expression_value_130;
tmp_expression_value_129 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_129 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_129 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_129 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_129 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_129);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_129);
Py_DECREF(tmp_expression_value_129);
if (tmp_called_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_130 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_130 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_130 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_130 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_130 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_61);

exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_130);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts.const_str_plain_MEDIA_PREV_TRACK);
CHECK_OBJECT(tmp_expression_value_130);
Py_DECREF(tmp_expression_value_130);
if (tmp_args_element_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_61);

exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 173;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_58);
CHECK_OBJECT(tmp_called_value_61);
Py_DECREF(tmp_called_value_61);
CHECK_OBJECT(tmp_args_element_value_58);
Py_DECREF(tmp_args_element_value_58);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_previous, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_62;
PyObject *tmp_expression_value_131;
PyObject *tmp_args_element_value_59;
PyObject *tmp_expression_value_132;
tmp_expression_value_131 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_131 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_131 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_131 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_131);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_131);
Py_DECREF(tmp_expression_value_131);
if (tmp_called_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_132 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_132 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_132 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_132 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_132 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_62);

exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_132);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_args_element_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_62);

exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 174;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_59);
CHECK_OBJECT(tmp_called_value_62);
Py_DECREF(tmp_called_value_62);
CHECK_OBJECT(tmp_args_element_value_59);
Py_DECREF(tmp_args_element_value_59);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_media_next, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_63;
PyObject *tmp_expression_value_133;
PyObject *tmp_args_element_value_60;
PyObject *tmp_expression_value_134;
tmp_expression_value_133 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_133 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_133 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_133 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_133);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_133);
Py_DECREF(tmp_expression_value_133);
if (tmp_called_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_134 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_134 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_134 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_134 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_63);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_134);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts.const_str_plain_INSERT);
CHECK_OBJECT(tmp_expression_value_134);
Py_DECREF(tmp_expression_value_134);
if (tmp_args_element_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_63);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 176;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_60);
CHECK_OBJECT(tmp_called_value_63);
Py_DECREF(tmp_called_value_63);
CHECK_OBJECT(tmp_args_element_value_60);
Py_DECREF(tmp_args_element_value_60);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_insert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_64;
PyObject *tmp_expression_value_135;
PyObject *tmp_args_element_value_61;
PyObject *tmp_expression_value_136;
tmp_expression_value_135 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_135 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_135 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_135 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_135 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_135);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_135);
Py_DECREF(tmp_expression_value_135);
if (tmp_called_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_136 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_136 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_136 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_136 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_136 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_64);

exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_136);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain_APPS);
CHECK_OBJECT(tmp_expression_value_136);
Py_DECREF(tmp_expression_value_136);
if (tmp_args_element_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_64);

exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 177;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_61);
CHECK_OBJECT(tmp_called_value_64);
Py_DECREF(tmp_called_value_64);
CHECK_OBJECT(tmp_args_element_value_61);
Py_DECREF(tmp_args_element_value_61);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_menu, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_65;
PyObject *tmp_expression_value_137;
PyObject *tmp_args_element_value_62;
PyObject *tmp_expression_value_138;
tmp_expression_value_137 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_137 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_137 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_137);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_137);
Py_DECREF(tmp_expression_value_137);
if (tmp_called_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_138 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_138 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_138 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_138 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_138 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_65);

exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_138);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts.const_str_plain_NUMLOCK);
CHECK_OBJECT(tmp_expression_value_138);
Py_DECREF(tmp_expression_value_138);
if (tmp_args_element_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_65);

exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 178;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_62);
CHECK_OBJECT(tmp_called_value_65);
Py_DECREF(tmp_called_value_65);
CHECK_OBJECT(tmp_args_element_value_62);
Py_DECREF(tmp_args_element_value_62);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_num_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_66;
PyObject *tmp_expression_value_139;
PyObject *tmp_args_element_value_63;
PyObject *tmp_expression_value_140;
tmp_expression_value_139 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_139 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_139 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_139 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_139);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_139);
Py_DECREF(tmp_expression_value_139);
if (tmp_called_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_140 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_140 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_140 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_140 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_140 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_66);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_140);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts.const_str_plain_PAUSE);
CHECK_OBJECT(tmp_expression_value_140);
Py_DECREF(tmp_expression_value_140);
if (tmp_args_element_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_66);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 179;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_63);
CHECK_OBJECT(tmp_called_value_66);
Py_DECREF(tmp_called_value_66);
CHECK_OBJECT(tmp_args_element_value_63);
Py_DECREF(tmp_args_element_value_63);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_pause, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_67;
PyObject *tmp_expression_value_141;
PyObject *tmp_args_element_value_64;
PyObject *tmp_expression_value_142;
tmp_expression_value_141 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_141 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_141 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_141);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain__from_ext);
CHECK_OBJECT(tmp_expression_value_141);
Py_DECREF(tmp_expression_value_141);
if (tmp_called_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_142 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_142 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_142 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_142 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_142 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_67);

exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_142);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain_SNAPSHOT);
CHECK_OBJECT(tmp_expression_value_142);
Py_DECREF(tmp_expression_value_142);
if (tmp_args_element_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_67);

exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 180;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_64);
CHECK_OBJECT(tmp_called_value_67);
Py_DECREF(tmp_called_value_67);
CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_print_screen, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_68;
PyObject *tmp_expression_value_143;
PyObject *tmp_args_element_value_65;
PyObject *tmp_expression_value_144;
tmp_expression_value_143 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_KeyCode);

if (tmp_expression_value_143 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_143 = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_expression_value_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_143);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT(tmp_expression_value_143);
Py_DECREF(tmp_expression_value_143);
if (tmp_called_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_144 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_VK);

if (tmp_expression_value_144 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_144 = module_var_accessor_pynput$keyboard$_win32$VK(tstate);
if (unlikely(tmp_expression_value_144 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VK);
}

if (tmp_expression_value_144 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_68);

exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_144);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts.const_str_plain_SCROLL);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_args_element_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_68);

exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame.f_lineno = 181;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_65);
CHECK_OBJECT(tmp_called_value_68);
Py_DECREF(tmp_called_value_68);
CHECK_OBJECT(tmp_args_element_value_65);
Py_DECREF(tmp_args_element_value_65);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain_scroll_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$class__2_Key_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$class__2_Key_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$class__2_Key_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__2_Key_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__2_Key_114, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_Key;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pynput$keyboard$_win32$$$class__2_Key_114;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_37 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_pynput$keyboard$_win32$$$class__2_Key_114);
locals_pynput$keyboard$_win32$$$class__2_Key_114 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_win32$$$class__2_Key_114);
locals_pynput$keyboard$_win32$$$class__2_Key_114 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 114;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Key, tmp_assign_source_37);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_145;
tmp_expression_value_145 = module_var_accessor_pynput$keyboard$_win32$_base(tstate);
if (unlikely(tmp_expression_value_145 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__base);
}

if (tmp_expression_value_145 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts.const_str_plain_Controller);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_146;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_146 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_146, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_147;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_147 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_147, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_69;
PyObject *tmp_expression_value_148;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_148 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Controller;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 187;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_69, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_69);
Py_DECREF(tmp_called_value_69);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_149;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_149 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_149, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_150;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_150 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_150, tmp_name_value_12, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_151;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_151 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_151 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_151);
Py_DECREF(tmp_expression_value_151);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_8;
}
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 187;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
branch_end_7:;
{
PyObject *tmp_assign_source_45;
outline_2_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pynput$keyboard$_win32$$$class__3_Controller_187 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Controller;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_187;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4 = MAKE_CLASS_FRAME(tstate, code_objects_6f8f5a5598c1bdde373ecfefb231af0f, module_pynput$keyboard$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4, locals_pynput$keyboard$_win32$$$class__3_Controller_187);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain_KeyCode);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$keyboard$_win32$KeyCode(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain__KeyCode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain_Key);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$keyboard$_win32$Key(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain__Key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__3___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__4__handle(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain__handle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__3_Controller_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__3_Controller_187, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = mod_consts.const_str_plain_Controller;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_pynput$keyboard$_win32$$$class__3_Controller_187;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_3, const_str_plain___classcell__, (PyObject *)outline_2_var___class__);
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_10;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_2_var___class__);
    PyCell_SET((PyObject *)outline_2_var___class__, tmp_assign_source_46);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_2_var___class__));
tmp_assign_source_45 = PyCell_GET((PyObject *)outline_2_var___class__);
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_pynput$keyboard$_win32$$$class__3_Controller_187);
locals_pynput$keyboard$_win32$$$class__3_Controller_187 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_win32$$$class__3_Controller_187);
locals_pynput$keyboard$_win32$$$class__3_Controller_187 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
assert(PyCell_Check((PyObject *)outline_2_var___class__));
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 187;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller, tmp_assign_source_45);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_pynput$keyboard$_win32$ListenerMixin(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ListenerMixin);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_152;
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_10);
tmp_expression_value_152 = module_var_accessor_pynput$keyboard$_win32$_base(tstate);
if (unlikely(tmp_expression_value_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__base);
}

if (tmp_expression_value_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto tuple_build_exception_4;
}
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts.const_str_plain_Listener);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_47, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_assign_source_47);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_153;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_153 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_153, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_154;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_154 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_70;
PyObject *tmp_expression_value_155;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_155 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_Listener;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 239;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_70, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_70);
Py_DECREF(tmp_called_value_70);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_156;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_156 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_156, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_157;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_157 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_157, tmp_name_value_14, tmp_default_value_4);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_158;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_158 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_158 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_158);
Py_DECREF(tmp_expression_value_158);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_11;
}
frame_frame_pynput$keyboard$_win32->m_frame.f_lineno = 239;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
branch_end_10:;
{
PyObject *tmp_assign_source_53;
outline_3_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_pynput$keyboard$_win32$$$class__4_Listener_239 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_Listener;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_239;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5 = MAKE_CLASS_FRAME(tstate, code_objects_614cecf1afae0bd728a0b4fea9d8559f, module_pynput$keyboard$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5, locals_pynput$keyboard$_win32$$$class__4_Listener_239);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_13;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__EVENTS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_81;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_INPUTLANGCHANGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_KEYDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_257;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_KEYUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_260;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_SYSKEYDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_261;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_SYSKEYUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__UTF16_FLAG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_8192;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__INJECTED_FLAG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_231;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__VK_PACKET, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_KEYDOWN);

if (unlikely(tmp_tuple_element_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WM_KEYDOWN);

exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_SYSKEYDOWN);

if (unlikely(tmp_tuple_element_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WM_SYSKEYDOWN);

exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_13);
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__PRESS_MESSAGES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_KEYUP);

if (unlikely(tmp_tuple_element_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WM_KEYUP);

exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_SYSKEYUP);

if (unlikely(tmp_tuple_element_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WM_SYSKEYUP);

exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_14);
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__RELEASE_MESSAGES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_INPUTLANGCHANGE);

if (unlikely(tmp_tuple_element_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WM_INPUTLANGCHANGE);

exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_15);
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__WM_NOTIFICATIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain_Key);

if (tmp_iter_arg_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_iter_arg_1 = module_var_accessor_pynput$keyboard$_win32$Key(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_14;
}
        Py_INCREF(tmp_iter_arg_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_14;
    }
}

tmp_assign_source_54 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_Listener$dictcontraction_1__$0;
    tmp_Listener$dictcontraction_1__$0 = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Listener$dictcontraction_1__contraction;
    tmp_Listener$dictcontraction_1__contraction = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__$0);
tmp_next_source_1 = tmp_Listener$dictcontraction_1__$0;
tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_56 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_2 = "c";
exception_lineno = 269;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = tmp_Listener$dictcontraction_1__iter_value_0;
    tmp_Listener$dictcontraction_1__iter_value_0 = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__iter_value_0);
tmp_assign_source_57 = tmp_Listener$dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_4_var_key;
    outline_4_var_key = tmp_assign_source_57;
    Py_INCREF(outline_4_var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_159;
PyObject *tmp_expression_value_160;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_4_var_key);
tmp_expression_value_160 = outline_4_var_key;
tmp_expression_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts.const_str_plain_value);
if (tmp_expression_value_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_15;
}
tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts.const_str_plain_vk);
CHECK_OBJECT(tmp_expression_value_159);
Py_DECREF(tmp_expression_value_159);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_15;
}
CHECK_OBJECT(outline_4_var_key);
tmp_dictset38_value_1 = outline_4_var_key;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_Listener$dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_15;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto try_except_handler_15;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
tmp_dictset_value = tmp_Listener$dictcontraction_1__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__$0);
CHECK_OBJECT(tmp_Listener$dictcontraction_1__$0);
Py_DECREF(tmp_Listener$dictcontraction_1__$0);
tmp_Listener$dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
Py_DECREF(tmp_Listener$dictcontraction_1__contraction);
tmp_Listener$dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_Listener$dictcontraction_1__iter_value_0);
tmp_Listener$dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_Listener$dictcontraction_1__$0);
CHECK_OBJECT(tmp_Listener$dictcontraction_1__$0);
Py_DECREF(tmp_Listener$dictcontraction_1__$0);
tmp_Listener$dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
CHECK_OBJECT(tmp_Listener$dictcontraction_1__contraction);
Py_DECREF(tmp_Listener$dictcontraction_1__contraction);
tmp_Listener$dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_Listener$dictcontraction_1__iter_value_0);
tmp_Listener$dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_XDECREF(outline_4_var_key);
outline_4_var_key = NULL;
goto outline_result_9;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_4_var_key);
outline_4_var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 269;
goto frame_exception_exit_5;
outline_result_9:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__SPECIAL_KEYS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_161;
tmp_expression_value_161 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain_SystemHook);

if (tmp_expression_value_161 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_161 = module_var_accessor_pynput$keyboard$_win32$SystemHook(tstate);
if (unlikely(tmp_expression_value_161 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_expression_value_161 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_161);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts.const_str_plain_SuppressException);
CHECK_OBJECT(tmp_expression_value_161);
Py_DECREF(tmp_expression_value_161);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_16);
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__HANDLED_EXCEPTIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_162;
tmp_expression_value_162 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_162 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_58, 0, tmp_tuple_element_17);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__bases_orig;
    tmp_Listener$class_container$class_creation_1__bases_orig = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_5 = tmp_Listener$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__bases;
    tmp_Listener$class_container$class_creation_1__bases = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__class_decl_dict;
    tmp_Listener$class_container$class_creation_1__class_decl_dict = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_163;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_Listener$class_container$class_creation_1__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_expression_value_163 = tmp_Listener$class_container$class_creation_1__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_163, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_5:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_bases_value_8 = tmp_Listener$class_container$class_creation_1__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__metaclass;
    tmp_Listener$class_container$class_creation_1__metaclass = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_17;
PyObject *tmp_expression_value_164;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_164 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_164, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_17 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_71;
PyObject *tmp_expression_value_165;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_165 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_tuple_element_18 = mod_consts.const_str_plain__KBDLLHOOKSTRUCT;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_tuple_element_18 = tmp_Listener$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_5 = tmp_Listener$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame.f_lineno = 273;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_71);
Py_DECREF(tmp_called_value_71);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__prepared;
    tmp_Listener$class_container$class_creation_1__prepared = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_166;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_expression_value_166 = tmp_Listener$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_166, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_167;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_167 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_167, tmp_name_value_15, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_168;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_type_arg_10 = tmp_Listener$class_container$class_creation_1__prepared;
tmp_expression_value_168 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_168 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_168);
Py_DECREF(tmp_expression_value_168);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame.f_lineno = 273;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 273;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_16;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__prepared;
    tmp_Listener$class_container$class_creation_1__prepared = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
branch_end_12:;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_set_locals_5 = tmp_Listener$class_container$class_creation_1__prepared;
locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8963a9e3c364a5191c91aa6992dc4775;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_42333368ed6b5d81abbb83575a42aa92;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_e7bc25b95d7d1e6dd3f1b3456aeae9d8;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_273;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6 = MAKE_CLASS_FRAME(tstate, code_objects_a74570e01a8d59978fa86dd4db9efe93, module_pynput$keyboard$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6, locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain_LLKHF_INJECTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_3 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain_LLKHF_LOWER_IL_INJECTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_3 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_20;
tmp_tuple_element_20 = mod_consts.const_str_plain_vkCode;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_169;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_20);
tmp_expression_value_169 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_169 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_3 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_21;
PyObject *tmp_tuple_element_22;
PyObject *tmp_tuple_element_23;
PyObject *tmp_tuple_element_24;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_21 = mod_consts.const_str_plain_scanCode;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_170;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_21);
tmp_expression_value_170 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_170 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_3 = "o";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
tmp_tuple_element_22 = mod_consts.const_str_plain_flags;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_171;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_22);
tmp_expression_value_171 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_171 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_3 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
tmp_tuple_element_23 = mod_consts.const_str_plain_time;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_172;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_23);
tmp_expression_value_172 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_172 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_3 = "o";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
tmp_tuple_element_24 = mod_consts.const_str_plain_dwExtraInfo;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_173;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_24);
tmp_expression_value_173 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_173 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts.const_str_plain_c_void_p);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_3 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_6;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_3 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6);


goto frame_no_exception_4;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6,
    type_description_3,
    outline_5_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_5:;
type_description_2 = "c";
goto try_except_handler_18;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_cmp_expr_left_4 = tmp_Listener$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_4 = tmp_Listener$class_container$class_creation_1__bases_orig;
tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Listener$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
branch_no_14:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_metaclass_value_9;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_9;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_metaclass_value_9 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain__KBDLLHOOKSTRUCT;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_bases_value_9 = tmp_Listener$class_container$class_creation_1__bases;
tmp_dict_arg_value_4 = locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_Listener$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_9, tmp_dict_arg_value_4);
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_metaclass_value_9, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_18;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_dictset_value = outline_5_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273);
locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273);
locals_pynput$keyboard$_win32$$$class__5__KBDLLHOOKSTRUCT_273 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_11;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 273;
goto try_except_handler_16;
outline_result_11:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__KBDLLHOOKSTRUCT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto try_end_5;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_Listener$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Listener$class_container$class_creation_1__bases);
tmp_Listener$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_Listener$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_Listener$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Listener$class_container$class_creation_1__prepared);
tmp_Listener$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_Listener$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
Py_DECREF(tmp_Listener$class_container$class_creation_1__bases);
tmp_Listener$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_Listener$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_Listener$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Listener$class_container$class_creation_1__prepared);
tmp_Listener$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_10;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_10:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_called_value_72;
PyObject *tmp_expression_value_174;
PyObject *tmp_args_element_value_66;
tmp_expression_value_174 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_174 == NULL));
tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_args_element_value_66 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__KBDLLHOOKSTRUCT);

if (unlikely(tmp_args_element_value_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_72);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__KBDLLHOOKSTRUCT);

exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_args_element_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_72);

exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame.f_lineno = 289;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_66);
CHECK_OBJECT(tmp_called_value_72);
Py_DECREF(tmp_called_value_72);
CHECK_OBJECT(tmp_args_element_value_66);
Py_DECREF(tmp_args_element_value_66);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__LPKBDLLHOOKSTRUCT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__5___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__6__convert(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__convert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_67;
tmp_called_instance_1 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain_AbstractListener);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$_win32$AbstractListener(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractListener);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_67 = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__7__process(tstate);

frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame.f_lineno = 326;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__emitter, tmp_args_element_value_67);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_67);
Py_DECREF(tmp_args_element_value_67);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__process, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_68;
tmp_called_instance_2 = PyObject_GetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain_contextlib);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_pynput$keyboard$_win32$contextlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_68 = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__8__receive(tstate);

frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame.f_lineno = 353;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_68);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_68);
Py_DECREF(tmp_args_element_value_68);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__receive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__9__on_notification(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__on_notification, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__10__event_to_key(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__event_to_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__11__translate(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain__translate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_win32$$$function__12_canonical(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain_canonical, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_2 = "c";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5);


goto frame_no_exception_5;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_win32$$$class__4_Listener_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_4:;

goto try_except_handler_13;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__translator_str_plain__event_filter_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_win32$$$class__4_Listener_239, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
branch_no_15:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_17;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_17 = mod_consts.const_str_plain_Listener;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_5 = locals_pynput$keyboard$_win32$$$class__4_Listener_239;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_4__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_5, const_str_plain___classcell__, (PyObject *)outline_3_var___class__);
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_17, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_13;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_3_var___class__);
    PyCell_SET((PyObject *)outline_3_var___class__, tmp_assign_source_65);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_3_var___class__));
tmp_assign_source_53 = PyCell_GET((PyObject *)outline_3_var___class__);
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_pynput$keyboard$_win32$$$class__4_Listener_239);
locals_pynput$keyboard$_win32$$$class__4_Listener_239 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_win32$$$class__4_Listener_239);
locals_pynput$keyboard$_win32$$$class__4_Listener_239 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
assert(PyCell_Check((PyObject *)outline_3_var___class__));
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 239;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_53);
}
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_win32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$keyboard$_win32);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$keyboard$_win32", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard._win32" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$keyboard$_win32);
    return module_pynput$keyboard$_win32;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$keyboard$_win32", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
