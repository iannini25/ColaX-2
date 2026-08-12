/* Generated code for Python module 'pynput$mouse$_win32'
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



/* The "module_pynput$mouse$_win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$mouse$_win32;
PyDictObject *moduledict_pynput$mouse$_win32;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Controller;
PyObject *const_str_plain_POINT;
PyObject *const_str_plain__Controller__GetCursorPos;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_str_plain__Controller__SetCursorPos;
PyObject *const_str_plain__emit;
PyObject *const_tuple_str_plain_on_move_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_SendInput;
PyObject *const_str_plain_INPUT;
PyObject *const_str_plain_MOUSE;
PyObject *const_str_plain_INPUT_union;
PyObject *const_str_plain_MOUSEINPUT;
PyObject *const_str_plain_WHEEL;
PyObject *const_str_plain_WHEEL_DELTA;
PyObject *const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple;
PyObject *const_tuple_str_plain_mi_tuple;
PyObject *const_tuple_str_plain_type_str_plain_value_tuple;
PyObject *const_str_plain_sizeof;
PyObject *const_str_plain_HWHEEL;
PyObject *const_str_plain_value;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain__options;
PyObject *const_str_plain_event_filter;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_5824b99789cf25d8ba066515d167ddc8;
PyObject *const_str_plain__event_filter;
PyObject *const_str_plain_SystemHook;
PyObject *const_str_plain_HC_ACTION;
PyObject *const_str_plain_cast;
PyObject *const_str_plain__LPMSLLHOOKSTRUCT;
PyObject *const_str_plain_contents;
PyObject *const_str_plain_flags;
PyObject *const_str_plain__MSLLHOOKSTRUCT;
PyObject *const_str_plain_LLMHF_INJECTED;
PyObject *const_str_plain_LLMHF_LOWER_IL_INJECTED;
PyObject *const_str_plain_WM_MOUSEMOVE;
PyObject *const_str_plain_on_move;
PyObject *const_str_plain_pt;
PyObject *const_str_plain_CLICK_BUTTONS;
PyObject *const_str_plain_on_click;
PyObject *const_str_plain_X_BUTTONS;
PyObject *const_str_plain_mouseData;
PyObject *const_int_pos_16;
PyObject *const_str_plain_SCROLL_BUTTONS;
PyObject *const_str_plain_SHORT;
PyObject *const_str_plain_on_scroll;
PyObject *const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_wintypes;
PyObject *const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
PyObject *const_tuple_str_plain_NotifierMixin_tuple;
PyObject *const_str_plain_NotifierMixin;
PyObject *const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
PyObject *const_tuple_20fb846cfb7145504aaa7e409e658047_tuple;
PyObject *const_str_plain_ListenerMixin;
PyObject *const_tuple_str_plain__base_tuple;
PyObject *const_str_plain__base;
PyObject *const_int_pos_120;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Button;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784;
PyObject *const_str_digest_c60f852650f343e31847236d796c3161;
PyObject *const_int_pos_47;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_unknown;
PyObject *const_str_plain_LEFTUP;
PyObject *const_str_plain_LEFTDOWN;
PyObject *const_str_plain_left;
PyObject *const_str_plain_MIDDLEUP;
PyObject *const_str_plain_MIDDLEDOWN;
PyObject *const_str_plain_middle;
PyObject *const_str_plain_RIGHTUP;
PyObject *const_str_plain_RIGHTDOWN;
PyObject *const_str_plain_right;
PyObject *const_str_plain_XUP;
PyObject *const_str_plain_XDOWN;
PyObject *const_str_plain_XBUTTON1;
PyObject *const_str_plain_x1;
PyObject *const_str_plain_XBUTTON2;
PyObject *const_str_plain_x2;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_58;
PyObject *const_str_plain_user32;
PyObject *const_str_plain_GetCursorPos;
PyObject *const_str_plain_SetCursorPos;
PyObject *const_str_digest_b927199d85c7cd7a86dce88997eeb880;
PyObject *const_str_plain__position_get;
PyObject *const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7;
PyObject *const_str_plain__position_set;
PyObject *const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf;
PyObject *const_str_plain__scroll;
PyObject *const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1;
PyObject *const_str_plain__press;
PyObject *const_str_digest_747c3b68156f5ddab31557ffdf69b56b;
PyObject *const_str_plain__release;
PyObject *const_str_digest_716921b1563bbc29878fff2a2b8f04c0;
PyObject *const_str_plain__receiver;
PyObject *const_int_pos_146;
PyObject *const_int_pos_14;
PyObject *const_str_plain__EVENTS;
PyObject *const_int_pos_513;
PyObject *const_str_plain_WM_LBUTTONDOWN;
PyObject *const_int_pos_514;
PyObject *const_str_plain_WM_LBUTTONUP;
PyObject *const_int_pos_519;
PyObject *const_str_plain_WM_MBUTTONDOWN;
PyObject *const_int_pos_520;
PyObject *const_str_plain_WM_MBUTTONUP;
PyObject *const_int_pos_512;
PyObject *const_int_pos_522;
PyObject *const_str_plain_WM_MOUSEWHEEL;
PyObject *const_int_pos_526;
PyObject *const_str_plain_WM_MOUSEHWHEEL;
PyObject *const_int_pos_516;
PyObject *const_str_plain_WM_RBUTTONDOWN;
PyObject *const_int_pos_517;
PyObject *const_str_plain_WM_RBUTTONUP;
PyObject *const_int_pos_523;
PyObject *const_str_plain_WM_XBUTTONDOWN;
PyObject *const_int_pos_524;
PyObject *const_str_plain_WM_XBUTTONUP;
PyObject *const_int_pos_32;
PyObject *const_str_plain_MK_XBUTTON1;
PyObject *const_int_pos_64;
PyObject *const_str_plain_MK_XBUTTON2;
PyObject *const_tuple_int_0_int_pos_1_tuple;
PyObject *const_tuple_int_pos_1_int_0_tuple;
PyObject *const_str_plain_SuppressException;
PyObject *const_str_plain__HANDLED_EXCEPTIONS;
PyObject *const_str_plain_Structure;
PyObject *const_str_digest_a065180917eb2768fe62fecdfaecf8fb;
PyObject *const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea;
PyObject *const_int_pos_195;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_time;
PyObject *const_str_plain_dwExtraInfo;
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain_POINTER;
PyObject *const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc;
PyObject *const_str_plain__handle_message;
PyObject *const_str_digest_d5a539f1d621426a19a7d423c01b9846;
PyObject *const_tuple_str_plain__event_filter_tuple;
PyObject *const_str_digest_0611c90f3a9e88690769978f924f7ae7;
PyObject *const_tuple_str_plain_msg_str_plain_data_tuple;
PyObject *const_str_digest_b9b99fa025811ec367034df30f8a1167;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
PyObject *const_tuple_d836eb305beb466168d64662b94917b3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_point_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pos_tuple;
PyObject *const_tuple_str_plain_self_str_plain_button_tuple;
PyObject *const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput.mouse._win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 166) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 166 values, got %d\n",
                    UN_TRANSLATE("pynput.mouse._win32"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Controller);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Controller__GetCursorPos", mod_consts.const_str_plain__Controller__GetCursorPos);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__Controller__GetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Controller__SetCursorPos", mod_consts.const_str_plain__Controller__SetCursorPos);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__Controller__SetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emit", mod_consts.const_str_plain__emit);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__emit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_move_tuple", mod_consts.const_tuple_str_plain_on_move_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_move_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSE", mod_consts.const_str_plain_MOUSE);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL", mod_consts.const_str_plain_WHEEL);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL_DELTA", mod_consts.const_str_plain_WHEEL_DELTA);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL_DELTA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple", mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mi_tuple", mod_consts.const_tuple_str_plain_mi_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mi_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_type_str_plain_value_tuple", mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sizeof", mod_consts.const_str_plain_sizeof);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWHEEL", mod_consts.const_str_plain_HWHEEL);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_HWHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_event_filter", mod_consts.const_str_plain_event_filter);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8", mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_filter", mod_consts.const_str_plain__event_filter);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPMSLLHOOKSTRUCT", mod_consts.const_str_plain__LPMSLLHOOKSTRUCT);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__LPMSLLHOOKSTRUCT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_contents);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flags", mod_consts.const_str_plain_flags);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MSLLHOOKSTRUCT", mod_consts.const_str_plain__MSLLHOOKSTRUCT);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__MSLLHOOKSTRUCT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLMHF_INJECTED", mod_consts.const_str_plain_LLMHF_INJECTED);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_LLMHF_INJECTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED", mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEMOVE", mod_consts.const_str_plain_WM_MOUSEMOVE);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEMOVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_move", mod_consts.const_str_plain_on_move);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_move);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pt", mod_consts.const_str_plain_pt);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_pt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLICK_BUTTONS", mod_consts.const_str_plain_CLICK_BUTTONS);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLICK_BUTTONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_click", mod_consts.const_str_plain_on_click);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_click);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X_BUTTONS", mod_consts.const_str_plain_X_BUTTONS);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_X_BUTTONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL_BUTTONS", mod_consts.const_str_plain_SCROLL_BUTTONS);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL_BUTTONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHORT", mod_consts.const_str_plain_SHORT);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_scroll", mod_consts.const_str_plain_on_scroll);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_scroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0", mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NotifierMixin_tuple", mod_consts.const_tuple_str_plain_NotifierMixin_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NotifierMixin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NotifierMixin", mod_consts.const_str_plain_NotifierMixin);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotifierMixin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple", mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__base_tuple", mod_consts.const_tuple_str_plain__base_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base", mod_consts.const_str_plain__base);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__base);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Button", mod_consts.const_str_plain_Button);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Button);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784", mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c60f852650f343e31847236d796c3161", mod_consts.const_str_digest_c60f852650f343e31847236d796c3161);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_c60f852650f343e31847236d796c3161);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_47", mod_consts.const_int_pos_47);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTUP", mod_consts.const_str_plain_LEFTUP);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTDOWN", mod_consts.const_str_plain_LEFTDOWN);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEUP", mod_consts.const_str_plain_MIDDLEUP);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEDOWN", mod_consts.const_str_plain_MIDDLEDOWN);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_middle", mod_consts.const_str_plain_middle);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_middle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTUP", mod_consts.const_str_plain_RIGHTUP);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTDOWN", mod_consts.const_str_plain_RIGHTDOWN);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XUP", mod_consts.const_str_plain_XUP);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_XUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XDOWN", mod_consts.const_str_plain_XDOWN);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_XDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x1", mod_consts.const_str_plain_x1);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_x1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x2", mod_consts.const_str_plain_x2);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_x2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_58", mod_consts.const_int_pos_58);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_user32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetCursorPos", mod_consts.const_str_plain_SetCursorPos);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position_get", mod_consts.const_str_plain__position_get);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__position_get);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7", mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position_set", mod_consts.const_str_plain__position_set);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__position_set);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf", mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scroll", mod_consts.const_str_plain__scroll);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1", mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__press", mod_consts.const_str_plain__press);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b", mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__release", mod_consts.const_str_plain__release);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0", mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receiver", mod_consts.const_str_plain__receiver);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__receiver);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_513);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_LBUTTONDOWN", mod_consts.const_str_plain_WM_LBUTTONDOWN);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_LBUTTONDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_514);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_LBUTTONUP", mod_consts.const_str_plain_WM_LBUTTONUP);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_LBUTTONUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_519);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MBUTTONDOWN", mod_consts.const_str_plain_WM_MBUTTONDOWN);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MBUTTONDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_520);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MBUTTONUP", mod_consts.const_str_plain_WM_MBUTTONUP);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MBUTTONUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_522", mod_consts.const_int_pos_522);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_522);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEWHEEL", mod_consts.const_str_plain_WM_MOUSEWHEEL);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEWHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_526", mod_consts.const_int_pos_526);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_526);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEHWHEEL", mod_consts.const_str_plain_WM_MOUSEHWHEEL);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEHWHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_516", mod_consts.const_int_pos_516);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_516);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_RBUTTONDOWN", mod_consts.const_str_plain_WM_RBUTTONDOWN);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_RBUTTONDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_517);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_RBUTTONUP", mod_consts.const_str_plain_WM_RBUTTONUP);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_RBUTTONUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_523", mod_consts.const_int_pos_523);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_523);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_XBUTTONDOWN", mod_consts.const_str_plain_WM_XBUTTONDOWN);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_XBUTTONDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524", mod_consts.const_int_pos_524);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_524);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_XBUTTONUP", mod_consts.const_str_plain_WM_XBUTTONUP);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_XBUTTONUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MK_XBUTTON1", mod_consts.const_str_plain_MK_XBUTTON1);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_MK_XBUTTON1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MK_XBUTTON2", mod_consts.const_str_plain_MK_XBUTTON2);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_MK_XBUTTON2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_1_tuple", mod_consts.const_tuple_int_0_int_pos_1_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_0_tuple", mod_consts.const_tuple_int_pos_1_int_0_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANDLED_EXCEPTIONS", mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb", mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea", mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_195", mod_consts.const_int_pos_195);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_195);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle_message", mod_consts.const_str_plain__handle_message);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_message);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846", mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__event_filter_tuple", mod_consts.const_tuple_str_plain__event_filter_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__event_filter_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7", mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple", mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167", mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple", mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple", mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_point_tuple", mod_consts.const_tuple_str_plain_self_str_plain_point_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_point_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_button_tuple", mod_consts.const_tuple_str_plain_self_str_plain_button_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_button_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple", mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple);
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
void checkModuleConstants_pynput$mouse$_win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Controller) && "mod_consts.const_str_plain_Controller");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINT) && "mod_consts.const_str_plain_POINT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Controller__GetCursorPos", mod_consts.const_str_plain__Controller__GetCursorPos);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__Controller__GetCursorPos) && "mod_consts.const_str_plain__Controller__GetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_x) && "mod_consts.const_str_plain_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_y) && "mod_consts.const_str_plain_y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Controller__SetCursorPos", mod_consts.const_str_plain__Controller__SetCursorPos);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__Controller__SetCursorPos) && "mod_consts.const_str_plain__Controller__SetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__emit", mod_consts.const_str_plain__emit);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__emit) && "mod_consts.const_str_plain__emit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_move_tuple", mod_consts.const_tuple_str_plain_on_move_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_move_tuple) && "mod_consts.const_tuple_str_plain_on_move_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SendInput", mod_consts.const_str_plain_SendInput);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_SendInput) && "mod_consts.const_str_plain_SendInput");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT) && "mod_consts.const_str_plain_INPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSE", mod_consts.const_str_plain_MOUSE);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE) && "mod_consts.const_str_plain_MOUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_union", mod_consts.const_str_plain_INPUT_union);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_union) && "mod_consts.const_str_plain_INPUT_union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT) && "mod_consts.const_str_plain_MOUSEINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL", mod_consts.const_str_plain_WHEEL);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL) && "mod_consts.const_str_plain_WHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHEEL_DELTA", mod_consts.const_str_plain_WHEEL_DELTA);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_WHEEL_DELTA) && "mod_consts.const_str_plain_WHEEL_DELTA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple", mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple) && "mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mi_tuple", mod_consts.const_tuple_str_plain_mi_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mi_tuple) && "mod_consts.const_tuple_str_plain_mi_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_type_str_plain_value_tuple", mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_type_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sizeof", mod_consts.const_str_plain_sizeof);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof) && "mod_consts.const_str_plain_sizeof");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWHEEL", mod_consts.const_str_plain_HWHEEL);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_HWHEEL) && "mod_consts.const_str_plain_HWHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener) && "mod_consts.const_str_plain_Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__options) && "mod_consts.const_str_plain__options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_event_filter", mod_consts.const_str_plain_event_filter);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter) && "mod_consts.const_str_plain_event_filter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8", mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8) && "mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__event_filter", mod_consts.const_str_plain__event_filter);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter) && "mod_consts.const_str_plain__event_filter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SystemHook", mod_consts.const_str_plain_SystemHook);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SystemHook) && "mod_consts.const_str_plain_SystemHook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HC_ACTION", mod_consts.const_str_plain_HC_ACTION);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_HC_ACTION) && "mod_consts.const_str_plain_HC_ACTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LPMSLLHOOKSTRUCT", mod_consts.const_str_plain__LPMSLLHOOKSTRUCT);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__LPMSLLHOOKSTRUCT) && "mod_consts.const_str_plain__LPMSLLHOOKSTRUCT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_contents) && "mod_consts.const_str_plain_contents");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flags", mod_consts.const_str_plain_flags);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags) && "mod_consts.const_str_plain_flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MSLLHOOKSTRUCT", mod_consts.const_str_plain__MSLLHOOKSTRUCT);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__MSLLHOOKSTRUCT) && "mod_consts.const_str_plain__MSLLHOOKSTRUCT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLMHF_INJECTED", mod_consts.const_str_plain_LLMHF_INJECTED);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_LLMHF_INJECTED) && "mod_consts.const_str_plain_LLMHF_INJECTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED", mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED) && "mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEMOVE", mod_consts.const_str_plain_WM_MOUSEMOVE);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEMOVE) && "mod_consts.const_str_plain_WM_MOUSEMOVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_move", mod_consts.const_str_plain_on_move);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_move) && "mod_consts.const_str_plain_on_move");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pt", mod_consts.const_str_plain_pt);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_pt) && "mod_consts.const_str_plain_pt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLICK_BUTTONS", mod_consts.const_str_plain_CLICK_BUTTONS);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLICK_BUTTONS) && "mod_consts.const_str_plain_CLICK_BUTTONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_click", mod_consts.const_str_plain_on_click);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_click) && "mod_consts.const_str_plain_on_click");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X_BUTTONS", mod_consts.const_str_plain_X_BUTTONS);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_X_BUTTONS) && "mod_consts.const_str_plain_X_BUTTONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData) && "mod_consts.const_str_plain_mouseData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL_BUTTONS", mod_consts.const_str_plain_SCROLL_BUTTONS);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL_BUTTONS) && "mod_consts.const_str_plain_SCROLL_BUTTONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHORT", mod_consts.const_str_plain_SHORT);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT) && "mod_consts.const_str_plain_SHORT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_scroll", mod_consts.const_str_plain_on_scroll);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_scroll) && "mod_consts.const_str_plain_on_scroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0", mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0) && "mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes) && "mod_consts.const_str_plain_wintypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745) && "mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NotifierMixin_tuple", mod_consts.const_tuple_str_plain_NotifierMixin_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NotifierMixin_tuple) && "mod_consts.const_tuple_str_plain_NotifierMixin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NotifierMixin", mod_consts.const_str_plain_NotifierMixin);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotifierMixin) && "mod_consts.const_str_plain_NotifierMixin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8", mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8) && "mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple", mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple) && "mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ListenerMixin", mod_consts.const_str_plain_ListenerMixin);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ListenerMixin) && "mod_consts.const_str_plain_ListenerMixin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__base_tuple", mod_consts.const_tuple_str_plain__base_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_tuple) && "mod_consts.const_tuple_str_plain__base_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base", mod_consts.const_str_plain__base);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__base) && "mod_consts.const_str_plain__base");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_120) && "mod_consts.const_int_pos_120");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum) && "mod_consts.const_str_plain_Enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Button", mod_consts.const_str_plain_Button);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Button) && "mod_consts.const_str_plain_Button");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784", mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784) && "mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c60f852650f343e31847236d796c3161", mod_consts.const_str_digest_c60f852650f343e31847236d796c3161);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_c60f852650f343e31847236d796c3161) && "mod_consts.const_str_digest_c60f852650f343e31847236d796c3161");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_47", mod_consts.const_int_pos_47);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_47) && "mod_consts.const_int_pos_47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown) && "mod_consts.const_str_plain_unknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTUP", mod_consts.const_str_plain_LEFTUP);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTUP) && "mod_consts.const_str_plain_LEFTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFTDOWN", mod_consts.const_str_plain_LEFTDOWN);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFTDOWN) && "mod_consts.const_str_plain_LEFTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_left) && "mod_consts.const_str_plain_left");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEUP", mod_consts.const_str_plain_MIDDLEUP);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEUP) && "mod_consts.const_str_plain_MIDDLEUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLEDOWN", mod_consts.const_str_plain_MIDDLEDOWN);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLEDOWN) && "mod_consts.const_str_plain_MIDDLEDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_middle", mod_consts.const_str_plain_middle);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_middle) && "mod_consts.const_str_plain_middle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTUP", mod_consts.const_str_plain_RIGHTUP);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTUP) && "mod_consts.const_str_plain_RIGHTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHTDOWN", mod_consts.const_str_plain_RIGHTDOWN);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHTDOWN) && "mod_consts.const_str_plain_RIGHTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_right) && "mod_consts.const_str_plain_right");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XUP", mod_consts.const_str_plain_XUP);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_XUP) && "mod_consts.const_str_plain_XUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XDOWN", mod_consts.const_str_plain_XDOWN);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_XDOWN) && "mod_consts.const_str_plain_XDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1) && "mod_consts.const_str_plain_XBUTTON1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x1", mod_consts.const_str_plain_x1);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_x1) && "mod_consts.const_str_plain_x1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2) && "mod_consts.const_str_plain_XBUTTON2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x2", mod_consts.const_str_plain_x2);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_x2) && "mod_consts.const_str_plain_x2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_58", mod_consts.const_int_pos_58);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_58) && "mod_consts.const_int_pos_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_user32) && "mod_consts.const_str_plain_user32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos) && "mod_consts.const_str_plain_GetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetCursorPos", mod_consts.const_str_plain_SetCursorPos);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetCursorPos) && "mod_consts.const_str_plain_SetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880) && "mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position_get", mod_consts.const_str_plain__position_get);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__position_get) && "mod_consts.const_str_plain__position_get");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7", mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7) && "mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position_set", mod_consts.const_str_plain__position_set);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__position_set) && "mod_consts.const_str_plain__position_set");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf", mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf) && "mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scroll", mod_consts.const_str_plain__scroll);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll) && "mod_consts.const_str_plain__scroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1", mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1) && "mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__press", mod_consts.const_str_plain__press);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__press) && "mod_consts.const_str_plain__press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b", mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b) && "mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__release", mod_consts.const_str_plain__release);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__release) && "mod_consts.const_str_plain__release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0", mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0) && "mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__receiver", mod_consts.const_str_plain__receiver);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__receiver) && "mod_consts.const_str_plain__receiver");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_146) && "mod_consts.const_int_pos_146");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__EVENTS", mod_consts.const_str_plain__EVENTS);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__EVENTS) && "mod_consts.const_str_plain__EVENTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_513) && "mod_consts.const_int_pos_513");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_LBUTTONDOWN", mod_consts.const_str_plain_WM_LBUTTONDOWN);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_LBUTTONDOWN) && "mod_consts.const_str_plain_WM_LBUTTONDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_514) && "mod_consts.const_int_pos_514");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_LBUTTONUP", mod_consts.const_str_plain_WM_LBUTTONUP);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_LBUTTONUP) && "mod_consts.const_str_plain_WM_LBUTTONUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_519) && "mod_consts.const_int_pos_519");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MBUTTONDOWN", mod_consts.const_str_plain_WM_MBUTTONDOWN);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MBUTTONDOWN) && "mod_consts.const_str_plain_WM_MBUTTONDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_520) && "mod_consts.const_int_pos_520");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MBUTTONUP", mod_consts.const_str_plain_WM_MBUTTONUP);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MBUTTONUP) && "mod_consts.const_str_plain_WM_MBUTTONUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_522", mod_consts.const_int_pos_522);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_522) && "mod_consts.const_int_pos_522");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEWHEEL", mod_consts.const_str_plain_WM_MOUSEWHEEL);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEWHEEL) && "mod_consts.const_str_plain_WM_MOUSEWHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_526", mod_consts.const_int_pos_526);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_526) && "mod_consts.const_int_pos_526");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_MOUSEHWHEEL", mod_consts.const_str_plain_WM_MOUSEHWHEEL);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_MOUSEHWHEEL) && "mod_consts.const_str_plain_WM_MOUSEHWHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_516", mod_consts.const_int_pos_516);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_516) && "mod_consts.const_int_pos_516");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_RBUTTONDOWN", mod_consts.const_str_plain_WM_RBUTTONDOWN);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_RBUTTONDOWN) && "mod_consts.const_str_plain_WM_RBUTTONDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_517) && "mod_consts.const_int_pos_517");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_RBUTTONUP", mod_consts.const_str_plain_WM_RBUTTONUP);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_RBUTTONUP) && "mod_consts.const_str_plain_WM_RBUTTONUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_523", mod_consts.const_int_pos_523);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_523) && "mod_consts.const_int_pos_523");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_XBUTTONDOWN", mod_consts.const_str_plain_WM_XBUTTONDOWN);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_XBUTTONDOWN) && "mod_consts.const_str_plain_WM_XBUTTONDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524", mod_consts.const_int_pos_524);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_524) && "mod_consts.const_int_pos_524");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_XBUTTONUP", mod_consts.const_str_plain_WM_XBUTTONUP);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_XBUTTONUP) && "mod_consts.const_str_plain_WM_XBUTTONUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MK_XBUTTON1", mod_consts.const_str_plain_MK_XBUTTON1);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_MK_XBUTTON1) && "mod_consts.const_str_plain_MK_XBUTTON1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_64) && "mod_consts.const_int_pos_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MK_XBUTTON2", mod_consts.const_str_plain_MK_XBUTTON2);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_MK_XBUTTON2) && "mod_consts.const_str_plain_MK_XBUTTON2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_1_tuple", mod_consts.const_tuple_int_0_int_pos_1_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple) && "mod_consts.const_tuple_int_0_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_0_tuple", mod_consts.const_tuple_int_pos_1_int_0_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple) && "mod_consts.const_tuple_int_pos_1_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SuppressException", mod_consts.const_str_plain_SuppressException);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_SuppressException) && "mod_consts.const_str_plain_SuppressException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANDLED_EXCEPTIONS", mod_consts.const_str_plain__HANDLED_EXCEPTIONS);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__HANDLED_EXCEPTIONS) && "mod_consts.const_str_plain__HANDLED_EXCEPTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb", mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb) && "mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea", mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea) && "mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_195", mod_consts.const_int_pos_195);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_195) && "mod_consts.const_int_pos_195");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD) && "mod_consts.const_str_plain_DWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo) && "mod_consts.const_str_plain_dwExtraInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_void_p", mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p) && "mod_consts.const_str_plain_c_void_p");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc) && "mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle_message", mod_consts.const_str_plain__handle_message);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_message) && "mod_consts.const_str_plain__handle_message");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846", mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846) && "mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__event_filter_tuple", mod_consts.const_tuple_str_plain__event_filter_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__event_filter_tuple) && "mod_consts.const_tuple_str_plain__event_filter_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7", mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7) && "mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple", mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167", mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167) && "mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple", mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple) && "mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple", mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple) && "mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_point_tuple", mod_consts.const_tuple_str_plain_self_str_plain_point_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_point_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_point_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_button_tuple", mod_consts.const_tuple_str_plain_self_str_plain_button_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_button_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_button_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple", mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_pynput$mouse$_win32$Button(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Button);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Button);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Button, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Button);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Button, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Button);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Button);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Button);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$Controller(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$INPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$INPUT_union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$ListenerMixin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$NotifierMixin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_NotifierMixin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotifierMixin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotifierMixin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotifierMixin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotifierMixin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_NotifierMixin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_NotifierMixin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NotifierMixin);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$SendInput(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$SystemHook(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$WHEEL_DELTA(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WHEEL_DELTA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WHEEL_DELTA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WHEEL_DELTA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WHEEL_DELTA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WHEEL_DELTA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WHEEL_DELTA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WHEEL_DELTA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WHEEL_DELTA);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$_base(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__base);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$_win32$windll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse$_win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse$_win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse$_win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_366e14ae7c3ded2429d819ab9092dde7;
static PyCodeObject *code_objects_aa453d131c89415a7d31bf04edbfb9bc;
static PyCodeObject *code_objects_6d14a307edc6d633d902a69f76f542ff;
static PyCodeObject *code_objects_2584d862e19b368fc9cc907476f8e0ce;
static PyCodeObject *code_objects_269689eef890aae4c532d825fa8437c5;
static PyCodeObject *code_objects_2e76fbf920413f03ef0a90c013ecceeb;
static PyCodeObject *code_objects_519a70ffa12f7b6d9fe95200ffdda78b;
static PyCodeObject *code_objects_d86edadaed766fe91ec219e691af7b74;
static PyCodeObject *code_objects_a8e24080246546ed4914ed34615999ab;
static PyCodeObject *code_objects_dd587293364cad79e086a4c38b752e15;
static PyCodeObject *code_objects_12d56049df5cf767eb06b960e03bb6ed;
static PyCodeObject *code_objects_a702014e4864639d95d7773c8d9e24c4;
static PyCodeObject *code_objects_7d6b16588538333a448e21763556270a;
static PyCodeObject *code_objects_133ae8e9c03266baedaf04b7a7d3ace3;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0611c90f3a9e88690769978f924f7ae7); CHECK_OBJECT(module_filename_obj);
code_objects_366e14ae7c3ded2429d819ab9092dde7 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8, mod_consts.const_tuple_str_plain_msg_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_aa453d131c89415a7d31bf04edbfb9bc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167, mod_consts.const_str_digest_b9b99fa025811ec367034df30f8a1167, NULL, NULL, 0, 0, 0);
code_objects_6d14a307edc6d633d902a69f76f542ff = MAKE_CODE_OBJECT(module_filename_obj, 47, 0, mod_consts.const_str_plain_Button, mod_consts.const_str_plain_Button, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2584d862e19b368fc9cc907476f8e0ce = MAKE_CODE_OBJECT(module_filename_obj, 58, 0, mod_consts.const_str_plain_Controller, mod_consts.const_str_plain_Controller, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_269689eef890aae4c532d825fa8437c5 = MAKE_CODE_OBJECT(module_filename_obj, 146, 0, mod_consts.const_str_plain_Listener, mod_consts.const_str_plain_Listener, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2e76fbf920413f03ef0a90c013ecceeb = MAKE_CODE_OBJECT(module_filename_obj, 195, 0, mod_consts.const_str_plain__MSLLHOOKSTRUCT, mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_519a70ffa12f7b6d9fe95200ffdda78b = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_d86edadaed766fe91ec219e691af7b74 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_a8e24080246546ed4914ed34615999ab = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle_message, mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846, mod_consts.const_tuple_d836eb305beb466168d64662b94917b3_tuple, NULL, 4, 0, 0);
code_objects_dd587293364cad79e086a4c38b752e15 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__position_get, mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7, mod_consts.const_tuple_str_plain_self_str_plain_point_tuple, NULL, 1, 0, 0);
code_objects_12d56049df5cf767eb06b960e03bb6ed = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__position_set, mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple, NULL, 2, 0, 0);
code_objects_a702014e4864639d95d7773c8d9e24c4 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__press, mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b, mod_consts.const_tuple_str_plain_self_str_plain_button_tuple, NULL, 2, 0, 0);
code_objects_7d6b16588538333a448e21763556270a = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__release, mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0, mod_consts.const_tuple_str_plain_self_str_plain_button_tuple, NULL, 2, 0, 0);
code_objects_133ae8e9c03266baedaf04b7a7d3ace3 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__scroll, mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1, mod_consts.const_tuple_str_plain_self_str_plain_dx_str_plain_dy_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__2__position_get(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__3__position_set(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__4__scroll(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__5__press(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__6__release(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__8__handle_message(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$mouse$_win32$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_519a70ffa12f7b6d9fe95200ffdda78b, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__1___init__->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__1___init__ = cache_frame_frame_pynput$mouse$_win32$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$mouse$_win32$Controller(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Controller);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$mouse$_win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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


exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__1___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__1___init__ == cache_frame_frame_pynput$mouse$_win32$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__1___init__);
    cache_frame_frame_pynput$mouse$_win32$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__1___init__);

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


static PyObject *impl_pynput$mouse$_win32$$$function__2__position_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_point = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__2__position_get;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get = MAKE_FUNCTION_FRAME(tstate, code_objects_dd587293364cad79e086a4c38b752e15, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__2__position_get = cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__2__position_get);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__2__position_get) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pynput$mouse$_win32$$$function__2__position_get->m_frame.f_lineno = 66;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_POINT);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_point;
    var_point = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__Controller__GetCursorPos);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_point);
tmp_args_element_value_2 = var_point;
frame_frame_pynput$mouse$_win32$$$function__2__position_get->m_frame.f_lineno = 67;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 67;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__2__position_get->m_frame.f_lineno = 67;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 67;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_point);
tmp_expression_value_2 = var_point;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_x);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_point);
tmp_expression_value_3 = var_point;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_y);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
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
goto branch_end_1;
branch_no_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__2__position_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__2__position_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__2__position_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__2__position_get,
    type_description_1,
    par_self,
    var_point
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__2__position_get == cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get);
    cache_frame_frame_pynput$mouse$_win32$$$function__2__position_get = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__2__position_get);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_point);
CHECK_OBJECT(var_point);
Py_DECREF(var_point);
var_point = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_point);
var_point = NULL;
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


static PyObject *impl_pynput$mouse$_win32$$$function__3__position_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pos = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__3__position_set;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set = MAKE_FUNCTION_FRAME(tstate, code_objects_12d56049df5cf767eb06b960e03bb6ed, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__3__position_set = cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__3__position_set);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__3__position_set) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_pos);
tmp_expression_value_1 = par_pos;
tmp_subscript_value_1 = const_int_0;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_pos);
tmp_expression_value_2 = par_pos;
tmp_subscript_value_2 = const_int_pos_1;
tmp_int_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = par_pos;
    assert(old != NULL);
    par_pos = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__Controller__SetCursorPos);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pos);
tmp_direct_call_arg2_1 = par_pos;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__emit);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_tuple_str_plain_on_move_tuple;
tmp_direct_call_arg1_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_pos);
tmp_tuple_element_2 = par_pos;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_3, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_tuple_true_tuple;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_3, 2, tmp_tuple_element_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_direct_call_arg2_2 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_direct_call_arg2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_2);

exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_call_result_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__3__position_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__3__position_set->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__3__position_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__3__position_set,
    type_description_1,
    par_self,
    par_pos
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__3__position_set == cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set);
    cache_frame_frame_pynput$mouse$_win32$$$function__3__position_set = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__3__position_set);

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
CHECK_OBJECT(par_pos);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
par_pos = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_pos);
par_pos = NULL;
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


static PyObject *impl_pynput$mouse$_win32$$$function__4__scroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_dx = python_pars[1];
PyObject *par_dy = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__4__scroll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll = MAKE_FUNCTION_FRAME(tstate, code_objects_133ae8e9c03266baedaf04b7a7d3ace3, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__4__scroll = cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__4__scroll);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__4__scroll) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_dy);
tmp_truth_name_1 = CHECK_IF_TRUE(par_dy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_pynput$mouse$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_pos_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byref);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MOUSE);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_pynput$mouse$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_WHEEL);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dy);
tmp_mult_expr_left_1 = par_dy;
tmp_mult_expr_right_1 = module_var_accessor_pynput$mouse$_win32$WHEEL_DELTA(tstate);
if (unlikely(tmp_mult_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WHEEL_DELTA);
}

if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 85;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

    tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 84;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_mi_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 82;
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

exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 81;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_6);

exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 92;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_dx);
tmp_truth_name_2 = CHECK_IF_TRUE(par_dx);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_int_arg_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_10;
tmp_called_value_7 = module_var_accessor_pynput$mouse$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = const_int_pos_1;
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_byref);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 99;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MOUSE);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = module_var_accessor_pynput$mouse$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_HWHEEL);
if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dx);
tmp_mult_expr_left_2 = par_dx;
tmp_mult_expr_right_2 = module_var_accessor_pynput$mouse$_win32$WHEEL_DELTA(tstate);
if (unlikely(tmp_mult_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WHEEL_DELTA);
}

if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_4 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_kw_call_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 102;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_4};

    tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_0_6);
CHECK_OBJECT(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_1_4);
if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 101;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

    tmp_kw_call_value_1_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_str_plain_mi_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_0_5);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 99;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3};

    tmp_args_element_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_str_plain_type_str_plain_value_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 99;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 98;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_called_value_12);

exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 109;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__4__scroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__4__scroll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__4__scroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__4__scroll,
    type_description_1,
    par_self,
    par_dx,
    par_dy
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__4__scroll == cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll);
    cache_frame_frame_pynput$mouse$_win32$$$function__4__scroll = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__4__scroll);

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
CHECK_OBJECT(par_dx);
Py_DECREF(par_dx);
CHECK_OBJECT(par_dy);
Py_DECREF(par_dy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_dx);
Py_DECREF(par_dx);
CHECK_OBJECT(par_dy);
Py_DECREF(par_dy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$_win32$$$function__5__press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_button = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__5__press;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__5__press = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__5__press)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__5__press);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__5__press == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__5__press = MAKE_FUNCTION_FRAME(tstate, code_objects_a702014e4864639d95d7773c8d9e24c4, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__5__press->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__5__press = cache_frame_frame_pynput$mouse$_win32$$$function__5__press;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__5__press);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__5__press) == 2);

// Framed code:
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
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_pynput$mouse$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_pos_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byref);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MOUSE);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_pynput$mouse$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_button);
tmp_expression_value_4 = par_button;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_kw_call_value_0_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_button);
tmp_expression_value_6 = par_button;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_int_pos_2;
tmp_kw_call_value_1_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 119;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

    tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 118;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_mi_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 116;
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

exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 115;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_6);

exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 125;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__5__press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__5__press->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__5__press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__5__press,
    type_description_1,
    par_self,
    par_button
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__5__press == cache_frame_frame_pynput$mouse$_win32$$$function__5__press) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__5__press);
    cache_frame_frame_pynput$mouse$_win32$$$function__5__press = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__5__press);

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
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$_win32$$$function__6__release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_button = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__6__release;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__6__release = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__6__release)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__6__release);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__6__release == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__6__release = MAKE_FUNCTION_FRAME(tstate, code_objects_7d6b16588538333a448e21763556270a, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__6__release->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__6__release = cache_frame_frame_pynput$mouse$_win32$$$function__6__release;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__6__release);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__6__release) == 2);

// Framed code:
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
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_pynput$mouse$_win32$SendInput(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SendInput);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_pos_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byref);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 132;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MOUSE);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_pynput$mouse$_win32$INPUT_union(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 135;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_button);
tmp_expression_value_4 = par_button;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 136;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_kw_call_value_0_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 136;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_button);
tmp_expression_value_6 = par_button;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 136;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_int_pos_2;
tmp_kw_call_value_1_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 136;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 135;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

    tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_dwFlags_str_plain_mouseData_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 135;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 134;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_mi_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 132;
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

exception_lineno = 132;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 131;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_pynput$mouse$_win32$INPUT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_6);

exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 141;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame.f_lineno = 129;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__6__release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__6__release->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__6__release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__6__release,
    type_description_1,
    par_self,
    par_button
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__6__release == cache_frame_frame_pynput$mouse$_win32$$$function__6__release) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__6__release);
    cache_frame_frame_pynput$mouse$_win32$$$function__6__release = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__6__release);

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
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$_win32$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d86edadaed766fe91ec219e691af7b74, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__7___init__->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__7___init__ = cache_frame_frame_pynput$mouse$_win32$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__7___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$mouse$_win32$Listener(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$mouse$_win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
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


exception_lineno = 214;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__options);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_event_filter;

tmp_args_element_value_2 = MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__$$$function__1_lambda(tstate);

frame_frame_pynput$mouse$_win32$$$function__7___init__->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__event_filter, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__7___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__7___init__ == cache_frame_frame_pynput$mouse$_win32$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__7___init__);
    cache_frame_frame_pynput$mouse$_win32$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__7___init__);

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


static PyObject *impl_pynput$mouse$_win32$$$function__8__handle_message(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *var_injected = NULL;
PyObject *var_button = NULL;
PyObject *var_pressed = NULL;
PyObject *var_mx = NULL;
PyObject *var_my = NULL;
PyObject *var_dd = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$function__8__handle_message;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message = MAKE_FUNCTION_FRAME(tstate, code_objects_a8e24080246546ed4914ed34615999ab, module_pynput$mouse$_win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_type_description == NULL);
frame_frame_pynput$mouse$_win32$$$function__8__handle_message = cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$function__8__handle_message);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$function__8__handle_message) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_code);
tmp_cmp_expr_left_1 = par_code;
tmp_expression_value_1 = module_var_accessor_pynput$mouse$_win32$SystemHook(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HC_ACTION);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooo";
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


exception_lineno = 223;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpdata);
tmp_args_element_value_1 = par_lpdata;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__LPMSLLHOOKSTRUCT);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 223;
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


exception_lineno = 223;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_contents);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_data);
tmp_expression_value_5 = var_data;
tmp_bitand_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_flags);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__MSLLHOOKSTRUCT);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 228;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_LLMHF_INJECTED);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 228;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 228;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__MSLLHOOKSTRUCT);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 229;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 229;
type_description_1 = "ooooooooooo";
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

exception_lineno = 229;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_assign_source_2 = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_injected;
    var_injected = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_msg);
tmp_args_element_value_3 = par_msg;
CHECK_OBJECT(var_data);
tmp_args_element_value_4 = var_data;
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 235;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__event_filter,
        call_args
    );
}

if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_False;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_msg);
tmp_cmp_expr_left_4 = par_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_WM_MOUSEMOVE);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_on_move);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_13 = var_data;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pt);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_x);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_15 = var_data;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_pt);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_injected);
tmp_args_element_value_7 = var_injected;
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_msg);
tmp_cmp_expr_left_5 = par_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_CLICK_BUTTONS);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_CLICK_BUTTONS);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_msg);
tmp_subscript_value_1 = par_msg;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooo";
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



exception_lineno = 242;
type_description_1 = "ooooooooooo";
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



exception_lineno = 242;
type_description_1 = "ooooooooooo";
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



exception_lineno = 242;
type_description_1 = "ooooooooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_button;
    var_button = tmp_assign_source_6;
    Py_INCREF(var_button);
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
    PyObject *old = var_pressed;
    var_pressed = tmp_assign_source_7;
    Py_INCREF(var_pressed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_on_click);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_21 = var_data;
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_pt);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_x);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_23 = var_data;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_pt);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_button);
tmp_args_element_value_10 = var_button;
CHECK_OBJECT(var_pressed);
tmp_args_element_value_11 = var_pressed;
CHECK_OBJECT(var_injected);
tmp_args_element_value_12 = var_injected;
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(par_msg);
tmp_cmp_expr_left_6 = par_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_X_BUTTONS);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_X_BUTTONS);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_msg);
tmp_subscript_value_2 = par_msg;
tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data);
tmp_expression_value_28 = var_data;
tmp_rshift_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_mouseData);
if (tmp_rshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_25);

exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_16;
tmp_subscript_value_3 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
CHECK_OBJECT(tmp_rshift_expr_left_1);
Py_DECREF(tmp_rshift_expr_left_1);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_25);

exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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



exception_lineno = 246;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_button;
    var_button = tmp_assign_source_11;
    Py_INCREF(var_button);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_pressed;
    var_pressed = tmp_assign_source_12;
    Py_INCREF(var_pressed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_on_click);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_31 = var_data;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_pt);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_x);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_33 = var_data;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_pt);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_button);
tmp_args_element_value_15 = var_button;
CHECK_OBJECT(var_pressed);
tmp_args_element_value_16 = var_pressed;
CHECK_OBJECT(var_injected);
tmp_args_element_value_17 = var_injected;
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 247;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(par_msg);
tmp_cmp_expr_left_7 = par_msg;
CHECK_OBJECT(par_self);
tmp_expression_value_34 = par_self;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_SCROLL_BUTTONS);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_36 = par_self;
tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_SCROLL_BUTTONS);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_msg);
tmp_subscript_value_4 = par_msg;
tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_16 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_mx;
    var_mx = tmp_assign_source_16;
    Py_INCREF(var_mx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_17 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_my;
    var_my = tmp_assign_source_17;
    Py_INCREF(var_my);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_18;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_expression_value_37;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_element_value_18;
PyObject *tmp_rshift_expr_left_2;
PyObject *tmp_rshift_expr_right_2;
PyObject *tmp_expression_value_39;
tmp_expression_value_38 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_38 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_SHORT);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_39 = var_data;
tmp_rshift_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_mouseData);
if (tmp_rshift_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_rshift_expr_right_2 = mod_consts.const_int_pos_16;
tmp_args_element_value_18 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
CHECK_OBJECT(tmp_rshift_expr_left_2);
Py_DECREF(tmp_rshift_expr_left_2);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 251;
tmp_expression_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = module_var_accessor_pynput$mouse$_win32$WHEEL_DELTA(tstate);
if (unlikely(tmp_floordiv_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WHEEL_DELTA);
}

if (tmp_floordiv_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_floordiv_expr_left_1);

exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dd;
    var_dd = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_40;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_args_element_value_21;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_args_element_value_22;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_args_element_value_23;
CHECK_OBJECT(par_self);
tmp_expression_value_40 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_on_scroll);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_42 = var_data;
tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_pt);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_x);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_44 = var_data;
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_pt);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dd);
tmp_mult_expr_left_1 = var_dd;
CHECK_OBJECT(var_mx);
tmp_mult_expr_right_1 = var_mx;
tmp_args_element_value_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dd);
tmp_mult_expr_left_2 = var_dd;
CHECK_OBJECT(var_my);
tmp_mult_expr_right_2 = var_my;
tmp_args_element_value_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_21);

exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_injected);
tmp_args_element_value_23 = var_injected;
frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
branch_end_5:;
branch_end_4:;
branch_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$function__8__handle_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$function__8__handle_message->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$function__8__handle_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$function__8__handle_message,
    type_description_1,
    par_self,
    par_code,
    par_msg,
    par_lpdata,
    var_data,
    var_injected,
    var_button,
    var_pressed,
    var_mx,
    var_my,
    var_dd
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$_win32$$$function__8__handle_message == cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message);
    cache_frame_frame_pynput$mouse$_win32$$$function__8__handle_message = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$_win32$$$function__8__handle_message);

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
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_injected);
var_injected = NULL;
Py_XDECREF(var_button);
var_button = NULL;
Py_XDECREF(var_pressed);
var_pressed = NULL;
Py_XDECREF(var_mx);
var_mx = NULL;
Py_XDECREF(var_my);
var_my = NULL;
Py_XDECREF(var_dd);
var_dd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_injected);
var_injected = NULL;
Py_XDECREF(var_button);
var_button = NULL;
Py_XDECREF(var_pressed);
var_pressed = NULL;
Py_XDECREF(var_mx);
var_mx = NULL;
Py_XDECREF(var_my);
var_my = NULL;
Py_XDECREF(var_dd);
var_dd = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880,
#endif
        code_objects_519a70ffa12f7b6d9fe95200ffdda78b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__2__position_get(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__2__position_get,
        mod_consts.const_str_plain__position_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0afd166f096d3dc8e3f3c7dc83d2dca7,
#endif
        code_objects_dd587293364cad79e086a4c38b752e15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__3__position_set(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__3__position_set,
        mod_consts.const_str_plain__position_set,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_36ce173f86aa0d0d6486998c9fbca3bf,
#endif
        code_objects_12d56049df5cf767eb06b960e03bb6ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__4__scroll(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__4__scroll,
        mod_consts.const_str_plain__scroll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c6c2262cb87c481dd2d37aec9311cd1,
#endif
        code_objects_133ae8e9c03266baedaf04b7a7d3ace3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__5__press(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__5__press,
        mod_consts.const_str_plain__press,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_747c3b68156f5ddab31557ffdf69b56b,
#endif
        code_objects_a702014e4864639d95d7773c8d9e24c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__6__release(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__6__release,
        mod_consts.const_str_plain__release,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_716921b1563bbc29878fff2a2b8f04c0,
#endif
        code_objects_7d6b16588538333a448e21763556270a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc,
#endif
        code_objects_d86edadaed766fe91ec219e691af7b74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5824b99789cf25d8ba066515d167ddc8,
#endif
        code_objects_366e14ae7c3ded2429d819ab9092dde7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
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



static PyObject *MAKE_FUNCTION_pynput$mouse$_win32$$$function__8__handle_message(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$_win32$$$function__8__handle_message,
        mod_consts.const_str_plain__handle_message,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d5a539f1d621426a19a7d423c01b9846,
#endif
        code_objects_a8e24080246546ed4914ed34615999ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse$_win32,
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

static function_impl_code const function_table_pynput$mouse$_win32[] = {
impl_pynput$mouse$_win32$$$function__1___init__,
impl_pynput$mouse$_win32$$$function__2__position_get,
impl_pynput$mouse$_win32$$$function__3__position_set,
impl_pynput$mouse$_win32$$$function__4__scroll,
impl_pynput$mouse$_win32$$$function__5__press,
impl_pynput$mouse$_win32$$$function__6__release,
impl_pynput$mouse$_win32$$$function__7___init__,
impl_pynput$mouse$_win32$$$function__8__handle_message,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$mouse$_win32);
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
        module_pynput$mouse$_win32,
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
        function_table_pynput$mouse$_win32,
        sizeof(function_table_pynput$mouse$_win32) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput.mouse._win32";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$mouse$_win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$mouse$_win32");

    // Store the module for future use.
    module_pynput$mouse$_win32 = module;

    moduledict_pynput$mouse$_win32 = MODULE_DICT(module_pynput$mouse$_win32);

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
        PRINT_STRING("pynput$mouse$_win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$mouse$_win32: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$mouse$_win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.mouse._win32" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$mouse$_win32\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pynput$mouse$_win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$mouse$_win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$mouse$_win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$mouse$_win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$mouse$_win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$mouse$_win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$mouse$_win32);
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

        UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyCellObject *outline_1_var___class__ = NULL;
PyCellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Listener$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pynput$mouse$_win32$$$class__1_Button_47 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$class__1_Button_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_pynput$mouse$_win32$$$class__2_Controller_58 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$class__2_Controller_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_pynput$mouse$_win32$$$class__3_Listener_146 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$class__3_Listener_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
PyObject *locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_470d6fa42a1c4b00bf62c1b1820fc9d0;
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$mouse$_win32 = MAKE_MODULE_FRAME(code_objects_aa453d131c89415a7d31bf04edbfb9bc, module_pynput$mouse$_win32);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$mouse$_win32$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$mouse$_win32$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$mouse$_win32;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 28;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_windll,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_windll);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_windll, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_9);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pynput$mouse$_win32;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_NotifierMixin_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 32;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_NotifierMixin,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_NotifierMixin);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_NotifierMixin, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_6d293c2b437d813d882f7f463a7a62c8;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pynput$mouse$_win32;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_20fb846cfb7145504aaa7e409e658047_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 33;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_INPUT,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_INPUT);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_INPUT_union,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_INPUT_union);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_union, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_ListenerMixin,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ListenerMixin);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ListenerMixin, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_MOUSEINPUT,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_SendInput,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_SendInput);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SendInput, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain_SystemHook,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_SystemHook);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemHook, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pynput$mouse$_win32;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__base_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 41;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pynput$mouse$_win32,
        mod_consts.const_str_plain__base,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__base);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain__base, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_120;
UPDATE_STRING_DICT0(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WHEEL_DELTA, tmp_assign_source_19);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pynput$mouse$_win32$enum(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Enum);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
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


exception_lineno = 47;

    goto try_except_handler_3;
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


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_23;
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


exception_lineno = 47;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_24;
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


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Button;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 47;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
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


exception_lineno = 47;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
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


exception_lineno = 47;

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


exception_lineno = 47;

    goto try_except_handler_3;
}
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 47;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 47;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
branch_end_1:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$mouse$_win32$$$class__1_Button_47 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_c60f852650f343e31847236d796c3161;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_Button;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
frame_frame_pynput$mouse$_win32$$$class__1_Button_2 = MAKE_CLASS_FRAME(tstate, code_objects_6d14a307edc6d633d902a69f76f542ff, module_pynput$mouse$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$_win32$$$class__1_Button_2, locals_pynput$mouse$_win32$$$class__1_Button_47);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$class__1_Button_2);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$class__1_Button_2) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_unknown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_LEFTUP);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
tmp_expression_value_9 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_LEFTDOWN);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = const_int_0;
PyTuple_SET_ITEM0(tmp_dictset_value, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_left, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MIDDLEUP);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_5);
tmp_expression_value_11 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_11 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MIDDLEDOWN);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = const_int_0;
PyTuple_SET_ITEM0(tmp_dictset_value, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_middle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_12 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_RIGHTUP);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_6);
tmp_expression_value_13 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_4;
    }
}

tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_RIGHTDOWN);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = const_int_0;
PyTuple_SET_ITEM0(tmp_dictset_value, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_right, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_XUP);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_7);
tmp_expression_value_15 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_XDOWN);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_7);
tmp_expression_value_16 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_XBUTTON1);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_x1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_XUP);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_8);
tmp_expression_value_18 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_XDOWN);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_8);
tmp_expression_value_19 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_pynput$mouse$_win32$MOUSEINPUT(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_XBUTTON2);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_8);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain_x2, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__1_Button_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$class__1_Button_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$class__1_Button_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$class__1_Button_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$class__1_Button_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$_win32$$$class__1_Button_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__1_Button_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
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


exception_lineno = 47;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__1_Button_47, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_Button;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pynput$mouse$_win32$$$class__1_Button_47;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_26 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_pynput$mouse$_win32$$$class__1_Button_47);
locals_pynput$mouse$_win32$$$class__1_Button_47 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$_win32$$$class__1_Button_47);
locals_pynput$mouse$_win32$$$class__1_Button_47 = NULL;
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
exception_lineno = 47;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Button, tmp_assign_source_26);
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
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_pynput$mouse$_win32$NotifierMixin(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotifierMixin);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_9);
tmp_expression_value_20 = module_var_accessor_pynput$mouse$_win32$_base(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__base);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto tuple_build_exception_7;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Controller);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_assign_source_28);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_Controller;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 58;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
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


exception_lineno = 58;

    goto try_except_handler_6;
}
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 58;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
branch_end_4:;
{
PyObject *tmp_assign_source_34;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pynput$mouse$_win32$$$class__2_Controller_58 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_Controller;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_58;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
frame_frame_pynput$mouse$_win32$$$class__2_Controller_3 = MAKE_CLASS_FRAME(tstate, code_objects_2584d862e19b368fc9cc907476f8e0ce, module_pynput$mouse$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3, locals_pynput$mouse$_win32$$$class__2_Controller_58);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$class__2_Controller_3);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3) == 2);

// Framed code:
{
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
tmp_expression_value_28 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain_windll);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_pynput$mouse$_win32$windll(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__Controller__GetCursorPos, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
tmp_expression_value_30 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain_windll);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_pynput$mouse$_win32$windll(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_SetCursorPos);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__Controller__SetCursorPos, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__2__position_get(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__position_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__3__position_set(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__position_set, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__4__scroll(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__scroll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__5__press(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__press, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__6__release(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain__release, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "c";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$class__2_Controller_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$class__2_Controller_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$class__2_Controller_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__2_Controller_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
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


exception_lineno = 58;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__2_Controller_58, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_Controller;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pynput$mouse$_win32$$$class__2_Controller_58;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_2, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_35);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_34 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_pynput$mouse$_win32$$$class__2_Controller_58);
locals_pynput$mouse$_win32$$$class__2_Controller_58 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$_win32$$$class__2_Controller_58);
locals_pynput$mouse$_win32$$$class__2_Controller_58 = NULL;
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
assert(PyCell_Check((PyObject *)outline_1_var___class__));
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
exception_lineno = 58;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller, tmp_assign_source_34);
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
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_pynput$mouse$_win32$ListenerMixin(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ListenerMixin);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_12);
tmp_expression_value_31 = module_var_accessor_pynput$mouse$_win32$_base(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__base);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto tuple_build_exception_9;
}
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_Listener);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_assign_source_36, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_assign_source_36);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_32 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_Listener;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 146;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 146;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
branch_end_7:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pynput$mouse$_win32$Controller(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Controller);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto try_except_handler_9;
}
outline_2_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pynput$mouse$_win32$$$class__3_Listener_146 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_Listener;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
frame_frame_pynput$mouse$_win32$$$class__3_Listener_4 = MAKE_CLASS_FRAME(tstate, code_objects_269689eef890aae4c532d825fa8437c5, module_pynput$mouse$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4, locals_pynput$mouse$_win32$$$class__3_Listener_146);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$class__3_Listener_4);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__EVENTS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_513;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_LBUTTONDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_514;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_LBUTTONUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_519;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MBUTTONDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_520;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MBUTTONUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_512;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MOUSEMOVE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_522;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MOUSEWHEEL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_526;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MOUSEHWHEEL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_516;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_RBUTTONDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_517;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_RBUTTONUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_523;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_XBUTTONDOWN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_524;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_XBUTTONUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_MK_XBUTTON1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_MK_XBUTTON2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_38;
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_LBUTTONDOWN);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_LBUTTONDOWN);

exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_expression_value_38 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_38 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_left);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = Py_True;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_15);
tmp_dictset_value = _PyDict_NewPresized( 6 );
{
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_39;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_40;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_41;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_42;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_43;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_LBUTTONUP);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_LBUTTONUP);

exception_lineno = 171;
type_description_2 = "c";
    goto dict_build_exception_1;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_expression_value_39 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_39 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 171;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_left);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 171;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = Py_False;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_16);
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MBUTTONDOWN);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_MBUTTONDOWN);

exception_lineno = 172;
type_description_2 = "c";
    goto dict_build_exception_1;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_expression_value_40 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_40 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 172;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_middle);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 172;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = Py_True;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_17);
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MBUTTONUP);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_MBUTTONUP);

exception_lineno = 173;
type_description_2 = "c";
    goto dict_build_exception_1;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_expression_value_41 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_41 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 173;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_middle);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 173;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = Py_False;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_18);
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_RBUTTONDOWN);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_RBUTTONDOWN);

exception_lineno = 174;
type_description_2 = "c";
    goto dict_build_exception_1;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_expression_value_42 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 174;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_right);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 174;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_True;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_19);
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_RBUTTONUP);

if (unlikely(tmp_dict_key_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_RBUTTONUP);

exception_lineno = 175;
type_description_2 = "c";
    goto dict_build_exception_1;
}

if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_expression_value_43 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 175;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_right);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 175;
type_description_2 = "c";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = Py_False;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_20);
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "c";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_CLICK_BUTTONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_44;
tmp_dict_key_2 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_XBUTTONDOWN);

if (unlikely(tmp_dict_key_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_XBUTTONDOWN);

exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dict_key_3 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON1);

if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_dict_key_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_XBUTTON1);

exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_expression_value_44 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_44 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_x1);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = Py_True;
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_21);
tmp_dict_value_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_45;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_dict_key_3 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON2);

if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_XBUTTON2);

exception_lineno = 182;
type_description_2 = "c";
    goto dict_build_exception_2;
}

if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_expression_value_45 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_45 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_3);

exception_lineno = 182;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_x2);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_3);

exception_lineno = 182;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = Py_True;
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_22);
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "c";
    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_dictset_value = _PyDict_NewPresized( 2 );
{
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_46;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "c";
    goto dict_build_exception_3;
}
tmp_dict_key_2 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_XBUTTONUP);

if (unlikely(tmp_dict_key_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_XBUTTONUP);

exception_lineno = 184;
type_description_2 = "c";
    goto dict_build_exception_3;
}

if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "c";
    goto dict_build_exception_3;
}
tmp_dict_key_4 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON1);

if (unlikely(tmp_dict_key_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_dict_key_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_XBUTTON1);

exception_lineno = 185;
type_description_2 = "c";
    goto dict_build_exception_3;
}

if (tmp_dict_key_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 185;
type_description_2 = "c";
    goto dict_build_exception_3;
}
tmp_expression_value_46 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_46 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_key_4);

exception_lineno = 185;
type_description_2 = "c";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_x1);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_key_4);

exception_lineno = 185;
type_description_2 = "c";
    goto dict_build_exception_3;
}
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_4, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = Py_False;
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_23);
tmp_dict_value_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_47;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
Py_DECREF(tmp_dict_key_4);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "c";
    goto dict_build_exception_4;
}
tmp_dict_key_4 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_XBUTTON2);

if (unlikely(tmp_dict_key_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_XBUTTON2);

exception_lineno = 186;
type_description_2 = "c";
    goto dict_build_exception_4;
}

if (tmp_dict_key_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "c";
    goto dict_build_exception_4;
}
tmp_expression_value_47 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_Button);

if (tmp_expression_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_47 = module_var_accessor_pynput$mouse$_win32$Button(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Button);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_4);

exception_lineno = 186;
type_description_2 = "c";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_expression_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_x2);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_4);

exception_lineno = 186;
type_description_2 = "c";
    goto dict_build_exception_4;
}
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_4, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = Py_False;
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_24);
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
Py_DECREF(tmp_dict_key_4);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "c";
    goto dict_build_exception_4;
}
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_3;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "c";
    goto dict_build_exception_3;
}
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_X_BUTTONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MOUSEWHEEL);

if (unlikely(tmp_dict_key_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_MOUSEWHEEL);

exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_dict_key_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dict_value_5 = mod_consts.const_tuple_int_0_int_pos_1_tuple;
tmp_dictset_value = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_key_5);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto dict_build_exception_5;
}
tmp_dict_key_5 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_WM_MOUSEHWHEEL);

if (unlikely(tmp_dict_key_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_MOUSEHWHEEL);

exception_lineno = 191;
type_description_2 = "c";
    goto dict_build_exception_5;
}

if (tmp_dict_key_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto dict_build_exception_5;
}
tmp_dict_value_5 = mod_consts.const_tuple_int_pos_1_int_0_tuple;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_key_5);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto dict_build_exception_5;
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_SCROLL_BUTTONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_48;
tmp_expression_value_48 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain_SystemHook);

if (tmp_expression_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_48 = module_var_accessor_pynput$mouse$_win32$SystemHook(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SystemHook);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_SuppressException);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_25);
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__HANDLED_EXCEPTIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_49;
tmp_expression_value_49 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_26);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__bases_orig;
    tmp_Listener$class_container$class_creation_1__bases_orig = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_4 = tmp_Listener$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__bases;
    tmp_Listener$class_container$class_creation_1__bases = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__class_decl_dict;
    tmp_Listener$class_container$class_creation_1__class_decl_dict = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_Listener$class_container$class_creation_1__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_expression_value_50 = tmp_Listener$class_container$class_creation_1__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_4:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_bases_value_6 = tmp_Listener$class_container$class_creation_1__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__metaclass;
    tmp_Listener$class_container$class_creation_1__metaclass = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_13;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_51 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_52 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_tuple_element_27 = mod_consts.const_str_plain__MSLLHOOKSTRUCT;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_tuple_element_27 = tmp_Listener$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_4 = tmp_Listener$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$mouse$_win32$$$class__3_Listener_4->m_frame.f_lineno = 195;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__prepared;
    tmp_Listener$class_container$class_creation_1__prepared = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_expression_value_53 = tmp_Listener$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_expression_value_54 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_10, tmp_default_value_4);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_type_arg_8 = tmp_Listener$class_container$class_creation_1__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
frame_frame_pynput$mouse$_win32$$$class__3_Listener_4->m_frame.f_lineno = 195;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 195;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_12;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Listener$class_container$class_creation_1__prepared;
    tmp_Listener$class_container$class_creation_1__prepared = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
branch_end_9:;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__prepared);
tmp_set_locals_4 = tmp_Listener$class_container$class_creation_1__prepared;
locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86488dc2d7fe0f11759d16e8f6ab8784;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_a065180917eb2768fe62fecdfaecf8fb;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_9f663ea8ed7e77e0d759777b6e5191ea;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_195;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5 = MAKE_CLASS_FRAME(tstate, code_objects_2e76fbf920413f03ef0a90c013ecceeb, module_pynput$mouse$_win32, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5, locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5);
assert(Py_REFCNT(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain_LLMHF_INJECTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain_LLMHF_LOWER_IL_INJECTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_29;
tmp_tuple_element_29 = mod_consts.const_str_plain_pt;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_29);
tmp_expression_value_56 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_POINT);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_3 = "o";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_30;
PyObject *tmp_tuple_element_31;
PyObject *tmp_tuple_element_32;
PyObject *tmp_tuple_element_33;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_30 = mod_consts.const_str_plain_mouseData;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_57;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_30);
tmp_expression_value_57 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_3 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
tmp_tuple_element_31 = mod_consts.const_str_plain_flags;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_58;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_31);
tmp_expression_value_58 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_58 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_3 = "o";
    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
tmp_tuple_element_32 = mod_consts.const_str_plain_time;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_59;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_32);
tmp_expression_value_59 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_59 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_3 = "o";
    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
tmp_tuple_element_33 = mod_consts.const_str_plain_dwExtraInfo;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_33);
tmp_expression_value_60 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_c_void_p);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_3 = "o";
    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_33);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_5;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5);


goto frame_no_exception_3;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5,
    type_description_3,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_4:;
type_description_2 = "c";
goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_Listener$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_Listener$class_container$class_creation_1__bases_orig;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Listener$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
branch_no_11:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__metaclass);
tmp_metaclass_value_7 = tmp_Listener$class_container$class_creation_1__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain__MSLLHOOKSTRUCT;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__bases);
tmp_bases_value_7 = tmp_Listener$class_container$class_creation_1__bases;
tmp_dict_arg_value_3 = locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195;
CHECK_OBJECT(tmp_Listener$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_Listener$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_7, tmp_dict_arg_value_3);
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_14;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_dictset_value = outline_3_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195);
locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195);
locals_pynput$mouse$_win32$$$class__4__MSLLHOOKSTRUCT_195 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 195;
goto try_except_handler_12;
outline_result_8:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__MSLLHOOKSTRUCT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto try_except_handler_12;
}
goto try_end_5;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_4;
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_61;
PyObject *tmp_args_element_value_2;
tmp_expression_value_61 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_61 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_args_element_value_2 = PyObject_GetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__MSLLHOOKSTRUCT);

if (unlikely(tmp_args_element_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MSLLHOOKSTRUCT);

exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
frame_frame_pynput$mouse$_win32$$$class__3_Listener_4->m_frame.f_lineno = 211;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__LPMSLLHOOKSTRUCT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__7___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$_win32$$$function__8__handle_message(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain__handle_message, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "c";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4);


goto frame_no_exception_4;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32$$$class__3_Listener_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32$$$class__3_Listener_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$_win32$$$class__3_Listener_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$_win32$$$class__3_Listener_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__event_filter_tuple;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$_win32$$$class__3_Listener_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
branch_no_12:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_Listener;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_4 = locals_pynput$mouse$_win32$$$class__3_Listener_146;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_4, const_str_plain___classcell__, (PyObject *)outline_2_var___class__);
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_2_var___class__);
    PyCell_SET((PyObject *)outline_2_var___class__, tmp_assign_source_50);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_2_var___class__));
tmp_args_element_value_1 = PyCell_GET((PyObject *)outline_2_var___class__);
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_pynput$mouse$_win32$$$class__3_Listener_146);
locals_pynput$mouse$_win32$$$class__3_Listener_146 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$_win32$$$class__3_Listener_146);
locals_pynput$mouse$_win32$$$class__3_Listener_146 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
assert(PyCell_Check((PyObject *)outline_2_var___class__));
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 146;
goto try_except_handler_9;
outline_result_6:;
frame_frame_pynput$mouse$_win32->m_frame.f_lineno = 145;
tmp_assign_source_42 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__receiver, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_42);
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$_win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$_win32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$_win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$mouse$_win32);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$mouse$_win32", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.mouse._win32" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$mouse$_win32);
    return module_pynput$mouse$_win32;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse$_win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$mouse$_win32", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
